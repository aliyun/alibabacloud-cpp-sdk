// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OPENITAG20220616_HPP_
#define ALIBABACLOUD_OPENITAG20220616_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OpenITag20220616Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OpenITag20220616.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Assign personnel to the worker nodes (annotation, quality inspection, and validation) of an annotation job.
       *
       * @param request AddWorkNodeWorkforceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWorkNodeWorkforceResponse
       */
      Models::AddWorkNodeWorkforceResponse addWorkNodeWorkforceWithOptions(const string &TenantId, const string &TaskId, const string &WorkNodeId, const Models::AddWorkNodeWorkforceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assign personnel to the worker nodes (annotation, quality inspection, and validation) of an annotation job.
       *
       * @param request AddWorkNodeWorkforceRequest
       * @return AddWorkNodeWorkforceResponse
       */
      Models::AddWorkNodeWorkforceResponse addWorkNodeWorkforce(const string &TenantId, const string &TaskId, const string &WorkNodeId, const Models::AddWorkNodeWorkforceRequest &request);

      /**
       * @summary Append data to a job.
       *
       * @param request AppendAllDataToTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AppendAllDataToTaskResponse
       */
      Models::AppendAllDataToTaskResponse appendAllDataToTaskWithOptions(const string &TenantId, const string &TaskId, const Models::AppendAllDataToTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Append data to a job.
       *
       * @param request AppendAllDataToTaskRequest
       * @return AppendAllDataToTaskResponse
       */
      Models::AppendAllDataToTaskResponse appendAllDataToTask(const string &TenantId, const string &TaskId, const Models::AppendAllDataToTaskRequest &request);

      /**
       * @summary Create an annotation job for the current tenant.
       *
       * @param request CreateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTaskWithOptions(const string &TenantId, const Models::CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an annotation job for the current tenant.
       *
       * @param request CreateTaskRequest
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTask(const string &TenantId, const Models::CreateTaskRequest &request);

      /**
       * @summary You can add a new template for the current tenant and customize the annotation template based on your business requirements.
       *
       * @param request CreateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const string &TenantId, const Models::CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can add a new template for the current tenant and customize the annotation template based on your business requirements.
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const string &TenantId, const Models::CreateTemplateRequest &request);

      /**
       * @summary Add a member to the tenant.
       *
       * @param request CreateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const string &TenantId, const Models::CreateUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a member to the tenant.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const string &TenantId, const Models::CreateUserRequest &request);

      /**
       * @summary Delete a job under the current tenant.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTaskWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a job under the current tenant.
       *
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTask(const string &TenantId, const string &TaskId);

      /**
       * @summary Delete the template under the current tenant.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const string &TenantId, const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the template under the current tenant.
       *
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const string &TenantId, const string &TemplateId);

      /**
       * @summary Delete a member within a tenant.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const string &TenantId, const string &UserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a member within a tenant.
       *
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const string &TenantId, const string &UserId);

      /**
       * @summary Export the result data of an annotation job.
       *
       * @param request ExportAnnotationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportAnnotationsResponse
       */
      Models::ExportAnnotationsResponse exportAnnotationsWithOptions(const string &TenantId, const string &TaskId, const Models::ExportAnnotationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export the result data of an annotation job.
       *
       * @param request ExportAnnotationsRequest
       * @return ExportAnnotationsResponse
       */
      Models::ExportAnnotationsResponse exportAnnotations(const string &TenantId, const string &TaskId, const Models::ExportAnnotationsRequest &request);

      /**
       * @summary Query the information of a single annotation export result.
       *
       * @param request GetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const string &TenantId, const string &JobId, const Models::GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the information of a single annotation export result.
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const string &TenantId, const string &JobId, const Models::GetJobRequest &request);

      /**
       * @summary Query the information of a single subtask package.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubtaskResponse
       */
      Models::GetSubtaskResponse getSubtaskWithOptions(const string &TenantId, const string &TaskID, const string &SubtaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the information of a single subtask package.
       *
       * @return GetSubtaskResponse
       */
      Models::GetSubtaskResponse getSubtask(const string &TenantId, const string &TaskID, const string &SubtaskId);

      /**
       * @summary Query a single annotated data item in a subtask package.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubtaskItemResponse
       */
      Models::GetSubtaskItemResponse getSubtaskItemWithOptions(const string &TenantId, const string &TaskId, const string &SubtaskId, const string &ItemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a single annotated data item in a subtask package.
       *
       * @return GetSubtaskItemResponse
       */
      Models::GetSubtaskItemResponse getSubtaskItem(const string &TenantId, const string &TaskId, const string &SubtaskId, const string &ItemId);

      /**
       * @summary Query the information of a single annotation job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the information of a single annotation job.
       *
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const string &TenantId, const string &TaskId);

      /**
       * @summary Query the current statistics information of a job.
       *
       * @param request GetTaskStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskStatisticsResponse
       */
      Models::GetTaskStatisticsResponse getTaskStatisticsWithOptions(const string &TenantId, const string &TaskId, const Models::GetTaskStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the current statistics information of a job.
       *
       * @param request GetTaskStatisticsRequest
       * @return GetTaskStatisticsResponse
       */
      Models::GetTaskStatisticsResponse getTaskStatistics(const string &TenantId, const string &TaskId, const Models::GetTaskStatisticsRequest &request);

      /**
       * @summary Query the current status of a job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatusWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the current status of a job.
       *
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatus(const string &TenantId, const string &TaskId);

      /**
       * @summary Query the current template information of a job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskTemplateResponse
       */
      Models::GetTaskTemplateResponse getTaskTemplateWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the current template information of a job.
       *
       * @return GetTaskTemplateResponse
       */
      Models::GetTaskTemplateResponse getTaskTemplate(const string &TenantId, const string &TaskId);

      /**
       * @summary Query job template questions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskTemplateQuestionsResponse
       */
      Models::GetTaskTemplateQuestionsResponse getTaskTemplateQuestionsWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query job template questions.
       *
       * @return GetTaskTemplateQuestionsResponse
       */
      Models::GetTaskTemplateQuestionsResponse getTaskTemplateQuestions(const string &TenantId, const string &TaskId);

      /**
       * @summary Query the data display information in the job template.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskTemplateViewsResponse
       */
      Models::GetTaskTemplateViewsResponse getTaskTemplateViewsWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the data display information in the job template.
       *
       * @return GetTaskTemplateViewsResponse
       */
      Models::GetTaskTemplateViewsResponse getTaskTemplateViews(const string &TenantId, const string &TaskId);

      /**
       * @summary Query the personnel configuration information of each node in a job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskWorkforceResponse
       */
      Models::GetTaskWorkforceResponse getTaskWorkforceWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the personnel configuration information of each node in a job.
       *
       * @return GetTaskWorkforceResponse
       */
      Models::GetTaskWorkforceResponse getTaskWorkforce(const string &TenantId, const string &TaskId);

      /**
       * @summary Query statistics of each member in a job.
       *
       * @param request GetTaskWorkforceStatisticRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskWorkforceStatisticResponse
       */
      Models::GetTaskWorkforceStatisticResponse getTaskWorkforceStatisticWithOptions(const string &TenantId, const string &TaskId, const Models::GetTaskWorkforceStatisticRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query statistics of each member in a job.
       *
       * @param request GetTaskWorkforceStatisticRequest
       * @return GetTaskWorkforceStatisticResponse
       */
      Models::GetTaskWorkforceStatisticResponse getTaskWorkforceStatistic(const string &TenantId, const string &TaskId, const Models::GetTaskWorkforceStatisticRequest &request);

      /**
       * @summary Query template information under a tenant.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const string &TenantId, const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query template information under a tenant.
       *
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const string &TenantId, const string &TemplateId);

      /**
       * @summary Query question information such as Radio and Multiple Choice in a template.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateQuestionsResponse
       */
      Models::GetTemplateQuestionsResponse getTemplateQuestionsWithOptions(const string &TenantId, const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query question information such as Radio and Multiple Choice in a template.
       *
       * @return GetTemplateQuestionsResponse
       */
      Models::GetTemplateQuestionsResponse getTemplateQuestions(const string &TenantId, const string &TemplateId);

      /**
       * @summary Query the display information such as images, text, and audio in the template.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateViewResponse
       */
      Models::GetTemplateViewResponse getTemplateViewWithOptions(const string &TenantId, const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the display information such as images, text, and audio in the template.
       *
       * @return GetTemplateViewResponse
       */
      Models::GetTemplateViewResponse getTemplateView(const string &TenantId, const string &TemplateId);

      /**
       * @summary Query information about the iTAG tenant.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTenantResponse
       */
      Models::GetTenantResponse getTenantWithOptions(const string &TenantId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query information about the iTAG tenant.
       *
       * @return GetTenantResponse
       */
      Models::GetTenantResponse getTenant(const string &TenantId);

      /**
       * @summary Query the details of a single member in a tenant.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const string &TenantId, const string &UserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of a single member in a tenant.
       *
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const string &TenantId, const string &UserId);

      /**
       * @summary Displays a list of all exported annotation results.
       *
       * @param request ListJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const string &TenantId, const Models::ListJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays a list of all exported annotation results.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const string &TenantId, const Models::ListJobsRequest &request);

      /**
       * @summary Display the annotation data of a single subtask package.
       *
       * @param request ListSubtaskItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubtaskItemsResponse
       */
      Models::ListSubtaskItemsResponse listSubtaskItemsWithOptions(const string &TenantId, const string &TaskID, const string &SubtaskId, const Models::ListSubtaskItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Display the annotation data of a single subtask package.
       *
       * @param request ListSubtaskItemsRequest
       * @return ListSubtaskItemsResponse
       */
      Models::ListSubtaskItemsResponse listSubtaskItems(const string &TenantId, const string &TaskID, const string &SubtaskId, const Models::ListSubtaskItemsRequest &request);

      /**
       * @summary Displays the list of subtask packages.
       *
       * @param request ListSubtasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubtasksResponse
       */
      Models::ListSubtasksResponse listSubtasksWithOptions(const string &TenantId, const string &TaskID, const Models::ListSubtasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays the list of subtask packages.
       *
       * @param request ListSubtasksRequest
       * @return ListSubtasksResponse
       */
      Models::ListSubtasksResponse listSubtasks(const string &TenantId, const string &TaskID, const Models::ListSubtasksRequest &request);

      /**
       * @summary Displays the list of annotation jobs for the current tenant.
       *
       * @param request ListTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const string &TenantId, const Models::ListTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays the list of annotation jobs for the current tenant.
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const string &TenantId, const Models::ListTasksRequest &request);

      /**
       * @summary Display the template list of the current tenant.
       *
       * @param tmpReq ListTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplatesWithOptions(const string &TenantId, const Models::ListTemplatesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Display the template list of the current tenant.
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const string &TenantId, const Models::ListTemplatesRequest &request);

      /**
       * @summary Query iTAG tenants under an Alibaba Cloud account.
       *
       * @param request ListTenantsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTenantsResponse
       */
      Models::ListTenantsResponse listTenantsWithOptions(const Models::ListTenantsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query iTAG tenants under an Alibaba Cloud account.
       *
       * @param request ListTenantsRequest
       * @return ListTenantsResponse
       */
      Models::ListTenantsResponse listTenants(const Models::ListTenantsRequest &request);

      /**
       * @summary Displays all annotate members under the current tenant.
       *
       * @param request ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const string &TenantId, const Models::ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays all annotate members under the current tenant.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const string &TenantId, const Models::ListUsersRequest &request);

      /**
       * @summary Delete Node Personnel
       *
       * @param request RemoveWorkNodeWorkforceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveWorkNodeWorkforceResponse
       */
      Models::RemoveWorkNodeWorkforceResponse removeWorkNodeWorkforceWithOptions(const string &TenantId, const string &TaskId, const string &WorkNodeId, const Models::RemoveWorkNodeWorkforceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Node Personnel
       *
       * @param request RemoveWorkNodeWorkforceRequest
       * @return RemoveWorkNodeWorkforceResponse
       */
      Models::RemoveWorkNodeWorkforceResponse removeWorkNodeWorkforce(const string &TenantId, const string &TaskId, const string &WorkNodeId, const Models::RemoveWorkNodeWorkforceRequest &request);

      /**
       * @summary Modify a job under the current tenant.
       *
       * @param request UpdateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskResponse
       */
      Models::UpdateTaskResponse updateTaskWithOptions(const string &TenantId, const string &TaskId, const Models::UpdateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify a job under the current tenant.
       *
       * @param request UpdateTaskRequest
       * @return UpdateTaskResponse
       */
      Models::UpdateTaskResponse updateTask(const string &TenantId, const string &TaskId, const Models::UpdateTaskRequest &request);

      /**
       * @summary Update job members.
       *
       * @param request UpdateTaskWorkforceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskWorkforceResponse
       */
      Models::UpdateTaskWorkforceResponse updateTaskWorkforceWithOptions(const string &TenantId, const string &TaskId, const Models::UpdateTaskWorkforceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update job members.
       *
       * @param request UpdateTaskWorkforceRequest
       * @return UpdateTaskWorkforceResponse
       */
      Models::UpdateTaskWorkforceResponse updateTaskWorkforce(const string &TenantId, const string &TaskId, const Models::UpdateTaskWorkforceRequest &request);

      /**
       * @summary Modify the template under the current tenant.
       *
       * @param request UpdateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &TenantId, const string &TemplateId, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the template under the current tenant.
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &TenantId, const string &TemplateId, const Models::UpdateTemplateRequest &request);

      /**
       * @summary Modify the information of an iTAG tenant.
       *
       * @param request UpdateTenantRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTenantResponse
       */
      Models::UpdateTenantResponse updateTenantWithOptions(const string &TenantId, const Models::UpdateTenantRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the information of an iTAG tenant.
       *
       * @param request UpdateTenantRequest
       * @return UpdateTenantResponse
       */
      Models::UpdateTenantResponse updateTenant(const string &TenantId, const Models::UpdateTenantRequest &request);

      /**
       * @summary Update member information within a tenant.
       *
       * @param request UpdateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const string &TenantId, const string &UserId, const Models::UpdateUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update member information within a tenant.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const string &TenantId, const string &UserId, const Models::UpdateUserRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
