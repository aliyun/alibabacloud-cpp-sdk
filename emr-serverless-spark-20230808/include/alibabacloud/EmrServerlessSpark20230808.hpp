// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EMRSERVERLESSSPARK20230808_HPP_
#define ALIBABACLOUD_EMRSERVERLESSSPARK20230808_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EmrServerlessSpark20230808Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EmrServerlessSpark20230808.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a RAM user or RAM role to a workspace as a member.
       *
       * @param request AddMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMembersResponse
       */
      Models::AddMembersResponse addMembersWithOptions(const Models::AddMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a RAM user or RAM role to a workspace as a member.
       *
       * @param request AddMembersRequest
       * @return AddMembersResponse
       */
      Models::AddMembersResponse addMembers(const Models::AddMembersRequest &request);

      /**
       * @summary Terminates a Spark job.
       *
       * @param request CancelJobRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelJobRunResponse
       */
      Models::CancelJobRunResponse cancelJobRunWithOptions(const string &workspaceId, const string &jobRunId, const Models::CancelJobRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a Spark job.
       *
       * @param request CancelJobRunRequest
       * @return CancelJobRunResponse
       */
      Models::CancelJobRunResponse cancelJobRun(const string &workspaceId, const string &jobRunId, const Models::CancelJobRunRequest &request);

      /**
       * @summary CancelKyuubiSparkApplication
       *
       * @param request CancelKyuubiSparkApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelKyuubiSparkApplicationResponse
       */
      Models::CancelKyuubiSparkApplicationResponse cancelKyuubiSparkApplicationWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &applicationId, const Models::CancelKyuubiSparkApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CancelKyuubiSparkApplication
       *
       * @param request CancelKyuubiSparkApplicationRequest
       * @return CancelKyuubiSparkApplicationResponse
       */
      Models::CancelKyuubiSparkApplicationResponse cancelKyuubiSparkApplication(const string &workspaceId, const string &kyuubiServiceId, const string &applicationId, const Models::CancelKyuubiSparkApplicationRequest &request);

      /**
       * @summary CreateKyuubiService
       *
       * @param request CreateKyuubiServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKyuubiServiceResponse
       */
      Models::CreateKyuubiServiceResponse createKyuubiServiceWithOptions(const string &workspaceId, const Models::CreateKyuubiServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateKyuubiService
       *
       * @param request CreateKyuubiServiceRequest
       * @return CreateKyuubiServiceResponse
       */
      Models::CreateKyuubiServiceResponse createKyuubiService(const string &workspaceId, const Models::CreateKyuubiServiceRequest &request);

      /**
       * @summary 创建kyuubi的token
       *
       * @param request CreateKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKyuubiTokenResponse
       */
      Models::CreateKyuubiTokenResponse createKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const Models::CreateKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建kyuubi的token
       *
       * @param request CreateKyuubiTokenRequest
       * @return CreateKyuubiTokenResponse
       */
      Models::CreateKyuubiTokenResponse createKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const Models::CreateKyuubiTokenRequest &request);

      /**
       * @summary 创建Livy compute
       *
       * @param request CreateLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivyComputeResponse
       */
      Models::CreateLivyComputeResponse createLivyComputeWithOptions(const string &workspaceBizId, const Models::CreateLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Livy compute
       *
       * @param request CreateLivyComputeRequest
       * @return CreateLivyComputeResponse
       */
      Models::CreateLivyComputeResponse createLivyCompute(const string &workspaceBizId, const Models::CreateLivyComputeRequest &request);

      /**
       * @summary 创建Livy Compute的token
       *
       * @param request CreateLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivyComputeTokenResponse
       */
      Models::CreateLivyComputeTokenResponse createLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::CreateLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Livy Compute的token
       *
       * @param request CreateLivyComputeTokenRequest
       * @return CreateLivyComputeTokenResponse
       */
      Models::CreateLivyComputeTokenResponse createLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const Models::CreateLivyComputeTokenRequest &request);

      /**
       * @summary Creates a workflow.
       *
       * @param tmpReq CreateProcessDefinitionWithScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProcessDefinitionWithScheduleResponse
       */
      Models::CreateProcessDefinitionWithScheduleResponse createProcessDefinitionWithScheduleWithOptions(const string &bizId, const Models::CreateProcessDefinitionWithScheduleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow.
       *
       * @param request CreateProcessDefinitionWithScheduleRequest
       * @return CreateProcessDefinitionWithScheduleResponse
       */
      Models::CreateProcessDefinitionWithScheduleResponse createProcessDefinitionWithSchedule(const string &bizId, const Models::CreateProcessDefinitionWithScheduleRequest &request);

      /**
       * @summary 创建Ray集群
       *
       * @param request CreateRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRayClusterResponse
       */
      Models::CreateRayClusterResponse createRayClusterWithOptions(const string &workspaceId, const Models::CreateRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Ray集群
       *
       * @param request CreateRayClusterRequest
       * @return CreateRayClusterResponse
       */
      Models::CreateRayClusterResponse createRayCluster(const string &workspaceId, const Models::CreateRayClusterRequest &request);

      /**
       * @summary Creates a session.
       *
       * @param request CreateSessionClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSessionClusterResponse
       */
      Models::CreateSessionClusterResponse createSessionClusterWithOptions(const string &workspaceId, const Models::CreateSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a session.
       *
       * @param request CreateSessionClusterRequest
       * @return CreateSessionClusterResponse
       */
      Models::CreateSessionClusterResponse createSessionCluster(const string &workspaceId, const Models::CreateSessionClusterRequest &request);

      /**
       * @summary Creates an SQL query task.
       *
       * @param request CreateSqlStatementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSqlStatementResponse
       */
      Models::CreateSqlStatementResponse createSqlStatementWithOptions(const string &workspaceId, const Models::CreateSqlStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an SQL query task.
       *
       * @param request CreateSqlStatementRequest
       * @return CreateSqlStatementResponse
       */
      Models::CreateSqlStatementResponse createSqlStatement(const string &workspaceId, const Models::CreateSqlStatementRequest &request);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary DeleteKyuubiService
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKyuubiServiceResponse
       */
      Models::DeleteKyuubiServiceResponse deleteKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteKyuubiService
       *
       * @return DeleteKyuubiServiceResponse
       */
      Models::DeleteKyuubiServiceResponse deleteKyuubiService(const string &workspaceId, const string &kyuubiServiceId);

      /**
       * @summary 删除compute的token
       *
       * @param request DeleteKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKyuubiTokenResponse
       */
      Models::DeleteKyuubiTokenResponse deleteKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::DeleteKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除compute的token
       *
       * @param request DeleteKyuubiTokenRequest
       * @return DeleteKyuubiTokenResponse
       */
      Models::DeleteKyuubiTokenResponse deleteKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::DeleteKyuubiTokenRequest &request);

      /**
       * @summary 删除livy compute
       *
       * @param request DeleteLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivyComputeResponse
       */
      Models::DeleteLivyComputeResponse deleteLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::DeleteLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除livy compute
       *
       * @param request DeleteLivyComputeRequest
       * @return DeleteLivyComputeResponse
       */
      Models::DeleteLivyComputeResponse deleteLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::DeleteLivyComputeRequest &request);

      /**
       * @summary 删除Livy Compute的token
       *
       * @param request DeleteLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivyComputeTokenResponse
       */
      Models::DeleteLivyComputeTokenResponse deleteLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::DeleteLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Livy Compute的token
       *
       * @param request DeleteLivyComputeTokenRequest
       * @return DeleteLivyComputeTokenResponse
       */
      Models::DeleteLivyComputeTokenResponse deleteLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::DeleteLivyComputeTokenRequest &request);

      /**
       * @summary 删除Ray集群
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRayClusterResponse
       */
      Models::DeleteRayClusterResponse deleteRayClusterWithOptions(const string &workspaceId, const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Ray集群
       *
       * @return DeleteRayClusterResponse
       */
      Models::DeleteRayClusterResponse deleteRayCluster(const string &workspaceId, const string &clusterId);

      /**
       * @summary Modifies the queue of a workspace.
       *
       * @param request EditWorkspaceQueueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditWorkspaceQueueResponse
       */
      Models::EditWorkspaceQueueResponse editWorkspaceQueueWithOptions(const Models::EditWorkspaceQueueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the queue of a workspace.
       *
       * @param request EditWorkspaceQueueRequest
       * @return EditWorkspaceQueueResponse
       */
      Models::EditWorkspaceQueueResponse editWorkspaceQueue(const Models::EditWorkspaceQueueRequest &request);

      /**
       * @summary 上线工作流及其调度
       *
       * @param request GenerateTaskCodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTaskCodesResponse
       */
      Models::GenerateTaskCodesResponse generateTaskCodesWithOptions(const string &bizId, const Models::GenerateTaskCodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线工作流及其调度
       *
       * @param request GenerateTaskCodesRequest
       * @return GenerateTaskCodesResponse
       */
      Models::GenerateTaskCodesResponse generateTaskCodes(const string &bizId, const Models::GenerateTaskCodesRequest &request);

      /**
       * @summary Queries the number of CU-hours consumed by a queue during a specified cycle.
       *
       * @param request GetCuHoursRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCuHoursResponse
       */
      Models::GetCuHoursResponse getCuHoursWithOptions(const string &workspaceId, const string &queue, const Models::GetCuHoursRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of CU-hours consumed by a queue during a specified cycle.
       *
       * @param request GetCuHoursRequest
       * @return GetCuHoursResponse
       */
      Models::GetCuHoursResponse getCuHours(const string &workspaceId, const string &queue, const Models::GetCuHoursRequest &request);

      /**
       * @summary Obtains job analysis information on E-MapReduce (EMR) Doctor.
       *
       * @param request GetDoctorApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorApplicationResponse
       */
      Models::GetDoctorApplicationResponse getDoctorApplicationWithOptions(const string &workspaceId, const string &runId, const Models::GetDoctorApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains job analysis information on E-MapReduce (EMR) Doctor.
       *
       * @param request GetDoctorApplicationRequest
       * @return GetDoctorApplicationResponse
       */
      Models::GetDoctorApplicationResponse getDoctorApplication(const string &workspaceId, const string &runId, const Models::GetDoctorApplicationRequest &request);

      /**
       * @summary Obtain the job details.
       *
       * @param request GetJobRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobRunResponse
       */
      Models::GetJobRunResponse getJobRunWithOptions(const string &workspaceId, const string &jobRunId, const Models::GetJobRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the job details.
       *
       * @param request GetJobRunRequest
       * @return GetJobRunResponse
       */
      Models::GetJobRunResponse getJobRun(const string &workspaceId, const string &jobRunId, const Models::GetJobRunRequest &request);

      /**
       * @summary GetKyuubiService
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKyuubiServiceResponse
       */
      Models::GetKyuubiServiceResponse getKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetKyuubiService
       *
       * @return GetKyuubiServiceResponse
       */
      Models::GetKyuubiServiceResponse getKyuubiService(const string &workspaceId, const string &kyuubiServiceId);

      /**
       * @summary 获取compute的token
       *
       * @param request GetKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKyuubiTokenResponse
       */
      Models::GetKyuubiTokenResponse getKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::GetKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取compute的token
       *
       * @param request GetKyuubiTokenRequest
       * @return GetKyuubiTokenResponse
       */
      Models::GetKyuubiTokenResponse getKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::GetKyuubiTokenRequest &request);

      /**
       * @summary 获取livy compute
       *
       * @param request GetLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLivyComputeResponse
       */
      Models::GetLivyComputeResponse getLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::GetLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取livy compute
       *
       * @param request GetLivyComputeRequest
       * @return GetLivyComputeResponse
       */
      Models::GetLivyComputeResponse getLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::GetLivyComputeRequest &request);

      /**
       * @summary 获取livy compute token
       *
       * @param request GetLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLivyComputeTokenResponse
       */
      Models::GetLivyComputeTokenResponse getLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::GetLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取livy compute token
       *
       * @param request GetLivyComputeTokenRequest
       * @return GetLivyComputeTokenResponse
       */
      Models::GetLivyComputeTokenResponse getLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::GetLivyComputeTokenRequest &request);

      /**
       * @summary 获取Ray集群
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRayClusterResponse
       */
      Models::GetRayClusterResponse getRayClusterWithOptions(const string &workspaceId, const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Ray集群
       *
       * @return GetRayClusterResponse
       */
      Models::GetRayClusterResponse getRayCluster(const string &workspaceId, const string &clusterId);

      /**
       * @summary 获取任务配置
       *
       * @param request GetRunConfigurationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRunConfigurationResponse
       */
      Models::GetRunConfigurationResponse getRunConfigurationWithOptions(const string &workspaceId, const string &runId, const Models::GetRunConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务配置
       *
       * @param request GetRunConfigurationRequest
       * @return GetRunConfigurationResponse
       */
      Models::GetRunConfigurationResponse getRunConfiguration(const string &workspaceId, const string &runId, const Models::GetRunConfigurationRequest &request);

      /**
       * @summary Queries the information about a session.
       *
       * @param request GetSessionClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSessionClusterResponse
       */
      Models::GetSessionClusterResponse getSessionClusterWithOptions(const string &workspaceId, const string &sessionClusterId, const Models::GetSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a session.
       *
       * @param request GetSessionClusterRequest
       * @return GetSessionClusterResponse
       */
      Models::GetSessionClusterResponse getSessionCluster(const string &workspaceId, const string &sessionClusterId, const Models::GetSessionClusterRequest &request);

      /**
       * @summary Queries the status of an SQL query task.
       *
       * @param request GetSqlStatementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSqlStatementResponse
       */
      Models::GetSqlStatementResponse getSqlStatementWithOptions(const string &workspaceId, const string &statementId, const Models::GetSqlStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an SQL query task.
       *
       * @param request GetSqlStatementRequest
       * @return GetSqlStatementResponse
       */
      Models::GetSqlStatementResponse getSqlStatement(const string &workspaceId, const string &statementId, const Models::GetSqlStatementRequest &request);

      /**
       * @summary Queries task templates.
       *
       * @param request GetTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const string &workspaceBizId, const Models::GetTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries task templates.
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const string &workspaceBizId, const Models::GetTemplateRequest &request);

      /**
       * @summary Assigns a specified role to users.
       *
       * @param request GrantRoleToUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantRoleToUsersResponse
       */
      Models::GrantRoleToUsersResponse grantRoleToUsersWithOptions(const Models::GrantRoleToUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns a specified role to users.
       *
       * @param request GrantRoleToUsersRequest
       * @return GrantRoleToUsersResponse
       */
      Models::GrantRoleToUsersResponse grantRoleToUsers(const Models::GrantRoleToUsersRequest &request);

      /**
       * @summary 查看数据目录列表
       *
       * @param request ListCatalogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogsWithOptions(const string &workspaceId, const Models::ListCatalogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看数据目录列表
       *
       * @param request ListCatalogsRequest
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogs(const string &workspaceId, const Models::ListCatalogsRequest &request);

      /**
       * @summary 列出作业的executors
       *
       * @param request ListJobExecutorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutorsWithOptions(const string &workspaceId, const string &jobRunId, const Models::ListJobExecutorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出作业的executors
       *
       * @param request ListJobExecutorsRequest
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutors(const string &workspaceId, const string &jobRunId, const Models::ListJobExecutorsRequest &request);

      /**
       * @summary Queries a list of Spark jobs.
       *
       * @param tmpReq ListJobRunsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobRunsResponse
       */
      Models::ListJobRunsResponse listJobRunsWithOptions(const string &workspaceId, const Models::ListJobRunsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Spark jobs.
       *
       * @param request ListJobRunsRequest
       * @return ListJobRunsResponse
       */
      Models::ListJobRunsResponse listJobRuns(const string &workspaceId, const Models::ListJobRunsRequest &request);

      /**
       * @summary ListKyuubiServices
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKyuubiServicesResponse
       */
      Models::ListKyuubiServicesResponse listKyuubiServicesWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListKyuubiServices
       *
       * @return ListKyuubiServicesResponse
       */
      Models::ListKyuubiServicesResponse listKyuubiServices(const string &workspaceId);

      /**
       * @summary Queries the applications that are submitted by using a Kyuubi gateway.
       *
       * @param tmpReq ListKyuubiSparkApplicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKyuubiSparkApplicationsResponse
       */
      Models::ListKyuubiSparkApplicationsResponse listKyuubiSparkApplicationsWithOptions(const string &workspaceId, const string &kyuubiServiceId, const Models::ListKyuubiSparkApplicationsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications that are submitted by using a Kyuubi gateway.
       *
       * @param request ListKyuubiSparkApplicationsRequest
       * @return ListKyuubiSparkApplicationsResponse
       */
      Models::ListKyuubiSparkApplicationsResponse listKyuubiSparkApplications(const string &workspaceId, const string &kyuubiServiceId, const Models::ListKyuubiSparkApplicationsRequest &request);

      /**
       * @summary 列出compute的token
       *
       * @param request ListKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKyuubiTokenResponse
       */
      Models::ListKyuubiTokenResponse listKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const Models::ListKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出compute的token
       *
       * @param request ListKyuubiTokenRequest
       * @return ListKyuubiTokenResponse
       */
      Models::ListKyuubiTokenResponse listKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const Models::ListKyuubiTokenRequest &request);

      /**
       * @summary 列出livy compute
       *
       * @param request ListLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLivyComputeResponse
       */
      Models::ListLivyComputeResponse listLivyComputeWithOptions(const string &workspaceBizId, const Models::ListLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出livy compute
       *
       * @param request ListLivyComputeRequest
       * @return ListLivyComputeResponse
       */
      Models::ListLivyComputeResponse listLivyCompute(const string &workspaceBizId, const Models::ListLivyComputeRequest &request);

      /**
       * @summary 获取livy gateway历史session
       *
       * @param request ListLivyComputeSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLivyComputeSessionsResponse
       */
      Models::ListLivyComputeSessionsResponse listLivyComputeSessionsWithOptions(const string &workspaceId, const string &livyComputeId, const Models::ListLivyComputeSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取livy gateway历史session
       *
       * @param request ListLivyComputeSessionsRequest
       * @return ListLivyComputeSessionsResponse
       */
      Models::ListLivyComputeSessionsResponse listLivyComputeSessions(const string &workspaceId, const string &livyComputeId, const Models::ListLivyComputeSessionsRequest &request);

      /**
       * @summary 列出livy compute token
       *
       * @param request ListLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLivyComputeTokenResponse
       */
      Models::ListLivyComputeTokenResponse listLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::ListLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出livy compute token
       *
       * @param request ListLivyComputeTokenRequest
       * @return ListLivyComputeTokenResponse
       */
      Models::ListLivyComputeTokenResponse listLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const Models::ListLivyComputeTokenRequest &request);

      /**
       * @summary Get Log Content
       *
       * @param request ListLogContentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogContentsResponse
       */
      Models::ListLogContentsResponse listLogContentsWithOptions(const string &workspaceId, const Models::ListLogContentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Log Content
       *
       * @param request ListLogContentsRequest
       * @return ListLogContentsResponse
       */
      Models::ListLogContentsResponse listLogContents(const string &workspaceId, const Models::ListLogContentsRequest &request);

      /**
       * @summary 查询用户列表
       *
       * @param request ListMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMembersResponse
       */
      Models::ListMembersResponse listMembersWithOptions(const string &workspaceId, const Models::ListMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户列表
       *
       * @param request ListMembersRequest
       * @return ListMembersResponse
       */
      Models::ListMembersResponse listMembers(const string &workspaceId, const Models::ListMembersRequest &request);

      /**
       * @summary 列出Ray集群
       *
       * @param request ListRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRayClusterResponse
       */
      Models::ListRayClusterResponse listRayClusterWithOptions(const string &workspaceId, const Models::ListRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出Ray集群
       *
       * @param request ListRayClusterRequest
       * @return ListRayClusterResponse
       */
      Models::ListRayClusterResponse listRayCluster(const string &workspaceId, const Models::ListRayClusterRequest &request);

      /**
       * @summary Queries the list of published versions of E-MapReduce (EMR) Serverless Spark.
       *
       * @param request ListReleaseVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReleaseVersionsResponse
       */
      Models::ListReleaseVersionsResponse listReleaseVersionsWithOptions(const Models::ListReleaseVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of published versions of E-MapReduce (EMR) Serverless Spark.
       *
       * @param request ListReleaseVersionsRequest
       * @return ListReleaseVersionsResponse
       */
      Models::ListReleaseVersionsResponse listReleaseVersions(const Models::ListReleaseVersionsRequest &request);

      /**
       * @summary Queries the list of sessions.
       *
       * @param request ListSessionClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSessionClustersResponse
       */
      Models::ListSessionClustersResponse listSessionClustersWithOptions(const string &workspaceId, const Models::ListSessionClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of sessions.
       *
       * @param request ListSessionClustersRequest
       * @return ListSessionClustersResponse
       */
      Models::ListSessionClustersResponse listSessionClusters(const string &workspaceId, const Models::ListSessionClustersRequest &request);

      /**
       * @summary 获取sql statement内容
       *
       * @param request ListSqlStatementContentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSqlStatementContentsResponse
       */
      Models::ListSqlStatementContentsResponse listSqlStatementContentsWithOptions(const string &workspaceId, const Models::ListSqlStatementContentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取sql statement内容
       *
       * @param request ListSqlStatementContentsRequest
       * @return ListSqlStatementContentsResponse
       */
      Models::ListSqlStatementContentsResponse listSqlStatementContents(const string &workspaceId, const Models::ListSqlStatementContentsRequest &request);

      /**
       * @summary 获取任务模板列表
       *
       * @param request ListTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplateResponse
       */
      Models::ListTemplateResponse listTemplateWithOptions(const string &workspaceBizId, const Models::ListTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务模板列表
       *
       * @param request ListTemplateRequest
       * @return ListTemplateResponse
       */
      Models::ListTemplateResponse listTemplate(const string &workspaceBizId, const Models::ListTemplateRequest &request);

      /**
       * @summary Queries the list of queues in a Spark workspace.
       *
       * @param request ListWorkspaceQueuesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspaceQueuesResponse
       */
      Models::ListWorkspaceQueuesResponse listWorkspaceQueuesWithOptions(const string &workspaceId, const Models::ListWorkspaceQueuesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of queues in a Spark workspace.
       *
       * @param request ListWorkspaceQueuesRequest
       * @return ListWorkspaceQueuesResponse
       */
      Models::ListWorkspaceQueuesResponse listWorkspaceQueues(const string &workspaceId, const Models::ListWorkspaceQueuesRequest &request);

      /**
       * @summary Queries a list of workspaces.
       *
       * @param tmpReq ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workspaces.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary 更新Livy Compute的token
       *
       * @param request RefreshLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshLivyComputeTokenResponse
       */
      Models::RefreshLivyComputeTokenResponse refreshLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::RefreshLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Livy Compute的token
       *
       * @param request RefreshLivyComputeTokenRequest
       * @return RefreshLivyComputeTokenResponse
       */
      Models::RefreshLivyComputeTokenResponse refreshLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::RefreshLivyComputeTokenRequest &request);

      /**
       * @summary Starts a Spark job.
       *
       * @param request StartJobRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartJobRunResponse
       */
      Models::StartJobRunResponse startJobRunWithOptions(const string &workspaceId, const Models::StartJobRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a Spark job.
       *
       * @param request StartJobRunRequest
       * @return StartJobRunResponse
       */
      Models::StartJobRunResponse startJobRun(const string &workspaceId, const Models::StartJobRunRequest &request);

      /**
       * @summary StartKyuubiService
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartKyuubiServiceResponse
       */
      Models::StartKyuubiServiceResponse startKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StartKyuubiService
       *
       * @return StartKyuubiServiceResponse
       */
      Models::StartKyuubiServiceResponse startKyuubiService(const string &workspaceId, const string &kyuubiServiceId);

      /**
       * @summary 启动livy compute
       *
       * @param request StartLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLivyComputeResponse
       */
      Models::StartLivyComputeResponse startLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::StartLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动livy compute
       *
       * @param request StartLivyComputeRequest
       * @return StartLivyComputeResponse
       */
      Models::StartLivyComputeResponse startLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::StartLivyComputeRequest &request);

      /**
       * @summary Manually runs a workflow.
       *
       * @param request StartProcessInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartProcessInstanceResponse
       */
      Models::StartProcessInstanceResponse startProcessInstanceWithOptions(const string &bizId, const Models::StartProcessInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually runs a workflow.
       *
       * @param request StartProcessInstanceRequest
       * @return StartProcessInstanceResponse
       */
      Models::StartProcessInstanceResponse startProcessInstance(const string &bizId, const Models::StartProcessInstanceRequest &request);

      /**
       * @summary 启动Ray集群
       *
       * @param request StartRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRayClusterResponse
       */
      Models::StartRayClusterResponse startRayClusterWithOptions(const string &workspaceId, const string &clusterId, const Models::StartRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动Ray集群
       *
       * @param request StartRayClusterRequest
       * @return StartRayClusterResponse
       */
      Models::StartRayClusterResponse startRayCluster(const string &workspaceId, const string &clusterId, const Models::StartRayClusterRequest &request);

      /**
       * @summary Starts a session.
       *
       * @param request StartSessionClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSessionClusterResponse
       */
      Models::StartSessionClusterResponse startSessionClusterWithOptions(const string &workspaceId, const Models::StartSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a session.
       *
       * @param request StartSessionClusterRequest
       * @return StartSessionClusterResponse
       */
      Models::StartSessionClusterResponse startSessionCluster(const string &workspaceId, const Models::StartSessionClusterRequest &request);

      /**
       * @summary StopKyuubiService
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopKyuubiServiceResponse
       */
      Models::StopKyuubiServiceResponse stopKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StopKyuubiService
       *
       * @return StopKyuubiServiceResponse
       */
      Models::StopKyuubiServiceResponse stopKyuubiService(const string &workspaceId, const string &kyuubiServiceId);

      /**
       * @summary 停止livy compute
       *
       * @param request StopLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLivyComputeResponse
       */
      Models::StopLivyComputeResponse stopLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::StopLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止livy compute
       *
       * @param request StopLivyComputeRequest
       * @return StopLivyComputeResponse
       */
      Models::StopLivyComputeResponse stopLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::StopLivyComputeRequest &request);

      /**
       * @summary 停止Ray集群
       *
       * @param request StopRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRayClusterResponse
       */
      Models::StopRayClusterResponse stopRayClusterWithOptions(const string &workspaceId, const string &clusterId, const Models::StopRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止Ray集群
       *
       * @param request StopRayClusterRequest
       * @return StopRayClusterResponse
       */
      Models::StopRayClusterResponse stopRayCluster(const string &workspaceId, const string &clusterId, const Models::StopRayClusterRequest &request);

      /**
       * @summary Stops a session.
       *
       * @param request StopSessionClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSessionClusterResponse
       */
      Models::StopSessionClusterResponse stopSessionClusterWithOptions(const string &workspaceId, const Models::StopSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a session.
       *
       * @param request StopSessionClusterRequest
       * @return StopSessionClusterResponse
       */
      Models::StopSessionClusterResponse stopSessionCluster(const string &workspaceId, const Models::StopSessionClusterRequest &request);

      /**
       * @summary Terminates an SQL query task.
       *
       * @param request TerminateSqlStatementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateSqlStatementResponse
       */
      Models::TerminateSqlStatementResponse terminateSqlStatementWithOptions(const string &workspaceId, const string &statementId, const Models::TerminateSqlStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates an SQL query task.
       *
       * @param request TerminateSqlStatementRequest
       * @return TerminateSqlStatementResponse
       */
      Models::TerminateSqlStatementResponse terminateSqlStatement(const string &workspaceId, const string &statementId, const Models::TerminateSqlStatementRequest &request);

      /**
       * @summary UpdateKyuubiService
       *
       * @param request UpdateKyuubiServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKyuubiServiceResponse
       */
      Models::UpdateKyuubiServiceResponse updateKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const Models::UpdateKyuubiServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateKyuubiService
       *
       * @param request UpdateKyuubiServiceRequest
       * @return UpdateKyuubiServiceResponse
       */
      Models::UpdateKyuubiServiceResponse updateKyuubiService(const string &workspaceId, const string &kyuubiServiceId, const Models::UpdateKyuubiServiceRequest &request);

      /**
       * @summary 更新kyuubi的token
       *
       * @param request UpdateKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKyuubiTokenResponse
       */
      Models::UpdateKyuubiTokenResponse updateKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::UpdateKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新kyuubi的token
       *
       * @param request UpdateKyuubiTokenRequest
       * @return UpdateKyuubiTokenResponse
       */
      Models::UpdateKyuubiTokenResponse updateKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::UpdateKyuubiTokenRequest &request);

      /**
       * @summary 更新livy compute
       *
       * @param request UpdateLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivyComputeResponse
       */
      Models::UpdateLivyComputeResponse updateLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::UpdateLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新livy compute
       *
       * @param request UpdateLivyComputeRequest
       * @return UpdateLivyComputeResponse
       */
      Models::UpdateLivyComputeResponse updateLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::UpdateLivyComputeRequest &request);

      /**
       * @summary Updates the workflow and time-based scheduling configurations.
       *
       * @param tmpReq UpdateProcessDefinitionWithScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProcessDefinitionWithScheduleResponse
       */
      Models::UpdateProcessDefinitionWithScheduleResponse updateProcessDefinitionWithScheduleWithOptions(const string &bizId, const string &code, const Models::UpdateProcessDefinitionWithScheduleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the workflow and time-based scheduling configurations.
       *
       * @param request UpdateProcessDefinitionWithScheduleRequest
       * @return UpdateProcessDefinitionWithScheduleResponse
       */
      Models::UpdateProcessDefinitionWithScheduleResponse updateProcessDefinitionWithSchedule(const string &bizId, const string &code, const Models::UpdateProcessDefinitionWithScheduleRequest &request);

      /**
       * @summary 更新Ray集群
       *
       * @param request UpdateRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRayClusterResponse
       */
      Models::UpdateRayClusterResponse updateRayClusterWithOptions(const string &workspaceId, const string &clusterId, const Models::UpdateRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Ray集群
       *
       * @param request UpdateRayClusterRequest
       * @return UpdateRayClusterResponse
       */
      Models::UpdateRayClusterResponse updateRayCluster(const string &workspaceId, const string &clusterId, const Models::UpdateRayClusterRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
