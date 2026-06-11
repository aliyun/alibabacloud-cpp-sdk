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
       * @summary Activates the AI center.
       *
       * @param request ActivateAICenterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateAICenterResponse
       */
      Models::ActivateAICenterResponse activateAICenterWithOptions(const string &workspaceId, const Models::ActivateAICenterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the AI center.
       *
       * @param request ActivateAICenterRequest
       * @return ActivateAICenterResponse
       */
      Models::ActivateAICenterResponse activateAICenter(const string &workspaceId, const Models::ActivateAICenterRequest &request);

      /**
       * @summary Adds a Resource Access Management (RAM) user or a RAM role to a workspace as a member.
       *
       * @param request AddMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMembersResponse
       */
      Models::AddMembersResponse addMembersWithOptions(const Models::AddMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Resource Access Management (RAM) user or a RAM role to a workspace as a member.
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
       * @summary Cancels a Kyuubi Spark application.
       *
       * @param request CancelKyuubiSparkApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelKyuubiSparkApplicationResponse
       */
      Models::CancelKyuubiSparkApplicationResponse cancelKyuubiSparkApplicationWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &applicationId, const Models::CancelKyuubiSparkApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a Kyuubi Spark application.
       *
       * @param request CancelKyuubiSparkApplicationRequest
       * @return CancelKyuubiSparkApplicationResponse
       */
      Models::CancelKyuubiSparkApplicationResponse cancelKyuubiSparkApplication(const string &workspaceId, const string &kyuubiServiceId, const string &applicationId, const Models::CancelKyuubiSparkApplicationRequest &request);

      /**
       * @summary 停止RayJob
       *
       * @param request CancelRayJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRayJobResponse
       */
      Models::CancelRayJobResponse cancelRayJobWithOptions(const string &workspaceId, const string &submissionId, const Models::CancelRayJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止RayJob
       *
       * @param request CancelRayJobRequest
       * @return CancelRayJobResponse
       */
      Models::CancelRayJobResponse cancelRayJob(const string &workspaceId, const string &submissionId, const Models::CancelRayJobRequest &request);

      /**
       * @summary Moves an instance to a different resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves an instance to a different resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates a Kyuubi gateway.
       *
       * @param request CreateKyuubiServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKyuubiServiceResponse
       */
      Models::CreateKyuubiServiceResponse createKyuubiServiceWithOptions(const string &workspaceId, const Models::CreateKyuubiServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Kyuubi gateway.
       *
       * @param request CreateKyuubiServiceRequest
       * @return CreateKyuubiServiceResponse
       */
      Models::CreateKyuubiServiceResponse createKyuubiService(const string &workspaceId, const Models::CreateKyuubiServiceRequest &request);

      /**
       * @summary Creates a Kyuubi Gateway authentication token.
       *
       * @param request CreateKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKyuubiTokenResponse
       */
      Models::CreateKyuubiTokenResponse createKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const Models::CreateKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Kyuubi Gateway authentication token.
       *
       * @param request CreateKyuubiTokenRequest
       * @return CreateKyuubiTokenResponse
       */
      Models::CreateKyuubiTokenResponse createKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const Models::CreateKyuubiTokenRequest &request);

      /**
       * @summary Creates a Livy compute.
       *
       * @param request CreateLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivyComputeResponse
       */
      Models::CreateLivyComputeResponse createLivyComputeWithOptions(const string &workspaceBizId, const Models::CreateLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Livy compute.
       *
       * @param request CreateLivyComputeRequest
       * @return CreateLivyComputeResponse
       */
      Models::CreateLivyComputeResponse createLivyCompute(const string &workspaceBizId, const Models::CreateLivyComputeRequest &request);

      /**
       * @summary Creates a token for a Livy Gateway.
       *
       * @param request CreateLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivyComputeTokenResponse
       */
      Models::CreateLivyComputeTokenResponse createLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::CreateLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a token for a Livy Gateway.
       *
       * @param request CreateLivyComputeTokenRequest
       * @return CreateLivyComputeTokenResponse
       */
      Models::CreateLivyComputeTokenResponse createLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const Models::CreateLivyComputeTokenRequest &request);

      /**
       * @summary Creates a network service.
       *
       * @param request CreateNetworkServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkServiceResponse
       */
      Models::CreateNetworkServiceResponse createNetworkServiceWithOptions(const string &workspaceId, const Models::CreateNetworkServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network service.
       *
       * @param request CreateNetworkServiceRequest
       * @return CreateNetworkServiceResponse
       */
      Models::CreateNetworkServiceResponse createNetworkService(const string &workspaceId, const Models::CreateNetworkServiceRequest &request);

      /**
       * @summary Creates a workflow definition.
       *
       * @param tmpReq CreateProcessDefinitionWithScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProcessDefinitionWithScheduleResponse
       */
      Models::CreateProcessDefinitionWithScheduleResponse createProcessDefinitionWithScheduleWithOptions(const string &bizId, const Models::CreateProcessDefinitionWithScheduleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow definition.
       *
       * @param request CreateProcessDefinitionWithScheduleRequest
       * @return CreateProcessDefinitionWithScheduleResponse
       */
      Models::CreateProcessDefinitionWithScheduleResponse createProcessDefinitionWithSchedule(const string &bizId, const Models::CreateProcessDefinitionWithScheduleRequest &request);

      /**
       * @summary Creates a Ray cluster.
       *
       * @param request CreateRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRayClusterResponse
       */
      Models::CreateRayClusterResponse createRayClusterWithOptions(const string &workspaceId, const Models::CreateRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Ray cluster.
       *
       * @param request CreateRayClusterRequest
       * @return CreateRayClusterResponse
       */
      Models::CreateRayClusterResponse createRayCluster(const string &workspaceId, const Models::CreateRayClusterRequest &request);

      /**
       * @summary Creates a session cluster.
       *
       * @param request CreateSessionClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSessionClusterResponse
       */
      Models::CreateSessionClusterResponse createSessionClusterWithOptions(const string &workspaceId, const Models::CreateSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a session cluster.
       *
       * @param request CreateSessionClusterRequest
       * @return CreateSessionClusterResponse
       */
      Models::CreateSessionClusterResponse createSessionCluster(const string &workspaceId, const Models::CreateSessionClusterRequest &request);

      /**
       * @summary Creates an SQL statement.
       *
       * @param request CreateSqlStatementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSqlStatementResponse
       */
      Models::CreateSqlStatementResponse createSqlStatementWithOptions(const string &workspaceId, const Models::CreateSqlStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an SQL statement.
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
       * @summary Deletes a Kyuubi gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKyuubiServiceResponse
       */
      Models::DeleteKyuubiServiceResponse deleteKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Kyuubi gateway.
       *
       * @return DeleteKyuubiServiceResponse
       */
      Models::DeleteKyuubiServiceResponse deleteKyuubiService(const string &workspaceId, const string &kyuubiServiceId);

      /**
       * @summary Deletes a Kyuubi Gateway authentication token.
       *
       * @param request DeleteKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKyuubiTokenResponse
       */
      Models::DeleteKyuubiTokenResponse deleteKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::DeleteKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Kyuubi Gateway authentication token.
       *
       * @param request DeleteKyuubiTokenRequest
       * @return DeleteKyuubiTokenResponse
       */
      Models::DeleteKyuubiTokenResponse deleteKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::DeleteKyuubiTokenRequest &request);

      /**
       * @summary Deletes a Livy gateway.
       *
       * @param request DeleteLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivyComputeResponse
       */
      Models::DeleteLivyComputeResponse deleteLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::DeleteLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Livy gateway.
       *
       * @param request DeleteLivyComputeRequest
       * @return DeleteLivyComputeResponse
       */
      Models::DeleteLivyComputeResponse deleteLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::DeleteLivyComputeRequest &request);

      /**
       * @summary Deletes a token for a Livy Gateway.
       *
       * @param request DeleteLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivyComputeTokenResponse
       */
      Models::DeleteLivyComputeTokenResponse deleteLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::DeleteLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a token for a Livy Gateway.
       *
       * @param request DeleteLivyComputeTokenRequest
       * @return DeleteLivyComputeTokenResponse
       */
      Models::DeleteLivyComputeTokenResponse deleteLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::DeleteLivyComputeTokenRequest &request);

      /**
       * @summary Deletes a Ray cluster.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRayClusterResponse
       */
      Models::DeleteRayClusterResponse deleteRayClusterWithOptions(const string &workspaceId, const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Ray cluster.
       *
       * @return DeleteRayClusterResponse
       */
      Models::DeleteRayClusterResponse deleteRayCluster(const string &workspaceId, const string &clusterId);

      /**
       * @summary Updates a Workspace Queue.
       *
       * @param request EditWorkspaceQueueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditWorkspaceQueueResponse
       */
      Models::EditWorkspaceQueueResponse editWorkspaceQueueWithOptions(const Models::EditWorkspaceQueueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Workspace Queue.
       *
       * @param request EditWorkspaceQueueRequest
       * @return EditWorkspaceQueueResponse
       */
      Models::EditWorkspaceQueueResponse editWorkspaceQueue(const Models::EditWorkspaceQueueRequest &request);

      /**
       * @summary Publishes a workflow and its scheduling configuration.
       *
       * @param request GenerateTaskCodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTaskCodesResponse
       */
      Models::GenerateTaskCodesResponse generateTaskCodesWithOptions(const string &bizId, const Models::GenerateTaskCodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a workflow and its scheduling configuration.
       *
       * @param request GenerateTaskCodesRequest
       * @return GenerateTaskCodesResponse
       */
      Models::GenerateTaskCodesResponse generateTaskCodes(const string &bizId, const Models::GenerateTaskCodesRequest &request);

      /**
       * @summary Gets the state of an AI center.
       *
       * @param request GetAICenterStateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAICenterStateResponse
       */
      Models::GetAICenterStateResponse getAICenterStateWithOptions(const string &workspaceId, const Models::GetAICenterStateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the state of an AI center.
       *
       * @param request GetAICenterStateRequest
       * @return GetAICenterStateResponse
       */
      Models::GetAICenterStateResponse getAICenterState(const string &workspaceId, const Models::GetAICenterStateRequest &request);

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
       * @summary Get the details of a job.
       *
       * @param request GetJobRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobRunResponse
       */
      Models::GetJobRunResponse getJobRunWithOptions(const string &workspaceId, const string &jobRunId, const Models::GetJobRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the details of a job.
       *
       * @param request GetJobRunRequest
       * @return GetJobRunResponse
       */
      Models::GetJobRunResponse getJobRun(const string &workspaceId, const string &jobRunId, const Models::GetJobRunRequest &request);

      /**
       * @summary Retrieves the details of a Kyuubi Gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKyuubiServiceResponse
       */
      Models::GetKyuubiServiceResponse getKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a Kyuubi Gateway.
       *
       * @return GetKyuubiServiceResponse
       */
      Models::GetKyuubiServiceResponse getKyuubiService(const string &workspaceId, const string &kyuubiServiceId);

      /**
       * @summary Obtains an authentication token for Kyuubi Gateway.
       *
       * @param request GetKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKyuubiTokenResponse
       */
      Models::GetKyuubiTokenResponse getKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::GetKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an authentication token for Kyuubi Gateway.
       *
       * @param request GetKyuubiTokenRequest
       * @return GetKyuubiTokenResponse
       */
      Models::GetKyuubiTokenResponse getKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::GetKyuubiTokenRequest &request);

      /**
       * @summary Retrieves information about a Livy Gateway.
       *
       * @param request GetLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLivyComputeResponse
       */
      Models::GetLivyComputeResponse getLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::GetLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a Livy Gateway.
       *
       * @param request GetLivyComputeRequest
       * @return GetLivyComputeResponse
       */
      Models::GetLivyComputeResponse getLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::GetLivyComputeRequest &request);

      /**
       * @summary Retrieves a token for a Livy Gateway.
       *
       * @param request GetLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLivyComputeTokenResponse
       */
      Models::GetLivyComputeTokenResponse getLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::GetLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a token for a Livy Gateway.
       *
       * @param request GetLivyComputeTokenRequest
       * @return GetLivyComputeTokenResponse
       */
      Models::GetLivyComputeTokenResponse getLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::GetLivyComputeTokenRequest &request);

      /**
       * @summary Retrieves the details of a Ray cluster, including its configuration, runtime state, node information, and connection endpoints.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRayClusterResponse
       */
      Models::GetRayClusterResponse getRayClusterWithOptions(const string &workspaceId, const string &clusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a Ray cluster, including its configuration, runtime state, node information, and connection endpoints.
       *
       * @return GetRayClusterResponse
       */
      Models::GetRayClusterResponse getRayCluster(const string &workspaceId, const string &clusterId);

      /**
       * @summary 获取Ray集群
       *
       * @param request GetRayJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRayJobResponse
       */
      Models::GetRayJobResponse getRayJobWithOptions(const string &workspaceId, const string &submissionId, const Models::GetRayJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Ray集群
       *
       * @param request GetRayJobRequest
       * @return GetRayJobResponse
       */
      Models::GetRayJobResponse getRayJob(const string &workspaceId, const string &submissionId, const Models::GetRayJobRequest &request);

      /**
       * @summary Retrieves the configuration of a Spark job.
       *
       * @param request GetRunConfigurationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRunConfigurationResponse
       */
      Models::GetRunConfigurationResponse getRunConfigurationWithOptions(const string &workspaceId, const string &runId, const Models::GetRunConfigurationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of a Spark job.
       *
       * @param request GetRunConfigurationRequest
       * @return GetRunConfigurationResponse
       */
      Models::GetRunConfigurationResponse getRunConfiguration(const string &workspaceId, const string &runId, const Models::GetRunConfigurationRequest &request);

      /**
       * @summary Retrieves session details.
       *
       * @param request GetSessionClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSessionClusterResponse
       */
      Models::GetSessionClusterResponse getSessionClusterWithOptions(const string &workspaceId, const string &sessionClusterId, const Models::GetSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves session details.
       *
       * @param request GetSessionClusterRequest
       * @return GetSessionClusterResponse
       */
      Models::GetSessionClusterResponse getSessionCluster(const string &workspaceId, const string &sessionClusterId, const Models::GetSessionClusterRequest &request);

      /**
       * @summary Retrieves the details of an SQL query.
       *
       * @param request GetSqlStatementRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSqlStatementResponse
       */
      Models::GetSqlStatementResponse getSqlStatementWithOptions(const string &workspaceId, const string &statementId, const Models::GetSqlStatementRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an SQL query.
       *
       * @param request GetSqlStatementRequest
       * @return GetSqlStatementResponse
       */
      Models::GetSqlStatementResponse getSqlStatement(const string &workspaceId, const string &statementId, const Models::GetSqlStatementRequest &request);

      /**
       * @summary Retrieves a task template.
       *
       * @param request GetTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const string &workspaceBizId, const Models::GetTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a task template.
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
       * @summary View the list of data catalogs
       *
       * @param request ListCatalogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogsWithOptions(const string &workspaceId, const Models::ListCatalogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the list of data catalogs
       *
       * @param request ListCatalogsRequest
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogs(const string &workspaceId, const Models::ListCatalogsRequest &request);

      /**
       * @summary Lists the log files for a job executor.
       *
       * @param request ListExecutorLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutorLogsResponse
       */
      Models::ListExecutorLogsResponse listExecutorLogsWithOptions(const string &workspaceId, const string &jobRunId, const string &executorId, const Models::ListExecutorLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the log files for a job executor.
       *
       * @param request ListExecutorLogsRequest
       * @return ListExecutorLogsResponse
       */
      Models::ListExecutorLogsResponse listExecutorLogs(const string &workspaceId, const string &jobRunId, const string &executorId, const Models::ListExecutorLogsRequest &request);

      /**
       * @summary Lists the executors of a job.
       *
       * @param request ListJobExecutorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutorsWithOptions(const string &workspaceId, const string &jobRunId, const Models::ListJobExecutorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the executors of a job.
       *
       * @param request ListJobExecutorsRequest
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutors(const string &workspaceId, const string &jobRunId, const Models::ListJobExecutorsRequest &request);

      /**
       * @summary Call the ListJobRuns operation to retrieve a list of Spark jobs.
       *
       * @param tmpReq ListJobRunsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobRunsResponse
       */
      Models::ListJobRunsResponse listJobRunsWithOptions(const string &workspaceId, const Models::ListJobRunsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListJobRuns operation to retrieve a list of Spark jobs.
       *
       * @param request ListJobRunsRequest
       * @return ListJobRunsResponse
       */
      Models::ListJobRunsResponse listJobRuns(const string &workspaceId, const Models::ListJobRunsRequest &request);

      /**
       * @summary Lists Kyuubi Gateways.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKyuubiServicesResponse
       */
      Models::ListKyuubiServicesResponse listKyuubiServicesWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists Kyuubi Gateways.
       *
       * @return ListKyuubiServicesResponse
       */
      Models::ListKyuubiServicesResponse listKyuubiServices(const string &workspaceId);

      /**
       * @summary Lists Kyuubi Spark applications.
       *
       * @param tmpReq ListKyuubiSparkApplicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKyuubiSparkApplicationsResponse
       */
      Models::ListKyuubiSparkApplicationsResponse listKyuubiSparkApplicationsWithOptions(const string &workspaceId, const string &kyuubiServiceId, const Models::ListKyuubiSparkApplicationsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists Kyuubi Spark applications.
       *
       * @param request ListKyuubiSparkApplicationsRequest
       * @return ListKyuubiSparkApplicationsResponse
       */
      Models::ListKyuubiSparkApplicationsResponse listKyuubiSparkApplications(const string &workspaceId, const string &kyuubiServiceId, const Models::ListKyuubiSparkApplicationsRequest &request);

      /**
       * @summary Lists KyuubiServer authentication tokens.
       *
       * @param request ListKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKyuubiTokenResponse
       */
      Models::ListKyuubiTokenResponse listKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const Models::ListKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists KyuubiServer authentication tokens.
       *
       * @param request ListKyuubiTokenRequest
       * @return ListKyuubiTokenResponse
       */
      Models::ListKyuubiTokenResponse listKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const Models::ListKyuubiTokenRequest &request);

      /**
       * @summary Lists Livy Gateways.
       *
       * @param request ListLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLivyComputeResponse
       */
      Models::ListLivyComputeResponse listLivyComputeWithOptions(const string &workspaceBizId, const Models::ListLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists Livy Gateways.
       *
       * @param request ListLivyComputeRequest
       * @return ListLivyComputeResponse
       */
      Models::ListLivyComputeResponse listLivyCompute(const string &workspaceBizId, const Models::ListLivyComputeRequest &request);

      /**
       * @summary Lists the historical sessions for a Livy Gateway.
       *
       * @param request ListLivyComputeSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLivyComputeSessionsResponse
       */
      Models::ListLivyComputeSessionsResponse listLivyComputeSessionsWithOptions(const string &workspaceId, const string &livyComputeId, const Models::ListLivyComputeSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the historical sessions for a Livy Gateway.
       *
       * @param request ListLivyComputeSessionsRequest
       * @return ListLivyComputeSessionsResponse
       */
      Models::ListLivyComputeSessionsResponse listLivyComputeSessions(const string &workspaceId, const string &livyComputeId, const Models::ListLivyComputeSessionsRequest &request);

      /**
       * @summary Lists Livy Gateway tokens.
       *
       * @param request ListLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLivyComputeTokenResponse
       */
      Models::ListLivyComputeTokenResponse listLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::ListLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists Livy Gateway tokens.
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
       * @summary Retrieves the list of members in the workspace.
       *
       * @param request ListMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMembersResponse
       */
      Models::ListMembersResponse listMembersWithOptions(const string &workspaceId, const Models::ListMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of members in the workspace.
       *
       * @param request ListMembersRequest
       * @return ListMembersResponse
       */
      Models::ListMembersResponse listMembers(const string &workspaceId, const Models::ListMembersRequest &request);

      /**
       * @summary Lists network connections.
       *
       * @param request ListNetworkServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkServicesResponse
       */
      Models::ListNetworkServicesResponse listNetworkServicesWithOptions(const string &workspaceId, const Models::ListNetworkServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists network connections.
       *
       * @param request ListNetworkServicesRequest
       * @return ListNetworkServicesResponse
       */
      Models::ListNetworkServicesResponse listNetworkServices(const string &workspaceId, const Models::ListNetworkServicesRequest &request);

      /**
       * @summary Lists Ray clusters.
       *
       * @param request ListRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRayClusterResponse
       */
      Models::ListRayClusterResponse listRayClusterWithOptions(const string &workspaceId, const Models::ListRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists Ray clusters.
       *
       * @param request ListRayClusterRequest
       * @return ListRayClusterResponse
       */
      Models::ListRayClusterResponse listRayCluster(const string &workspaceId, const Models::ListRayClusterRequest &request);

      /**
       * @summary 列出RayJob
       *
       * @param tmpReq ListRayJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRayJobResponse
       */
      Models::ListRayJobResponse listRayJobWithOptions(const string &workspaceId, const Models::ListRayJobRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出RayJob
       *
       * @param request ListRayJobRequest
       * @return ListRayJobResponse
       */
      Models::ListRayJobResponse listRayJob(const string &workspaceId, const Models::ListRayJobRequest &request);

      /**
       * @summary Retrieves a list of release versions.
       *
       * @param request ListReleaseVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReleaseVersionsResponse
       */
      Models::ListReleaseVersionsResponse listReleaseVersionsWithOptions(const Models::ListReleaseVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of release versions.
       *
       * @param request ListReleaseVersionsRequest
       * @return ListReleaseVersionsResponse
       */
      Models::ListReleaseVersionsResponse listReleaseVersions(const Models::ListReleaseVersionsRequest &request);

      /**
       * @summary Retrieves a list of session clusters.
       *
       * @param request ListSessionClustersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSessionClustersResponse
       */
      Models::ListSessionClustersResponse listSessionClustersWithOptions(const string &workspaceId, const Models::ListSessionClustersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of session clusters.
       *
       * @param request ListSessionClustersRequest
       * @return ListSessionClustersResponse
       */
      Models::ListSessionClustersResponse listSessionClusters(const string &workspaceId, const Models::ListSessionClustersRequest &request);

      /**
       * @summary Retrieves the execution results of an SQL statement.
       *
       * @param request ListSqlStatementContentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSqlStatementContentsResponse
       */
      Models::ListSqlStatementContentsResponse listSqlStatementContentsWithOptions(const string &workspaceId, const Models::ListSqlStatementContentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the execution results of an SQL statement.
       *
       * @param request ListSqlStatementContentsRequest
       * @return ListSqlStatementContentsResponse
       */
      Models::ListSqlStatementContentsResponse listSqlStatementContents(const string &workspaceId, const Models::ListSqlStatementContentsRequest &request);

      /**
       * @summary Lists job templates.
       *
       * @param request ListTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplateResponse
       */
      Models::ListTemplateResponse listTemplateWithOptions(const string &workspaceBizId, const Models::ListTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists job templates.
       *
       * @param request ListTemplateRequest
       * @return ListTemplateResponse
       */
      Models::ListTemplateResponse listTemplate(const string &workspaceBizId, const Models::ListTemplateRequest &request);

      /**
       * @summary Lists the queues in a workspace.
       *
       * @param request ListWorkspaceQueuesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspaceQueuesResponse
       */
      Models::ListWorkspaceQueuesResponse listWorkspaceQueuesWithOptions(const string &workspaceId, const Models::ListWorkspaceQueuesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the queues in a workspace.
       *
       * @param request ListWorkspaceQueuesRequest
       * @return ListWorkspaceQueuesResponse
       */
      Models::ListWorkspaceQueuesResponse listWorkspaceQueues(const string &workspaceId, const Models::ListWorkspaceQueuesRequest &request);

      /**
       * @summary Call `ListWorkspaces` to get a list of workspaces.
       *
       * @param tmpReq ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `ListWorkspaces` to get a list of workspaces.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Refreshes the token for a Livy Gateway.
       *
       * @param request RefreshLivyComputeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshLivyComputeTokenResponse
       */
      Models::RefreshLivyComputeTokenResponse refreshLivyComputeTokenWithOptions(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::RefreshLivyComputeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the token for a Livy Gateway.
       *
       * @param request RefreshLivyComputeTokenRequest
       * @return RefreshLivyComputeTokenResponse
       */
      Models::RefreshLivyComputeTokenResponse refreshLivyComputeToken(const string &workspaceBizId, const string &livyComputeId, const string &tokenId, const Models::RefreshLivyComputeTokenRequest &request);

      /**
       * @summary Starts a Spark Job.
       *
       * @param request StartJobRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartJobRunResponse
       */
      Models::StartJobRunResponse startJobRunWithOptions(const string &workspaceId, const Models::StartJobRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a Spark Job.
       *
       * @param request StartJobRunRequest
       * @return StartJobRunResponse
       */
      Models::StartJobRunResponse startJobRun(const string &workspaceId, const Models::StartJobRunRequest &request);

      /**
       * @summary Starts the Kyuubi Gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartKyuubiServiceResponse
       */
      Models::StartKyuubiServiceResponse startKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the Kyuubi Gateway.
       *
       * @return StartKyuubiServiceResponse
       */
      Models::StartKyuubiServiceResponse startKyuubiService(const string &workspaceId, const string &kyuubiServiceId);

      /**
       * @summary Starts a Livy gateway.
       *
       * @param request StartLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLivyComputeResponse
       */
      Models::StartLivyComputeResponse startLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::StartLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a Livy gateway.
       *
       * @param request StartLivyComputeRequest
       * @return StartLivyComputeResponse
       */
      Models::StartLivyComputeResponse startLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::StartLivyComputeRequest &request);

      /**
       * @summary Starts a workflow manually.
       *
       * @param request StartProcessInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartProcessInstanceResponse
       */
      Models::StartProcessInstanceResponse startProcessInstanceWithOptions(const string &bizId, const Models::StartProcessInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a workflow manually.
       *
       * @param request StartProcessInstanceRequest
       * @return StartProcessInstanceResponse
       */
      Models::StartProcessInstanceResponse startProcessInstance(const string &bizId, const Models::StartProcessInstanceRequest &request);

      /**
       * @summary Starts a Ray cluster.
       *
       * @param request StartRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRayClusterResponse
       */
      Models::StartRayClusterResponse startRayClusterWithOptions(const string &workspaceId, const string &clusterId, const Models::StartRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a Ray cluster.
       *
       * @param request StartRayClusterRequest
       * @return StartRayClusterResponse
       */
      Models::StartRayClusterResponse startRayCluster(const string &workspaceId, const string &clusterId, const Models::StartRayClusterRequest &request);

      /**
       * @summary Starts a session cluster.
       *
       * @param request StartSessionClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSessionClusterResponse
       */
      Models::StartSessionClusterResponse startSessionClusterWithOptions(const string &workspaceId, const Models::StartSessionClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a session cluster.
       *
       * @param request StartSessionClusterRequest
       * @return StartSessionClusterResponse
       */
      Models::StartSessionClusterResponse startSessionCluster(const string &workspaceId, const Models::StartSessionClusterRequest &request);

      /**
       * @summary Stops a Kyuubi Gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopKyuubiServiceResponse
       */
      Models::StopKyuubiServiceResponse stopKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a Kyuubi Gateway.
       *
       * @return StopKyuubiServiceResponse
       */
      Models::StopKyuubiServiceResponse stopKyuubiService(const string &workspaceId, const string &kyuubiServiceId);

      /**
       * @summary Stops a Livy Gateway.
       *
       * @param request StopLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLivyComputeResponse
       */
      Models::StopLivyComputeResponse stopLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::StopLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a Livy Gateway.
       *
       * @param request StopLivyComputeRequest
       * @return StopLivyComputeResponse
       */
      Models::StopLivyComputeResponse stopLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::StopLivyComputeRequest &request);

      /**
       * @summary Stops a Ray cluster.
       *
       * @param request StopRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRayClusterResponse
       */
      Models::StopRayClusterResponse stopRayClusterWithOptions(const string &workspaceId, const string &clusterId, const Models::StopRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a Ray cluster.
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
       * @summary 提交Ray Job
       *
       * @param request SubmitRayJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitRayJobResponse
       */
      Models::SubmitRayJobResponse submitRayJobWithOptions(const string &workspaceId, const Models::SubmitRayJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交Ray Job
       *
       * @param request SubmitRayJobRequest
       * @return SubmitRayJobResponse
       */
      Models::SubmitRayJobResponse submitRayJob(const string &workspaceId, const Models::SubmitRayJobRequest &request);

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
       * @summary Updates a Kyuubi Gateway.
       *
       * @param request UpdateKyuubiServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKyuubiServiceResponse
       */
      Models::UpdateKyuubiServiceResponse updateKyuubiServiceWithOptions(const string &workspaceId, const string &kyuubiServiceId, const Models::UpdateKyuubiServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Kyuubi Gateway.
       *
       * @param request UpdateKyuubiServiceRequest
       * @return UpdateKyuubiServiceResponse
       */
      Models::UpdateKyuubiServiceResponse updateKyuubiService(const string &workspaceId, const string &kyuubiServiceId, const Models::UpdateKyuubiServiceRequest &request);

      /**
       * @summary Updates a Kyuubi Gateway authentication token.
       *
       * @param request UpdateKyuubiTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKyuubiTokenResponse
       */
      Models::UpdateKyuubiTokenResponse updateKyuubiTokenWithOptions(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::UpdateKyuubiTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Kyuubi Gateway authentication token.
       *
       * @param request UpdateKyuubiTokenRequest
       * @return UpdateKyuubiTokenResponse
       */
      Models::UpdateKyuubiTokenResponse updateKyuubiToken(const string &workspaceId, const string &kyuubiServiceId, const string &tokenId, const Models::UpdateKyuubiTokenRequest &request);

      /**
       * @summary Updates a Livy Gateway.
       *
       * @param request UpdateLivyComputeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivyComputeResponse
       */
      Models::UpdateLivyComputeResponse updateLivyComputeWithOptions(const string &workspaceBizId, const string &livyComputeId, const Models::UpdateLivyComputeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Livy Gateway.
       *
       * @param request UpdateLivyComputeRequest
       * @return UpdateLivyComputeResponse
       */
      Models::UpdateLivyComputeResponse updateLivyCompute(const string &workspaceBizId, const string &livyComputeId, const Models::UpdateLivyComputeRequest &request);

      /**
       * @summary Updates a workflow definition and its timed scheduling.
       *
       * @param tmpReq UpdateProcessDefinitionWithScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProcessDefinitionWithScheduleResponse
       */
      Models::UpdateProcessDefinitionWithScheduleResponse updateProcessDefinitionWithScheduleWithOptions(const string &bizId, const string &code, const Models::UpdateProcessDefinitionWithScheduleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a workflow definition and its timed scheduling.
       *
       * @param request UpdateProcessDefinitionWithScheduleRequest
       * @return UpdateProcessDefinitionWithScheduleResponse
       */
      Models::UpdateProcessDefinitionWithScheduleResponse updateProcessDefinitionWithSchedule(const string &bizId, const string &code, const Models::UpdateProcessDefinitionWithScheduleRequest &request);

      /**
       * @summary Updates a Ray cluster.
       *
       * @param request UpdateRayClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRayClusterResponse
       */
      Models::UpdateRayClusterResponse updateRayClusterWithOptions(const string &workspaceId, const string &clusterId, const Models::UpdateRayClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Ray cluster.
       *
       * @param request UpdateRayClusterRequest
       * @return UpdateRayClusterResponse
       */
      Models::UpdateRayClusterResponse updateRayCluster(const string &workspaceId, const string &clusterId, const Models::UpdateRayClusterRequest &request);

      /**
       * @summary Update workspace properties
       *
       * @param request UpdateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspaceWithOptions(const Models::UpdateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update workspace properties
       *
       * @param request UpdateWorkspaceRequest
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspace(const Models::UpdateWorkspaceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
