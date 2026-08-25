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
       * @summary Adds shared accounts.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param request AddSharedAccountsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSharedAccountsResponse
       */
      Models::AddSharedAccountsResponse addSharedAccountsWithOptions(const Models::AddSharedAccountsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds shared accounts.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param request AddSharedAccountsRequest
       * @return AddSharedAccountsResponse
       */
      Models::AddSharedAccountsResponse addSharedAccounts(const Models::AddSharedAccountsRequest &request);

      /**
       * @summary Associates a drift detection configuration.
       *
       * @param request AssociateDetectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateDetectConfigResponse
       */
      Models::AssociateDetectConfigResponse associateDetectConfigWithOptions(const Models::AssociateDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a drift detection configuration.
       *
       * @param request AssociateDetectConfigRequest
       * @return AssociateDetectConfigResponse
       */
      Models::AssociateDetectConfigResponse associateDetectConfig(const Models::AssociateDetectConfigRequest &request);

      /**
       * @summary Associates resources with a group.
       *
       * @param request AssociateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateGroupResponse
       */
      Models::AssociateGroupResponse associateGroupWithOptions(const string &groupId, const Models::AssociateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates resources with a group.
       *
       * @param request AssociateGroupRequest
       * @return AssociateGroupResponse
       */
      Models::AssociateGroupResponse associateGroup(const string &groupId, const Models::AssociateGroupRequest &request);

      /**
       * @summary Associates parameter sets.
       *
       * @description After creating a parameter set, you need to associate it with a resource. Valid values for the resource type:
       * - Module: template
       * - ModuleVersion: template version
       * - Task: node.
       *
       * @param request AssociateParameterSetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateParameterSetResponse
       */
      Models::AssociateParameterSetResponse associateParameterSetWithOptions(const Models::AssociateParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates parameter sets.
       *
       * @description After creating a parameter set, you need to associate it with a resource. Valid values for the resource type:
       * - Module: template
       * - ModuleVersion: template version
       * - Task: node.
       *
       * @param request AssociateParameterSetRequest
       * @return AssociateParameterSetResponse
       */
      Models::AssociateParameterSetResponse associateParameterSet(const Models::AssociateParameterSetRequest &request);

      /**
       * @summary Cancels a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CancelResourceExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelResourceExportTaskResponse
       */
      Models::CancelResourceExportTaskResponse cancelResourceExportTaskWithOptions(const string &exportTaskId, const Models::CancelResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CancelResourceExportTaskRequest
       * @return CancelResourceExportTaskResponse
       */
      Models::CancelResourceExportTaskResponse cancelResourceExportTask(const string &exportTaskId, const Models::CancelResourceExportTaskRequest &request);

      /**
       * @summary Creates a drift detection configuration that supports manual or scheduled triggering.
       *
       * @description ## Request Description  
       * - When `triggerType` is set to `Cron`, a valid `cronExpression` must be provided.  
       * - Each element in the `alarmConfigs` list must specify the alerting method `type` and the corresponding alerting address `address`.  
       * - If the `enabled` parameter is not explicitly set, its default value is `true`, meaning newly created detection configurations are enabled by default.  
       * - It is recommended to use a UUID as the value of `clientToken` to ensure request idempotence.
       *
       * @param request CreateDetectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDetectConfigResponse
       */
      Models::CreateDetectConfigResponse createDetectConfigWithOptions(const Models::CreateDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a drift detection configuration that supports manual or scheduled triggering.
       *
       * @description ## Request Description  
       * - When `triggerType` is set to `Cron`, a valid `cronExpression` must be provided.  
       * - Each element in the `alarmConfigs` list must specify the alerting method `type` and the corresponding alerting address `address`.  
       * - If the `enabled` parameter is not explicitly set, its default value is `true`, meaning newly created detection configurations are enabled by default.  
       * - It is recommended to use a UUID as the value of `clientToken` to ensure request idempotence.
       *
       * @param request CreateDetectConfigRequest
       * @return CreateDetectConfigResponse
       */
      Models::CreateDetectConfigResponse createDetectConfig(const Models::CreateDetectConfigRequest &request);

      /**
       * @summary Creates a group.
       *
       * @param request CreateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a group.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Creates a job and runs a task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const string &taskId, const Models::CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job and runs a task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const string &taskId, const Models::CreateJobRequest &request);

      /**
       * @summary Creates a Terraform template. Multiple source methods are supported, such as OSS import, Registry import, file upload, and online editing.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModuleResponse
       */
      Models::CreateModuleResponse createModuleWithOptions(const Models::CreateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Terraform template. Multiple source methods are supported, such as OSS import, Registry import, file upload, and online editing.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateModuleRequest
       * @return CreateModuleResponse
       */
      Models::CreateModuleResponse createModule(const Models::CreateModuleRequest &request);

      /**
       * @summary Publishes a new version for a specified template.
       *
       * @description ## Operation description
       * - Use the `clientToken` parameter to ensure idempotence of the request and prevent duplicate submissions caused by network retries.
       * - Use semantic versioning (such as `v1.0.0`).
       *
       * @param request CreateModuleVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModuleVersionResponse
       */
      Models::CreateModuleVersionResponse createModuleVersionWithOptions(const string &moduleId, const Models::CreateModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a new version for a specified template.
       *
       * @description ## Operation description
       * - Use the `clientToken` parameter to ensure idempotence of the request and prevent duplicate submissions caused by network retries.
       * - Use semantic versioning (such as `v1.0.0`).
       *
       * @param request CreateModuleVersionRequest
       * @return CreateModuleVersionResponse
       */
      Models::CreateModuleVersionResponse createModuleVersion(const string &moduleId, const Models::CreateModuleVersionRequest &request);

      /**
       * @summary Adds a new parameter set. You can set the name, description, and parameter list.
       *
       * @description ## Operation description
       * - This operation creates a new parameter set.
       * - The `name` field is required and can be up to 128 characters in length.
       * - Each element in the `parameters` array must contain the `name` field. Other fields are optional.
       * - Use the `clientToken` field to ensure idempotence of the request.
       * - The request header must contain authentication information to ensure secure access.
       *
       * @param request CreateParameterSetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterSetResponse
       */
      Models::CreateParameterSetResponse createParameterSetWithOptions(const Models::CreateParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a new parameter set. You can set the name, description, and parameter list.
       *
       * @description ## Operation description
       * - This operation creates a new parameter set.
       * - The `name` field is required and can be up to 128 characters in length.
       * - Each element in the `parameters` array must contain the `name` field. Other fields are optional.
       * - Use the `clientToken` field to ensure idempotence of the request.
       * - The request header must contain authentication information to ensure secure access.
       *
       * @param request CreateParameterSetRequest
       * @return CreateParameterSetResponse
       */
      Models::CreateParameterSetResponse createParameterSet(const Models::CreateParameterSetRequest &request);

      /**
       * @summary Creates a project.
       *
       * @param request CreateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a project.
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary Creates a Registry template.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param request CreateRegistryModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRegistryModuleResponse
       */
      Models::CreateRegistryModuleResponse createRegistryModuleWithOptions(const Models::CreateRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Registry template.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param request CreateRegistryModuleRequest
       * @return CreateRegistryModuleResponse
       */
      Models::CreateRegistryModuleResponse createRegistryModule(const Models::CreateRegistryModuleRequest &request);

      /**
       * @summary Creates a workspace.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateRegistryNamespaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRegistryNamespaceResponse
       */
      Models::CreateRegistryNamespaceResponse createRegistryNamespaceWithOptions(const Models::CreateRegistryNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateRegistryNamespaceRequest
       * @return CreateRegistryNamespaceResponse
       */
      Models::CreateRegistryNamespaceResponse createRegistryNamespace(const Models::CreateRegistryNamespaceRequest &request);

      /**
       * @summary Creates a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateResourceExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceExportTaskResponse
       */
      Models::CreateResourceExportTaskResponse createResourceExportTaskWithOptions(const Models::CreateResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateResourceExportTaskRequest
       * @return CreateResourceExportTaskResponse
       */
      Models::CreateResourceExportTaskResponse createResourceExportTask(const Models::CreateResourceExportTaskRequest &request);

      /**
       * @summary Creates a resource stack and triggers deployment.
       *
       * @param request CreateStackRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStackResponse
       */
      Models::CreateStackResponse createStackWithOptions(const Models::CreateStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource stack and triggers deployment.
       *
       * @param request CreateStackRequest
       * @return CreateStackResponse
       */
      Models::CreateStackResponse createStack(const Models::CreateStackRequest &request);

      /**
       * @summary Creates a task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTaskWithOptions(const Models::CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request CreateTaskRequest
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTask(const Models::CreateTaskRequest &request);

      /**
       * @summary Creates a node from a resource import result.
       *
       * @param request CreateTaskFromResourceImportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskFromResourceImportResponse
       */
      Models::CreateTaskFromResourceImportResponse createTaskFromResourceImportWithOptions(const Models::CreateTaskFromResourceImportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node from a resource import result.
       *
       * @param request CreateTaskFromResourceImportRequest
       * @return CreateTaskFromResourceImportResponse
       */
      Models::CreateTaskFromResourceImportResponse createTaskFromResourceImport(const Models::CreateTaskFromResourceImportRequest &request);

      /**
       * @summary Deletes a bias detection configuration.
       *
       * @param request DeleteDetectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDetectConfigResponse
       */
      Models::DeleteDetectConfigResponse deleteDetectConfigWithOptions(const string &detectConfigId, const Models::DeleteDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bias detection configuration.
       *
       * @param request DeleteDetectConfigRequest
       * @return DeleteDetectConfigResponse
       */
      Models::DeleteDetectConfigResponse deleteDetectConfig(const string &detectConfigId, const Models::DeleteDetectConfigRequest &request);

      /**
       * @summary Deletes a group.
       *
       * @param request DeleteGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const string &groupId, const Models::DeleteGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a group.
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const string &groupId, const Models::DeleteGroupRequest &request);

      /**
       * @summary Deletes a specified template and all its versions.
       *
       * @description ## Operation description
       * - This operation deletes a specified template.
       * - Deletion is irreversible. Proceed with caution.
       *
       * @param request DeleteModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModuleResponse
       */
      Models::DeleteModuleResponse deleteModuleWithOptions(const string &moduleId, const Models::DeleteModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified template and all its versions.
       *
       * @description ## Operation description
       * - This operation deletes a specified template.
       * - Deletion is irreversible. Proceed with caution.
       *
       * @param request DeleteModuleRequest
       * @return DeleteModuleResponse
       */
      Models::DeleteModuleResponse deleteModule(const string &moduleId, const Models::DeleteModuleRequest &request);

      /**
       * @summary Deletes a specified parameter set by parameter set ID.
       *
       * @description Deletes a specified parameter set.
       *
       * @param request DeleteParameterSetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterSetResponse
       */
      Models::DeleteParameterSetResponse deleteParameterSetWithOptions(const string &parameterSetId, const Models::DeleteParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified parameter set by parameter set ID.
       *
       * @description Deletes a specified parameter set.
       *
       * @param request DeleteParameterSetRequest
       * @return DeleteParameterSetResponse
       */
      Models::DeleteParameterSetResponse deleteParameterSet(const string &parameterSetId, const Models::DeleteParameterSetRequest &request);

      /**
       * @summary Deletes a project.
       *
       * @param request DeleteProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const string &projectId, const Models::DeleteProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a project.
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const string &projectId, const Models::DeleteProjectRequest &request);

      /**
       * @summary Deletes a Registry template.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request DeleteRegistryModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistryModuleResponse
       */
      Models::DeleteRegistryModuleResponse deleteRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const Models::DeleteRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Registry template.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request DeleteRegistryModuleRequest
       * @return DeleteRegistryModuleResponse
       */
      Models::DeleteRegistryModuleResponse deleteRegistryModule(const string &namespaceName, const string &moduleName, const Models::DeleteRegistryModuleRequest &request);

      /**
       * @summary Deletes a Registry template version.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request DeleteRegistryModuleVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistryModuleVersionResponse
       */
      Models::DeleteRegistryModuleVersionResponse deleteRegistryModuleVersionWithOptions(const string &namespaceName, const string &moduleName, const string &version, const Models::DeleteRegistryModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Registry template version.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request DeleteRegistryModuleVersionRequest
       * @return DeleteRegistryModuleVersionResponse
       */
      Models::DeleteRegistryModuleVersionResponse deleteRegistryModuleVersion(const string &namespaceName, const string &moduleName, const string &version, const Models::DeleteRegistryModuleVersionRequest &request);

      /**
       * @summary Deletes a workspace.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request DeleteRegistryNamespaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRegistryNamespaceResponse
       */
      Models::DeleteRegistryNamespaceResponse deleteRegistryNamespaceWithOptions(const string &namespaceName, const Models::DeleteRegistryNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workspace.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request DeleteRegistryNamespaceRequest
       * @return DeleteRegistryNamespaceResponse
       */
      Models::DeleteRegistryNamespaceResponse deleteRegistryNamespace(const string &namespaceName, const Models::DeleteRegistryNamespaceRequest &request);

      /**
       * @summary Deletes a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request DeleteResourceExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceExportTaskResponse
       */
      Models::DeleteResourceExportTaskResponse deleteResourceExportTaskWithOptions(const string &exportTaskId, const Models::DeleteResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request DeleteResourceExportTaskRequest
       * @return DeleteResourceExportTaskResponse
       */
      Models::DeleteResourceExportTaskResponse deleteResourceExportTask(const string &exportTaskId, const Models::DeleteResourceExportTaskRequest &request);

      /**
       * @summary Deletes a stack.
       *
       * @param request DeleteStackRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStackResponse
       */
      Models::DeleteStackResponse deleteStackWithOptions(const string &stackId, const Models::DeleteStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stack.
       *
       * @param request DeleteStackRequest
       * @return DeleteStackResponse
       */
      Models::DeleteStackResponse deleteStack(const string &stackId, const Models::DeleteStackRequest &request);

      /**
       * @summary Deletes a node.
       *
       * @description Single-user call frequency: 100 calls per second.
       * Deletes a node. If the node has resources that have not been destroyed, the deletion is not allowed.
       *
       * @param request DeleteTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTaskWithOptions(const string &taskId, const Models::DeleteTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a node.
       *
       * @description Single-user call frequency: 100 calls per second.
       * Deletes a node. If the node has resources that have not been destroyed, the deletion is not allowed.
       *
       * @param request DeleteTaskRequest
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTask(const string &taskId, const Models::DeleteTaskRequest &request);

      /**
       * @summary Initiates a state file consistency check.
       *
       * @description This API is used to perform drift detection on the state files of resource orchestration tasks and stack tasks in the automated service desk.
       *
       * @param request DetectTerraformStateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectTerraformStateResponse
       */
      Models::DetectTerraformStateResponse detectTerraformStateWithOptions(const Models::DetectTerraformStateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a state file consistency check.
       *
       * @description This API is used to perform drift detection on the state files of resource orchestration tasks and stack tasks in the automated service desk.
       *
       * @param request DetectTerraformStateRequest
       * @return DetectTerraformStateResponse
       */
      Models::DetectTerraformStateResponse detectTerraformState(const Models::DetectTerraformStateRequest &request);

      /**
       * @summary Dissociates a drift detection configuration.
       *
       * @param request DissociateDetectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateDetectConfigResponse
       */
      Models::DissociateDetectConfigResponse dissociateDetectConfigWithOptions(const Models::DissociateDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a drift detection configuration.
       *
       * @param request DissociateDetectConfigRequest
       * @return DissociateDetectConfigResponse
       */
      Models::DissociateDetectConfigResponse dissociateDetectConfig(const Models::DissociateDetectConfigRequest &request);

      /**
       * @summary Dissociates a resource group.
       *
       * @param request DissociateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateGroupResponse
       */
      Models::DissociateGroupResponse dissociateGroupWithOptions(const string &projectId, const string &groupId, const Models::DissociateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a resource group.
       *
       * @param request DissociateGroupRequest
       * @return DissociateGroupResponse
       */
      Models::DissociateGroupResponse dissociateGroup(const string &projectId, const string &groupId, const Models::DissociateGroupRequest &request);

      /**
       * @summary Dissociates a parameter set from other resources.
       *
       * @param request DissociateParameterSetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateParameterSetResponse
       */
      Models::DissociateParameterSetResponse dissociateParameterSetWithOptions(const Models::DissociateParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a parameter set from other resources.
       *
       * @param request DissociateParameterSetRequest
       * @return DissociateParameterSetResponse
       */
      Models::DissociateParameterSetResponse dissociateParameterSet(const Models::DissociateParameterSetRequest &request);

      /**
       * @summary Executes a Module officially provided by Alibaba Cloud Terraform.
       *
       * @description This API operation is used to execute Terraform Module code to create or update cloud resources. Before using this API operation, make sure that all required authentication information is correctly configured and that the Terraform code corresponding to the Module meets the expected functional requirements.
       *
       * @param request ExecuteRegistryModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteRegistryModuleResponse
       */
      Models::ExecuteRegistryModuleResponse executeRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const Models::ExecuteRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a Module officially provided by Alibaba Cloud Terraform.
       *
       * @description This API operation is used to execute Terraform Module code to create or update cloud resources. Before using this API operation, make sure that all required authentication information is correctly configured and that the Terraform code corresponding to the Module meets the expected functional requirements.
       *
       * @param request ExecuteRegistryModuleRequest
       * @return ExecuteRegistryModuleResponse
       */
      Models::ExecuteRegistryModuleResponse executeRegistryModule(const string &namespaceName, const string &moduleName, const Models::ExecuteRegistryModuleRequest &request);

      /**
       * @summary Runs a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request ExecuteResourceExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteResourceExportTaskResponse
       */
      Models::ExecuteResourceExportTaskResponse executeResourceExportTaskWithOptions(const string &exportTaskId, const Models::ExecuteResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request ExecuteResourceExportTaskRequest
       * @return ExecuteResourceExportTaskResponse
       */
      Models::ExecuteResourceExportTaskResponse executeResourceExportTask(const string &exportTaskId, const Models::ExecuteResourceExportTaskRequest &request);

      /**
       * @summary Executes TerraformApply.
       *
       * @description Executes the Terraform Apply command to create or update cloud resources based on the provided Terraform code. This API can handle complex scenarios such as operations that depend on a previous state.
       * Before calling this API, ensure that all required authentication information is properly configured and that the Terraform code meets the expected functional requirements.
       *
       * @param request ExecuteTerraformApplyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTerraformApplyResponse
       */
      Models::ExecuteTerraformApplyResponse executeTerraformApplyWithOptions(const Models::ExecuteTerraformApplyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes TerraformApply.
       *
       * @description Executes the Terraform Apply command to create or update cloud resources based on the provided Terraform code. This API can handle complex scenarios such as operations that depend on a previous state.
       * Before calling this API, ensure that all required authentication information is properly configured and that the Terraform code meets the expected functional requirements.
       *
       * @param request ExecuteTerraformApplyRequest
       * @return ExecuteTerraformApplyResponse
       */
      Models::ExecuteTerraformApplyResponse executeTerraformApply(const Models::ExecuteTerraformApplyRequest &request);

      /**
       * @summary Executes Terraform Destroy.
       *
       * @description Executes the Terraform Destroy command to destroy resources created by Terraform.
       *
       * @param request ExecuteTerraformDestroyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTerraformDestroyResponse
       */
      Models::ExecuteTerraformDestroyResponse executeTerraformDestroyWithOptions(const Models::ExecuteTerraformDestroyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes Terraform Destroy.
       *
       * @description Executes the Terraform Destroy command to destroy resources created by Terraform.
       *
       * @param request ExecuteTerraformDestroyRequest
       * @return ExecuteTerraformDestroyResponse
       */
      Models::ExecuteTerraformDestroyResponse executeTerraformDestroy(const Models::ExecuteTerraformDestroyRequest &request);

      /**
       * @summary Executes a Terraform plan.
       *
       * @description Executes a Terraform Plan command by using the provided Terraform code to create or update cloud resources. This API operation can handle complex scenarios such as operations that depend on a previous state.
       * Before calling this API operation, ensure that all required authentication information is properly configured and that the Terraform code meets the expected functional requirements.
       *
       * @param request ExecuteTerraformPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTerraformPlanResponse
       */
      Models::ExecuteTerraformPlanResponse executeTerraformPlanWithOptions(const Models::ExecuteTerraformPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a Terraform plan.
       *
       * @description Executes a Terraform Plan command by using the provided Terraform code to create or update cloud resources. This API operation can handle complex scenarios such as operations that depend on a previous state.
       * Before calling this API operation, ensure that all required authentication information is properly configured and that the Terraform code meets the expected functional requirements.
       *
       * @param request ExecuteTerraformPlanRequest
       * @return ExecuteTerraformPlanResponse
       */
      Models::ExecuteTerraformPlanResponse executeTerraformPlan(const Models::ExecuteTerraformPlanRequest &request);

      /**
       * @summary Generates Terraform HCL template code.
       *
       * @param request GenerateModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateModuleResponse
       */
      Models::GenerateModuleResponse generateModuleWithOptions(const Models::GenerateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates Terraform HCL template code.
       *
       * @param request GenerateModuleRequest
       * @return GenerateModuleResponse
       */
      Models::GenerateModuleResponse generateModule(const Models::GenerateModuleRequest &request);

      /**
       * @summary Retrieve drift detection configuration
       *
       * @param request GetDetectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDetectConfigResponse
       */
      Models::GetDetectConfigResponse getDetectConfigWithOptions(const string &detectConfigId, const Models::GetDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve drift detection configuration
       *
       * @param request GetDetectConfigRequest
       * @return GetDetectConfigResponse
       */
      Models::GetDetectConfigResponse getDetectConfig(const string &detectConfigId, const Models::GetDetectConfigRequest &request);

      /**
       * @summary Retrieves the encryption configuration.
       *
       * @param request GetEncryptionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEncryptionConfigResponse
       */
      Models::GetEncryptionConfigResponse getEncryptionConfigWithOptions(const Models::GetEncryptionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the encryption configuration.
       *
       * @param request GetEncryptionConfigRequest
       * @return GetEncryptionConfigResponse
       */
      Models::GetEncryptionConfigResponse getEncryptionConfig(const Models::GetEncryptionConfigRequest &request);

      /**
       * @summary Retrieves the result of a Terraform run.
       *
       * @description Retrieves the result of a Terraform run.
       *
       * @param request GetExecuteStateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecuteStateResponse
       */
      Models::GetExecuteStateResponse getExecuteStateWithOptions(const string &stateId, const Models::GetExecuteStateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a Terraform run.
       *
       * @description Retrieves the result of a Terraform run.
       *
       * @param request GetExecuteStateRequest
       * @return GetExecuteStateResponse
       */
      Models::GetExecuteStateResponse getExecuteState(const string &stateId, const Models::GetExecuteStateRequest &request);

      /**
       * @summary Queries a group.
       *
       * @param request GetGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const string &groupId, const Models::GetGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a group.
       *
       * @param request GetGroupRequest
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const string &groupId, const Models::GetGroupRequest &request);

      /**
       * @summary Retrieves job information.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request GetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const string &taskId, const string &jobId, const Models::GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves job information.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const string &taskId, const string &jobId, const Models::GetJobRequest &request);

      /**
       * @summary Queries the details of a specified template.
       *
       * @description ## Operation description
       * You can call this operation to query the details of a specified template, including but not limited to the template name, description, source, status, and latest version. You must specify the template ID and include authentication information in the request.
       *
       * @param request GetModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModuleResponse
       */
      Models::GetModuleResponse getModuleWithOptions(const string &moduleId, const Models::GetModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified template.
       *
       * @description ## Operation description
       * You can call this operation to query the details of a specified template, including but not limited to the template name, description, source, status, and latest version. You must specify the template ID and include authentication information in the request.
       *
       * @param request GetModuleRequest
       * @return GetModuleResponse
       */
      Models::GetModuleResponse getModule(const string &moduleId, const Models::GetModuleRequest &request);

      /**
       * @summary Queries the details of a specific version of a specified template.
       *
       * @description ## Operation description
       * You can call this operation to query the details of a specific version of a specified template, including the version number, description, and release time. Make sure that the template ID and version number are correct.
       *
       * @param request GetModuleVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModuleVersionResponse
       */
      Models::GetModuleVersionResponse getModuleVersionWithOptions(const string &moduleId, const string &moduleVersion, const Models::GetModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific version of a specified template.
       *
       * @description ## Operation description
       * You can call this operation to query the details of a specific version of a specified template, including the version number, description, and release time. Make sure that the template ID and version number are correct.
       *
       * @param request GetModuleVersionRequest
       * @return GetModuleVersionResponse
       */
      Models::GetModuleVersionResponse getModuleVersion(const string &moduleId, const string &moduleVersion, const Models::GetModuleVersionRequest &request);

      /**
       * @summary Retrieves the details of a parameter set by parameter set ID.
       *
       * @description ## Request description
       * - This operation retrieves detailed parameter set information by specifying a `parameterSetId`.
       * - Authentication is required to access this operation.
       * - If the request is successful, detailed data including the parameter set name, description, and parameter list is returned.
       *
       * @param request GetParameterSetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParameterSetResponse
       */
      Models::GetParameterSetResponse getParameterSetWithOptions(const string &parameterSetId, const Models::GetParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a parameter set by parameter set ID.
       *
       * @description ## Request description
       * - This operation retrieves detailed parameter set information by specifying a `parameterSetId`.
       * - Authentication is required to access this operation.
       * - If the request is successful, detailed data including the parameter set name, description, and parameter list is returned.
       *
       * @param request GetParameterSetRequest
       * @return GetParameterSetResponse
       */
      Models::GetParameterSetResponse getParameterSet(const string &parameterSetId, const Models::GetParameterSetRequest &request);

      /**
       * @summary Queries a project.
       *
       * @param request GetProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const string &projectId, const Models::GetProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a project.
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const string &projectId, const Models::GetProjectRequest &request);

      /**
       * @summary Retrieves the resource documentation of a Terraform provider.
       *
       * @param request GetProviderDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProviderDocumentResponse
       */
      Models::GetProviderDocumentResponse getProviderDocumentWithOptions(const Models::GetProviderDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the resource documentation of a Terraform provider.
       *
       * @param request GetProviderDocumentRequest
       * @return GetProviderDocumentResponse
       */
      Models::GetProviderDocumentResponse getProviderDocument(const Models::GetProviderDocumentRequest &request);

      /**
       * @summary Queries a Registry module.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request GetRegistryModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegistryModuleResponse
       */
      Models::GetRegistryModuleResponse getRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const Models::GetRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a Registry module.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request GetRegistryModuleRequest
       * @return GetRegistryModuleResponse
       */
      Models::GetRegistryModuleResponse getRegistryModule(const string &namespaceName, const string &moduleName, const Models::GetRegistryModuleRequest &request);

      /**
       * @summary Queries a Registry template version.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request GetRegistryModuleVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegistryModuleVersionResponse
       */
      Models::GetRegistryModuleVersionResponse getRegistryModuleVersionWithOptions(const string &namespaceName, const string &moduleName, const string &version, const Models::GetRegistryModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a Registry template version.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request GetRegistryModuleVersionRequest
       * @return GetRegistryModuleVersionResponse
       */
      Models::GetRegistryModuleVersionResponse getRegistryModuleVersion(const string &namespaceName, const string &moduleName, const string &version, const Models::GetRegistryModuleVersionRequest &request);

      /**
       * @summary Queries a workspace.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request GetRegistryNamespaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegistryNamespaceResponse
       */
      Models::GetRegistryNamespaceResponse getRegistryNamespaceWithOptions(const string &namespaceName, const Models::GetRegistryNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a workspace.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request GetRegistryNamespaceRequest
       * @return GetRegistryNamespaceResponse
       */
      Models::GetRegistryNamespaceResponse getRegistryNamespace(const string &namespaceName, const Models::GetRegistryNamespaceRequest &request);

      /**
       * @summary Queries the details of a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request GetResourceExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceExportTaskResponse
       */
      Models::GetResourceExportTaskResponse getResourceExportTaskWithOptions(const string &exportTaskId, const Models::GetResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request GetResourceExportTaskRequest
       * @return GetResourceExportTaskResponse
       */
      Models::GetResourceExportTaskResponse getResourceExportTask(const string &exportTaskId, const Models::GetResourceExportTaskRequest &request);

      /**
       * @summary Retrieves resource type information.
       *
       * @description ## Request description.
       *
       * @param request GetResourceTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceTypeResponse
       */
      Models::GetResourceTypeResponse getResourceTypeWithOptions(const string &resourceType, const Models::GetResourceTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves resource type information.
       *
       * @description ## Request description.
       *
       * @param request GetResourceTypeRequest
       * @return GetResourceTypeResponse
       */
      Models::GetResourceTypeResponse getResourceType(const string &resourceType, const Models::GetResourceTypeRequest &request);

      /**
       * @summary Queries a stack.
       *
       * @param request GetStackRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackResponse
       */
      Models::GetStackResponse getStackWithOptions(const string &stackId, const Models::GetStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a stack.
       *
       * @param request GetStackRequest
       * @return GetStackResponse
       */
      Models::GetStackResponse getStack(const string &stackId, const Models::GetStackRequest &request);

      /**
       * @summary Queries the list of deployments for a stack.
       *
       * @param request GetStackDeploymentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackDeploymentsResponse
       */
      Models::GetStackDeploymentsResponse getStackDeploymentsWithOptions(const string &stackId, const Models::GetStackDeploymentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of deployments for a stack.
       *
       * @param request GetStackDeploymentsRequest
       * @return GetStackDeploymentsResponse
       */
      Models::GetStackDeploymentsResponse getStackDeployments(const string &stackId, const Models::GetStackDeploymentsRequest &request);

      /**
       * @summary Retrieves the trigger result of a Stack.
       *
       * @param request GetStackExecutionResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStackExecutionResultResponse
       */
      Models::GetStackExecutionResultResponse getStackExecutionResultWithOptions(const string &triggerId, const Models::GetStackExecutionResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the trigger result of a Stack.
       *
       * @param request GetStackExecutionResultRequest
       * @return GetStackExecutionResultResponse
       */
      Models::GetStackExecutionResultResponse getStackExecutionResult(const string &triggerId, const Models::GetStackExecutionResultRequest &request);

      /**
       * @summary Retrieves the details of a task.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param request GetTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const string &taskId, const Models::GetTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a task.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param request GetTaskRequest
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const string &taskId, const Models::GetTaskRequest &request);

      /**
       * @summary Retrieves the detection result of a state file.
       *
       * @description This API is used to retrieve the detection results of state files for resource orchestration tasks and stack tasks on the automation service desk.
       *
       * @param request GetTerraformStateDetectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTerraformStateDetectionResponse
       */
      Models::GetTerraformStateDetectionResponse getTerraformStateDetectionWithOptions(const string &detectionId, const Models::GetTerraformStateDetectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the detection result of a state file.
       *
       * @description This API is used to retrieve the detection results of state files for resource orchestration tasks and stack tasks on the automation service desk.
       *
       * @param request GetTerraformStateDetectionRequest
       * @return GetTerraformStateDetectionResponse
       */
      Models::GetTerraformStateDetectionResponse getTerraformStateDetection(const string &detectionId, const Models::GetTerraformStateDetectionRequest &request);

      /**
       * @summary List drift detection associations
       *
       * @param request ListDetectConfigRelationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDetectConfigRelationsResponse
       */
      Models::ListDetectConfigRelationsResponse listDetectConfigRelationsWithOptions(const Models::ListDetectConfigRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List drift detection associations
       *
       * @param request ListDetectConfigRelationsRequest
       * @return ListDetectConfigRelationsResponse
       */
      Models::ListDetectConfigRelationsResponse listDetectConfigRelations(const Models::ListDetectConfigRelationsRequest &request);

      /**
       * @summary List drift detection configurations
       *
       * @param request ListDetectConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDetectConfigsResponse
       */
      Models::ListDetectConfigsResponse listDetectConfigsWithOptions(const Models::ListDetectConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List drift detection configurations
       *
       * @param request ListDetectConfigsRequest
       * @return ListDetectConfigsResponse
       */
      Models::ListDetectConfigsResponse listDetectConfigs(const Models::ListDetectConfigsRequest &request);

      /**
       * @summary Retrieves the list of official Terraform Module examples.
       *
       * @description This operation queries the example information of Terraform Modules officially provided by Alibaba Cloud.
       * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
       * - If `nextToken` is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModuleExamples operation to the `nextToken` value returned in the previous response. If the `NextToken` parameter is not specified, the first page of data is returned by default.
       * - You can use keyword, namespaceName, moduleName, moduleVersion, and exampleName as conditional filter settings to narrow down the search scope. Multiple filter conditions have a logical `AND` relationship, and only resources that meet all filter conditions are returned.
       *   - keyword: optional. Searches by keyword and supports fuzzy match on exampleName. For example, if keyword is set to ecs, module examples whose names contain ecs are returned.
       *   - namespaceName: optional. Filters module examples by a specific workspace. For example, if namespaceName is set to alibaba, module examples in the alibaba workspace are returned.
       *   - moduleName: optional. Filters module examples by a specific module name. For example, if moduleName is set to ecs, module examples whose module name is ecs are returned.
       *   - moduleVersion: optional. Filters module examples by a specific module version. For example, if moduleVersion is set to 1.0.0, module examples whose module version is 1.0.0 are returned.
       *   - exampleName: optional. Filters module examples by a specific example name. For example, if exampleName is set to ecs, module examples whose example name is ecs are returned.
       * The response contains the request ID, total number of entries, data of the current page, and pagination information, which facilitates processing of query results.
       *
       * @param request ListExplorerRegistryModuleExamplesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExplorerRegistryModuleExamplesResponse
       */
      Models::ListExplorerRegistryModuleExamplesResponse listExplorerRegistryModuleExamplesWithOptions(const Models::ListExplorerRegistryModuleExamplesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of official Terraform Module examples.
       *
       * @description This operation queries the example information of Terraform Modules officially provided by Alibaba Cloud.
       * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
       * - If `nextToken` is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModuleExamples operation to the `nextToken` value returned in the previous response. If the `NextToken` parameter is not specified, the first page of data is returned by default.
       * - You can use keyword, namespaceName, moduleName, moduleVersion, and exampleName as conditional filter settings to narrow down the search scope. Multiple filter conditions have a logical `AND` relationship, and only resources that meet all filter conditions are returned.
       *   - keyword: optional. Searches by keyword and supports fuzzy match on exampleName. For example, if keyword is set to ecs, module examples whose names contain ecs are returned.
       *   - namespaceName: optional. Filters module examples by a specific workspace. For example, if namespaceName is set to alibaba, module examples in the alibaba workspace are returned.
       *   - moduleName: optional. Filters module examples by a specific module name. For example, if moduleName is set to ecs, module examples whose module name is ecs are returned.
       *   - moduleVersion: optional. Filters module examples by a specific module version. For example, if moduleVersion is set to 1.0.0, module examples whose module version is 1.0.0 are returned.
       *   - exampleName: optional. Filters module examples by a specific example name. For example, if exampleName is set to ecs, module examples whose example name is ecs are returned.
       * The response contains the request ID, total number of entries, data of the current page, and pagination information, which facilitates processing of query results.
       *
       * @param request ListExplorerRegistryModuleExamplesRequest
       * @return ListExplorerRegistryModuleExamplesResponse
       */
      Models::ListExplorerRegistryModuleExamplesResponse listExplorerRegistryModuleExamples(const Models::ListExplorerRegistryModuleExamplesRequest &request);

      /**
       * @summary Lists the version information of official Terraform modules provided by Alibaba Cloud.
       *
       * @description This operation queries the version information of official Terraform modules provided by Alibaba Cloud.
       * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
       * - If `nextToken` is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModules operation to the `nextToken` value returned in the previous response. If the `NextToken` parameter is not specified, the first page of data is returned by default.
       * - You can use keyword, namespaceName, moduleName, and moduleVersion as conditional filter Settings to narrow the search scope. Multiple filter conditions have a logical `AND` relationship. Only resources that meet all filter conditions are returned.
       *   - keyword: optional. Performs a fuzzy match on the module name. For example, if keyword is set to ecs, modules whose names contain ecs are returned.
       *   - namespaceName: optional. Filters modules by a specific workspace. For example, if namespaceName is set to alibaba, modules whose workspace is alibaba are returned. When moduleName is specified, namespaceName must also be specified. You can call the ListExplorerRegistryModule operation to obtain the namespaceName information.
       *   - moduleName: optional. Filters modules by a specific name. For example, if moduleName is set to ecs, modules whose name is ecs are returned.
       *   - moduleVersion: optional. Filters modules by a specific version. For example, if moduleVersion is set to 1.0.0, modules whose version is 1.0.0 are returned.
       * The response contains the request ID, total number of entries, data on the current page, and pagination information, which facilitates the processing of query results.
       *
       * @param request ListExplorerRegistryModuleVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExplorerRegistryModuleVersionsResponse
       */
      Models::ListExplorerRegistryModuleVersionsResponse listExplorerRegistryModuleVersionsWithOptions(const Models::ListExplorerRegistryModuleVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the version information of official Terraform modules provided by Alibaba Cloud.
       *
       * @description This operation queries the version information of official Terraform modules provided by Alibaba Cloud.
       * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
       * - If `nextToken` is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModules operation to the `nextToken` value returned in the previous response. If the `NextToken` parameter is not specified, the first page of data is returned by default.
       * - You can use keyword, namespaceName, moduleName, and moduleVersion as conditional filter Settings to narrow the search scope. Multiple filter conditions have a logical `AND` relationship. Only resources that meet all filter conditions are returned.
       *   - keyword: optional. Performs a fuzzy match on the module name. For example, if keyword is set to ecs, modules whose names contain ecs are returned.
       *   - namespaceName: optional. Filters modules by a specific workspace. For example, if namespaceName is set to alibaba, modules whose workspace is alibaba are returned. When moduleName is specified, namespaceName must also be specified. You can call the ListExplorerRegistryModule operation to obtain the namespaceName information.
       *   - moduleName: optional. Filters modules by a specific name. For example, if moduleName is set to ecs, modules whose name is ecs are returned.
       *   - moduleVersion: optional. Filters modules by a specific version. For example, if moduleVersion is set to 1.0.0, modules whose version is 1.0.0 are returned.
       * The response contains the request ID, total number of entries, data on the current page, and pagination information, which facilitates the processing of query results.
       *
       * @param request ListExplorerRegistryModuleVersionsRequest
       * @return ListExplorerRegistryModuleVersionsResponse
       */
      Models::ListExplorerRegistryModuleVersionsResponse listExplorerRegistryModuleVersions(const Models::ListExplorerRegistryModuleVersionsRequest &request);

      /**
       * @summary Lists information about official Terraform modules provided by Alibaba Cloud.
       *
       * @description This operation queries information about official Terraform modules provided by Alibaba Cloud.
       * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
       * - If the `nextToken` parameter is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModules operation to the `nextToken` value returned in the previous response. If you do not specify the `NextToken` parameter, the first page of data is returned by default.
       * - You can use keyword and moduleName as filter conditions to narrow the search scope. Multiple filter conditions are evaluated by using a logical `AND`. Only resources that meet all filter conditions are returned.
       *   - keyword: optional. Searches by keyword through fuzzy matching against ModuleName. For example, if keyword is set to ecs, modules whose names contain ecs are returned.
       *   - moduleName: optional. Filters modules by a specific name. For example, if moduleName is set to ecs, only the module whose name is exactly ecs is returned.
       * The response contains the request ID, total number of entries, data of the current page, and pagination information, which facilitates the processing of query results.
       *
       * @param request ListExplorerRegistryModulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExplorerRegistryModulesResponse
       */
      Models::ListExplorerRegistryModulesResponse listExplorerRegistryModulesWithOptions(const Models::ListExplorerRegistryModulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists information about official Terraform modules provided by Alibaba Cloud.
       *
       * @description This operation queries information about official Terraform modules provided by Alibaba Cloud.
       * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
       * - If the `nextToken` parameter is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModules operation to the `nextToken` value returned in the previous response. If you do not specify the `NextToken` parameter, the first page of data is returned by default.
       * - You can use keyword and moduleName as filter conditions to narrow the search scope. Multiple filter conditions are evaluated by using a logical `AND`. Only resources that meet all filter conditions are returned.
       *   - keyword: optional. Searches by keyword through fuzzy matching against ModuleName. For example, if keyword is set to ecs, modules whose names contain ecs are returned.
       *   - moduleName: optional. Filters modules by a specific name. For example, if moduleName is set to ecs, only the module whose name is exactly ecs is returned.
       * The response contains the request ID, total number of entries, data of the current page, and pagination information, which facilitates the processing of query results.
       *
       * @param request ListExplorerRegistryModulesRequest
       * @return ListExplorerRegistryModulesResponse
       */
      Models::ListExplorerRegistryModulesResponse listExplorerRegistryModules(const Models::ListExplorerRegistryModulesRequest &request);

      /**
       * @summary Queries the list of groups.
       *
       * @param tmpReq ListGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupResponse
       */
      Models::ListGroupResponse listGroupWithOptions(const Models::ListGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of groups.
       *
       * @param request ListGroupRequest
       * @return ListGroupResponse
       */
      Models::ListGroupResponse listGroup(const Models::ListGroupRequest &request);

      /**
       * @summary Queries a list of jobs.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request ListJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const string &taskId, const Models::ListJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of jobs.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const string &taskId, const Models::ListJobsRequest &request);

      /**
       * @summary Retrieves a list of template versions.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request ListModuleVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModuleVersionResponse
       */
      Models::ListModuleVersionResponse listModuleVersionWithOptions(const string &moduleId, const Models::ListModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of template versions.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request ListModuleVersionRequest
       * @return ListModuleVersionResponse
       */
      Models::ListModuleVersionResponse listModuleVersion(const string &moduleId, const Models::ListModuleVersionRequest &request);

      /**
       * @summary Retrieves the list of templates under the current user, with support for pagination and conditional filtering.
       *
       * @description ## Operation description
       * This operation lists all Terraform templates under the current user. You can specify query parameters to implement pagination, fuzzy match template names, filter templates by source or status, and more. You can also filter templates by tags for more granular results.
       * ### Precautions
       * - The pagination parameters `pageNumber` and `pageSize` help control the number of returned results.
       * - Use the `name` parameter to perform a fuzzy match search on template names.
       * - Use the `source` parameter to filter templates by source (such as OSS import or file upload).
       * - Use the `status` parameter to filter templates by status (such as created or published).
       * - Tag filtering requires a JSON-formatted string, for example, `[{"key":"env","value":"prod"}]`.
       *
       * @param tmpReq ListModulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModulesResponse
       */
      Models::ListModulesResponse listModulesWithOptions(const Models::ListModulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of templates under the current user, with support for pagination and conditional filtering.
       *
       * @description ## Operation description
       * This operation lists all Terraform templates under the current user. You can specify query parameters to implement pagination, fuzzy match template names, filter templates by source or status, and more. You can also filter templates by tags for more granular results.
       * ### Precautions
       * - The pagination parameters `pageNumber` and `pageSize` help control the number of returned results.
       * - Use the `name` parameter to perform a fuzzy match search on template names.
       * - Use the `source` parameter to filter templates by source (such as OSS import or file upload).
       * - Use the `status` parameter to filter templates by status (such as created or published).
       * - Tag filtering requires a JSON-formatted string, for example, `[{"key":"env","value":"prod"}]`.
       *
       * @param request ListModulesRequest
       * @return ListModulesResponse
       */
      Models::ListModulesResponse listModules(const Models::ListModulesRequest &request);

      /**
       * @summary Lists the parameter sets associated with a resource.
       *
       * @param request ListParameterSetRelationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListParameterSetRelationResponse
       */
      Models::ListParameterSetRelationResponse listParameterSetRelationWithOptions(const Models::ListParameterSetRelationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the parameter sets associated with a resource.
       *
       * @param request ListParameterSetRelationRequest
       * @return ListParameterSetRelationResponse
       */
      Models::ListParameterSetRelationResponse listParameterSetRelation(const Models::ListParameterSetRelationRequest &request);

      /**
       * @summary Queries and retrieves a paginated list of parameter sets with keyword search support.
       *
       * @description ## Operation description
       * This operation queries all parameter sets in the system and supports filtering by keyword and paginated results. Authentication information is required in the request.
       * ### Notes
       * - The `keyword` parameter can be used to fuzzy match parameter sets by name or description.
       * - Pagination is controlled by `pageNumber` and `pageSize`. By default, results start from the first page. The page size is customizable but should be set to a reasonable value to avoid performance issues.
       *
       * @param request ListParameterSetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListParameterSetsResponse
       */
      Models::ListParameterSetsResponse listParameterSetsWithOptions(const Models::ListParameterSetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries and retrieves a paginated list of parameter sets with keyword search support.
       *
       * @description ## Operation description
       * This operation queries all parameter sets in the system and supports filtering by keyword and paginated results. Authentication information is required in the request.
       * ### Notes
       * - The `keyword` parameter can be used to fuzzy match parameter sets by name or description.
       * - Pagination is controlled by `pageNumber` and `pageSize`. By default, results start from the first page. The page size is customizable but should be set to a reasonable value to avoid performance issues.
       *
       * @param request ListParameterSetsRequest
       * @return ListParameterSetsResponse
       */
      Models::ListParameterSetsResponse listParameterSets(const Models::ListParameterSetsRequest &request);

      /**
       * @summary Queries the list of all products.
       *
       * @description ## Operation description
       * - **Keyword search**: Use the `keyword` parameter for fuzzy matching.
       * - **Paged query**: Use `nextToken` for pagination and `maxResults` to specify the maximum number of results per page (default: 100, maximum: 200).
       * - **Terraform Provider version**: The optional `terraformProviderVersion` parameter filters products associated with a specific Provider version.
       * - **Response structure**: The response contains the request ID, total number of entries, data of the current page, and pagination information for easy processing of query results.
       *
       * @param request ListProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of all products.
       *
       * @description ## Operation description
       * - **Keyword search**: Use the `keyword` parameter for fuzzy matching.
       * - **Paged query**: Use `nextToken` for pagination and `maxResults` to specify the maximum number of results per page (default: 100, maximum: 200).
       * - **Terraform Provider version**: The optional `terraformProviderVersion` parameter filters products associated with a specific Provider version.
       * - **Response structure**: The response contains the request ID, total number of entries, data of the current page, and pagination information for easy processing of query results.
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary Queries the list of projects.
       *
       * @param tmpReq ListProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProjectWithOptions(const Models::ListProjectRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of projects.
       *
       * @param request ListProjectRequest
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProject(const Models::ListProjectRequest &request);

      /**
       * @summary Queries the list of Registry template versions.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request ListRegistryModuleVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistryModuleVersionsResponse
       */
      Models::ListRegistryModuleVersionsResponse listRegistryModuleVersionsWithOptions(const Models::ListRegistryModuleVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Registry template versions.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request ListRegistryModuleVersionsRequest
       * @return ListRegistryModuleVersionsResponse
       */
      Models::ListRegistryModuleVersionsResponse listRegistryModuleVersions(const Models::ListRegistryModuleVersionsRequest &request);

      /**
       * @summary Queries the list of Registry modules.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request ListRegistryModulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistryModulesResponse
       */
      Models::ListRegistryModulesResponse listRegistryModulesWithOptions(const Models::ListRegistryModulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Registry modules.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request ListRegistryModulesRequest
       * @return ListRegistryModulesResponse
       */
      Models::ListRegistryModulesResponse listRegistryModules(const Models::ListRegistryModulesRequest &request);

      /**
       * @summary Queries the list of workspaces.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request ListRegistryNamespacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegistryNamespacesResponse
       */
      Models::ListRegistryNamespacesResponse listRegistryNamespacesWithOptions(const Models::ListRegistryNamespacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of workspaces.
       *
       * @description Single-user call frequency: 200 calls per second.
       *
       * @param request ListRegistryNamespacesRequest
       * @return ListRegistryNamespacesResponse
       */
      Models::ListRegistryNamespacesResponse listRegistryNamespaces(const Models::ListRegistryNamespacesRequest &request);

      /**
       * @summary Retrieves the list of versions for a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request ListResourceExportTaskVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceExportTaskVersionsResponse
       */
      Models::ListResourceExportTaskVersionsResponse listResourceExportTaskVersionsWithOptions(const string &exportTaskId, const Models::ListResourceExportTaskVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of versions for a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request ListResourceExportTaskVersionsRequest
       * @return ListResourceExportTaskVersionsResponse
       */
      Models::ListResourceExportTaskVersionsResponse listResourceExportTaskVersions(const string &exportTaskId, const Models::ListResourceExportTaskVersionsRequest &request);

      /**
       * @summary Queries the list of resource export tasks.
       *
       * @description Rate limit per user: 100 calls per second.
       *
       * @param request ListResourceExportTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceExportTasksResponse
       */
      Models::ListResourceExportTasksResponse listResourceExportTasksWithOptions(const Models::ListResourceExportTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resource export tasks.
       *
       * @description Rate limit per user: 100 calls per second.
       *
       * @param request ListResourceExportTasksRequest
       * @return ListResourceExportTasksResponse
       */
      Models::ListResourceExportTasksResponse listResourceExportTasks(const Models::ListResourceExportTasksRequest &request);

      /**
       * @summary Queries a list of resource types by filter conditions with pagination support.
       *
       * @description ## Operation description
       * This API allows you to perform a conditional query for a list of resource types based on conditions such as product code, Terraform Provider version, child class, status, and keyword. The results contain detailed information about resources, including product code, status, status effective version, child class, Terraform Provider version, and resource type code. Paging is supported for handling large amounts of data.
       *
       * @param tmpReq ListResourceTypesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypesWithOptions(const Models::ListResourceTypesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of resource types by filter conditions with pagination support.
       *
       * @description ## Operation description
       * This API allows you to perform a conditional query for a list of resource types based on conditions such as product code, Terraform Provider version, child class, status, and keyword. The results contain detailed information about resources, including product code, status, status effective version, child class, Terraform Provider version, and resource type code. Paging is supported for handling large amounts of data.
       *
       * @param request ListResourceTypesRequest
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypes(const Models::ListResourceTypesRequest &request);

      /**
       * @summary Retrieves the resources of a node.
       *
       * @param request ListResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResourcesWithOptions(const Models::ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the resources of a node.
       *
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const Models::ListResourcesRequest &request);

      /**
       * @summary Queries the list of stack configurations.
       *
       * @param request ListStackConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStackConfigsResponse
       */
      Models::ListStackConfigsResponse listStackConfigsWithOptions(const string &stackId, const Models::ListStackConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of stack configurations.
       *
       * @param request ListStackConfigsRequest
       * @return ListStackConfigsResponse
       */
      Models::ListStackConfigsResponse listStackConfigs(const string &stackId, const Models::ListStackConfigsRequest &request);

      /**
       * @summary Queries the list of stacks.
       *
       * @param request ListStacksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStacksResponse
       */
      Models::ListStacksResponse listStacksWithOptions(const Models::ListStacksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of stacks.
       *
       * @param request ListStacksRequest
       * @return ListStacksResponse
       */
      Models::ListStacksResponse listStacks(const Models::ListStacksRequest &request);

      /**
       * @summary Retrieves a list of tasks.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param tmpReq ListTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const Models::ListTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of tasks.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const Models::ListTasksRequest &request);

      /**
       * @summary Retrieves the list of Terraform provider versions.
       *
       * @param request ListTerraformProviderVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTerraformProviderVersionsResponse
       */
      Models::ListTerraformProviderVersionsResponse listTerraformProviderVersionsWithOptions(const Models::ListTerraformProviderVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of Terraform provider versions.
       *
       * @param request ListTerraformProviderVersionsRequest
       * @return ListTerraformProviderVersionsResponse
       */
      Models::ListTerraformProviderVersionsResponse listTerraformProviderVersions(const Models::ListTerraformProviderVersionsRequest &request);

      /**
       * @summary Supports resource import and removal for state files.
       *
       * @description This API is used to manage state files for resource orchestration tasks and stack tasks on the automated service desk.
       * Before using this API, make sure that all required authentication information is correctly configured and that the Terraform code meets the expected functional requirements.
       *
       * @param request ManageTerraformStateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageTerraformStateResponse
       */
      Models::ManageTerraformStateResponse manageTerraformStateWithOptions(const Models::ManageTerraformStateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Supports resource import and removal for state files.
       *
       * @description This API is used to manage state files for resource orchestration tasks and stack tasks on the automated service desk.
       * Before using this API, make sure that all required authentication information is correctly configured and that the Terraform code meets the expected functional requirements.
       *
       * @param request ManageTerraformStateRequest
       * @return ManageTerraformStateResponse
       */
      Models::ManageTerraformStateResponse manageTerraformState(const Models::ManageTerraformStateRequest &request);

      /**
       * @summary After a job is created, you can perform the **Cancel** operation to stop the job while it is running.
       * After a job reaches the pending confirmation state, you can perform the **Abolish** operation to stop the job, or perform the **Execute** operation to continue the job execution.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param request OperateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateJobResponse
       */
      Models::OperateJobResponse operateJobWithOptions(const string &taskId, const string &jobId, const string &operationType, const Models::OperateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After a job is created, you can perform the **Cancel** operation to stop the job while it is running.
       * After a job reaches the pending confirmation state, you can perform the **Abolish** operation to stop the job, or perform the **Execute** operation to continue the job execution.
       *
       * @description Per-user call frequency: 100 calls per second.
       *
       * @param request OperateJobRequest
       * @return OperateJobResponse
       */
      Models::OperateJobResponse operateJob(const string &taskId, const string &jobId, const string &operationType, const Models::OperateJobRequest &request);

      /**
       * @summary Publishes a Registry template version.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request PublishRegistryModuleVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRegistryModuleVersionResponse
       */
      Models::PublishRegistryModuleVersionResponse publishRegistryModuleVersionWithOptions(const Models::PublishRegistryModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a Registry template version.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request PublishRegistryModuleVersionRequest
       * @return PublishRegistryModuleVersionResponse
       */
      Models::PublishRegistryModuleVersionResponse publishRegistryModuleVersion(const Models::PublishRegistryModuleVersionRequest &request);

      /**
       * @summary Removes a shared account.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param tmpReq RemoveSharedAccountsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSharedAccountsResponse
       */
      Models::RemoveSharedAccountsResponse removeSharedAccountsWithOptions(const Models::RemoveSharedAccountsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a shared account.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request RemoveSharedAccountsRequest
       * @return RemoveSharedAccountsResponse
       */
      Models::RemoveSharedAccountsResponse removeSharedAccounts(const Models::RemoveSharedAccountsRequest &request);

      /**
       * @summary Sets the encryption configuration.
       *
       * @param request SetEncryptionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetEncryptionConfigResponse
       */
      Models::SetEncryptionConfigResponse setEncryptionConfigWithOptions(const Models::SetEncryptionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the encryption configuration.
       *
       * @param request SetEncryptionConfigRequest
       * @return SetEncryptionConfigResponse
       */
      Models::SetEncryptionConfigResponse setEncryptionConfig(const Models::SetEncryptionConfigRequest &request);

      /**
       * @summary Triggers the execution of a stack.
       *
       * @param request TriggerStackExecutionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerStackExecutionResponse
       */
      Models::TriggerStackExecutionResponse triggerStackExecutionWithOptions(const Models::TriggerStackExecutionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers the execution of a stack.
       *
       * @param request TriggerStackExecutionRequest
       * @return TriggerStackExecutionResponse
       */
      Models::TriggerStackExecutionResponse triggerStackExecution(const Models::TriggerStackExecutionRequest &request);

      /**
       * @summary Updates the drift detection configuration information for the specified ID.
       *
       * @description ## Request Description  
       * - `detectConfigId` is a required parameter used to identify the specific detection configuration to update.  
       * - When `triggerType` is set to `Cron`, a valid `cronExpression` must be provided.  
       * - Each element in the `alarmConfigs` list must include an alert type (`type`) and an address (`address`).  
       * - If you do not want to change certain properties (such as `name`, `description`, etc.), you can omit these fields from the request body.
       *
       * @param request UpdateDetectConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDetectConfigResponse
       */
      Models::UpdateDetectConfigResponse updateDetectConfigWithOptions(const string &detectConfigId, const Models::UpdateDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the drift detection configuration information for the specified ID.
       *
       * @description ## Request Description  
       * - `detectConfigId` is a required parameter used to identify the specific detection configuration to update.  
       * - When `triggerType` is set to `Cron`, a valid `cronExpression` must be provided.  
       * - Each element in the `alarmConfigs` list must include an alert type (`type`) and an address (`address`).  
       * - If you do not want to change certain properties (such as `name`, `description`, etc.), you can omit these fields from the request body.
       *
       * @param request UpdateDetectConfigRequest
       * @return UpdateDetectConfigResponse
       */
      Models::UpdateDetectConfigResponse updateDetectConfig(const string &detectConfigId, const Models::UpdateDetectConfigRequest &request);

      /**
       * @summary Updates an Explorer template.
       *
       * @description Updates an Explorer template.
       *
       * @param request UpdateExplorerModuleAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExplorerModuleAttributeResponse
       */
      Models::UpdateExplorerModuleAttributeResponse updateExplorerModuleAttributeWithOptions(const string &explorerModuleId, const Models::UpdateExplorerModuleAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an Explorer template.
       *
       * @description Updates an Explorer template.
       *
       * @param request UpdateExplorerModuleAttributeRequest
       * @return UpdateExplorerModuleAttributeResponse
       */
      Models::UpdateExplorerModuleAttributeResponse updateExplorerModuleAttribute(const string &explorerModuleId, const Models::UpdateExplorerModuleAttributeRequest &request);

      /**
       * @summary Modifies a group.
       *
       * @param request UpdateGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const string &groupId, const Models::UpdateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a group.
       *
       * @param request UpdateGroupRequest
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroup(const string &groupId, const Models::UpdateGroupRequest &request);

      /**
       * @summary Updates the name, description, tags, and other information of a specified template.
       *
       * @description ## Operation description
       * - This operation allows you to modify the basic attributes of an existing template, including but not limited to the template name, description, and tags.
       * - The update operation does not affect the content or version information of the template.
       * - To enable or disable deletion protection, use the deletionProtection parameter.
       * - Use clientToken to ensure the idempotence of the request and avoid duplicate submissions caused by network issues.
       *
       * @param request UpdateModuleAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModuleAttributeResponse
       */
      Models::UpdateModuleAttributeResponse updateModuleAttributeWithOptions(const string &moduleId, const Models::UpdateModuleAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name, description, tags, and other information of a specified template.
       *
       * @description ## Operation description
       * - This operation allows you to modify the basic attributes of an existing template, including but not limited to the template name, description, and tags.
       * - The update operation does not affect the content or version information of the template.
       * - To enable or disable deletion protection, use the deletionProtection parameter.
       * - Use clientToken to ensure the idempotence of the request and avoid duplicate submissions caused by network issues.
       *
       * @param request UpdateModuleAttributeRequest
       * @return UpdateModuleAttributeResponse
       */
      Models::UpdateModuleAttributeResponse updateModuleAttribute(const string &moduleId, const Models::UpdateModuleAttributeRequest &request);

      /**
       * @summary Updates the attributes of a specified parameter set, such as the name and description.
       *
       * @description ## Operation description
       * - This operation allows you to modify the basic information of an existing parameter set, including the name and description.
       * - If the request includes the `parameters` field, the parameter list in the parameter set is updated.
       * - The `clientToken` field can be used to ensure the idempotence of the request.
       * - The update operation requires a valid `parameterSetId` as a path parameter.
       * - The request must include authentication information to pass identity verification.
       *
       * @param request UpdateParameterSetAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateParameterSetAttributeResponse
       */
      Models::UpdateParameterSetAttributeResponse updateParameterSetAttributeWithOptions(const string &parameterSetId, const Models::UpdateParameterSetAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of a specified parameter set, such as the name and description.
       *
       * @description ## Operation description
       * - This operation allows you to modify the basic information of an existing parameter set, including the name and description.
       * - If the request includes the `parameters` field, the parameter list in the parameter set is updated.
       * - The `clientToken` field can be used to ensure the idempotence of the request.
       * - The update operation requires a valid `parameterSetId` as a path parameter.
       * - The request must include authentication information to pass identity verification.
       *
       * @param request UpdateParameterSetAttributeRequest
       * @return UpdateParameterSetAttributeResponse
       */
      Models::UpdateParameterSetAttributeResponse updateParameterSetAttribute(const string &parameterSetId, const Models::UpdateParameterSetAttributeRequest &request);

      /**
       * @summary Updates project information.
       *
       * @param request UpdateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const string &projectId, const Models::UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates project information.
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const string &projectId, const Models::UpdateProjectRequest &request);

      /**
       * @summary Updates a Registry template.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request UpdateRegistryModuleAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRegistryModuleAttributeResponse
       */
      Models::UpdateRegistryModuleAttributeResponse updateRegistryModuleAttributeWithOptions(const string &namespaceName, const string &moduleName, const Models::UpdateRegistryModuleAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Registry template.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request UpdateRegistryModuleAttributeRequest
       * @return UpdateRegistryModuleAttributeResponse
       */
      Models::UpdateRegistryModuleAttributeResponse updateRegistryModuleAttribute(const string &namespaceName, const string &moduleName, const Models::UpdateRegistryModuleAttributeRequest &request);

      /**
       * @summary Modifies a workspace.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request UpdateRegistryNamespaceAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRegistryNamespaceAttributeResponse
       */
      Models::UpdateRegistryNamespaceAttributeResponse updateRegistryNamespaceAttributeWithOptions(const string &namespaceName, const Models::UpdateRegistryNamespaceAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a workspace.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request UpdateRegistryNamespaceAttributeRequest
       * @return UpdateRegistryNamespaceAttributeResponse
       */
      Models::UpdateRegistryNamespaceAttributeResponse updateRegistryNamespaceAttribute(const string &namespaceName, const Models::UpdateRegistryNamespaceAttributeRequest &request);

      /**
       * @summary Modifies a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request UpdateResourceExportTaskAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceExportTaskAttributeResponse
       */
      Models::UpdateResourceExportTaskAttributeResponse updateResourceExportTaskAttributeWithOptions(const string &exportTaskId, const Models::UpdateResourceExportTaskAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a resource export task.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request UpdateResourceExportTaskAttributeRequest
       * @return UpdateResourceExportTaskAttributeResponse
       */
      Models::UpdateResourceExportTaskAttributeResponse updateResourceExportTaskAttribute(const string &exportTaskId, const Models::UpdateResourceExportTaskAttributeRequest &request);

      /**
       * @summary Modifies a stack. When the configuration changes, a stack deployment is triggered.
       *
       * @param request UpdateStackRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStackResponse
       */
      Models::UpdateStackResponse updateStackWithOptions(const string &stackId, const Models::UpdateStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a stack. When the configuration changes, a stack deployment is triggered.
       *
       * @param request UpdateStackRequest
       * @return UpdateStackResponse
       */
      Models::UpdateStackResponse updateStack(const string &stackId, const Models::UpdateStackRequest &request);

      /**
       * @summary Updates the attributes of a node.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request UpdateTaskAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskAttributeResponse
       */
      Models::UpdateTaskAttributeResponse updateTaskAttributeWithOptions(const string &taskId, const Models::UpdateTaskAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of a node.
       *
       * @description Single-user call frequency: 100 calls per second.
       *
       * @param request UpdateTaskAttributeRequest
       * @return UpdateTaskAttributeResponse
       */
      Models::UpdateTaskAttributeResponse updateTaskAttribute(const string &taskId, const Models::UpdateTaskAttributeRequest &request);

      /**
       * @summary Uploads a template.
       *
       * @param request UploadModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadModuleResponse
       */
      Models::UploadModuleResponse uploadModuleWithOptions(const string &resourceType, const Models::UploadModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a template.
       *
       * @param request UploadModuleRequest
       * @return UploadModuleResponse
       */
      Models::UploadModuleResponse uploadModule(const string &resourceType, const Models::UploadModuleRequest &request);

      Models::UploadModuleResponse uploadModuleAdvance(const string &resourceType, const Models::UploadModuleAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a dry run on a template.
       *
       * @description Performs a dry run on the content of a Terraform configuration file.
       *
       * @param request ValidateModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateModuleResponse
       */
      FutureGenerator<Models::ValidateModuleResponse> validateModuleWithSSE(const Models::ValidateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a dry run on a template.
       *
       * @description Performs a dry run on the content of a Terraform configuration file.
       *
       * @param request ValidateModuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateModuleResponse
       */
      Models::ValidateModuleResponse validateModuleWithOptions(const Models::ValidateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a dry run on a template.
       *
       * @description Performs a dry run on the content of a Terraform configuration file.
       *
       * @param request ValidateModuleRequest
       * @return ValidateModuleResponse
       */
      Models::ValidateModuleResponse validateModule(const Models::ValidateModuleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
