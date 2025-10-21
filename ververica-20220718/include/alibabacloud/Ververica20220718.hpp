// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VERVERICA20220718_HPP_
#define ALIBABACLOUD_VERVERICA20220718_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ververica20220718Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ververica20220718.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 执行定时计划
       *
       * @param headers ApplyScheduledPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyScheduledPlanResponse
       */
      Models::ApplyScheduledPlanResponse applyScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const Models::ApplyScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行定时计划
       *
       * @return ApplyScheduledPlanResponse
       */
      Models::ApplyScheduledPlanResponse applyScheduledPlan(const string &_namespace, const string &scheduledPlanId);

      /**
       * @summary 取消调试
       *
       * @param request CancelSqlPreviewRequest
       * @param headers CancelSqlPreviewHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSqlPreviewResponse
       */
      Models::CancelSqlPreviewResponse cancelSqlPreviewWithOptions(const string &_namespace, const Models::CancelSqlPreviewRequest &request, const Models::CancelSqlPreviewHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消调试
       *
       * @param request CancelSqlPreviewRequest
       * @return CancelSqlPreviewResponse
       */
      Models::CancelSqlPreviewResponse cancelSqlPreview(const string &_namespace, const Models::CancelSqlPreviewRequest &request);

      /**
       * @summary Creates a deployment.
       *
       * @param request CreateDeploymentRequest
       * @param headers CreateDeploymentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeploymentResponse
       */
      Models::CreateDeploymentResponse createDeploymentWithOptions(const string &_namespace, const Models::CreateDeploymentRequest &request, const Models::CreateDeploymentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a deployment.
       *
       * @param request CreateDeploymentRequest
       * @return CreateDeploymentResponse
       */
      Models::CreateDeploymentResponse createDeployment(const string &_namespace, const Models::CreateDeploymentRequest &request);

      /**
       * @summary create a deploymentDraft
       *
       * @param request CreateDeploymentDraftRequest
       * @param headers CreateDeploymentDraftHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeploymentDraftResponse
       */
      Models::CreateDeploymentDraftResponse createDeploymentDraftWithOptions(const string &_namespace, const Models::CreateDeploymentDraftRequest &request, const Models::CreateDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary create a deploymentDraft
       *
       * @param request CreateDeploymentDraftRequest
       * @return CreateDeploymentDraftResponse
       */
      Models::CreateDeploymentDraftResponse createDeploymentDraft(const string &_namespace, const Models::CreateDeploymentDraftRequest &request);

      /**
       * @summary 创建deploymentTarget
       *
       * @param request CreateDeploymentTargetRequest
       * @param headers CreateDeploymentTargetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeploymentTargetResponse
       */
      Models::CreateDeploymentTargetResponse createDeploymentTargetWithOptions(const string &_namespace, const Models::CreateDeploymentTargetRequest &request, const Models::CreateDeploymentTargetHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建deploymentTarget
       *
       * @param request CreateDeploymentTargetRequest
       * @return CreateDeploymentTargetResponse
       */
      Models::CreateDeploymentTargetResponse createDeploymentTarget(const string &_namespace, const Models::CreateDeploymentTargetRequest &request);

      /**
       * @summary 创建部署目标V2
       *
       * @param request CreateDeploymentTargetV2Request
       * @param headers CreateDeploymentTargetV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeploymentTargetV2Response
       */
      Models::CreateDeploymentTargetV2Response createDeploymentTargetV2WithOptions(const string &_namespace, const Models::CreateDeploymentTargetV2Request &request, const Models::CreateDeploymentTargetV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建部署目标V2
       *
       * @param request CreateDeploymentTargetV2Request
       * @return CreateDeploymentTargetV2Response
       */
      Models::CreateDeploymentTargetV2Response createDeploymentTargetV2(const string &_namespace, const Models::CreateDeploymentTargetV2Request &request);

      /**
       * @summary create a folder
       *
       * @param request CreateFolderRequest
       * @param headers CreateFolderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolderWithOptions(const string &_namespace, const Models::CreateFolderRequest &request, const Models::CreateFolderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary create a folder
       *
       * @param request CreateFolderRequest
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolder(const string &_namespace, const Models::CreateFolderRequest &request);

      /**
       * @summary Adds a user to a namespace as a member and grants permissions to the user.
       *
       * @param request CreateMemberRequest
       * @param headers CreateMemberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemberResponse
       */
      Models::CreateMemberResponse createMemberWithOptions(const string &_namespace, const Models::CreateMemberRequest &request, const Models::CreateMemberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user to a namespace as a member and grants permissions to the user.
       *
       * @param request CreateMemberRequest
       * @return CreateMemberResponse
       */
      Models::CreateMemberResponse createMember(const string &_namespace, const Models::CreateMemberRequest &request);

      /**
       * @summary Creates a savepoint.
       *
       * @param request CreateSavepointRequest
       * @param headers CreateSavepointHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSavepointResponse
       */
      Models::CreateSavepointResponse createSavepointWithOptions(const string &_namespace, const Models::CreateSavepointRequest &request, const Models::CreateSavepointHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a savepoint.
       *
       * @param request CreateSavepointRequest
       * @return CreateSavepointResponse
       */
      Models::CreateSavepointResponse createSavepoint(const string &_namespace, const Models::CreateSavepointRequest &request);

      /**
       * @summary 创建定时执行计划
       *
       * @param request CreateScheduledPlanRequest
       * @param headers CreateScheduledPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledPlanResponse
       */
      Models::CreateScheduledPlanResponse createScheduledPlanWithOptions(const string &_namespace, const Models::CreateScheduledPlanRequest &request, const Models::CreateScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建定时执行计划
       *
       * @param request CreateScheduledPlanRequest
       * @return CreateScheduledPlanResponse
       */
      Models::CreateScheduledPlanResponse createScheduledPlan(const string &_namespace, const Models::CreateScheduledPlanRequest &request);

      /**
       * @summary 创建session集群
       *
       * @param request CreateSessionClusterRequest
       * @param headers CreateSessionClusterHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSessionClusterResponse
       */
      Models::CreateSessionClusterResponse createSessionClusterWithOptions(const string &_namespace, const Models::CreateSessionClusterRequest &request, const Models::CreateSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建session集群
       *
       * @param request CreateSessionClusterRequest
       * @return CreateSessionClusterResponse
       */
      Models::CreateSessionClusterResponse createSessionCluster(const string &_namespace, const Models::CreateSessionClusterRequest &request);

      /**
       * @summary Parses all user-defined function (UDF) methods in your JAR or Python file and creates an artifact configuration for a UDF.
       *
       * @param request CreateUdfArtifactRequest
       * @param headers CreateUdfArtifactHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUdfArtifactResponse
       */
      Models::CreateUdfArtifactResponse createUdfArtifactWithOptions(const string &_namespace, const Models::CreateUdfArtifactRequest &request, const Models::CreateUdfArtifactHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Parses all user-defined function (UDF) methods in your JAR or Python file and creates an artifact configuration for a UDF.
       *
       * @param request CreateUdfArtifactRequest
       * @return CreateUdfArtifactResponse
       */
      Models::CreateUdfArtifactResponse createUdfArtifact(const string &_namespace, const Models::CreateUdfArtifactRequest &request);

      /**
       * @summary Creates a variable.
       *
       * @param request CreateVariableRequest
       * @param headers CreateVariableHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVariableResponse
       */
      Models::CreateVariableResponse createVariableWithOptions(const string &_namespace, const Models::CreateVariableRequest &request, const Models::CreateVariableHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a variable.
       *
       * @param request CreateVariableRequest
       * @return CreateVariableResponse
       */
      Models::CreateVariableResponse createVariable(const string &_namespace, const Models::CreateVariableRequest &request);

      /**
       * @summary Deletes a registered custom connector from a workspace.
       *
       * @param headers DeleteCustomConnectorHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomConnectorResponse
       */
      Models::DeleteCustomConnectorResponse deleteCustomConnectorWithOptions(const string &_namespace, const string &connectorName, const Models::DeleteCustomConnectorHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a registered custom connector from a workspace.
       *
       * @return DeleteCustomConnectorResponse
       */
      Models::DeleteCustomConnectorResponse deleteCustomConnector(const string &_namespace, const string &connectorName);

      /**
       * @summary Deletes a deployment based on the deployment ID.
       *
       * @param headers DeleteDeploymentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeploymentResponse
       */
      Models::DeleteDeploymentResponse deleteDeploymentWithOptions(const string &_namespace, const string &deploymentId, const Models::DeleteDeploymentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a deployment based on the deployment ID.
       *
       * @return DeleteDeploymentResponse
       */
      Models::DeleteDeploymentResponse deleteDeployment(const string &_namespace, const string &deploymentId);

      /**
       * @summary delete a deploymentDraft
       *
       * @param headers DeleteDeploymentDraftHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeploymentDraftResponse
       */
      Models::DeleteDeploymentDraftResponse deleteDeploymentDraftWithOptions(const string &_namespace, const string &deploymentDraftId, const Models::DeleteDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary delete a deploymentDraft
       *
       * @return DeleteDeploymentDraftResponse
       */
      Models::DeleteDeploymentDraftResponse deleteDeploymentDraft(const string &_namespace, const string &deploymentDraftId);

      /**
       * @summary 删除deploymentTarget
       *
       * @param headers DeleteDeploymentTargetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeploymentTargetResponse
       */
      Models::DeleteDeploymentTargetResponse deleteDeploymentTargetWithOptions(const string &_namespace, const string &deploymentTargetName, const Models::DeleteDeploymentTargetHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除deploymentTarget
       *
       * @return DeleteDeploymentTargetResponse
       */
      Models::DeleteDeploymentTargetResponse deleteDeploymentTarget(const string &_namespace, const string &deploymentTargetName);

      /**
       * @summary delete a folder
       *
       * @param headers DeleteFolderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolderWithOptions(const string &_namespace, const string &folderId, const Models::DeleteFolderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary delete a folder
       *
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolder(const string &_namespace, const string &folderId);

      /**
       * @summary Deletes the information about a job that is not in the running state in a deployment.
       *
       * @param headers DeleteJobHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJobWithOptions(const string &_namespace, const string &jobId, const Models::DeleteJobHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the information about a job that is not in the running state in a deployment.
       *
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJob(const string &_namespace, const string &jobId);

      /**
       * @summary Revokes the permissions from a member.
       *
       * @param headers DeleteMemberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemberResponse
       */
      Models::DeleteMemberResponse deleteMemberWithOptions(const string &_namespace, const string &member, const Models::DeleteMemberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions from a member.
       *
       * @return DeleteMemberResponse
       */
      Models::DeleteMemberResponse deleteMember(const string &_namespace, const string &member);

      /**
       * @summary Deletes a savepoint.
       *
       * @param headers DeleteSavepointHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSavepointResponse
       */
      Models::DeleteSavepointResponse deleteSavepointWithOptions(const string &_namespace, const string &savepointId, const Models::DeleteSavepointHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a savepoint.
       *
       * @return DeleteSavepointResponse
       */
      Models::DeleteSavepointResponse deleteSavepoint(const string &_namespace, const string &savepointId);

      /**
       * @summary 删除定时执行计划
       *
       * @param headers DeleteScheduledPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledPlanResponse
       */
      Models::DeleteScheduledPlanResponse deleteScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const Models::DeleteScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除定时执行计划
       *
       * @return DeleteScheduledPlanResponse
       */
      Models::DeleteScheduledPlanResponse deleteScheduledPlan(const string &_namespace, const string &scheduledPlanId);

      /**
       * @summary 删除session集群
       *
       * @param headers DeleteSessionClusterHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSessionClusterResponse
       */
      Models::DeleteSessionClusterResponse deleteSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const Models::DeleteSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除session集群
       *
       * @return DeleteSessionClusterResponse
       */
      Models::DeleteSessionClusterResponse deleteSessionCluster(const string &_namespace, const string &sessionClusterName);

      /**
       * @summary 删除UdfArtifact
       *
       * @param headers DeleteUdfArtifactHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUdfArtifactResponse
       */
      Models::DeleteUdfArtifactResponse deleteUdfArtifactWithOptions(const string &_namespace, const string &udfArtifactName, const Models::DeleteUdfArtifactHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除UdfArtifact
       *
       * @return DeleteUdfArtifactResponse
       */
      Models::DeleteUdfArtifactResponse deleteUdfArtifact(const string &_namespace, const string &udfArtifactName);

      /**
       * @summary Deletes an existing user-defined function (UDF) from a Realtime Compute for Apache Flink workspace.
       *
       * @param request DeleteUdfFunctionRequest
       * @param headers DeleteUdfFunctionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUdfFunctionResponse
       */
      Models::DeleteUdfFunctionResponse deleteUdfFunctionWithOptions(const string &_namespace, const string &functionName, const Models::DeleteUdfFunctionRequest &request, const Models::DeleteUdfFunctionHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an existing user-defined function (UDF) from a Realtime Compute for Apache Flink workspace.
       *
       * @param request DeleteUdfFunctionRequest
       * @return DeleteUdfFunctionResponse
       */
      Models::DeleteUdfFunctionResponse deleteUdfFunction(const string &_namespace, const string &functionName, const Models::DeleteUdfFunctionRequest &request);

      /**
       * @summary Deletes a variable.
       *
       * @param headers DeleteVariableHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVariableResponse
       */
      Models::DeleteVariableResponse deleteVariableWithOptions(const string &_namespace, const string &name, const Models::DeleteVariableHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a variable.
       *
       * @return DeleteVariableResponse
       */
      Models::DeleteVariableResponse deleteVariable(const string &_namespace, const string &name);

      /**
       * @summary deploy deploymentDraft async
       *
       * @param request DeployDeploymentDraftAsyncRequest
       * @param headers DeployDeploymentDraftAsyncHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployDeploymentDraftAsyncResponse
       */
      Models::DeployDeploymentDraftAsyncResponse deployDeploymentDraftAsyncWithOptions(const string &_namespace, const Models::DeployDeploymentDraftAsyncRequest &request, const Models::DeployDeploymentDraftAsyncHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary deploy deploymentDraft async
       *
       * @param request DeployDeploymentDraftAsyncRequest
       * @return DeployDeploymentDraftAsyncResponse
       */
      Models::DeployDeploymentDraftAsyncResponse deployDeploymentDraftAsync(const string &_namespace, const Models::DeployDeploymentDraftAsyncRequest &request);

      /**
       * @summary 执行sql语句
       *
       * @param request ExecuteSqlStatementRequest
       * @param headers ExecuteSqlStatementHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteSqlStatementResponse
       */
      Models::ExecuteSqlStatementResponse executeSqlStatementWithOptions(const string &_namespace, const Models::ExecuteSqlStatementRequest &request, const Models::ExecuteSqlStatementHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行sql语句
       *
       * @param request ExecuteSqlStatementRequest
       * @return ExecuteSqlStatementResponse
       */
      Models::ExecuteSqlStatementResponse executeSqlStatement(const string &_namespace, const Models::ExecuteSqlStatementRequest &request);

      /**
       * @summary 获取调试结果
       *
       * @param request FetchSqlPreviewResultsRequest
       * @param headers FetchSqlPreviewResultsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchSqlPreviewResultsResponse
       */
      Models::FetchSqlPreviewResultsResponse fetchSqlPreviewResultsWithOptions(const string &_namespace, const Models::FetchSqlPreviewResultsRequest &request, const Models::FetchSqlPreviewResultsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取调试结果
       *
       * @param request FetchSqlPreviewResultsRequest
       * @return FetchSqlPreviewResultsResponse
       */
      Models::FetchSqlPreviewResultsResponse fetchSqlPreviewResults(const string &_namespace, const Models::FetchSqlPreviewResultsRequest &request);

      /**
       * @summary Provides a Flink request proxy.
       *
       * @param request FlinkApiProxyRequest
       * @param headers FlinkApiProxyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlinkApiProxyResponse
       */
      Models::FlinkApiProxyResponse flinkApiProxyWithOptions(const Models::FlinkApiProxyRequest &request, const Models::FlinkApiProxyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides a Flink request proxy.
       *
       * @param request FlinkApiProxyRequest
       * @return FlinkApiProxyResponse
       */
      Models::FlinkApiProxyResponse flinkApiProxy(const Models::FlinkApiProxyRequest &request);

      /**
       * @summary Submits a ticket that applies for asynchronous generation of the fine-grained resources. This operation returns the ID of the ticket for you to query the asynchronous generation result.
       *
       * @param request GenerateResourcePlanWithFlinkConfAsyncRequest
       * @param headers GenerateResourcePlanWithFlinkConfAsyncHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateResourcePlanWithFlinkConfAsyncResponse
       */
      Models::GenerateResourcePlanWithFlinkConfAsyncResponse generateResourcePlanWithFlinkConfAsyncWithOptions(const string &_namespace, const string &deploymentId, const Models::GenerateResourcePlanWithFlinkConfAsyncRequest &request, const Models::GenerateResourcePlanWithFlinkConfAsyncHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a ticket that applies for asynchronous generation of the fine-grained resources. This operation returns the ID of the ticket for you to query the asynchronous generation result.
       *
       * @param request GenerateResourcePlanWithFlinkConfAsyncRequest
       * @return GenerateResourcePlanWithFlinkConfAsyncResponse
       */
      Models::GenerateResourcePlanWithFlinkConfAsyncResponse generateResourcePlanWithFlinkConfAsync(const string &_namespace, const string &deploymentId, const Models::GenerateResourcePlanWithFlinkConfAsyncRequest &request);

      /**
       * @summary 获取应用中的执行定时计划
       *
       * @param request GetAppliedScheduledPlanRequest
       * @param headers GetAppliedScheduledPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppliedScheduledPlanResponse
       */
      Models::GetAppliedScheduledPlanResponse getAppliedScheduledPlanWithOptions(const string &_namespace, const Models::GetAppliedScheduledPlanRequest &request, const Models::GetAppliedScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用中的执行定时计划
       *
       * @param request GetAppliedScheduledPlanRequest
       * @return GetAppliedScheduledPlanResponse
       */
      Models::GetAppliedScheduledPlanResponse getAppliedScheduledPlan(const string &_namespace, const Models::GetAppliedScheduledPlanRequest &request);

      /**
       * @summary 获取catalog
       *
       * @param request GetCatalogsRequest
       * @param headers GetCatalogsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogsResponse
       */
      Models::GetCatalogsResponse getCatalogsWithOptions(const string &_namespace, const Models::GetCatalogsRequest &request, const Models::GetCatalogsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取catalog
       *
       * @param request GetCatalogsRequest
       * @return GetCatalogsResponse
       */
      Models::GetCatalogsResponse getCatalogs(const string &_namespace, const Models::GetCatalogsRequest &request);

      /**
       * @summary 获取database
       *
       * @param request GetDatabasesRequest
       * @param headers GetDatabasesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabasesResponse
       */
      Models::GetDatabasesResponse getDatabasesWithOptions(const string &_namespace, const string &catalogName, const Models::GetDatabasesRequest &request, const Models::GetDatabasesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取database
       *
       * @param request GetDatabasesRequest
       * @return GetDatabasesResponse
       */
      Models::GetDatabasesResponse getDatabases(const string &_namespace, const string &catalogName, const Models::GetDatabasesRequest &request);

      /**
       * @summary get deploy deploymentDraft result
       *
       * @param headers GetDeployDeploymentDraftResultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeployDeploymentDraftResultResponse
       */
      Models::GetDeployDeploymentDraftResultResponse getDeployDeploymentDraftResultWithOptions(const string &_namespace, const string &ticketId, const Models::GetDeployDeploymentDraftResultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get deploy deploymentDraft result
       *
       * @return GetDeployDeploymentDraftResultResponse
       */
      Models::GetDeployDeploymentDraftResultResponse getDeployDeploymentDraftResult(const string &_namespace, const string &ticketId);

      /**
       * @summary Obtains the details of a deployment.
       *
       * @param headers GetDeploymentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeploymentResponse
       */
      Models::GetDeploymentResponse getDeploymentWithOptions(const string &_namespace, const string &deploymentId, const Models::GetDeploymentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a deployment.
       *
       * @return GetDeploymentResponse
       */
      Models::GetDeploymentResponse getDeployment(const string &_namespace, const string &deploymentId);

      /**
       * @summary get a deploymentDraft
       *
       * @param headers GetDeploymentDraftHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeploymentDraftResponse
       */
      Models::GetDeploymentDraftResponse getDeploymentDraftWithOptions(const string &_namespace, const string &deploymentDraftId, const Models::GetDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get a deploymentDraft
       *
       * @return GetDeploymentDraftResponse
       */
      Models::GetDeploymentDraftResponse getDeploymentDraft(const string &_namespace, const string &deploymentDraftId);

      /**
       * @summary get deploymentDraft lock
       *
       * @param request GetDeploymentDraftLockRequest
       * @param headers GetDeploymentDraftLockHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeploymentDraftLockResponse
       */
      Models::GetDeploymentDraftLockResponse getDeploymentDraftLockWithOptions(const string &_namespace, const Models::GetDeploymentDraftLockRequest &request, const Models::GetDeploymentDraftLockHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get deploymentDraft lock
       *
       * @param request GetDeploymentDraftLockRequest
       * @return GetDeploymentDraftLockResponse
       */
      Models::GetDeploymentDraftLockResponse getDeploymentDraftLock(const string &_namespace, const Models::GetDeploymentDraftLockRequest &request);

      /**
       * @summary 获取运行事件
       *
       * @param request GetEventsRequest
       * @param headers GetEventsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEventsResponse
       */
      Models::GetEventsResponse getEventsWithOptions(const string &_namespace, const Models::GetEventsRequest &request, const Models::GetEventsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取运行事件
       *
       * @param request GetEventsRequest
       * @return GetEventsResponse
       */
      Models::GetEventsResponse getEvents(const string &_namespace, const Models::GetEventsRequest &request);

      /**
       * @summary get a folder
       *
       * @param request GetFolderRequest
       * @param headers GetFolderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolderWithOptions(const string &_namespace, const Models::GetFolderRequest &request, const Models::GetFolderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get a folder
       *
       * @param request GetFolderRequest
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolder(const string &_namespace, const Models::GetFolderRequest &request);

      /**
       * @summary Obtains the asynchronous generation result of fine-grained resources based on the ID of the ticket that applies for an asynchronous generation.
       *
       * @param headers GetGenerateResourcePlanResultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGenerateResourcePlanResultResponse
       */
      Models::GetGenerateResourcePlanResultResponse getGenerateResourcePlanResultWithOptions(const string &_namespace, const string &ticketId, const Models::GetGenerateResourcePlanResultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the asynchronous generation result of fine-grained resources based on the ID of the ticket that applies for an asynchronous generation.
       *
       * @return GetGenerateResourcePlanResultResponse
       */
      Models::GetGenerateResourcePlanResultResponse getGenerateResourcePlanResult(const string &_namespace, const string &ticketId);

      /**
       * @summary 查询动态更新结果
       *
       * @param headers GetHotUpdateJobResultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotUpdateJobResultResponse
       */
      Models::GetHotUpdateJobResultResponse getHotUpdateJobResultWithOptions(const string &_namespace, const string &jobHotUpdateId, const Models::GetHotUpdateJobResultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询动态更新结果
       *
       * @return GetHotUpdateJobResultResponse
       */
      Models::GetHotUpdateJobResultResponse getHotUpdateJobResult(const string &_namespace, const string &jobHotUpdateId);

      /**
       * @summary Obtains the details of a job.
       *
       * @param headers GetJobHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const string &_namespace, const string &jobId, const Models::GetJobHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a job.
       *
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const string &_namespace, const string &jobId);

      /**
       * @summary 获取作业诊断信息
       *
       * @param headers GetJobDiagnosisHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobDiagnosisResponse
       */
      Models::GetJobDiagnosisResponse getJobDiagnosisWithOptions(const string &_namespace, const string &deploymentId, const string &jobId, const Models::GetJobDiagnosisHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取作业诊断信息
       *
       * @return GetJobDiagnosisResponse
       */
      Models::GetJobDiagnosisResponse getJobDiagnosis(const string &_namespace, const string &deploymentId, const string &jobId);

      /**
       * @summary Obtains the latest startup logs of a job.
       *
       * @param headers GetLatestJobStartLogHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLatestJobStartLogResponse
       */
      Models::GetLatestJobStartLogResponse getLatestJobStartLogWithOptions(const string &_namespace, const string &deploymentId, const Models::GetLatestJobStartLogHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the latest startup logs of a job.
       *
       * @return GetLatestJobStartLogResponse
       */
      Models::GetLatestJobStartLogResponse getLatestJobStartLog(const string &_namespace, const string &deploymentId);

      /**
       * @summary Obtains the lineage information of a deployment.
       *
       * @param request GetLineageInfoRequest
       * @param headers GetLineageInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLineageInfoResponse
       */
      Models::GetLineageInfoResponse getLineageInfoWithOptions(const Models::GetLineageInfoRequest &request, const Models::GetLineageInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the lineage information of a deployment.
       *
       * @param request GetLineageInfoRequest
       * @return GetLineageInfoResponse
       */
      Models::GetLineageInfoResponse getLineageInfo(const Models::GetLineageInfoRequest &request);

      /**
       * @summary Queries the permissions of a member.
       *
       * @param headers GetMemberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemberResponse
       */
      Models::GetMemberResponse getMemberWithOptions(const string &_namespace, const string &member, const Models::GetMemberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions of a member.
       *
       * @return GetMemberResponse
       */
      Models::GetMemberResponse getMember(const string &_namespace, const string &member);

      /**
       * @summary Queries details of a savepoint and checkpoint.
       *
       * @param headers GetSavepointHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSavepointResponse
       */
      Models::GetSavepointResponse getSavepointWithOptions(const string &_namespace, const string &savepointId, const Models::GetSavepointHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details of a savepoint and checkpoint.
       *
       * @return GetSavepointResponse
       */
      Models::GetSavepointResponse getSavepoint(const string &_namespace, const string &savepointId);

      /**
       * @summary 获取session集群
       *
       * @param headers GetSessionClusterHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSessionClusterResponse
       */
      Models::GetSessionClusterResponse getSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const Models::GetSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取session集群
       *
       * @return GetSessionClusterResponse
       */
      Models::GetSessionClusterResponse getSessionCluster(const string &_namespace, const string &sessionClusterName);

      /**
       * @summary 获取table
       *
       * @param request GetTablesRequest
       * @param headers GetTablesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTablesResponse
       */
      Models::GetTablesResponse getTablesWithOptions(const string &_namespace, const string &catalogName, const string &databaseName, const Models::GetTablesRequest &request, const Models::GetTablesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取table
       *
       * @param request GetTablesRequest
       * @return GetTablesResponse
       */
      Models::GetTablesResponse getTables(const string &_namespace, const string &catalogName, const string &databaseName, const Models::GetTablesRequest &request);

      /**
       * @summary Obtains the details of the JAR or Python file that corresponds to the user-defined function (UDF) that you upload and create.
       *
       * @param request GetUdfArtifactsRequest
       * @param headers GetUdfArtifactsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUdfArtifactsResponse
       */
      Models::GetUdfArtifactsResponse getUdfArtifactsWithOptions(const string &_namespace, const Models::GetUdfArtifactsRequest &request, const Models::GetUdfArtifactsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of the JAR or Python file that corresponds to the user-defined function (UDF) that you upload and create.
       *
       * @param request GetUdfArtifactsRequest
       * @return GetUdfArtifactsResponse
       */
      Models::GetUdfArtifactsResponse getUdfArtifacts(const string &_namespace, const Models::GetUdfArtifactsRequest &request);

      /**
       * @summary Dynamically updates parameters or resources of a deployment that is running.
       *
       * @param headers HotUpdateJobHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotUpdateJobResponse
       */
      Models::HotUpdateJobResponse hotUpdateJobWithOptions(const string &_namespace, const string &jobId, const Models::HotUpdateJobHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dynamically updates parameters or resources of a deployment that is running.
       *
       * @return HotUpdateJobResponse
       */
      Models::HotUpdateJobResponse hotUpdateJob(const string &_namespace, const string &jobId);

      /**
       * @summary Obtains a list of existing custom connectors.
       *
       * @param headers ListCustomConnectorsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomConnectorsResponse
       */
      Models::ListCustomConnectorsResponse listCustomConnectorsWithOptions(const string &_namespace, const Models::ListCustomConnectorsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of existing custom connectors.
       *
       * @return ListCustomConnectorsResponse
       */
      Models::ListCustomConnectorsResponse listCustomConnectors(const string &_namespace);

      /**
       * @summary list deploymentDrafts
       *
       * @param request ListDeploymentDraftsRequest
       * @param headers ListDeploymentDraftsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentDraftsResponse
       */
      Models::ListDeploymentDraftsResponse listDeploymentDraftsWithOptions(const string &_namespace, const Models::ListDeploymentDraftsRequest &request, const Models::ListDeploymentDraftsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary list deploymentDrafts
       *
       * @param request ListDeploymentDraftsRequest
       * @return ListDeploymentDraftsResponse
       */
      Models::ListDeploymentDraftsResponse listDeploymentDrafts(const string &_namespace, const Models::ListDeploymentDraftsRequest &request);

      /**
       * @summary Obtains a list of clusters in which deployments can be deployed. The cluster can be a session cluster or a per-job cluster.
       *
       * @param request ListDeploymentTargetsRequest
       * @param headers ListDeploymentTargetsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentTargetsResponse
       */
      Models::ListDeploymentTargetsResponse listDeploymentTargetsWithOptions(const string &_namespace, const Models::ListDeploymentTargetsRequest &request, const Models::ListDeploymentTargetsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of clusters in which deployments can be deployed. The cluster can be a session cluster or a per-job cluster.
       *
       * @param request ListDeploymentTargetsRequest
       * @return ListDeploymentTargetsResponse
       */
      Models::ListDeploymentTargetsResponse listDeploymentTargets(const string &_namespace, const Models::ListDeploymentTargetsRequest &request);

      /**
       * @summary Obtains information about all deployments.
       *
       * @param request ListDeploymentsRequest
       * @param headers ListDeploymentsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentsResponse
       */
      Models::ListDeploymentsResponse listDeploymentsWithOptions(const string &_namespace, const Models::ListDeploymentsRequest &request, const Models::ListDeploymentsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains information about all deployments.
       *
       * @param request ListDeploymentsRequest
       * @return ListDeploymentsResponse
       */
      Models::ListDeploymentsResponse listDeployments(const string &_namespace, const Models::ListDeploymentsRequest &request);

      /**
       * @summary 列出有编辑权限的项目空间。
       *
       * @param request ListEditableNamespaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEditableNamespaceResponse
       */
      Models::ListEditableNamespaceResponse listEditableNamespaceWithOptions(const Models::ListEditableNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出有编辑权限的项目空间。
       *
       * @param request ListEditableNamespaceRequest
       * @return ListEditableNamespaceResponse
       */
      Models::ListEditableNamespaceResponse listEditableNamespace(const Models::ListEditableNamespaceRequest &request);

      /**
       * @summary Obtains a list of engine versions that are supported by Realtime Compute for Apache Flink.
       *
       * @param headers ListEngineVersionMetadataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEngineVersionMetadataResponse
       */
      Models::ListEngineVersionMetadataResponse listEngineVersionMetadataWithOptions(const Models::ListEngineVersionMetadataHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of engine versions that are supported by Realtime Compute for Apache Flink.
       *
       * @return ListEngineVersionMetadataResponse
       */
      Models::ListEngineVersionMetadataResponse listEngineVersionMetadata();

      /**
       * @summary Queries the information about all jobs in a deployment.
       *
       * @param request ListJobsRequest
       * @param headers ListJobsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const string &_namespace, const Models::ListJobsRequest &request, const Models::ListJobsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all jobs in a deployment.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const string &_namespace, const Models::ListJobsRequest &request);

      /**
       * @summary Queries the mappings between the ID and permissions of a member in a specific namespace.
       *
       * @param request ListMembersRequest
       * @param headers ListMembersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMembersResponse
       */
      Models::ListMembersResponse listMembersWithOptions(const string &_namespace, const Models::ListMembersRequest &request, const Models::ListMembersHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mappings between the ID and permissions of a member in a specific namespace.
       *
       * @param request ListMembersRequest
       * @return ListMembersResponse
       */
      Models::ListMembersResponse listMembers(const string &_namespace, const Models::ListMembersRequest &request);

      /**
       * @summary Obtains a list of savepoints or checkpoints.
       *
       * @param request ListSavepointsRequest
       * @param headers ListSavepointsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSavepointsResponse
       */
      Models::ListSavepointsResponse listSavepointsWithOptions(const string &_namespace, const Models::ListSavepointsRequest &request, const Models::ListSavepointsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of savepoints or checkpoints.
       *
       * @param request ListSavepointsRequest
       * @return ListSavepointsResponse
       */
      Models::ListSavepointsResponse listSavepoints(const string &_namespace, const Models::ListSavepointsRequest &request);

      /**
       * @summary 列表定时执行计划
       *
       * @param request ListScheduledPlanRequest
       * @param headers ListScheduledPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledPlanResponse
       */
      Models::ListScheduledPlanResponse listScheduledPlanWithOptions(const string &_namespace, const Models::ListScheduledPlanRequest &request, const Models::ListScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列表定时执行计划
       *
       * @param request ListScheduledPlanRequest
       * @return ListScheduledPlanResponse
       */
      Models::ListScheduledPlanResponse listScheduledPlan(const string &_namespace, const Models::ListScheduledPlanRequest &request);

      /**
       * @summary 获取作业资源变更历史
       *
       * @param request ListScheduledPlanExecutedHistoryRequest
       * @param headers ListScheduledPlanExecutedHistoryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledPlanExecutedHistoryResponse
       */
      Models::ListScheduledPlanExecutedHistoryResponse listScheduledPlanExecutedHistoryWithOptions(const string &_namespace, const Models::ListScheduledPlanExecutedHistoryRequest &request, const Models::ListScheduledPlanExecutedHistoryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取作业资源变更历史
       *
       * @param request ListScheduledPlanExecutedHistoryRequest
       * @return ListScheduledPlanExecutedHistoryResponse
       */
      Models::ListScheduledPlanExecutedHistoryResponse listScheduledPlanExecutedHistory(const string &_namespace, const Models::ListScheduledPlanExecutedHistoryRequest &request);

      /**
       * @summary 列举session集群
       *
       * @param headers ListSessionClustersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSessionClustersResponse
       */
      Models::ListSessionClustersResponse listSessionClustersWithOptions(const string &_namespace, const Models::ListSessionClustersHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举session集群
       *
       * @return ListSessionClustersResponse
       */
      Models::ListSessionClustersResponse listSessionClusters(const string &_namespace);

      /**
       * @summary Obtains a list of variables.
       *
       * @param request ListVariablesRequest
       * @param headers ListVariablesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVariablesResponse
       */
      Models::ListVariablesResponse listVariablesWithOptions(const string &_namespace, const Models::ListVariablesRequest &request, const Models::ListVariablesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of variables.
       *
       * @param request ListVariablesRequest
       * @return ListVariablesResponse
       */
      Models::ListVariablesResponse listVariables(const string &_namespace, const Models::ListVariablesRequest &request);

      /**
       * @summary Registers a custom connector in a namespace. The registered custom connector can be used in SQL statements.
       *
       * @param request RegisterCustomConnectorRequest
       * @param headers RegisterCustomConnectorHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterCustomConnectorResponse
       */
      Models::RegisterCustomConnectorResponse registerCustomConnectorWithOptions(const string &_namespace, const Models::RegisterCustomConnectorRequest &request, const Models::RegisterCustomConnectorHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a custom connector in a namespace. The registered custom connector can be used in SQL statements.
       *
       * @param request RegisterCustomConnectorRequest
       * @return RegisterCustomConnectorResponse
       */
      Models::RegisterCustomConnectorResponse registerCustomConnector(const string &_namespace, const Models::RegisterCustomConnectorRequest &request);

      /**
       * @summary Registers specific or all of the user-defined functions (UDFs) that are parsed from the JAR files. The registered functions can be used in SQL statements.
       *
       * @param request RegisterUdfFunctionRequest
       * @param headers RegisterUdfFunctionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterUdfFunctionResponse
       */
      Models::RegisterUdfFunctionResponse registerUdfFunctionWithOptions(const string &_namespace, const Models::RegisterUdfFunctionRequest &request, const Models::RegisterUdfFunctionHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers specific or all of the user-defined functions (UDFs) that are parsed from the JAR files. The registered functions can be used in SQL statements.
       *
       * @param request RegisterUdfFunctionRequest
       * @return RegisterUdfFunctionResponse
       */
      Models::RegisterUdfFunctionResponse registerUdfFunction(const string &_namespace, const Models::RegisterUdfFunctionRequest &request);

      /**
       * @deprecated OpenAPI StartJob is deprecated
       *
       * @summary Creates and starts a job.
       *
       * @param request StartJobRequest
       * @param headers StartJobHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartJobResponse
       */
      Models::StartJobResponse startJobWithOptions(const string &_namespace, const Models::StartJobRequest &request, const Models::StartJobHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI StartJob is deprecated
       *
       * @summary Creates and starts a job.
       *
       * @param request StartJobRequest
       * @return StartJobResponse
       */
      Models::StartJobResponse startJob(const string &_namespace, const Models::StartJobRequest &request);

      /**
       * @summary Starts a job.
       *
       * @param request StartJobWithParamsRequest
       * @param headers StartJobWithParamsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartJobWithParamsResponse
       */
      Models::StartJobWithParamsResponse startJobWithParamsWithOptions(const string &_namespace, const Models::StartJobWithParamsRequest &request, const Models::StartJobWithParamsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a job.
       *
       * @param request StartJobWithParamsRequest
       * @return StartJobWithParamsResponse
       */
      Models::StartJobWithParamsResponse startJobWithParams(const string &_namespace, const Models::StartJobWithParamsRequest &request);

      /**
       * @summary 启动session集群
       *
       * @param headers StartSessionClusterHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSessionClusterResponse
       */
      Models::StartSessionClusterResponse startSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const Models::StartSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动session集群
       *
       * @return StartSessionClusterResponse
       */
      Models::StartSessionClusterResponse startSessionCluster(const string &_namespace, const string &sessionClusterName);

      /**
       * @summary 停止应用执行定时计划
       *
       * @param headers StopApplyScheduledPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopApplyScheduledPlanResponse
       */
      Models::StopApplyScheduledPlanResponse stopApplyScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const Models::StopApplyScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止应用执行定时计划
       *
       * @return StopApplyScheduledPlanResponse
       */
      Models::StopApplyScheduledPlanResponse stopApplyScheduledPlan(const string &_namespace, const string &scheduledPlanId);

      /**
       * @summary Stops a job.
       *
       * @param request StopJobRequest
       * @param headers StopJobHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopJobResponse
       */
      Models::StopJobResponse stopJobWithOptions(const string &_namespace, const string &jobId, const Models::StopJobRequest &request, const Models::StopJobHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a job.
       *
       * @param request StopJobRequest
       * @return StopJobResponse
       */
      Models::StopJobResponse stopJob(const string &_namespace, const string &jobId, const Models::StopJobRequest &request);

      /**
       * @summary 停止session集群
       *
       * @param headers StopSessionClusterHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSessionClusterResponse
       */
      Models::StopSessionClusterResponse stopSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const Models::StopSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止session集群
       *
       * @return StopSessionClusterResponse
       */
      Models::StopSessionClusterResponse stopSessionCluster(const string &_namespace, const string &sessionClusterName);

      /**
       * @summary 提交sql调试
       *
       * @param request SubmitSqlPreviewRequest
       * @param headers SubmitSqlPreviewHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSqlPreviewResponse
       */
      Models::SubmitSqlPreviewResponse submitSqlPreviewWithOptions(const string &_namespace, const Models::SubmitSqlPreviewRequest &request, const Models::SubmitSqlPreviewHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交sql调试
       *
       * @param request SubmitSqlPreviewRequest
       * @return SubmitSqlPreviewResponse
       */
      Models::SubmitSqlPreviewResponse submitSqlPreview(const string &_namespace, const Models::SubmitSqlPreviewRequest &request);

      /**
       * @summary Updates information about a deployment.
       *
       * @param request UpdateDeploymentRequest
       * @param headers UpdateDeploymentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeploymentResponse
       */
      Models::UpdateDeploymentResponse updateDeploymentWithOptions(const string &_namespace, const string &deploymentId, const Models::UpdateDeploymentRequest &request, const Models::UpdateDeploymentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information about a deployment.
       *
       * @param request UpdateDeploymentRequest
       * @return UpdateDeploymentResponse
       */
      Models::UpdateDeploymentResponse updateDeployment(const string &_namespace, const string &deploymentId, const Models::UpdateDeploymentRequest &request);

      /**
       * @summary update a deploymentDraft
       *
       * @param request UpdateDeploymentDraftRequest
       * @param headers UpdateDeploymentDraftHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeploymentDraftResponse
       */
      Models::UpdateDeploymentDraftResponse updateDeploymentDraftWithOptions(const string &_namespace, const string &deploymentDraftId, const Models::UpdateDeploymentDraftRequest &request, const Models::UpdateDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary update a deploymentDraft
       *
       * @param request UpdateDeploymentDraftRequest
       * @return UpdateDeploymentDraftResponse
       */
      Models::UpdateDeploymentDraftResponse updateDeploymentDraft(const string &_namespace, const string &deploymentDraftId, const Models::UpdateDeploymentDraftRequest &request);

      /**
       * @summary 修改deploymentTarget
       *
       * @param request UpdateDeploymentTargetRequest
       * @param headers UpdateDeploymentTargetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeploymentTargetResponse
       */
      Models::UpdateDeploymentTargetResponse updateDeploymentTargetWithOptions(const string &_namespace, const string &deploymentTargetName, const Models::UpdateDeploymentTargetRequest &request, const Models::UpdateDeploymentTargetHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改deploymentTarget
       *
       * @param request UpdateDeploymentTargetRequest
       * @return UpdateDeploymentTargetResponse
       */
      Models::UpdateDeploymentTargetResponse updateDeploymentTarget(const string &_namespace, const string &deploymentTargetName, const Models::UpdateDeploymentTargetRequest &request);

      /**
       * @summary 更新部署目标
       *
       * @param request UpdateDeploymentTargetV2Request
       * @param headers UpdateDeploymentTargetV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeploymentTargetV2Response
       */
      Models::UpdateDeploymentTargetV2Response updateDeploymentTargetV2WithOptions(const string &_namespace, const string &deploymentTargetName, const Models::UpdateDeploymentTargetV2Request &request, const Models::UpdateDeploymentTargetV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新部署目标
       *
       * @param request UpdateDeploymentTargetV2Request
       * @return UpdateDeploymentTargetV2Response
       */
      Models::UpdateDeploymentTargetV2Response updateDeploymentTargetV2(const string &_namespace, const string &deploymentTargetName, const Models::UpdateDeploymentTargetV2Request &request);

      /**
       * @summary update a folder
       *
       * @param request UpdateFolderRequest
       * @param headers UpdateFolderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolderWithOptions(const string &_namespace, const string &folderId, const Models::UpdateFolderRequest &request, const Models::UpdateFolderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary update a folder
       *
       * @param request UpdateFolderRequest
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolder(const string &_namespace, const string &folderId, const Models::UpdateFolderRequest &request);

      /**
       * @summary Updates the permissions of one or more members in a specific namespace.
       *
       * @param request UpdateMemberRequest
       * @param headers UpdateMemberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemberResponse
       */
      Models::UpdateMemberResponse updateMemberWithOptions(const string &_namespace, const Models::UpdateMemberRequest &request, const Models::UpdateMemberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the permissions of one or more members in a specific namespace.
       *
       * @param request UpdateMemberRequest
       * @return UpdateMemberResponse
       */
      Models::UpdateMemberResponse updateMember(const string &_namespace, const Models::UpdateMemberRequest &request);

      /**
       * @summary 更新定时执行计划
       *
       * @param request UpdateScheduledPlanRequest
       * @param headers UpdateScheduledPlanHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScheduledPlanResponse
       */
      Models::UpdateScheduledPlanResponse updateScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const Models::UpdateScheduledPlanRequest &request, const Models::UpdateScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新定时执行计划
       *
       * @param request UpdateScheduledPlanRequest
       * @return UpdateScheduledPlanResponse
       */
      Models::UpdateScheduledPlanResponse updateScheduledPlan(const string &_namespace, const string &scheduledPlanId, const Models::UpdateScheduledPlanRequest &request);

      /**
       * @summary 更新session集群
       *
       * @param request UpdateSessionClusterRequest
       * @param headers UpdateSessionClusterHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSessionClusterResponse
       */
      Models::UpdateSessionClusterResponse updateSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const Models::UpdateSessionClusterRequest &request, const Models::UpdateSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新session集群
       *
       * @param request UpdateSessionClusterRequest
       * @return UpdateSessionClusterResponse
       */
      Models::UpdateSessionClusterResponse updateSessionCluster(const string &_namespace, const string &sessionClusterName, const Models::UpdateSessionClusterRequest &request);

      /**
       * @summary Updates the JAR file of the user-defined function (UDF) that you create.
       *
       * @param request UpdateUdfArtifactRequest
       * @param headers UpdateUdfArtifactHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUdfArtifactResponse
       */
      Models::UpdateUdfArtifactResponse updateUdfArtifactWithOptions(const string &_namespace, const string &udfArtifactName, const Models::UpdateUdfArtifactRequest &request, const Models::UpdateUdfArtifactHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the JAR file of the user-defined function (UDF) that you create.
       *
       * @param request UpdateUdfArtifactRequest
       * @return UpdateUdfArtifactResponse
       */
      Models::UpdateUdfArtifactResponse updateUdfArtifact(const string &_namespace, const string &udfArtifactName, const Models::UpdateUdfArtifactRequest &request);

      /**
       * @summary 更新秘钥
       *
       * @param request UpdateVariableRequest
       * @param headers UpdateVariableHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVariableResponse
       */
      Models::UpdateVariableResponse updateVariableWithOptions(const string &_namespace, const string &name, const Models::UpdateVariableRequest &request, const Models::UpdateVariableHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新秘钥
       *
       * @param request UpdateVariableRequest
       * @return UpdateVariableResponse
       */
      Models::UpdateVariableResponse updateVariable(const string &_namespace, const string &name, const Models::UpdateVariableRequest &request);

      /**
       * @summary Verifies the code of an SQL deployment.
       *
       * @param request ValidateSqlStatementRequest
       * @param headers ValidateSqlStatementHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateSqlStatementResponse
       */
      Models::ValidateSqlStatementResponse validateSqlStatementWithOptions(const string &_namespace, const Models::ValidateSqlStatementRequest &request, const Models::ValidateSqlStatementHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the code of an SQL deployment.
       *
       * @param request ValidateSqlStatementRequest
       * @return ValidateSqlStatementResponse
       */
      Models::ValidateSqlStatementResponse validateSqlStatement(const string &_namespace, const Models::ValidateSqlStatementRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
