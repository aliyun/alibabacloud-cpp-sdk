// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_POLARDB20170801_HPP_
#define ALIBABACLOUD_POLARDB20170801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Polardb20170801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Polardb20170801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Aborts an upgrade or migration task.
       *
       * @description - Aborts an upgrade or migration task.
       * > Before you call this operation, create an upgrade task for the cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and setting the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Upgrade an ApsaraDB RDS for MySQL instance to a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request AbortDBClusterMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortDBClusterMigrationResponse
       */
      Models::AbortDBClusterMigrationResponse abortDBClusterMigrationWithOptions(const Models::AbortDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Aborts an upgrade or migration task.
       *
       * @description - Aborts an upgrade or migration task.
       * > Before you call this operation, create an upgrade task for the cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and setting the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Upgrade an ApsaraDB RDS for MySQL instance to a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request AbortDBClusterMigrationRequest
       * @return AbortDBClusterMigrationResponse
       */
      Models::AbortDBClusterMigrationResponse abortDBClusterMigration(const Models::AbortDBClusterMigrationRequest &request);

      /**
       * @summary Grants permissions to a role.
       *
       * @param request AddEncryptionDBRolePrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEncryptionDBRolePrivilegeResponse
       */
      Models::AddEncryptionDBRolePrivilegeResponse addEncryptionDBRolePrivilegeWithOptions(const Models::AddEncryptionDBRolePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to a role.
       *
       * @param request AddEncryptionDBRolePrivilegeRequest
       * @return AddEncryptionDBRolePrivilegeResponse
       */
      Models::AddEncryptionDBRolePrivilegeResponse addEncryptionDBRolePrivilege(const Models::AddEncryptionDBRolePrivilegeRequest &request);

      /**
       * @summary Adds SQL firewall rules.
       *
       * @param request AddFirewallRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFirewallRulesResponse
       */
      Models::AddFirewallRulesResponse addFirewallRulesWithOptions(const Models::AddFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds SQL firewall rules.
       *
       * @param request AddFirewallRulesRequest
       * @return AddFirewallRulesResponse
       */
      Models::AddFirewallRulesResponse addFirewallRules(const Models::AddFirewallRulesRequest &request);

      /**
       * @summary Adds an MCP server to a specified PolarClaw application.
       *
       * @description ## Description
       * - The `ApplicationId` and `ServerName` parameters are required.
       * - The `ApplicationId` parameter specifies the application ID.
       * - The `ServerName` parameter specifies the MCP server name to add.
       * - A successful response returns the request ID, a message, a status code, the application ID, and the server name.
       * - If the request fails, the API may return a 500 error code with a detailed error message.
       *
       * @param tmpReq AddPolarClawMCPServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPolarClawMCPServerResponse
       */
      Models::AddPolarClawMCPServerResponse addPolarClawMCPServerWithOptions(const Models::AddPolarClawMCPServerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an MCP server to a specified PolarClaw application.
       *
       * @description ## Description
       * - The `ApplicationId` and `ServerName` parameters are required.
       * - The `ApplicationId` parameter specifies the application ID.
       * - The `ServerName` parameter specifies the MCP server name to add.
       * - A successful response returns the request ID, a message, a status code, the application ID, and the server name.
       * - If the request fails, the API may return a 500 error code with a detailed error message.
       *
       * @param request AddPolarClawMCPServerRequest
       * @return AddPolarClawMCPServerResponse
       */
      Models::AddPolarClawMCPServerResponse addPolarClawMCPServer(const Models::AddPolarClawMCPServerRequest &request);

      /**
       * @summary Adds a transparent acceleration path.
       *
       * @param request AddPolarFsPathMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPolarFsPathMappingResponse
       */
      Models::AddPolarFsPathMappingResponse addPolarFsPathMappingWithOptions(const Models::AddPolarFsPathMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a transparent acceleration path.
       *
       * @param request AddPolarFsPathMappingRequest
       * @return AddPolarFsPathMappingResponse
       */
      Models::AddPolarFsPathMappingResponse addPolarFsPathMapping(const Models::AddPolarFsPathMappingRequest &request);

      /**
       * @summary Adds a new directory quota rule to a Polarlakebase instance.
       *
       * @description ## Request description
       * - This operation adds a new path policy—a directory quota rule—to a specified Polarlakebase instance.
       * - The `Quotas` parameter is a list. Each element represents a new quota rule. You can add up to 11 rules in a single request.
       * - Each rule must include the `Name` and `Include` fields. Other fields, such as `Description` and `Exclude`, are optional.
       * - To define the quota limit, specify at least one of the following parameters: `SizeLimit`, `FileCountLimit`, `AccessTTL`, or `ChangeTTL`.
       * - The `Priority` field specifies the rule priority. A larger value indicates higher priority. The default value is 0.
       * - The `Enabled` field determines whether the rule takes effect immediately. The default value is true.
       *
       * @param request AddPolarFsQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPolarFsQuotaResponse
       */
      Models::AddPolarFsQuotaResponse addPolarFsQuotaWithOptions(const Models::AddPolarFsQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a new directory quota rule to a Polarlakebase instance.
       *
       * @description ## Request description
       * - This operation adds a new path policy—a directory quota rule—to a specified Polarlakebase instance.
       * - The `Quotas` parameter is a list. Each element represents a new quota rule. You can add up to 11 rules in a single request.
       * - Each rule must include the `Name` and `Include` fields. Other fields, such as `Description` and `Exclude`, are optional.
       * - To define the quota limit, specify at least one of the following parameters: `SizeLimit`, `FileCountLimit`, `AccessTTL`, or `ChangeTTL`.
       * - The `Priority` field specifies the rule priority. A larger value indicates higher priority. The default value is 0.
       * - The `Enabled` field determines whether the rule takes effect immediately. The default value is true.
       *
       * @param request AddPolarFsQuotaRequest
       * @return AddPolarFsQuotaResponse
       */
      Models::AddPolarFsQuotaResponse addPolarFsQuota(const Models::AddPolarFsQuotaRequest &request);

      /**
       * @summary Adds SQL throttling rules.
       *
       * @param request AddSQLRateLimitingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSQLRateLimitingRulesResponse
       */
      Models::AddSQLRateLimitingRulesResponse addSQLRateLimitingRulesWithOptions(const Models::AddSQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds SQL throttling rules.
       *
       * @param request AddSQLRateLimitingRulesRequest
       * @return AddSQLRateLimitingRulesResponse
       */
      Models::AddSQLRateLimitingRulesResponse addSQLRateLimitingRules(const Models::AddSQLRateLimitingRulesRequest &request);

      /**
       * @summary Applies prompts to an application instance.
       *
       * @description ## Request
       * - Applies prompts to a specified application instance.
       *
       * @param tmpReq ApplyApplicationPromptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyApplicationPromptsResponse
       */
      Models::ApplyApplicationPromptsResponse applyApplicationPromptsWithOptions(const Models::ApplyApplicationPromptsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies prompts to an application instance.
       *
       * @description ## Request
       * - Applies prompts to a specified application instance.
       *
       * @param request ApplyApplicationPromptsRequest
       * @return ApplyApplicationPromptsResponse
       */
      Models::ApplyApplicationPromptsResponse applyApplicationPrompts(const Models::ApplyApplicationPromptsRequest &request);

      /**
       * @summary Approves a PolarClaw device pairing.
       *
       * @param request ApprovePolarClawDevicePairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApprovePolarClawDevicePairResponse
       */
      Models::ApprovePolarClawDevicePairResponse approvePolarClawDevicePairWithOptions(const Models::ApprovePolarClawDevicePairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Approves a PolarClaw device pairing.
       *
       * @param request ApprovePolarClawDevicePairRequest
       * @return ApprovePolarClawDevicePairResponse
       */
      Models::ApprovePolarClawDevicePairResponse approvePolarClawDevicePair(const Models::ApprovePolarClawDevicePairRequest &request);

      /**
       * @summary Attaches a specified PolarLakeBase cold-storage instance to a PolarDB application.
       *
       * @param request AttachApplicationPolarFSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachApplicationPolarFSResponse
       */
      Models::AttachApplicationPolarFSResponse attachApplicationPolarFSWithOptions(const Models::AttachApplicationPolarFSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a specified PolarLakeBase cold-storage instance to a PolarDB application.
       *
       * @param request AttachApplicationPolarFSRequest
       * @return AttachApplicationPolarFSResponse
       */
      Models::AttachApplicationPolarFSResponse attachApplicationPolarFS(const Models::AttachApplicationPolarFSRequest &request);

      /**
       * @summary Binds a PolarClaw Agent to a channel.
       *
       * @description ## Request
       * This API associates an agent from a PolarClaw application with a communication channel. You specify the application with `ApplicationId`, the agent with `AgentId`, and the channel with `Channel`. You can optionally specify an account ID for the channel with `ChannelAccountId`.
       *
       * @param request BindPolarClawAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindPolarClawAgentResponse
       */
      Models::BindPolarClawAgentResponse bindPolarClawAgentWithOptions(const Models::BindPolarClawAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a PolarClaw Agent to a channel.
       *
       * @description ## Request
       * This API associates an agent from a PolarClaw application with a communication channel. You specify the application with `ApplicationId`, the agent with `AgentId`, and the channel with `Channel`. You can optionally specify an account ID for the channel with `ChannelAccountId`.
       *
       * @param request BindPolarClawAgentRequest
       * @return BindPolarClawAgentResponse
       */
      Models::BindPolarClawAgentResponse bindPolarClawAgent(const Models::BindPolarClawAgentRequest &request);

      /**
       * @summary Cancels O\\\\\\&M events at a time.
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels O\\\\\\&M events at a time.
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Cancels an auto triggered task policy.
       *
       * @param request CancelCronJobPolicyServerlessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCronJobPolicyServerlessResponse
       */
      Models::CancelCronJobPolicyServerlessResponse cancelCronJobPolicyServerlessWithOptions(const Models::CancelCronJobPolicyServerlessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an auto triggered task policy.
       *
       * @param request CancelCronJobPolicyServerlessRequest
       * @return CancelCronJobPolicyServerlessResponse
       */
      Models::CancelCronJobPolicyServerlessResponse cancelCronJobPolicyServerless(const Models::CancelCronJobPolicyServerlessRequest &request);

      /**
       * @summary Deletes quota rules for one or more file paths within a specified Polarlakebase instance.
       *
       * @description ## Request description
       * - The `PolarFsInstanceId` parameter is required. It specifies the Polarlakebase instance for the operation.
       * - The `FilePathIds` parameter is required. It accepts a string containing the IDs of the file paths for which you want to delete quota rules. Ensure that each ID is valid and belongs to the specified Polarlakebase instance.
       * - A single API call can delete quotas for multiple file paths. However, limit the number of paths in a single request to avoid performance issues.
       *
       * @param request CancelPolarFsFileQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPolarFsFileQuotaResponse
       */
      Models::CancelPolarFsFileQuotaResponse cancelPolarFsFileQuotaWithOptions(const Models::CancelPolarFsFileQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes quota rules for one or more file paths within a specified Polarlakebase instance.
       *
       * @description ## Request description
       * - The `PolarFsInstanceId` parameter is required. It specifies the Polarlakebase instance for the operation.
       * - The `FilePathIds` parameter is required. It accepts a string containing the IDs of the file paths for which you want to delete quota rules. Ensure that each ID is valid and belongs to the specified Polarlakebase instance.
       * - A single API call can delete quotas for multiple file paths. However, limit the number of paths in a single request to avoid performance issues.
       *
       * @param request CancelPolarFsFileQuotaRequest
       * @return CancelPolarFsFileQuotaResponse
       */
      Models::CancelPolarFsFileQuotaResponse cancelPolarFsFileQuota(const Models::CancelPolarFsFileQuotaRequest &request);

      /**
       * @summary Cancels scheduled tasks that have not started.
       *
       * @param request CancelScheduleTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelScheduleTasksResponse
       */
      Models::CancelScheduleTasksResponse cancelScheduleTasksWithOptions(const Models::CancelScheduleTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels scheduled tasks that have not started.
       *
       * @param request CancelScheduleTasksRequest
       * @return CancelScheduleTasksResponse
       */
      Models::CancelScheduleTasksResponse cancelScheduleTasks(const Models::CancelScheduleTasksRequest &request);

      /**
       * @summary Checks whether an account name is valid or unique in a cluster.
       *
       * @param request CheckAccountNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountNameResponse
       */
      Models::CheckAccountNameResponse checkAccountNameWithOptions(const Models::CheckAccountNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether an account name is valid or unique in a cluster.
       *
       * @param request CheckAccountNameRequest
       * @return CheckAccountNameResponse
       */
      Models::CheckAccountNameResponse checkAccountName(const Models::CheckAccountNameRequest &request);

      /**
       * @summary Checks a PolarDB account name.
       *
       * @param request CheckAccountNameZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountNameZonalResponse
       */
      Models::CheckAccountNameZonalResponse checkAccountNameZonalWithOptions(const Models::CheckAccountNameZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks a PolarDB account name.
       *
       * @param request CheckAccountNameZonalRequest
       * @return CheckAccountNameZonalResponse
       */
      Models::CheckAccountNameZonalResponse checkAccountNameZonal(const Models::CheckAccountNameZonalRequest &request);

      /**
       * @summary Checks the connection string of a cluster.
       *
       * @param request CheckConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckConnectionStringResponse
       */
      Models::CheckConnectionStringResponse checkConnectionStringWithOptions(const Models::CheckConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the connection string of a cluster.
       *
       * @param request CheckConnectionStringRequest
       * @return CheckConnectionStringResponse
       */
      Models::CheckConnectionStringResponse checkConnectionString(const Models::CheckConnectionStringRequest &request);

      /**
       * @summary Checks whether a database name is valid or if a database with the same name already exists in the current cluster.
       *
       * @param request CheckDBNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDBNameResponse
       */
      Models::CheckDBNameResponse checkDBNameWithOptions(const Models::CheckDBNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a database name is valid or if a database with the same name already exists in the current cluster.
       *
       * @param request CheckDBNameRequest
       * @return CheckDBNameResponse
       */
      Models::CheckDBNameResponse checkDBName(const Models::CheckDBNameRequest &request);

      /**
       * @summary Checks the name of a database in an edge cluster for PolarDB on ENS.
       *
       * @param request CheckDBNameZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDBNameZonalResponse
       */
      Models::CheckDBNameZonalResponse checkDBNameZonalWithOptions(const Models::CheckDBNameZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the name of a database in an edge cluster for PolarDB on ENS.
       *
       * @param request CheckDBNameZonalRequest
       * @return CheckDBNameZonalResponse
       */
      Models::CheckDBNameZonalResponse checkDBNameZonal(const Models::CheckDBNameZonalRequest &request);

      /**
       * @summary Checks whether a user is authorized to use Key Management Service (KMS).
       *
       * @param request CheckKMSAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckKMSAuthorizedResponse
       */
      Models::CheckKMSAuthorizedResponse checkKMSAuthorizedWithOptions(const Models::CheckKMSAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a user is authorized to use Key Management Service (KMS).
       *
       * @param request CheckKMSAuthorizedRequest
       * @return CheckKMSAuthorizedResponse
       */
      Models::CheckKMSAuthorizedResponse checkKMSAuthorized(const Models::CheckKMSAuthorizedRequest &request);

      /**
       * @summary Checks the consistency of quota settings in a PolarFS instance.
       *
       * @description ## Description
       * This operation verifies the consistency of quota configurations within a specified PolarFS instance. These configurations include storage capacity and inode limits on directory paths. If inconsistencies are found, the operation returns a list of the inconsistent paths and any related error information.
       * ### Usage notes
       * - Ensure that the `PolarFsInstanceId` parameter correctly identifies the target PolarFS instance.
       * - When the system detects quota inconsistencies, it returns `IsConsistent=false` and populates the `InconsistentPaths` array.
       * - If the request is successful and no inconsistencies are found, the `InconsistentPaths` array is empty and `IsConsistent` is set to `true`.
       * - For errors such as insufficient permissions or a non-existent resource, see the error codes for details.
       *
       * @param request CheckPolarFsQuotaConsistencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckPolarFsQuotaConsistencyResponse
       */
      Models::CheckPolarFsQuotaConsistencyResponse checkPolarFsQuotaConsistencyWithOptions(const Models::CheckPolarFsQuotaConsistencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the consistency of quota settings in a PolarFS instance.
       *
       * @description ## Description
       * This operation verifies the consistency of quota configurations within a specified PolarFS instance. These configurations include storage capacity and inode limits on directory paths. If inconsistencies are found, the operation returns a list of the inconsistent paths and any related error information.
       * ### Usage notes
       * - Ensure that the `PolarFsInstanceId` parameter correctly identifies the target PolarFS instance.
       * - When the system detects quota inconsistencies, it returns `IsConsistent=false` and populates the `InconsistentPaths` array.
       * - If the request is successful and no inconsistencies are found, the `InconsistentPaths` array is empty and `IsConsistent` is set to `true`.
       * - For errors such as insufficient permissions or a non-existent resource, see the error codes for details.
       *
       * @param request CheckPolarFsQuotaConsistencyRequest
       * @return CheckPolarFsQuotaConsistencyResponse
       */
      Models::CheckPolarFsQuotaConsistencyResponse checkPolarFsQuotaConsistency(const Models::CheckPolarFsQuotaConsistencyRequest &request);

      /**
       * @summary Checks whether a service-linked role has been created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a service-linked role has been created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary Clones a snapshot of a file or folder for a Basic Edition instance.
       *
       * @description ## Request description
       * - `PolarFsInstanceId` is required. It specifies the PolarDB instance for the operation.
       *
       * @param request ClonePolarFsBasicSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClonePolarFsBasicSnapshotResponse
       */
      Models::ClonePolarFsBasicSnapshotResponse clonePolarFsBasicSnapshotWithOptions(const Models::ClonePolarFsBasicSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones a snapshot of a file or folder for a Basic Edition instance.
       *
       * @description ## Request description
       * - `PolarFsInstanceId` is required. It specifies the PolarDB instance for the operation.
       *
       * @param request ClonePolarFsBasicSnapshotRequest
       * @return ClonePolarFsBasicSnapshotResponse
       */
      Models::ClonePolarFsBasicSnapshotResponse clonePolarFsBasicSnapshot(const Models::ClonePolarFsBasicSnapshotRequest &request);

      /**
       * @summary Disables the PolarDB for AI feature.
       *
       * @param request CloseAITaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseAITaskResponse
       */
      Models::CloseAITaskResponse closeAITaskWithOptions(const Models::CloseAITaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the PolarDB for AI feature.
       *
       * @param request CloseAITaskRequest
       * @return CloseAITaskResponse
       */
      Models::CloseAITaskResponse closeAITask(const Models::CloseAITaskRequest &request);

      /**
       * @summary Cancels or completes the migration task that upgrades an RDS cluster to a PolarDB cluster.
       *
       * @description - Cancel the migration task before data migration.
       * - Perform the migration task after data migration.
       * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html)Operation to create an upgrade task. Set the **CreationOption**Parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request CloseDBClusterMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseDBClusterMigrationResponse
       */
      Models::CloseDBClusterMigrationResponse closeDBClusterMigrationWithOptions(const Models::CloseDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels or completes the migration task that upgrades an RDS cluster to a PolarDB cluster.
       *
       * @description - Cancel the migration task before data migration.
       * - Perform the migration task after data migration.
       * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html)Operation to create an upgrade task. Set the **CreationOption**Parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request CloseDBClusterMigrationRequest
       * @return CloseDBClusterMigrationResponse
       */
      Models::CloseDBClusterMigrationResponse closeDBClusterMigration(const Models::CloseDBClusterMigrationRequest &request);

      /**
       * @summary Continues the current migration or upgrade task.
       *
       * @param request ContinueDBClusterMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinueDBClusterMigrationResponse
       */
      Models::ContinueDBClusterMigrationResponse continueDBClusterMigrationWithOptions(const Models::ContinueDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Continues the current migration or upgrade task.
       *
       * @param request ContinueDBClusterMigrationRequest
       * @return ContinueDBClusterMigrationResponse
       */
      Models::ContinueDBClusterMigrationResponse continueDBClusterMigration(const Models::ContinueDBClusterMigrationRequest &request);

      /**
       * @summary This topic describes how to create an AI cluster.
       *
       * @param request CreateAIDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAIDBClusterResponse
       */
      Models::CreateAIDBClusterResponse createAIDBClusterWithOptions(const Models::CreateAIDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes how to create an AI cluster.
       *
       * @param request CreateAIDBClusterRequest
       * @return CreateAIDBClusterResponse
       */
      Models::CreateAIDBClusterResponse createAIDBCluster(const Models::CreateAIDBClusterRequest &request);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateAIDBClusterDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAIDBClusterDatasetResponse
       */
      Models::CreateAIDBClusterDatasetResponse createAIDBClusterDatasetWithOptions(const Models::CreateAIDBClusterDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateAIDBClusterDatasetRequest
       * @return CreateAIDBClusterDatasetResponse
       */
      Models::CreateAIDBClusterDatasetResponse createAIDBClusterDataset(const Models::CreateAIDBClusterDatasetRequest &request);

      /**
       * @summary Creates a model operator instance.
       *
       * @param request CreateAIDBClusterTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAIDBClusterTaskResponse
       */
      Models::CreateAIDBClusterTaskResponse createAIDBClusterTaskWithOptions(const Models::CreateAIDBClusterTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model operator instance.
       *
       * @param request CreateAIDBClusterTaskRequest
       * @return CreateAIDBClusterTaskResponse
       */
      Models::CreateAIDBClusterTaskResponse createAIDBClusterTask(const Models::CreateAIDBClusterTaskRequest &request);

      /**
       * @summary Creates AI nodes.
       *
       * @param request CreateAINodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAINodesResponse
       */
      Models::CreateAINodesResponse createAINodesWithOptions(const Models::CreateAINodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates AI nodes.
       *
       * @param request CreateAINodesRequest
       * @return CreateAINodesResponse
       */
      Models::CreateAINodesResponse createAINodes(const Models::CreateAINodesRequest &request);

      /**
       * @summary Creates a database account for a PolarDB cluster.
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account for a PolarDB cluster.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates an account for a PolarDB on ENS cluster.
       *
       * @param request CreateAccountZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountZonalResponse
       */
      Models::CreateAccountZonalResponse createAccountZonalWithOptions(const Models::CreateAccountZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account for a PolarDB on ENS cluster.
       *
       * @param request CreateAccountZonalRequest
       * @return CreateAccountZonalResponse
       */
      Models::CreateAccountZonalResponse createAccountZonal(const Models::CreateAccountZonalRequest &request);

      /**
       * @summary Generates activation codes for the lightweight version.
       *
       * @param request CreateActivationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateActivationCodeResponse
       */
      Models::CreateActivationCodeResponse createActivationCodeWithOptions(const Models::CreateActivationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates activation codes for the lightweight version.
       *
       * @param request CreateActivationCodeRequest
       * @return CreateActivationCodeResponse
       */
      Models::CreateActivationCodeResponse createActivationCode(const Models::CreateActivationCodeRequest &request);

      /**
       * @summary Creates an application attached to a PolarDB instance.
       *
       * @param tmpReq CreateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application attached to a PolarDB instance.
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary Creates a connection address for a specified application.
       *
       * @param request CreateApplicationEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationEndpointAddressResponse
       */
      Models::CreateApplicationEndpointAddressResponse createApplicationEndpointAddressWithOptions(const Models::CreateApplicationEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a connection address for a specified application.
       *
       * @param request CreateApplicationEndpointAddressRequest
       * @return CreateApplicationEndpointAddressResponse
       */
      Models::CreateApplicationEndpointAddressResponse createApplicationEndpointAddress(const Models::CreateApplicationEndpointAddressRequest &request);

      /**
       * @summary Creates a Prompt for an Application.
       *
       * @param request CreateApplicationPromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationPromptResponse
       */
      Models::CreateApplicationPromptResponse createApplicationPromptWithOptions(const Models::CreateApplicationPromptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Prompt for an Application.
       *
       * @param request CreateApplicationPromptRequest
       * @return CreateApplicationPromptResponse
       */
      Models::CreateApplicationPromptResponse createApplicationPrompt(const Models::CreateApplicationPromptRequest &request);

      /**
       * @summary Creates a full snapshot backup for a PolarDB cluster.
       *
       * @description > - Each cluster can have up to three manually created backups at a time.
       * >
       * > - If you receive the error message `Exceeding the daily backup times of this DB cluster`, this indicates that three manual backups already exist for your cluster. [Delete a backup](https://help.aliyun.com/document_detail/98101.html) before you call this operation again.
       * >
       * > - After you call this operation, a backup job is created in the background. The job may take a long time to complete if the data volume is large.
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a full snapshot backup for a PolarDB cluster.
       *
       * @description > - Each cluster can have up to three manually created backups at a time.
       * >
       * > - If you receive the error message `Exceeding the daily backup times of this DB cluster`, this indicates that three manual backups already exist for your cluster. [Delete a backup](https://help.aliyun.com/document_detail/98101.html) before you call this operation again.
       * >
       * > - After you call this operation, a backup job is created in the background. The job may take a long time to complete if the data volume is large.
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates API keys in batches.
       *
       * @param request CreateBatchConsumerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchConsumerResponse
       */
      Models::CreateBatchConsumerResponse createBatchConsumerWithOptions(const Models::CreateBatchConsumerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates API keys in batches.
       *
       * @param request CreateBatchConsumerRequest
       * @return CreateBatchConsumerResponse
       */
      Models::CreateBatchConsumerResponse createBatchConsumer(const Models::CreateBatchConsumerRequest &request);

      /**
       * @summary Creates a batch task.
       *
       * @param tmpReq CreateBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchTaskResponse
       */
      Models::CreateBatchTaskResponse createBatchTaskWithOptions(const Models::CreateBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a batch task.
       *
       * @param request CreateBatchTaskRequest
       * @return CreateBatchTaskResponse
       */
      Models::CreateBatchTaskResponse createBatchTask(const Models::CreateBatchTaskRequest &request);

      /**
       * @summary Creates a budget policy.
       *
       * @param request CreateBudgetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBudgetPolicyResponse
       */
      Models::CreateBudgetPolicyResponse createBudgetPolicyWithOptions(const Models::CreateBudgetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a budget policy.
       *
       * @param request CreateBudgetPolicyRequest
       * @return CreateBudgetPolicyResponse
       */
      Models::CreateBudgetPolicyResponse createBudgetPolicy(const Models::CreateBudgetPolicyRequest &request);

      /**
       * @summary Creates a cold storage instance.
       *
       * @param request CreateColdStorageInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateColdStorageInstanceResponse
       */
      Models::CreateColdStorageInstanceResponse createColdStorageInstanceWithOptions(const Models::CreateColdStorageInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cold storage instance.
       *
       * @param request CreateColdStorageInstanceRequest
       * @return CreateColdStorageInstanceResponse
       */
      Models::CreateColdStorageInstanceResponse createColdStorageInstance(const Models::CreateColdStorageInstanceRequest &request);

      /**
       * @summary Creates a consumer.
       *
       * @param request CreateConsumerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerResponse
       */
      Models::CreateConsumerResponse createConsumerWithOptions(const Models::CreateConsumerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer.
       *
       * @param request CreateConsumerRequest
       * @return CreateConsumerResponse
       */
      Models::CreateConsumerResponse createConsumer(const Models::CreateConsumerRequest &request);

      /**
       * @summary Creates a consumer group.
       *
       * @param request CreateConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroupWithOptions(const Models::CreateConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group.
       *
       * @param request CreateConsumerGroupRequest
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroup(const Models::CreateConsumerGroupRequest &request);

      /**
       * @summary Creates a cost rule.
       *
       * @param request CreateCostRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCostRuleResponse
       */
      Models::CreateCostRuleResponse createCostRuleWithOptions(const Models::CreateCostRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cost rule.
       *
       * @param request CreateCostRuleRequest
       * @return CreateCostRuleResponse
       */
      Models::CreateCostRuleResponse createCostRule(const Models::CreateCostRuleRequest &request);

      /**
       * @summary Creates a scheduled task policy for a serverless cluster.
       *
       * @param request CreateCronJobPolicyServerlessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCronJobPolicyServerlessResponse
       */
      Models::CreateCronJobPolicyServerlessResponse createCronJobPolicyServerlessWithOptions(const Models::CreateCronJobPolicyServerlessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled task policy for a serverless cluster.
       *
       * @param request CreateCronJobPolicyServerlessRequest
       * @return CreateCronJobPolicyServerlessResponse
       */
      Models::CreateCronJobPolicyServerlessResponse createCronJobPolicyServerless(const Models::CreateCronJobPolicyServerlessRequest &request);

      /**
       * @summary Creates a db cluster.
       *
       * @param request CreateDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBClusterWithOptions(const Models::CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a db cluster.
       *
       * @param request CreateDBClusterRequest
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBCluster(const Models::CreateDBClusterRequest &request);

      /**
       * @summary Creates a custom cluster endpoint for a PolarDB cluster.
       *
       * @param request CreateDBClusterEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterEndpointResponse
       */
      Models::CreateDBClusterEndpointResponse createDBClusterEndpointWithOptions(const Models::CreateDBClusterEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom cluster endpoint for a PolarDB cluster.
       *
       * @param request CreateDBClusterEndpointRequest
       * @return CreateDBClusterEndpointResponse
       */
      Models::CreateDBClusterEndpointResponse createDBClusterEndpoint(const Models::CreateDBClusterEndpointRequest &request);

      /**
       * @summary Edge Cloud API: Create Link Address
       *
       * @param request CreateDBClusterEndpointZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterEndpointZonalResponse
       */
      Models::CreateDBClusterEndpointZonalResponse createDBClusterEndpointZonalWithOptions(const Models::CreateDBClusterEndpointZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edge Cloud API: Create Link Address
       *
       * @param request CreateDBClusterEndpointZonalRequest
       * @return CreateDBClusterEndpointZonalResponse
       */
      Models::CreateDBClusterEndpointZonalResponse createDBClusterEndpointZonal(const Models::CreateDBClusterEndpointZonalRequest &request);

      /**
       * @summary Creates a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint of a PolarDB cluster.
       *
       * @description > You can create a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint of a PolarDB cluster.
       *
       * @param request CreateDBEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBEndpointAddressResponse
       */
      Models::CreateDBEndpointAddressResponse createDBEndpointAddressWithOptions(const Models::CreateDBEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint of a PolarDB cluster.
       *
       * @description > You can create a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint of a PolarDB cluster.
       *
       * @param request CreateDBEndpointAddressRequest
       * @return CreateDBEndpointAddressResponse
       */
      Models::CreateDBEndpointAddressResponse createDBEndpointAddress(const Models::CreateDBEndpointAddressRequest &request);

      /**
       * @summary Creates a DBLink.
       *
       * @description A DBLink provides connectivity between two PolarDB for PostgreSQL (Oracle-compatible) clusters, or between a PolarDB for PostgreSQL (Oracle-compatible) cluster and a self-managed PostgreSQL database on an Elastic Compute Service (ECS) instance. This lets you query data across clusters.
       * > - Each cluster supports a maximum of 10 DBLinks.
       * >
       * > - A DBLink consumes one DBLink quota from both the source cluster and the destination cluster.
       * >
       * > - The source cluster and the destination cluster or destination ECS instance must be in the same region.
       *
       * @param request CreateDBLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBLinkResponse
       */
      Models::CreateDBLinkResponse createDBLinkWithOptions(const Models::CreateDBLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a DBLink.
       *
       * @description A DBLink provides connectivity between two PolarDB for PostgreSQL (Oracle-compatible) clusters, or between a PolarDB for PostgreSQL (Oracle-compatible) cluster and a self-managed PostgreSQL database on an Elastic Compute Service (ECS) instance. This lets you query data across clusters.
       * > - Each cluster supports a maximum of 10 DBLinks.
       * >
       * > - A DBLink consumes one DBLink quota from both the source cluster and the destination cluster.
       * >
       * > - The source cluster and the destination cluster or destination ECS instance must be in the same region.
       *
       * @param request CreateDBLinkRequest
       * @return CreateDBLinkResponse
       */
      Models::CreateDBLinkResponse createDBLink(const Models::CreateDBLinkRequest &request);

      /**
       * @summary Add read-only nodes to a PolarDB cluster.
       *
       * @param request CreateDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodesWithOptions(const Models::CreateDBNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add read-only nodes to a PolarDB cluster.
       *
       * @param request CreateDBNodesRequest
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodes(const Models::CreateDBNodesRequest &request);

      /**
       * @summary Creates a database for a PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the following requirements are met:
       * *   The cluster is in the Running state.
       * *   The cluster is unlocked.
       *
       * @param request CreateDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const Models::CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database for a PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the following requirements are met:
       * *   The cluster is in the Running state.
       * *   The cluster is unlocked.
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const Models::CreateDatabaseRequest &request);

      /**
       * @summary Creates a database of an edge cluster for PolarDB on ENS.
       *
       * @param request CreateDatabaseZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseZonalResponse
       */
      Models::CreateDatabaseZonalResponse createDatabaseZonalWithOptions(const Models::CreateDatabaseZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database of an edge cluster for PolarDB on ENS.
       *
       * @param request CreateDatabaseZonalRequest
       * @return CreateDatabaseZonalResponse
       */
      Models::CreateDatabaseZonalResponse createDatabaseZonal(const Models::CreateDatabaseZonalRequest &request);

      /**
       * @summary Creates one or more extensions.
       *
       * @param request CreateExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExtensionsResponse
       */
      Models::CreateExtensionsResponse createExtensionsWithOptions(const Models::CreateExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more extensions.
       *
       * @param request CreateExtensionsRequest
       * @return CreateExtensionsResponse
       */
      Models::CreateExtensionsResponse createExtensions(const Models::CreateExtensionsRequest &request);

      /**
       * @summary Creates a gateway instance.
       *
       * @param request CreateGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayResponse
       */
      Models::CreateGatewayResponse createGatewayWithOptions(const Models::CreateGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a gateway instance.
       *
       * @param request CreateGatewayRequest
       * @return CreateGatewayResponse
       */
      Models::CreateGatewayResponse createGateway(const Models::CreateGatewayRequest &request);

      /**
       * @summary Create a new PolarLakeBase Global Data Network (GDN).
       *
       * @description > This API creates a PolarFileSystem (PolarFS) Global Data Network (GDN). Do not confuse it with the CreateGlobalDatabaseNetwork API, which operates on a PolarDB cluster. Ensure you are using the correct API to avoid unintended actions.
       *
       * @param request CreateGlobalDataNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalDataNetworkResponse
       */
      Models::CreateGlobalDataNetworkResponse createGlobalDataNetworkWithOptions(const Models::CreateGlobalDataNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new PolarLakeBase Global Data Network (GDN).
       *
       * @description > This API creates a PolarFileSystem (PolarFS) Global Data Network (GDN). Do not confuse it with the CreateGlobalDatabaseNetwork API, which operates on a PolarDB cluster. Ensure you are using the correct API to avoid unintended actions.
       *
       * @param request CreateGlobalDataNetworkRequest
       * @return CreateGlobalDataNetworkResponse
       */
      Models::CreateGlobalDataNetworkResponse createGlobalDataNetwork(const Models::CreateGlobalDataNetworkRequest &request);

      /**
       * @summary Creates a new global database network (GDN).
       *
       * @description > A cluster can belong to only one GDN.
       *
       * @param request CreateGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalDatabaseNetworkResponse
       */
      Models::CreateGlobalDatabaseNetworkResponse createGlobalDatabaseNetworkWithOptions(const Models::CreateGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new global database network (GDN).
       *
       * @description > A cluster can belong to only one GDN.
       *
       * @param request CreateGlobalDatabaseNetworkRequest
       * @return CreateGlobalDatabaseNetworkResponse
       */
      Models::CreateGlobalDatabaseNetworkResponse createGlobalDatabaseNetwork(const Models::CreateGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Creates a global IP whitelist template.
       *
       * @param request CreateGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalSecurityIPGroupResponse
       */
      Models::CreateGlobalSecurityIPGroupResponse createGlobalSecurityIPGroupWithOptions(const Models::CreateGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a global IP whitelist template.
       *
       * @param request CreateGlobalSecurityIPGroupRequest
       * @return CreateGlobalSecurityIPGroupResponse
       */
      Models::CreateGlobalSecurityIPGroupResponse createGlobalSecurityIPGroup(const Models::CreateGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Creates a model API.
       *
       * @param request CreateModelApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelApiResponse
       */
      Models::CreateModelApiResponse createModelApiWithOptions(const Models::CreateModelApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model API.
       *
       * @param request CreateModelApiRequest
       * @return CreateModelApiResponse
       */
      Models::CreateModelApiResponse createModelApi(const Models::CreateModelApiRequest &request);

      /**
       * @summary Creates a model service.
       *
       * @param request CreateModelServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelServiceResponse
       */
      Models::CreateModelServiceResponse createModelServiceWithOptions(const Models::CreateModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model service.
       *
       * @param request CreateModelServiceRequest
       * @return CreateModelServiceResponse
       */
      Models::CreateModelServiceResponse createModelService(const Models::CreateModelServiceRequest &request);

      /**
       * @summary Creates a network channel.
       *
       * @param request CreateNetworkChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkChannelResponse
       */
      Models::CreateNetworkChannelResponse createNetworkChannelWithOptions(const Models::CreateNetworkChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network channel.
       *
       * @param request CreateNetworkChannelRequest
       * @return CreateNetworkChannelResponse
       */
      Models::CreateNetworkChannelResponse createNetworkChannel(const Models::CreateNetworkChannelRequest &request);

      /**
       * @summary Creates or obtains a virtual license order.
       *
       * @param request CreateOrGetVirtualLicenseOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrGetVirtualLicenseOrderResponse
       */
      Models::CreateOrGetVirtualLicenseOrderResponse createOrGetVirtualLicenseOrderWithOptions(const Models::CreateOrGetVirtualLicenseOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or obtains a virtual license order.
       *
       * @param request CreateOrGetVirtualLicenseOrderRequest
       * @return CreateOrGetVirtualLicenseOrderResponse
       */
      Models::CreateOrGetVirtualLicenseOrderResponse createOrGetVirtualLicenseOrder(const Models::CreateOrGetVirtualLicenseOrderRequest &request);

      /**
       * @summary Creates a PolarDB parameter template.
       *
       * @description Parameter templates allow you to manage cluster parameters in batches. You can use this feature to quickly apply parameter templates to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > This feature is available only for PolarDB for MySQL clusters.
       *
       * @param request CreateParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroupWithOptions(const Models::CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a PolarDB parameter template.
       *
       * @description Parameter templates allow you to manage cluster parameters in batches. You can use this feature to quickly apply parameter templates to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > This feature is available only for PolarDB for MySQL clusters.
       *
       * @param request CreateParameterGroupRequest
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroup(const Models::CreateParameterGroupRequest &request);

      /**
       * @summary Creates a PolarClaw Agent.
       *
       * @description ## Description
       * Use this operation to create a PolarClaw Agent. You can optionally specify an `emoji` and an `avatar`.
       *
       * @param request CreatePolarClawAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolarClawAgentResponse
       */
      Models::CreatePolarClawAgentResponse createPolarClawAgentWithOptions(const Models::CreatePolarClawAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a PolarClaw Agent.
       *
       * @description ## Description
       * Use this operation to create a PolarClaw Agent. You can optionally specify an `emoji` and an `avatar`.
       *
       * @param request CreatePolarClawAgentRequest
       * @return CreatePolarClawAgentResponse
       */
      Models::CreatePolarClawAgentResponse createPolarClawAgent(const Models::CreatePolarClawAgentRequest &request);

      /**
       * @summary Creates a channel in PolarClaw.
       *
       * @description ## Request
       *
       * @param tmpReq CreatePolarClawChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolarClawChannelResponse
       */
      Models::CreatePolarClawChannelResponse createPolarClawChannelWithOptions(const Models::CreatePolarClawChannelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a channel in PolarClaw.
       *
       * @description ## Request
       *
       * @param request CreatePolarClawChannelRequest
       * @return CreatePolarClawChannelResponse
       */
      Models::CreatePolarClawChannelResponse createPolarClawChannel(const Models::CreatePolarClawChannelRequest &request);

      /**
       * @summary Creates a PolarClaw scheduled task.
       *
       * @description ## Request
       * Use this API to create a cron job. You can configure the job\\"s payload, execution frequency, timezone, target channel, recipients, and a failure alert mechanism.
       *
       * @param tmpReq CreatePolarClawCronJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolarClawCronJobResponse
       */
      Models::CreatePolarClawCronJobResponse createPolarClawCronJobWithOptions(const Models::CreatePolarClawCronJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a PolarClaw scheduled task.
       *
       * @description ## Request
       * Use this API to create a cron job. You can configure the job\\"s payload, execution frequency, timezone, target channel, recipients, and a failure alert mechanism.
       *
       * @param request CreatePolarClawCronJobRequest
       * @return CreatePolarClawCronJobResponse
       */
      Models::CreatePolarClawCronJobResponse createPolarClawCronJob(const Models::CreatePolarClawCronJobRequest &request);

      /**
       * @summary Creates a new directory in a specified PolarFS instance.
       *
       * @description ## Description
       * - **Path**: The absolute path of the directory to create.
       * - **Recursive**: Specifies whether to recursively create parent directories. The default value is `false`.
       * - This operation creates a directory structure with one or more levels in the specified PolarFS instance.
       * - Setting `Recursive` to `true` automatically creates all non-existent parent directories.
       * - Ensure that you have sufficient permissions to create the directory.
       *
       * @param request CreatePolarFsObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolarFsObjectResponse
       */
      Models::CreatePolarFsObjectResponse createPolarFsObjectWithOptions(const Models::CreatePolarFsObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new directory in a specified PolarFS instance.
       *
       * @description ## Description
       * - **Path**: The absolute path of the directory to create.
       * - **Recursive**: Specifies whether to recursively create parent directories. The default value is `false`.
       * - This operation creates a directory structure with one or more levels in the specified PolarFS instance.
       * - Setting `Recursive` to `true` automatically creates all non-existent parent directories.
       * - Ensure that you have sufficient permissions to create the directory.
       *
       * @param request CreatePolarFsObjectRequest
       * @return CreatePolarFsObjectResponse
       */
      Models::CreatePolarFsObjectResponse createPolarFsObject(const Models::CreatePolarFsObjectRequest &request);

      /**
       * @summary Creates a rate limiting policy.
       *
       * @param request CreateRateLimitPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRateLimitPolicyResponse
       */
      Models::CreateRateLimitPolicyResponse createRateLimitPolicyWithOptions(const Models::CreateRateLimitPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rate limiting policy.
       *
       * @param request CreateRateLimitPolicyRequest
       * @return CreateRateLimitPolicyResponse
       */
      Models::CreateRateLimitPolicyResponse createRateLimitPolicy(const Models::CreateRateLimitPolicyRequest &request);

      /**
       * @summary Ccreates a service-linked role.
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ccreates a service-linked role.
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary Purchases a storage plan.
       *
       * @param request CreateStoragePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStoragePlanResponse
       */
      Models::CreateStoragePlanResponse createStoragePlanWithOptions(const Models::CreateStoragePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a storage plan.
       *
       * @param request CreateStoragePlanRequest
       * @return CreateStoragePlanResponse
       */
      Models::CreateStoragePlanResponse createStoragePlan(const Models::CreateStoragePlanRequest &request);

      /**
       * @summary Deletes an AI cluster instance.
       *
       * @param request DeleteAIDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAIDBClusterResponse
       */
      Models::DeleteAIDBClusterResponse deleteAIDBClusterWithOptions(const Models::DeleteAIDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AI cluster instance.
       *
       * @param request DeleteAIDBClusterRequest
       * @return DeleteAIDBClusterResponse
       */
      Models::DeleteAIDBClusterResponse deleteAIDBCluster(const Models::DeleteAIDBClusterRequest &request);

      /**
       * @summary Deletes a dataset.
       *
       * @param request DeleteAIDBClusterDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAIDBClusterDatasetResponse
       */
      Models::DeleteAIDBClusterDatasetResponse deleteAIDBClusterDatasetWithOptions(const Models::DeleteAIDBClusterDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset.
       *
       * @param request DeleteAIDBClusterDatasetRequest
       * @return DeleteAIDBClusterDatasetResponse
       */
      Models::DeleteAIDBClusterDatasetResponse deleteAIDBClusterDataset(const Models::DeleteAIDBClusterDatasetRequest &request);

      /**
       * @summary Deletes a task instance.
       *
       * @param request DeleteAIDBClusterTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAIDBClusterTaskResponse
       */
      Models::DeleteAIDBClusterTaskResponse deleteAIDBClusterTaskWithOptions(const Models::DeleteAIDBClusterTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a task instance.
       *
       * @param request DeleteAIDBClusterTaskRequest
       * @return DeleteAIDBClusterTaskResponse
       */
      Models::DeleteAIDBClusterTaskResponse deleteAIDBClusterTask(const Models::DeleteAIDBClusterTaskRequest &request);

      /**
       * @summary Deletes child nodes of an AI instance.
       *
       * @param request DeleteAINodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAINodesResponse
       */
      Models::DeleteAINodesResponse deleteAINodesWithOptions(const Models::DeleteAINodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes child nodes of an AI instance.
       *
       * @param request DeleteAINodesRequest
       * @return DeleteAINodesResponse
       */
      Models::DeleteAINodesResponse deleteAINodes(const Models::DeleteAINodesRequest &request);

      /**
       * @summary Deletes a PolarDB database account.
       *
       * @description > The cluster must be in the running state for this operation to succeed.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a PolarDB database account.
       *
       * @description > The cluster must be in the running state for this operation to succeed.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes an account from an edge cluster for PolarDB on ENS.
       *
       * @param request DeleteAccountZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountZonalResponse
       */
      Models::DeleteAccountZonalResponse deleteAccountZonalWithOptions(const Models::DeleteAccountZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an account from an edge cluster for PolarDB on ENS.
       *
       * @param request DeleteAccountZonalRequest
       * @return DeleteAccountZonalResponse
       */
      Models::DeleteAccountZonalResponse deleteAccountZonal(const Models::DeleteAccountZonalRequest &request);

      /**
       * @summary Deletes the specified PolarDB application. This operation does not delete the associated PolarDB instance.
       *
       * @description ## Important
       * - This operation deletes a PolarDB application but does not affect the associated PolarDB instance.
       * - The delete operation is irreversible and permanently deletes the application. Proceed with caution.
       * - Ensure that you have backed up all critical data before proceeding.Before you delete an application, make sure that you have backed up all important data.
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified PolarDB application. This operation does not delete the associated PolarDB instance.
       *
       * @description ## Important
       * - This operation deletes a PolarDB application but does not affect the associated PolarDB instance.
       * - The delete operation is irreversible and permanently deletes the application. Proceed with caution.
       * - Ensure that you have backed up all critical data before proceeding.Before you delete an application, make sure that you have backed up all important data.
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary Deletes a specified connection address for a PolarDB application.
       *
       * @param request DeleteApplicationEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationEndpointAddressResponse
       */
      Models::DeleteApplicationEndpointAddressResponse deleteApplicationEndpointAddressWithOptions(const Models::DeleteApplicationEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified connection address for a PolarDB application.
       *
       * @param request DeleteApplicationEndpointAddressRequest
       * @return DeleteApplicationEndpointAddressResponse
       */
      Models::DeleteApplicationEndpointAddressResponse deleteApplicationEndpointAddress(const Models::DeleteApplicationEndpointAddressRequest &request);

      /**
       * @summary Deletes an application prompt.
       *
       * @param request DeleteApplicationPromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationPromptResponse
       */
      Models::DeleteApplicationPromptResponse deleteApplicationPromptWithOptions(const Models::DeleteApplicationPromptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application prompt.
       *
       * @param request DeleteApplicationPromptRequest
       * @return DeleteApplicationPromptResponse
       */
      Models::DeleteApplicationPromptResponse deleteApplicationPrompt(const Models::DeleteApplicationPromptRequest &request);

      /**
       * @summary Deletes the backup sets of a PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the cluster meets the following requirements:
       * *   The cluster is in the Running state.
       * *   The backup sets are in the Success state.
       * > *   You can call the [DescribeBackups](https://help.aliyun.com/document_detail/98102.html) operation to query the status of backup sets.
       * >*   After you delete the backup set file, the storage space that is occupied by the file is released. The released storage space is smaller than the size of the file because your snapshots share some data blocks
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the backup sets of a PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the cluster meets the following requirements:
       * *   The cluster is in the Running state.
       * *   The backup sets are in the Success state.
       * > *   You can call the [DescribeBackups](https://help.aliyun.com/document_detail/98102.html) operation to query the status of backup sets.
       * >*   After you delete the backup set file, the storage space that is occupied by the file is released. The released storage space is smaller than the size of the file because your snapshots share some data blocks
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Deletes a cost budget policy.
       *
       * @param request DeleteBudgetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBudgetPolicyResponse
       */
      Models::DeleteBudgetPolicyResponse deleteBudgetPolicyWithOptions(const Models::DeleteBudgetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cost budget policy.
       *
       * @param request DeleteBudgetPolicyRequest
       * @return DeleteBudgetPolicyResponse
       */
      Models::DeleteBudgetPolicyResponse deleteBudgetPolicy(const Models::DeleteBudgetPolicyRequest &request);

      /**
       * @summary Deletes a consumer.
       *
       * @param request DeleteConsumerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerResponse
       */
      Models::DeleteConsumerResponse deleteConsumerWithOptions(const Models::DeleteConsumerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer.
       *
       * @param request DeleteConsumerRequest
       * @return DeleteConsumerResponse
       */
      Models::DeleteConsumerResponse deleteConsumer(const Models::DeleteConsumerRequest &request);

      /**
       * @summary Deletes a consumer group.
       *
       * @param request DeleteConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(const Models::DeleteConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer group.
       *
       * @param request DeleteConsumerGroupRequest
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroup(const Models::DeleteConsumerGroupRequest &request);

      /**
       * @summary Deletes a cost rule.
       *
       * @param request DeleteCostRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCostRuleResponse
       */
      Models::DeleteCostRuleResponse deleteCostRuleWithOptions(const Models::DeleteCostRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cost rule.
       *
       * @param request DeleteCostRuleRequest
       * @return DeleteCostRuleResponse
       */
      Models::DeleteCostRuleResponse deleteCostRule(const Models::DeleteCostRuleRequest &request);

      /**
       * @summary Deletes a pay-as-you-go PolarDB cluster.
       *
       * @param request DeleteDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBClusterWithOptions(const Models::DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pay-as-you-go PolarDB cluster.
       *
       * @param request DeleteDBClusterRequest
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBCluster(const Models::DeleteDBClusterRequest &request);

      /**
       * @summary Deletes a custom cluster endpoint for a PolarDB cluster.
       *
       * @param request DeleteDBClusterEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterEndpointResponse
       */
      Models::DeleteDBClusterEndpointResponse deleteDBClusterEndpointWithOptions(const Models::DeleteDBClusterEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom cluster endpoint for a PolarDB cluster.
       *
       * @param request DeleteDBClusterEndpointRequest
       * @return DeleteDBClusterEndpointResponse
       */
      Models::DeleteDBClusterEndpointResponse deleteDBClusterEndpoint(const Models::DeleteDBClusterEndpointRequest &request);

      /**
       * @summary Deletes a cluster endpoint of a PolarDB for Edge cluster.
       *
       * @param request DeleteDBClusterEndpointZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterEndpointZonalResponse
       */
      Models::DeleteDBClusterEndpointZonalResponse deleteDBClusterEndpointZonalWithOptions(const Models::DeleteDBClusterEndpointZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cluster endpoint of a PolarDB for Edge cluster.
       *
       * @param request DeleteDBClusterEndpointZonalRequest
       * @return DeleteDBClusterEndpointZonalResponse
       */
      Models::DeleteDBClusterEndpointZonalResponse deleteDBClusterEndpointZonal(const Models::DeleteDBClusterEndpointZonalRequest &request);

      /**
       * @summary Releases the public endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, and custom cluster endpoint.
       *
       * @description > - You can delete a public-facing or classic network endpoint of the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
       * >
       * > - Classic network endpoints are supported only on the China site (aliyun.com). Therefore, you do not need to delete classic network endpoints on the International site (alibabacloud.com).
       *
       * @param request DeleteDBEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBEndpointAddressResponse
       */
      Models::DeleteDBEndpointAddressResponse deleteDBEndpointAddressWithOptions(const Models::DeleteDBEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, and custom cluster endpoint.
       *
       * @description > - You can delete a public-facing or classic network endpoint of the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
       * >
       * > - Classic network endpoints are supported only on the China site (aliyun.com). Therefore, you do not need to delete classic network endpoints on the International site (alibabacloud.com).
       *
       * @param request DeleteDBEndpointAddressRequest
       * @return DeleteDBEndpointAddressResponse
       */
      Models::DeleteDBEndpointAddressResponse deleteDBEndpointAddress(const Models::DeleteDBEndpointAddressRequest &request);

      /**
       * @summary Deletes a DBLink from a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
       *
       * @param request DeleteDBLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBLinkResponse
       */
      Models::DeleteDBLinkResponse deleteDBLinkWithOptions(const Models::DeleteDBLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DBLink from a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
       *
       * @param request DeleteDBLinkRequest
       * @return DeleteDBLinkResponse
       */
      Models::DeleteDBLinkResponse deleteDBLink(const Models::DeleteDBLinkRequest &request);

      /**
       * @summary Deletes read-only nodes from a PolarDB cluster.
       *
       * @param request DeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodesWithOptions(const Models::DeleteDBNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes read-only nodes from a PolarDB cluster.
       *
       * @param request DeleteDBNodesRequest
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodes(const Models::DeleteDBNodesRequest &request);

      /**
       * @summary Deletes a database from a PolarDB cluster.
       *
       * @description >- The cluster must be in the Running state and unlocked. Otherwise, the specified database cannot be deleted.
       * >- The delete operation is performed in an asynchronous manner. A long period of time may be required to delete a large database. A success response for this operation only indicates that the request to delete the database is sent. You must query the database to check whether the database is deleted.
       *
       * @param request DeleteDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabaseWithOptions(const Models::DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database from a PolarDB cluster.
       *
       * @description >- The cluster must be in the Running state and unlocked. Otherwise, the specified database cannot be deleted.
       * >- The delete operation is performed in an asynchronous manner. A long period of time may be required to delete a large database. A success response for this operation only indicates that the request to delete the database is sent. You must query the database to check whether the database is deleted.
       *
       * @param request DeleteDatabaseRequest
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabase(const Models::DeleteDatabaseRequest &request);

      /**
       * @summary Deletes a database from a PolarDB edge cloud cluster.
       *
       * @param request DeleteDatabaseZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatabaseZonalResponse
       */
      Models::DeleteDatabaseZonalResponse deleteDatabaseZonalWithOptions(const Models::DeleteDatabaseZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database from a PolarDB edge cloud cluster.
       *
       * @param request DeleteDatabaseZonalRequest
       * @return DeleteDatabaseZonalResponse
       */
      Models::DeleteDatabaseZonalResponse deleteDatabaseZonal(const Models::DeleteDatabaseZonalRequest &request);

      /**
       * @summary Deletes a role.
       *
       * @param request DeleteEncryptionDBRolePrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEncryptionDBRolePrivilegeResponse
       */
      Models::DeleteEncryptionDBRolePrivilegeResponse deleteEncryptionDBRolePrivilegeWithOptions(const Models::DeleteEncryptionDBRolePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a role.
       *
       * @param request DeleteEncryptionDBRolePrivilegeRequest
       * @return DeleteEncryptionDBRolePrivilegeResponse
       */
      Models::DeleteEncryptionDBRolePrivilegeResponse deleteEncryptionDBRolePrivilege(const Models::DeleteEncryptionDBRolePrivilegeRequest &request);

      /**
       * @summary Deletes an extension.
       *
       * @param request DeleteExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExtensionsResponse
       */
      Models::DeleteExtensionsResponse deleteExtensionsWithOptions(const Models::DeleteExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an extension.
       *
       * @param request DeleteExtensionsRequest
       * @return DeleteExtensionsResponse
       */
      Models::DeleteExtensionsResponse deleteExtensions(const Models::DeleteExtensionsRequest &request);

      /**
       * @summary Deletes the specified SQL firewall rules.
       *
       * @param request DeleteFirewallRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFirewallRulesResponse
       */
      Models::DeleteFirewallRulesResponse deleteFirewallRulesWithOptions(const Models::DeleteFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified SQL firewall rules.
       *
       * @param request DeleteFirewallRulesRequest
       * @return DeleteFirewallRulesResponse
       */
      Models::DeleteFirewallRulesResponse deleteFirewallRules(const Models::DeleteFirewallRulesRequest &request);

      /**
       * @summary Deletes a gateway instance.
       *
       * @param request DeleteGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGatewayWithOptions(const Models::DeleteGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a gateway instance.
       *
       * @param request DeleteGatewayRequest
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGateway(const Models::DeleteGatewayRequest &request);

      /**
       * @summary Deletes a Polarlakebase Global Data Network (GDN).
       *
       * @description > This API deletes the Global Data Network (GDN) for PolarFS. Do not confuse it with the DeleteGlobalDatabaseNetwork API, which applies to PolarDB clusters.
       *
       * @param request DeleteGlobalDataNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalDataNetworkResponse
       */
      Models::DeleteGlobalDataNetworkResponse deleteGlobalDataNetworkWithOptions(const Models::DeleteGlobalDataNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Polarlakebase Global Data Network (GDN).
       *
       * @description > This API deletes the Global Data Network (GDN) for PolarFS. Do not confuse it with the DeleteGlobalDatabaseNetwork API, which applies to PolarDB clusters.
       *
       * @param request DeleteGlobalDataNetworkRequest
       * @return DeleteGlobalDataNetworkResponse
       */
      Models::DeleteGlobalDataNetworkResponse deleteGlobalDataNetwork(const Models::DeleteGlobalDataNetworkRequest &request);

      /**
       * @summary Deletes a global database network (GDN).
       *
       * @description > A GDN can be deleted only if it contains a single primary cluster.
       *
       * @param request DeleteGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalDatabaseNetworkResponse
       */
      Models::DeleteGlobalDatabaseNetworkResponse deleteGlobalDatabaseNetworkWithOptions(const Models::DeleteGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global database network (GDN).
       *
       * @description > A GDN can be deleted only if it contains a single primary cluster.
       *
       * @param request DeleteGlobalDatabaseNetworkRequest
       * @return DeleteGlobalDatabaseNetworkResponse
       */
      Models::DeleteGlobalDatabaseNetworkResponse deleteGlobalDatabaseNetwork(const Models::DeleteGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Deletes a global IP whitelist template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroupWithOptions(const Models::DeleteGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global IP whitelist template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroup(const Models::DeleteGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Deletes the specified data masking rules.
       *
       * @param request DeleteMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRulesWithOptions(const Models::DeleteMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified data masking rules.
       *
       * @param request DeleteMaskingRulesRequest
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRules(const Models::DeleteMaskingRulesRequest &request);

      /**
       * @summary Deletes a model API.
       *
       * @param request DeleteModelApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelApiResponse
       */
      Models::DeleteModelApiResponse deleteModelApiWithOptions(const Models::DeleteModelApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model API.
       *
       * @param request DeleteModelApiRequest
       * @return DeleteModelApiResponse
       */
      Models::DeleteModelApiResponse deleteModelApi(const Models::DeleteModelApiRequest &request);

      /**
       * @summary Deletes a specified model service.
       *
       * @param request DeleteModelServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelServiceWithOptions(const Models::DeleteModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified model service.
       *
       * @param request DeleteModelServiceRequest
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelService(const Models::DeleteModelServiceRequest &request);

      /**
       * @summary Deletes a network channel.
       *
       * @param request DeleteNetworkChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkChannelResponse
       */
      Models::DeleteNetworkChannelResponse deleteNetworkChannelWithOptions(const Models::DeleteNetworkChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network channel.
       *
       * @param request DeleteNetworkChannelRequest
       * @return DeleteNetworkChannelResponse
       */
      Models::DeleteNetworkChannelResponse deleteNetworkChannel(const Models::DeleteNetworkChannelRequest &request);

      /**
       * @summary Deletes a PolarDB parameter template.
       *
       * @description Parameter templates help you manage cluster parameters in batches. You can quickly apply a template to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > Deleting a parameter template does not affect PolarDB clusters to which the template has been applied.
       *
       * @param request DeleteParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroupWithOptions(const Models::DeleteParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a PolarDB parameter template.
       *
       * @description Parameter templates help you manage cluster parameters in batches. You can quickly apply a template to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > Deleting a parameter template does not affect PolarDB clusters to which the template has been applied.
       *
       * @param request DeleteParameterGroupRequest
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroup(const Models::DeleteParameterGroupRequest &request);

      /**
       * @summary This operation removes an agent and its associated bindings from a specified PolarClaw.
       *
       * @description ## Usage notes
       * - A successful operation returns the ID of the deleted agent and the number of removed bindings.
       * - Ensure you provide the correct target `AgentId`. An incorrect ID can cause the operation to fail or affect an unintended agent.
       *
       * @param request DeletePolarClawAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolarClawAgentResponse
       */
      Models::DeletePolarClawAgentResponse deletePolarClawAgentWithOptions(const Models::DeletePolarClawAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation removes an agent and its associated bindings from a specified PolarClaw.
       *
       * @description ## Usage notes
       * - A successful operation returns the ID of the deleted agent and the number of removed bindings.
       * - Ensure you provide the correct target `AgentId`. An incorrect ID can cause the operation to fail or affect an unintended agent.
       *
       * @param request DeletePolarClawAgentRequest
       * @return DeletePolarClawAgentResponse
       */
      Models::DeletePolarClawAgentResponse deletePolarClawAgent(const Models::DeletePolarClawAgentRequest &request);

      /**
       * @summary Deletes a PolarClaw Channel.
       *
       * @description ## Description
       * Use the `DeletePolarClawChannel` operation to delete a specified PolarClaw Channel. You can also uninstall the associated channel plugin. Before you delete the channel, back up all important data and ensure that no critical tasks are running on it.
       *
       * @param request DeletePolarClawChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolarClawChannelResponse
       */
      Models::DeletePolarClawChannelResponse deletePolarClawChannelWithOptions(const Models::DeletePolarClawChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a PolarClaw Channel.
       *
       * @description ## Description
       * Use the `DeletePolarClawChannel` operation to delete a specified PolarClaw Channel. You can also uninstall the associated channel plugin. Before you delete the channel, back up all important data and ensure that no critical tasks are running on it.
       *
       * @param request DeletePolarClawChannelRequest
       * @return DeletePolarClawChannelResponse
       */
      Models::DeletePolarClawChannelResponse deletePolarClawChannel(const Models::DeletePolarClawChannelRequest &request);

      /**
       * @summary Deletes a PolarClaw cron job.
       *
       * @description ## Description
       * To delete a PolarClaw cron job, provide its `ApplicationId` and `JobId`. Ensure that the IDs are correct to prevent accidental deletion of other jobs.
       * **Note**: This operation is irreversible. Proceed with caution.
       *
       * @param request DeletePolarClawCronJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolarClawCronJobResponse
       */
      Models::DeletePolarClawCronJobResponse deletePolarClawCronJobWithOptions(const Models::DeletePolarClawCronJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a PolarClaw cron job.
       *
       * @description ## Description
       * To delete a PolarClaw cron job, provide its `ApplicationId` and `JobId`. Ensure that the IDs are correct to prevent accidental deletion of other jobs.
       * **Note**: This operation is irreversible. Proceed with caution.
       *
       * @param request DeletePolarClawCronJobRequest
       * @return DeletePolarClawCronJobResponse
       */
      Models::DeletePolarClawCronJobResponse deletePolarClawCronJob(const Models::DeletePolarClawCronJobRequest &request);

      /**
       * @summary Deletes objects from PolarLakebase. This operation supports only Basic Edition and Cold Storage Edition instances.
       *
       * @description ## 请求说明
       * - `PolarFsInstanceId` 是必须提供的参数，用来指定要操作的PolarFS实例。
       * - `DBClusterId` 参数是可选的，如果提供，则表示与特定PolarDB集群关联的操作。
       * - `Objects` 参数是一个字符串数组，列出了所有需要被删除的对象路径，并且是必需的。
       *
       * @param tmpReq DeletePolarFsObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolarFsObjectsResponse
       */
      Models::DeletePolarFsObjectsResponse deletePolarFsObjectsWithOptions(const Models::DeletePolarFsObjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes objects from PolarLakebase. This operation supports only Basic Edition and Cold Storage Edition instances.
       *
       * @description ## 请求说明
       * - `PolarFsInstanceId` 是必须提供的参数，用来指定要操作的PolarFS实例。
       * - `DBClusterId` 参数是可选的，如果提供，则表示与特定PolarDB集群关联的操作。
       * - `Objects` 参数是一个字符串数组，列出了所有需要被删除的对象路径，并且是必需的。
       *
       * @param request DeletePolarFsObjectsRequest
       * @return DeletePolarFsObjectsResponse
       */
      Models::DeletePolarFsObjectsResponse deletePolarFsObjects(const Models::DeletePolarFsObjectsRequest &request);

      /**
       * @summary Deletes a path mapping for transparent acceleration.
       *
       * @param request DeletePolarFsPathMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolarFsPathMappingResponse
       */
      Models::DeletePolarFsPathMappingResponse deletePolarFsPathMappingWithOptions(const Models::DeletePolarFsPathMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a path mapping for transparent acceleration.
       *
       * @param request DeletePolarFsPathMappingRequest
       * @return DeletePolarFsPathMappingResponse
       */
      Models::DeletePolarFsPathMappingResponse deletePolarFsPathMapping(const Models::DeletePolarFsPathMappingRequest &request);

      /**
       * @summary Deletes one or more quota rules from a specified Polarlakebase instance.
       *
       * @description ## Request description
       * - You must specify the `PolarFsInstanceId` parameter to identify the Polarlakebase instance.
       * - The `Quotas` parameter is a list of quota rules to delete. Each rule is uniquely identified by its `Name` and `Id`. You can delete up to 21 rules in a single request.
       * - For each quota rule, provide both the `Name` and `Id`. This information must match an existing rule.
       *
       * @param request DeletePolarFsQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolarFsQuotaResponse
       */
      Models::DeletePolarFsQuotaResponse deletePolarFsQuotaWithOptions(const Models::DeletePolarFsQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more quota rules from a specified Polarlakebase instance.
       *
       * @description ## Request description
       * - You must specify the `PolarFsInstanceId` parameter to identify the Polarlakebase instance.
       * - The `Quotas` parameter is a list of quota rules to delete. Each rule is uniquely identified by its `Name` and `Id`. You can delete up to 21 rules in a single request.
       * - For each quota rule, provide both the `Name` and `Id`. This information must match an existing rule.
       *
       * @param request DeletePolarFsQuotaRequest
       * @return DeletePolarFsQuotaResponse
       */
      Models::DeletePolarFsQuotaResponse deletePolarFsQuota(const Models::DeletePolarFsQuotaRequest &request);

      /**
       * @summary Deletes a throttling policy.
       *
       * @param request DeleteRateLimitPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRateLimitPolicyResponse
       */
      Models::DeleteRateLimitPolicyResponse deleteRateLimitPolicyWithOptions(const Models::DeleteRateLimitPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a throttling policy.
       *
       * @param request DeleteRateLimitPolicyRequest
       * @return DeleteRateLimitPolicyResponse
       */
      Models::DeleteRateLimitPolicyResponse deleteRateLimitPolicy(const Models::DeleteRateLimitPolicyRequest &request);

      /**
       * @summary Deletes SQL throttling rules.
       *
       * @param request DeleteSQLRateLimitingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSQLRateLimitingRulesResponse
       */
      Models::DeleteSQLRateLimitingRulesResponse deleteSQLRateLimitingRulesWithOptions(const Models::DeleteSQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes SQL throttling rules.
       *
       * @param request DeleteSQLRateLimitingRulesRequest
       * @return DeleteSQLRateLimitingRulesResponse
       */
      Models::DeleteSQLRateLimitingRulesResponse deleteSQLRateLimitingRules(const Models::DeleteSQLRateLimitingRulesRequest &request);

      /**
       * @summary Queries the details of a custom instance.
       *
       * @param request DescribeAIDBClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIDBClusterAttributeResponse
       */
      Models::DescribeAIDBClusterAttributeResponse describeAIDBClusterAttributeWithOptions(const Models::DescribeAIDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom instance.
       *
       * @param request DescribeAIDBClusterAttributeRequest
       * @return DescribeAIDBClusterAttributeResponse
       */
      Models::DescribeAIDBClusterAttributeResponse describeAIDBClusterAttribute(const Models::DescribeAIDBClusterAttributeRequest &request);

      /**
       * @summary Query datasets
       *
       * @param request DescribeAIDBClusterDatasetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIDBClusterDatasetsResponse
       */
      Models::DescribeAIDBClusterDatasetsResponse describeAIDBClusterDatasetsWithOptions(const Models::DescribeAIDBClusterDatasetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query datasets
       *
       * @param request DescribeAIDBClusterDatasetsRequest
       * @return DescribeAIDBClusterDatasetsResponse
       */
      Models::DescribeAIDBClusterDatasetsResponse describeAIDBClusterDatasets(const Models::DescribeAIDBClusterDatasetsRequest &request);

      /**
       * @summary Retrieves the performance metrics of an AI container.
       *
       * @param request DescribeAIDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIDBClusterPerformanceResponse
       */
      Models::DescribeAIDBClusterPerformanceResponse describeAIDBClusterPerformanceWithOptions(const Models::DescribeAIDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the performance metrics of an AI container.
       *
       * @param request DescribeAIDBClusterPerformanceRequest
       * @return DescribeAIDBClusterPerformanceResponse
       */
      Models::DescribeAIDBClusterPerformanceResponse describeAIDBClusterPerformance(const Models::DescribeAIDBClusterPerformanceRequest &request);

      /**
       * @summary Get task instance details
       *
       * @param request DescribeAIDBClusterTaskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIDBClusterTaskAttributeResponse
       */
      Models::DescribeAIDBClusterTaskAttributeResponse describeAIDBClusterTaskAttributeWithOptions(const Models::DescribeAIDBClusterTaskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get task instance details
       *
       * @param request DescribeAIDBClusterTaskAttributeRequest
       * @return DescribeAIDBClusterTaskAttributeResponse
       */
      Models::DescribeAIDBClusterTaskAttributeResponse describeAIDBClusterTaskAttribute(const Models::DescribeAIDBClusterTaskAttributeRequest &request);

      /**
       * @summary Queries the logs of model operators.
       *
       * @param request DescribeAIDBClusterTaskLogFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIDBClusterTaskLogFilesResponse
       */
      Models::DescribeAIDBClusterTaskLogFilesResponse describeAIDBClusterTaskLogFilesWithOptions(const Models::DescribeAIDBClusterTaskLogFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of model operators.
       *
       * @param request DescribeAIDBClusterTaskLogFilesRequest
       * @return DescribeAIDBClusterTaskLogFilesResponse
       */
      Models::DescribeAIDBClusterTaskLogFilesResponse describeAIDBClusterTaskLogFiles(const Models::DescribeAIDBClusterTaskLogFilesRequest &request);

      /**
       * @summary Queries the metrics of model operators.
       *
       * @description > For more information about kernel versions for PolarDB for MySQL clusters, see [Kernel versions](https://help.aliyun.com/document_detail/471239.html) and [Kernel release notes](https://help.aliyun.com/document_detail/423884.html).
       *
       * @param request DescribeAIDBClusterTaskMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIDBClusterTaskMetricsResponse
       */
      Models::DescribeAIDBClusterTaskMetricsResponse describeAIDBClusterTaskMetricsWithOptions(const Models::DescribeAIDBClusterTaskMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics of model operators.
       *
       * @description > For more information about kernel versions for PolarDB for MySQL clusters, see [Kernel versions](https://help.aliyun.com/document_detail/471239.html) and [Kernel release notes](https://help.aliyun.com/document_detail/423884.html).
       *
       * @param request DescribeAIDBClusterTaskMetricsRequest
       * @return DescribeAIDBClusterTaskMetricsResponse
       */
      Models::DescribeAIDBClusterTaskMetricsResponse describeAIDBClusterTaskMetrics(const Models::DescribeAIDBClusterTaskMetricsRequest &request);

      /**
       * @summary Retrieves a list of model operators for a specified PolarDB instance.
       *
       * @description ## Request
       * - This API returns a list of model operators filtered by the `RelativeDBClusterId` and `KubeType` parameters.
       * - Note: Ensure the provided `RelativeDBClusterId` matches the ID of an existing PolarDB database instance. Otherwise, no data will be returned.
       *
       * @param request DescribeAIDBClusterTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIDBClusterTasksResponse
       */
      Models::DescribeAIDBClusterTasksResponse describeAIDBClusterTasksWithOptions(const Models::DescribeAIDBClusterTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of model operators for a specified PolarDB instance.
       *
       * @description ## Request
       * - This API returns a list of model operators filtered by the `RelativeDBClusterId` and `KubeType` parameters.
       * - Note: Ensure the provided `RelativeDBClusterId` matches the ID of an existing PolarDB database instance. Otherwise, no data will be returned.
       *
       * @param request DescribeAIDBClusterTasksRequest
       * @return DescribeAIDBClusterTasksResponse
       */
      Models::DescribeAIDBClusterTasksResponse describeAIDBClusterTasks(const Models::DescribeAIDBClusterTasksRequest &request);

      /**
       * @summary View custom clusters.
       *
       * @param request DescribeAIDBClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIDBClustersResponse
       */
      Models::DescribeAIDBClustersResponse describeAIDBClustersWithOptions(const Models::DescribeAIDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View custom clusters.
       *
       * @param request DescribeAIDBClustersRequest
       * @return DescribeAIDBClustersResponse
       */
      Models::DescribeAIDBClustersResponse describeAIDBClusters(const Models::DescribeAIDBClustersRequest &request);

      /**
       * @summary Retrieves the status of the PolarDB for AI feature.
       *
       * @param request DescribeAITaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAITaskStatusResponse
       */
      Models::DescribeAITaskStatusResponse describeAITaskStatusWithOptions(const Models::DescribeAITaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the status of the PolarDB for AI feature.
       *
       * @param request DescribeAITaskStatusRequest
       * @return DescribeAITaskStatusResponse
       */
      Models::DescribeAITaskStatusResponse describeAITaskStatus(const Models::DescribeAITaskStatusRequest &request);

      /**
       * @summary Queries a database account of a PolarDB cluster.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a database account of a PolarDB cluster.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the edge clusters for PolarDB on ENS.
       *
       * @param request DescribeAccountsZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsZonalResponse
       */
      Models::DescribeAccountsZonalResponse describeAccountsZonalWithOptions(const Models::DescribeAccountsZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the edge clusters for PolarDB on ENS.
       *
       * @param request DescribeAccountsZonalRequest
       * @return DescribeAccountsZonalResponse
       */
      Models::DescribeAccountsZonalResponse describeAccountsZonal(const Models::DescribeAccountsZonalRequest &request);

      /**
       * @summary Queries an activation code.
       *
       * @param request DescribeActivationCodeDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActivationCodeDetailsResponse
       */
      Models::DescribeActivationCodeDetailsResponse describeActivationCodeDetailsWithOptions(const Models::DescribeActivationCodeDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an activation code.
       *
       * @param request DescribeActivationCodeDetailsRequest
       * @return DescribeActivationCodeDetailsResponse
       */
      Models::DescribeActivationCodeDetailsResponse describeActivationCodeDetails(const Models::DescribeActivationCodeDetailsRequest &request);

      /**
       * @summary Retrieves a paginated list of activation codes associated with your account. You can filter the results by order ID or specific hardware identifiers.
       *
       * @param request DescribeActivationCodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActivationCodesResponse
       */
      Models::DescribeActivationCodesResponse describeActivationCodesWithOptions(const Models::DescribeActivationCodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of activation codes associated with your account. You can filter the results by order ID or specific hardware identifiers.
       *
       * @param request DescribeActivationCodesRequest
       * @return DescribeActivationCodesResponse
       */
      Models::DescribeActivationCodesResponse describeActivationCodes(const Models::DescribeActivationCodesRequest &request);

      /**
       * @summary Queries the Operations and Maintenance (O&M) configuration for a user, including the active O&M window.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConfWithOptions(const Models::DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Operations and Maintenance (O&M) configuration for a user, including the active O&M window.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConf(const Models::DescribeActiveOperationMaintainConfRequest &request);

      /**
       * @summary Queries operation and maintenance events for instances.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries operation and maintenance events for instances.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary 查询该apikey的详细信息
       *
       * @param request DescribeApikeyAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApikeyAttributeResponse
       */
      Models::DescribeApikeyAttributeResponse describeApikeyAttributeWithOptions(const Models::DescribeApikeyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询该apikey的详细信息
       *
       * @param request DescribeApikeyAttributeRequest
       * @return DescribeApikeyAttributeResponse
       */
      Models::DescribeApikeyAttributeResponse describeApikeyAttribute(const Models::DescribeApikeyAttributeRequest &request);

      /**
       * @summary Retrieves the details of a specific application in a PolarDB instance.
       *
       * @description Retrieves all information about a specific PolarDB application, such as component details and endpoints.
       *
       * @param request DescribeApplicationAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationAttributeResponse
       */
      Models::DescribeApplicationAttributeResponse describeApplicationAttributeWithOptions(const Models::DescribeApplicationAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific application in a PolarDB instance.
       *
       * @description Retrieves all information about a specific PolarDB application, such as component details and endpoints.
       *
       * @param request DescribeApplicationAttributeRequest
       * @return DescribeApplicationAttributeResponse
       */
      Models::DescribeApplicationAttributeResponse describeApplicationAttribute(const Models::DescribeApplicationAttributeRequest &request);

      /**
       * @summary AI Application Log Details
       *
       * @param request DescribeApplicationLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationLogsResponse
       */
      Models::DescribeApplicationLogsResponse describeApplicationLogsWithOptions(const Models::DescribeApplicationLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI Application Log Details
       *
       * @param request DescribeApplicationLogsRequest
       * @return DescribeApplicationLogsResponse
       */
      Models::DescribeApplicationLogsResponse describeApplicationLogs(const Models::DescribeApplicationLogsRequest &request);

      /**
       * @summary Retrieves the current parameters and template information for a specified application and its components.
       *
       * @param tmpReq DescribeApplicationParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationParametersResponse
       */
      Models::DescribeApplicationParametersResponse describeApplicationParametersWithOptions(const Models::DescribeApplicationParametersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the current parameters and template information for a specified application and its components.
       *
       * @param request DescribeApplicationParametersRequest
       * @return DescribeApplicationParametersResponse
       */
      Models::DescribeApplicationParametersResponse describeApplicationParameters(const Models::DescribeApplicationParametersRequest &request);

      /**
       * @summary Querying PolarDB AI application performance.
       *
       * @param request DescribeApplicationPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationPerformanceResponse
       */
      Models::DescribeApplicationPerformanceResponse describeApplicationPerformanceWithOptions(const Models::DescribeApplicationPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Querying PolarDB AI application performance.
       *
       * @param request DescribeApplicationPerformanceRequest
       * @return DescribeApplicationPerformanceResponse
       */
      Models::DescribeApplicationPerformanceResponse describeApplicationPerformance(const Models::DescribeApplicationPerformanceRequest &request);

      /**
       * @summary Lists the Application Prompts for a specific Application.
       *
       * @param request DescribeApplicationPromptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationPromptsResponse
       */
      Models::DescribeApplicationPromptsResponse describeApplicationPromptsWithOptions(const Models::DescribeApplicationPromptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the Application Prompts for a specific Application.
       *
       * @param request DescribeApplicationPromptsRequest
       * @return DescribeApplicationPromptsResponse
       */
      Models::DescribeApplicationPromptsResponse describeApplicationPrompts(const Models::DescribeApplicationPromptsRequest &request);

      /**
       * @summary Queries the Serverless configuration for a PolarDB application.
       *
       * @param request DescribeApplicationServerlessConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationServerlessConfResponse
       */
      Models::DescribeApplicationServerlessConfResponse describeApplicationServerlessConfWithOptions(const Models::DescribeApplicationServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Serverless configuration for a PolarDB application.
       *
       * @param request DescribeApplicationServerlessConfRequest
       * @return DescribeApplicationServerlessConfResponse
       */
      Models::DescribeApplicationServerlessConfResponse describeApplicationServerlessConf(const Models::DescribeApplicationServerlessConfRequest &request);

      /**
       * @summary Gets the list of applications for all PolarDB instances in a specified region.
       *
       * @param request DescribeApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationsResponse
       */
      Models::DescribeApplicationsResponse describeApplicationsWithOptions(const Models::DescribeApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the list of applications for all PolarDB instances in a specified region.
       *
       * @param request DescribeApplicationsRequest
       * @return DescribeApplicationsResponse
       */
      Models::DescribeApplicationsResponse describeApplications(const Models::DescribeApplicationsRequest &request);

      /**
       * @summary Describes the auto-renewal status of a subscription PolarDB cluster.
       *
       * @param request DescribeAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttributeWithOptions(const Models::DescribeAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the auto-renewal status of a subscription PolarDB cluster.
       *
       * @param request DescribeAutoRenewAttributeRequest
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttribute(const Models::DescribeAutoRenewAttributeRequest &request);

      /**
       * @summary Retrieves a list of regions available for cross-region backup.
       *
       * @param request DescribeAvailableCrossRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableCrossRegionsResponse
       */
      Models::DescribeAvailableCrossRegionsResponse describeAvailableCrossRegionsWithOptions(const Models::DescribeAvailableCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of regions available for cross-region backup.
       *
       * @param request DescribeAvailableCrossRegionsRequest
       * @return DescribeAvailableCrossRegionsResponse
       */
      Models::DescribeAvailableCrossRegionsResponse describeAvailableCrossRegions(const Models::DescribeAvailableCrossRegionsRequest &request);

      /**
       * @summary Lists the available models in an AI cluster.
       *
       * @param request DescribeAvailableModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableModelsResponse
       */
      Models::DescribeAvailableModelsResponse describeAvailableModelsWithOptions(const Models::DescribeAvailableModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available models in an AI cluster.
       *
       * @param request DescribeAvailableModelsRequest
       * @return DescribeAvailableModelsResponse
       */
      Models::DescribeAvailableModelsResponse describeAvailableModels(const Models::DescribeAvailableModelsRequest &request);

      /**
       * @summary Queries a list of backup logs and returns their download URLs.
       *
       * @param request DescribeBackupLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupLogsResponse
       */
      Models::DescribeBackupLogsResponse describeBackupLogsWithOptions(const Models::DescribeBackupLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backup logs and returns their download URLs.
       *
       * @param request DescribeBackupLogsRequest
       * @return DescribeBackupLogsResponse
       */
      Models::DescribeBackupLogsResponse describeBackupLogs(const Models::DescribeBackupLogsRequest &request);

      /**
       * @summary Queries the automatic backup policy of a PolarDB cluster.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic backup policy of a PolarDB cluster.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the regions that store backup sets.
       *
       * @param request DescribeBackupRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupRegionsResponse
       */
      Models::DescribeBackupRegionsResponse describeBackupRegionsWithOptions(const Models::DescribeBackupRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that store backup sets.
       *
       * @param request DescribeBackupRegionsRequest
       * @return DescribeBackupRegionsResponse
       */
      Models::DescribeBackupRegionsResponse describeBackupRegions(const Models::DescribeBackupRegionsRequest &request);

      /**
       * @summary Retrieves a list of backup jobs and their details for a cluster.
       *
       * @param request DescribeBackupTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasksWithOptions(const Models::DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of backup jobs and their details for a cluster.
       *
       * @param request DescribeBackupTasksRequest
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasks(const Models::DescribeBackupTasksRequest &request);

      /**
       * @summary Queries backup information for a PolarDB cluster.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backup information for a PolarDB cluster.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries the status of a batch task.
       *
       * @param request DescribeBatchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBatchTaskResponse
       */
      Models::DescribeBatchTaskResponse describeBatchTaskWithOptions(const Models::DescribeBatchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a batch task.
       *
       * @param request DescribeBatchTaskRequest
       * @return DescribeBatchTaskResponse
       */
      Models::DescribeBatchTaskResponse describeBatchTask(const Models::DescribeBatchTaskRequest &request);

      /**
       * @summary Queries the status of batch tasks.
       *
       * @param tmpReq DescribeBatchTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBatchTasksResponse
       */
      Models::DescribeBatchTasksResponse describeBatchTasksWithOptions(const Models::DescribeBatchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of batch tasks.
       *
       * @param request DescribeBatchTasksRequest
       * @return DescribeBatchTasksResponse
       */
      Models::DescribeBatchTasksResponse describeBatchTasks(const Models::DescribeBatchTasksRequest &request);

      /**
       * @summary Querying budget policies
       *
       * @param request DescribeBudgetPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBudgetPoliciesResponse
       */
      Models::DescribeBudgetPoliciesResponse describeBudgetPoliciesWithOptions(const Models::DescribeBudgetPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Querying budget policies
       *
       * @param request DescribeBudgetPoliciesRequest
       * @return DescribeBudgetPoliciesResponse
       */
      Models::DescribeBudgetPoliciesResponse describeBudgetPolicies(const Models::DescribeBudgetPoliciesRequest &request);

      /**
       * @summary Queries the character sets supported by PolarDB for MySQL.
       *
       * @param request DescribeCharacterSetNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetNameWithOptions(const Models::DescribeCharacterSetNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the character sets supported by PolarDB for MySQL.
       *
       * @param request DescribeCharacterSetNameRequest
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetName(const Models::DescribeCharacterSetNameRequest &request);

      /**
       * @summary Lists the available cluster specifications.
       *
       * @param request DescribeClassListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClassListResponse
       */
      Models::DescribeClassListResponse describeClassListWithOptions(const Models::DescribeClassListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available cluster specifications.
       *
       * @param request DescribeClassListRequest
       * @return DescribeClassListResponse
       */
      Models::DescribeClassListResponse describeClassList(const Models::DescribeClassListRequest &request);

      /**
       * @summary Queries cold storage instances.
       *
       * @param request DescribeColdStorageInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColdStorageInstanceResponse
       */
      Models::DescribeColdStorageInstanceResponse describeColdStorageInstanceWithOptions(const Models::DescribeColdStorageInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cold storage instances.
       *
       * @param request DescribeColdStorageInstanceRequest
       * @return DescribeColdStorageInstanceResponse
       */
      Models::DescribeColdStorageInstanceResponse describeColdStorageInstance(const Models::DescribeColdStorageInstanceRequest &request);

      /**
       * @summary Retrieves a list of consumer groups.
       *
       * @param request DescribeConsumerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConsumerGroupsResponse
       */
      Models::DescribeConsumerGroupsResponse describeConsumerGroupsWithOptions(const Models::DescribeConsumerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of consumer groups.
       *
       * @param request DescribeConsumerGroupsRequest
       * @return DescribeConsumerGroupsResponse
       */
      Models::DescribeConsumerGroupsResponse describeConsumerGroups(const Models::DescribeConsumerGroupsRequest &request);

      /**
       * @summary Returns a list of consumers.
       *
       * @param request DescribeConsumersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConsumersResponse
       */
      Models::DescribeConsumersResponse describeConsumersWithOptions(const Models::DescribeConsumersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of consumers.
       *
       * @param request DescribeConsumersRequest
       * @return DescribeConsumersResponse
       */
      Models::DescribeConsumersResponse describeConsumers(const Models::DescribeConsumersRequest &request);

      /**
       * @summary Queries cost rules.
       *
       * @param request DescribeCostRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCostRulesResponse
       */
      Models::DescribeCostRulesResponse describeCostRulesWithOptions(const Models::DescribeCostRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cost rules.
       *
       * @param request DescribeCostRulesRequest
       * @return DescribeCostRulesResponse
       */
      Models::DescribeCostRulesResponse describeCostRules(const Models::DescribeCostRulesRequest &request);

      /**
       * @summary Queries the policies for automatically triggered tasks.
       *
       * @param request DescribeCronJobPolicyServerlessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCronJobPolicyServerlessResponse
       */
      Models::DescribeCronJobPolicyServerlessResponse describeCronJobPolicyServerlessWithOptions(const Models::DescribeCronJobPolicyServerlessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policies for automatically triggered tasks.
       *
       * @param request DescribeCronJobPolicyServerlessRequest
       * @return DescribeCronJobPolicyServerlessResponse
       */
      Models::DescribeCronJobPolicyServerlessResponse describeCronJobPolicyServerless(const Models::DescribeCronJobPolicyServerlessRequest &request);

      /**
       * @summary Queries the supported cross-cloud specifications.
       *
       * @param request DescribeCrossCloudLevelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossCloudLevelsResponse
       */
      Models::DescribeCrossCloudLevelsResponse describeCrossCloudLevelsWithOptions(const Models::DescribeCrossCloudLevelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the supported cross-cloud specifications.
       *
       * @param request DescribeCrossCloudLevelsRequest
       * @return DescribeCrossCloudLevelsResponse
       */
      Models::DescribeCrossCloudLevelsResponse describeCrossCloudLevels(const Models::DescribeCrossCloudLevelsRequest &request);

      /**
       * @summary Queries cross-cloud regions.
       *
       * @param request DescribeCrossCloudRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossCloudRegionResponse
       */
      Models::DescribeCrossCloudRegionResponse describeCrossCloudRegionWithOptions(const Models::DescribeCrossCloudRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cross-cloud regions.
       *
       * @param request DescribeCrossCloudRegionRequest
       * @return DescribeCrossCloudRegionResponse
       */
      Models::DescribeCrossCloudRegionResponse describeCrossCloudRegion(const Models::DescribeCrossCloudRegionRequest &request);

      /**
       * @summary This operation queries cross-cloud region mappings.
       *
       * @param request DescribeCrossCloudRegionMappingToAliyunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossCloudRegionMappingToAliyunResponse
       */
      Models::DescribeCrossCloudRegionMappingToAliyunResponse describeCrossCloudRegionMappingToAliyunWithOptions(const Models::DescribeCrossCloudRegionMappingToAliyunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries cross-cloud region mappings.
       *
       * @param request DescribeCrossCloudRegionMappingToAliyunRequest
       * @return DescribeCrossCloudRegionMappingToAliyunResponse
       */
      Models::DescribeCrossCloudRegionMappingToAliyunResponse describeCrossCloudRegionMappingToAliyun(const Models::DescribeCrossCloudRegionMappingToAliyunRequest &request);

      /**
       * @summary Queries the IP whitelists and security groups that are allowed to access a database cluster.
       *
       * @param request DescribeDBClusterAccessWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAccessWhitelistResponse
       */
      Models::DescribeDBClusterAccessWhitelistResponse describeDBClusterAccessWhitelistWithOptions(const Models::DescribeDBClusterAccessWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP whitelists and security groups that are allowed to access a database cluster.
       *
       * @param request DescribeDBClusterAccessWhitelistRequest
       * @return DescribeDBClusterAccessWhitelistResponse
       */
      Models::DescribeDBClusterAccessWhitelistResponse describeDBClusterAccessWhitelist(const Models::DescribeDBClusterAccessWhitelistRequest &request);

      /**
       * @summary Queries the attributes of a specified cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(const Models::DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of a specified cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttribute(const Models::DescribeDBClusterAttributeRequest &request);

      /**
       * @summary Describe SQL collector for a PolarDB cluster. Features related to SQL collector include audit log and SQL Explorer.
       *
       * @param request DescribeDBClusterAuditLogCollectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAuditLogCollectorResponse
       */
      Models::DescribeDBClusterAuditLogCollectorResponse describeDBClusterAuditLogCollectorWithOptions(const Models::DescribeDBClusterAuditLogCollectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describe SQL collector for a PolarDB cluster. Features related to SQL collector include audit log and SQL Explorer.
       *
       * @param request DescribeDBClusterAuditLogCollectorRequest
       * @return DescribeDBClusterAuditLogCollectorResponse
       */
      Models::DescribeDBClusterAuditLogCollectorResponse describeDBClusterAuditLogCollector(const Models::DescribeDBClusterAuditLogCollectorRequest &request);

      /**
       * @summary Queries the available resources of a PolarDB cluster.
       *
       * @param request DescribeDBClusterAvailableResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAvailableResourcesResponse
       */
      Models::DescribeDBClusterAvailableResourcesResponse describeDBClusterAvailableResourcesWithOptions(const Models::DescribeDBClusterAvailableResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available resources of a PolarDB cluster.
       *
       * @param request DescribeDBClusterAvailableResourcesRequest
       * @return DescribeDBClusterAvailableResourcesResponse
       */
      Models::DescribeDBClusterAvailableResourcesResponse describeDBClusterAvailableResources(const Models::DescribeDBClusterAvailableResourcesRequest &request);

      /**
       * @summary Checks whether a database cluster is accessible from a source IP address.
       *
       * @param request DescribeDBClusterConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterConnectivityResponse
       */
      Models::DescribeDBClusterConnectivityResponse describeDBClusterConnectivityWithOptions(const Models::DescribeDBClusterConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a database cluster is accessible from a source IP address.
       *
       * @param request DescribeDBClusterConnectivityRequest
       * @return DescribeDBClusterConnectivityResponse
       */
      Models::DescribeDBClusterConnectivityResponse describeDBClusterConnectivity(const Models::DescribeDBClusterConnectivityRequest &request);

      /**
       * @summary Queries the key usage details for a specified PolarDB cluster.
       *
       * @description ## Description
       * - Query the key usage details for a PolarDB cluster, such as the key ID, status, and type.
       * - The `DBClusterId`Parameter is required. It specifies the ID of the PolarDB cluster to query.
       * - Before you call this operation, make sure that the required Resource Access Management (RAM) roles and policies are configured.
       *
       * @param request DescribeDBClusterEncryptionKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterEncryptionKeyResponse
       */
      Models::DescribeDBClusterEncryptionKeyResponse describeDBClusterEncryptionKeyWithOptions(const Models::DescribeDBClusterEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the key usage details for a specified PolarDB cluster.
       *
       * @description ## Description
       * - Query the key usage details for a PolarDB cluster, such as the key ID, status, and type.
       * - The `DBClusterId`Parameter is required. It specifies the ID of the PolarDB cluster to query.
       * - Before you call this operation, make sure that the required Resource Access Management (RAM) roles and policies are configured.
       *
       * @param request DescribeDBClusterEncryptionKeyRequest
       * @return DescribeDBClusterEncryptionKeyResponse
       */
      Models::DescribeDBClusterEncryptionKeyResponse describeDBClusterEncryptionKey(const Models::DescribeDBClusterEncryptionKeyRequest &request);

      /**
       * @summary Queries the endpoints of a PolarDB cluster.
       *
       * @param request DescribeDBClusterEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterEndpointsResponse
       */
      Models::DescribeDBClusterEndpointsResponse describeDBClusterEndpointsWithOptions(const Models::DescribeDBClusterEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoints of a PolarDB cluster.
       *
       * @param request DescribeDBClusterEndpointsRequest
       * @return DescribeDBClusterEndpointsResponse
       */
      Models::DescribeDBClusterEndpointsResponse describeDBClusterEndpoints(const Models::DescribeDBClusterEndpointsRequest &request);

      /**
       * @summary Queries the endpoints of an edge cluster for PolarDB on ENS.
       *
       * @param request DescribeDBClusterEndpointsZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterEndpointsZonalResponse
       */
      Models::DescribeDBClusterEndpointsZonalResponse describeDBClusterEndpointsZonalWithOptions(const Models::DescribeDBClusterEndpointsZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoints of an edge cluster for PolarDB on ENS.
       *
       * @param request DescribeDBClusterEndpointsZonalRequest
       * @return DescribeDBClusterEndpointsZonalResponse
       */
      Models::DescribeDBClusterEndpointsZonalResponse describeDBClusterEndpointsZonal(const Models::DescribeDBClusterEndpointsZonalRequest &request);

      /**
       * @summary Queries the migration status of a PolarDB cluster.
       *
       * @description - You can use this operation to query the status of a one-click migration from an ApsaraDB RDS for MySQL instance to a PolarDB for MySQL cluster. For more information, see [Upgrade an ApsaraDB RDS for MySQL instance to PolarDB for MySQL](https://help.aliyun.com/document_detail/121582.html).
       * - Before you call this operation, you must create a one-click upgrade task for the cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and setting the **CreationOption** parameter to **MigrationFromRDS**.
       *
       * @param request DescribeDBClusterMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterMigrationResponse
       */
      Models::DescribeDBClusterMigrationResponse describeDBClusterMigrationWithOptions(const Models::DescribeDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the migration status of a PolarDB cluster.
       *
       * @description - You can use this operation to query the status of a one-click migration from an ApsaraDB RDS for MySQL instance to a PolarDB for MySQL cluster. For more information, see [Upgrade an ApsaraDB RDS for MySQL instance to PolarDB for MySQL](https://help.aliyun.com/document_detail/121582.html).
       * - Before you call this operation, you must create a one-click upgrade task for the cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and setting the **CreationOption** parameter to **MigrationFromRDS**.
       *
       * @param request DescribeDBClusterMigrationRequest
       * @return DescribeDBClusterMigrationResponse
       */
      Models::DescribeDBClusterMigrationResponse describeDBClusterMigration(const Models::DescribeDBClusterMigrationRequest &request);

      /**
       * @summary Queries the interval at which the monitoring data of a PolarDB cluster is collected.
       *
       * @param request DescribeDBClusterMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterMonitorResponse
       */
      Models::DescribeDBClusterMonitorResponse describeDBClusterMonitorWithOptions(const Models::DescribeDBClusterMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the interval at which the monitoring data of a PolarDB cluster is collected.
       *
       * @param request DescribeDBClusterMonitorRequest
       * @return DescribeDBClusterMonitorResponse
       */
      Models::DescribeDBClusterMonitorResponse describeDBClusterMonitor(const Models::DescribeDBClusterMonitorRequest &request);

      /**
       * @summary Queries database endpoints.
       *
       * @param request DescribeDBClusterNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterNetInfoResponse
       */
      Models::DescribeDBClusterNetInfoResponse describeDBClusterNetInfoWithOptions(const Models::DescribeDBClusterNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries database endpoints.
       *
       * @param request DescribeDBClusterNetInfoRequest
       * @return DescribeDBClusterNetInfoResponse
       */
      Models::DescribeDBClusterNetInfoResponse describeDBClusterNetInfo(const Models::DescribeDBClusterNetInfoRequest &request);

      /**
       * @summary Queries the list of running parameters for a PolarDB cluster.
       *
       * @param request DescribeDBClusterParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterParametersResponse
       */
      Models::DescribeDBClusterParametersResponse describeDBClusterParametersWithOptions(const Models::DescribeDBClusterParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of running parameters for a PolarDB cluster.
       *
       * @param request DescribeDBClusterParametersRequest
       * @return DescribeDBClusterParametersResponse
       */
      Models::DescribeDBClusterParametersResponse describeDBClusterParameters(const Models::DescribeDBClusterParametersRequest &request);

      /**
       * @summary Queries the performance data of a PolarDB cluster.
       *
       * @description - If the monitoring frequency is once every 5 seconds:
       *   - If the query time range is 1 hour or less, the data granularity is 5 seconds.
       *   - If the query time range is 1 day or less, the data granularity is 1 minute.
       *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
       *   - If the query time range is 30 days or less, the data granularity is 1 hour.
       *   - If the query time range is more than 30 days, the data granularity is 1 day.
       * - If the monitoring frequency is once every 60 seconds:
       *   - If the query time range is 1 day or less, the data granularity is 1 minute.
       *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
       *   - If the query time range is 30 days or less, the data granularity is 1 hour.
       *   - If the query time range is more than 30 days, the data granularity is 1 day.
       * > The default monitoring frequency is once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the frequency to once every 5 seconds.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(const Models::DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of a PolarDB cluster.
       *
       * @description - If the monitoring frequency is once every 5 seconds:
       *   - If the query time range is 1 hour or less, the data granularity is 5 seconds.
       *   - If the query time range is 1 day or less, the data granularity is 1 minute.
       *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
       *   - If the query time range is 30 days or less, the data granularity is 1 hour.
       *   - If the query time range is more than 30 days, the data granularity is 1 day.
       * - If the monitoring frequency is once every 60 seconds:
       *   - If the query time range is 1 day or less, the data granularity is 1 minute.
       *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
       *   - If the query time range is 30 days or less, the data granularity is 1 hour.
       *   - If the query time range is more than 30 days, the data granularity is 1 day.
       * > The default monitoring frequency is once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the frequency to once every 5 seconds.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformance(const Models::DescribeDBClusterPerformanceRequest &request);

      /**
       * @summary Queries a database cluster proxy.
       *
       * @param request DescribeDBClusterProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterProxyResponse
       */
      Models::DescribeDBClusterProxyResponse describeDBClusterProxyWithOptions(const Models::DescribeDBClusterProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a database cluster proxy.
       *
       * @param request DescribeDBClusterProxyRequest
       * @return DescribeDBClusterProxyResponse
       */
      Models::DescribeDBClusterProxyResponse describeDBClusterProxy(const Models::DescribeDBClusterProxyRequest &request);

      /**
       * @summary Queries the SSL settings of a PolarDB cluster.
       *
       * @param request DescribeDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterSSLResponse
       */
      Models::DescribeDBClusterSSLResponse describeDBClusterSSLWithOptions(const Models::DescribeDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL settings of a PolarDB cluster.
       *
       * @param request DescribeDBClusterSSLRequest
       * @return DescribeDBClusterSSLResponse
       */
      Models::DescribeDBClusterSSLResponse describeDBClusterSSL(const Models::DescribeDBClusterSSLRequest &request);

      /**
       * @summary Queries the configuration of a serverless cluster.
       *
       * @param request DescribeDBClusterServerlessConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterServerlessConfResponse
       */
      Models::DescribeDBClusterServerlessConfResponse describeDBClusterServerlessConfWithOptions(const Models::DescribeDBClusterServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a serverless cluster.
       *
       * @param request DescribeDBClusterServerlessConfRequest
       * @return DescribeDBClusterServerlessConfResponse
       */
      Models::DescribeDBClusterServerlessConfResponse describeDBClusterServerlessConf(const Models::DescribeDBClusterServerlessConfRequest &request);

      /**
       * @summary Queries the transparent data encryption (TDE) settings for a specified PolarDB cluster.
       *
       * @param request DescribeDBClusterTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterTDEResponse
       */
      Models::DescribeDBClusterTDEResponse describeDBClusterTDEWithOptions(const Models::DescribeDBClusterTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transparent data encryption (TDE) settings for a specified PolarDB cluster.
       *
       * @param request DescribeDBClusterTDERequest
       * @return DescribeDBClusterTDEResponse
       */
      Models::DescribeDBClusterTDEResponse describeDBClusterTDE(const Models::DescribeDBClusterTDERequest &request);

      /**
       * @summary Retrieves the details of the current kernel version for a PolarDB for MySQL cluster.
       *
       * @description > For more information about the kernel versions of PolarDB for MySQL clusters, see [Kernel version guide](https://help.aliyun.com/document_detail/471239.html) and [Kernel release notes](https://help.aliyun.com/document_detail/423884.html).
       *
       * @param request DescribeDBClusterVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterVersionResponse
       */
      Models::DescribeDBClusterVersionResponse describeDBClusterVersionWithOptions(const Models::DescribeDBClusterVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of the current kernel version for a PolarDB for MySQL cluster.
       *
       * @description > For more information about the kernel versions of PolarDB for MySQL clusters, see [Kernel version guide](https://help.aliyun.com/document_detail/471239.html) and [Kernel release notes](https://help.aliyun.com/document_detail/423884.html).
       *
       * @param request DescribeDBClusterVersionRequest
       * @return DescribeDBClusterVersionResponse
       */
      Models::DescribeDBClusterVersionResponse describeDBClusterVersion(const Models::DescribeDBClusterVersionRequest &request);

      /**
       * @summary Queries the version of a PolarDB edge cluster.
       *
       * @param request DescribeDBClusterVersionZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterVersionZonalResponse
       */
      Models::DescribeDBClusterVersionZonalResponse describeDBClusterVersionZonalWithOptions(const Models::DescribeDBClusterVersionZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version of a PolarDB edge cluster.
       *
       * @param request DescribeDBClusterVersionZonalRequest
       * @return DescribeDBClusterVersionZonalResponse
       */
      Models::DescribeDBClusterVersionZonalResponse describeDBClusterVersionZonal(const Models::DescribeDBClusterVersionZonalRequest &request);

      /**
       * @summary Queries the details of PolarDB clusters, including clusters that you are authorized to access through Resource Access Management (RAM).
       *
       * @param request DescribeDBClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClustersWithOptions(const Models::DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of PolarDB clusters, including clusters that you are authorized to access through Resource Access Management (RAM).
       *
       * @param request DescribeDBClustersRequest
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClusters(const Models::DescribeDBClustersRequest &request);

      /**
       * @summary Queries PolarDB clusters in a region that have backup sets.
       *
       * @param request DescribeDBClustersWithBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersWithBackupsResponse
       */
      Models::DescribeDBClustersWithBackupsResponse describeDBClustersWithBackupsWithOptions(const Models::DescribeDBClustersWithBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries PolarDB clusters in a region that have backup sets.
       *
       * @param request DescribeDBClustersWithBackupsRequest
       * @return DescribeDBClustersWithBackupsResponse
       */
      Models::DescribeDBClustersWithBackupsResponse describeDBClustersWithBackups(const Models::DescribeDBClustersWithBackupsRequest &request);

      /**
       * @summary Lists the PolarDB clusters in MyBase.
       *
       * @param request DescribeDBClustersZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersZonalResponse
       */
      Models::DescribeDBClustersZonalResponse describeDBClustersZonalWithOptions(const Models::DescribeDBClustersZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the PolarDB clusters in MyBase.
       *
       * @param request DescribeDBClustersZonalRequest
       * @return DescribeDBClustersZonalResponse
       */
      Models::DescribeDBClustersZonalResponse describeDBClustersZonal(const Models::DescribeDBClustersZonalRequest &request);

      /**
       * @summary Queries the supported character sets, collations, and other properties of a PolarDB database.
       *
       * @param request DescribeDBInitializeVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInitializeVariableResponse
       */
      Models::DescribeDBInitializeVariableResponse describeDBInitializeVariableWithOptions(const Models::DescribeDBInitializeVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the supported character sets, collations, and other properties of a PolarDB database.
       *
       * @param request DescribeDBInitializeVariableRequest
       * @return DescribeDBInitializeVariableResponse
       */
      Models::DescribeDBInitializeVariableResponse describeDBInitializeVariable(const Models::DescribeDBInitializeVariableRequest &request);

      /**
       * @summary Queries the performance monitoring data for a compute node.
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformanceWithOptions(const Models::DescribeDBInstancePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance monitoring data for a compute node.
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformance(const Models::DescribeDBInstancePerformanceRequest &request);

      /**
       * @summary Queries the database links of a PolarDB for Oracle cluster.
       *
       * @description > You can query only the database links that use a PolarDB for Oracle cluster as the source.
       *
       * @param request DescribeDBLinksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBLinksResponse
       */
      Models::DescribeDBLinksResponse describeDBLinksWithOptions(const Models::DescribeDBLinksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database links of a PolarDB for Oracle cluster.
       *
       * @description > You can query only the database links that use a PolarDB for Oracle cluster as the source.
       *
       * @param request DescribeDBLinksRequest
       * @return DescribeDBLinksResponse
       */
      Models::DescribeDBLinksResponse describeDBLinks(const Models::DescribeDBLinksRequest &request);

      /**
       * @summary Queries the logs of a PolarDB cluster, such as primary/secondary failover logs.
       *
       * @param request DescribeDBLogFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBLogFilesResponse
       */
      Models::DescribeDBLogFilesResponse describeDBLogFilesWithOptions(const Models::DescribeDBLogFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of a PolarDB cluster, such as primary/secondary failover logs.
       *
       * @param request DescribeDBLogFilesRequest
       * @return DescribeDBLogFilesResponse
       */
      Models::DescribeDBLogFilesResponse describeDBLogFiles(const Models::DescribeDBLogFilesRequest &request);

      /**
       * @summary Queries the available minor engine versions.
       *
       * @param request DescribeDBMiniEngineVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBMiniEngineVersionsResponse
       */
      Models::DescribeDBMiniEngineVersionsResponse describeDBMiniEngineVersionsWithOptions(const Models::DescribeDBMiniEngineVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available minor engine versions.
       *
       * @param request DescribeDBMiniEngineVersionsRequest
       * @return DescribeDBMiniEngineVersionsResponse
       */
      Models::DescribeDBMiniEngineVersionsResponse describeDBMiniEngineVersions(const Models::DescribeDBMiniEngineVersionsRequest &request);

      /**
       * @summary Queries performance data for a node in a PolarDB cluster.
       *
       * @description - If the monitoring frequency is 5 seconds:
       *   - If the query time range is 1 hour or less, the data granularity is 5 seconds.
       *   - If the query time range is 1 day or less, the data granularity is 1 minute.
       *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
       *   - If the query time range is 30 days or less, the data granularity is 1 hour.
       *   - If the query time range is more than 30 days, the data granularity is 1 day.
       * - If the monitoring frequency is 60 seconds:
       *   - If the query time range is 1 day or less, the data granularity is 1 minute.
       *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
       *   - If the query time range is 30 days or less, the data granularity is 1 hour.
       *   - If the query time range is more than 30 days, the data granularity is 1 day.
       * > The default monitoring frequency is 60 seconds. Call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set it to 5 seconds.
       *
       * @param request DescribeDBNodePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBNodePerformanceResponse
       */
      Models::DescribeDBNodePerformanceResponse describeDBNodePerformanceWithOptions(const Models::DescribeDBNodePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries performance data for a node in a PolarDB cluster.
       *
       * @description - If the monitoring frequency is 5 seconds:
       *   - If the query time range is 1 hour or less, the data granularity is 5 seconds.
       *   - If the query time range is 1 day or less, the data granularity is 1 minute.
       *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
       *   - If the query time range is 30 days or less, the data granularity is 1 hour.
       *   - If the query time range is more than 30 days, the data granularity is 1 day.
       * - If the monitoring frequency is 60 seconds:
       *   - If the query time range is 1 day or less, the data granularity is 1 minute.
       *   - If the query time range is 7 days or less, the data granularity is 10 minutes.
       *   - If the query time range is 30 days or less, the data granularity is 1 hour.
       *   - If the query time range is more than 30 days, the data granularity is 1 day.
       * > The default monitoring frequency is 60 seconds. Call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set it to 5 seconds.
       *
       * @param request DescribeDBNodePerformanceRequest
       * @return DescribeDBNodePerformanceResponse
       */
      Models::DescribeDBNodePerformanceResponse describeDBNodePerformance(const Models::DescribeDBNodePerformanceRequest &request);

      /**
       * @summary Queries the parameters for specified nodes in a cluster.
       *
       * @param request DescribeDBNodesParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBNodesParametersResponse
       */
      Models::DescribeDBNodesParametersResponse describeDBNodesParametersWithOptions(const Models::DescribeDBNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters for specified nodes in a cluster.
       *
       * @param request DescribeDBNodesParametersRequest
       * @return DescribeDBNodesParametersResponse
       */
      Models::DescribeDBNodesParametersResponse describeDBNodesParameters(const Models::DescribeDBNodesParametersRequest &request);

      /**
       * @summary Queries the performance data of PolarProxy.
       *
       * @description > This operation is applicable only to PolarDB for MySQL clusters.
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformanceWithOptions(const Models::DescribeDBProxyPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of PolarProxy.
       *
       * @description > This operation is applicable only to PolarDB for MySQL clusters.
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformance(const Models::DescribeDBProxyPerformanceRequest &request);

      /**
       * @summary Queries the configurations of a cluster in Database Autonomy Service (DAS).
       *
       * @param request DescribeDasConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDasConfigResponse
       */
      Models::DescribeDasConfigResponse describeDasConfigWithOptions(const Models::DescribeDasConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a cluster in Database Autonomy Service (DAS).
       *
       * @param request DescribeDasConfigRequest
       * @return DescribeDasConfigResponse
       */
      Models::DescribeDasConfigResponse describeDasConfig(const Models::DescribeDasConfigRequest &request);

      /**
       * @summary Queries for the details of databases in a specified PolarDB cluster.
       *
       * @param request DescribeDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabasesWithOptions(const Models::DescribeDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries for the details of databases in a specified PolarDB cluster.
       *
       * @param request DescribeDatabasesRequest
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabases(const Models::DescribeDatabasesRequest &request);

      /**
       * @summary Describes the databases in a PolarDB on ENS cluster.
       *
       * @param request DescribeDatabasesZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabasesZonalResponse
       */
      Models::DescribeDatabasesZonalResponse describeDatabasesZonalWithOptions(const Models::DescribeDatabasesZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the databases in a PolarDB on ENS cluster.
       *
       * @param request DescribeDatabasesZonalRequest
       * @return DescribeDatabasesZonalResponse
       */
      Models::DescribeDatabasesZonalResponse describeDatabasesZonal(const Models::DescribeDatabasesZonalRequest &request);

      /**
       * @summary Queries the attributes of an PolarDB on ENS cluster.
       *
       * @param request DescribeDbClusterAttributeZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDbClusterAttributeZonalResponse
       */
      Models::DescribeDbClusterAttributeZonalResponse describeDbClusterAttributeZonalWithOptions(const Models::DescribeDbClusterAttributeZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of an PolarDB on ENS cluster.
       *
       * @param request DescribeDbClusterAttributeZonalRequest
       * @return DescribeDbClusterAttributeZonalResponse
       */
      Models::DescribeDbClusterAttributeZonalResponse describeDbClusterAttributeZonal(const Models::DescribeDbClusterAttributeZonalRequest &request);

      /**
       * @summary Queries the information about the backup sets in a released PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the PolarDB cluster is in the **Released** state. You must also confirm that the **Retain All Backups Permanently** or **Retain Last Automatic Backup Permanently** backup retention policy takes effect after you release the cluster. If you delete all backup sets after the cluster is released, you cannot use this API operation to query the cluster.
       * >  You can call the [DescribeDBClusterAttribute](https://help.aliyun.com/document_detail/98181.html) operation to query the cluster status.
       *
       * @param request DescribeDetachedBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackupsWithOptions(const Models::DescribeDetachedBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the backup sets in a released PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the PolarDB cluster is in the **Released** state. You must also confirm that the **Retain All Backups Permanently** or **Retain Last Automatic Backup Permanently** backup retention policy takes effect after you release the cluster. If you delete all backup sets after the cluster is released, you cannot use this API operation to query the cluster.
       * >  You can call the [DescribeDBClusterAttribute](https://help.aliyun.com/document_detail/98181.html) operation to query the cluster status.
       *
       * @param request DescribeDetachedBackupsRequest
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackups(const Models::DescribeDetachedBackupsRequest &request);

      /**
       * @summary Queries a list of permissions for a database role.
       *
       * @param request DescribeEncryptionDBRolePrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEncryptionDBRolePrivilegeResponse
       */
      Models::DescribeEncryptionDBRolePrivilegeResponse describeEncryptionDBRolePrivilegeWithOptions(const Models::DescribeEncryptionDBRolePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of permissions for a database role.
       *
       * @param request DescribeEncryptionDBRolePrivilegeRequest
       * @return DescribeEncryptionDBRolePrivilegeResponse
       */
      Models::DescribeEncryptionDBRolePrivilegeResponse describeEncryptionDBRolePrivilege(const Models::DescribeEncryptionDBRolePrivilegeRequest &request);

      /**
       * @summary Queries encryption key information.
       *
       * @param request DescribeEncryptionDBSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEncryptionDBSecretResponse
       */
      Models::DescribeEncryptionDBSecretResponse describeEncryptionDBSecretWithOptions(const Models::DescribeEncryptionDBSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries encryption key information.
       *
       * @param request DescribeEncryptionDBSecretRequest
       * @return DescribeEncryptionDBSecretResponse
       */
      Models::DescribeEncryptionDBSecretResponse describeEncryptionDBSecret(const Models::DescribeEncryptionDBSecretRequest &request);

      /**
       * @summary Retrieves the details of extensions.
       *
       * @param request DescribeExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExtensionsResponse
       */
      Models::DescribeExtensionsResponse describeExtensionsWithOptions(const Models::DescribeExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of extensions.
       *
       * @param request DescribeExtensionsRequest
       * @return DescribeExtensionsResponse
       */
      Models::DescribeExtensionsResponse describeExtensions(const Models::DescribeExtensionsRequest &request);

      /**
       * @summary Describes SQL firewall rules.
       *
       * @param request DescribeFirewallRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallRulesResponse
       */
      Models::DescribeFirewallRulesResponse describeFirewallRulesWithOptions(const Models::DescribeFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes SQL firewall rules.
       *
       * @param request DescribeFirewallRulesRequest
       * @return DescribeFirewallRulesResponse
       */
      Models::DescribeFirewallRulesResponse describeFirewallRules(const Models::DescribeFirewallRulesRequest &request);

      /**
       * @summary Queries all API keys under the current UID.
       *
       * @param request DescribeGatewayApikeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGatewayApikeyListResponse
       */
      Models::DescribeGatewayApikeyListResponse describeGatewayApikeyListWithOptions(const Models::DescribeGatewayApikeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all API keys under the current UID.
       *
       * @param request DescribeGatewayApikeyListRequest
       * @return DescribeGatewayApikeyListResponse
       */
      Models::DescribeGatewayApikeyListResponse describeGatewayApikeyList(const Models::DescribeGatewayApikeyListRequest &request);

      /**
       * @summary Viewing gateway instance details
       *
       * @param request DescribeGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGatewayAttributeResponse
       */
      Models::DescribeGatewayAttributeResponse describeGatewayAttributeWithOptions(const Models::DescribeGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Viewing gateway instance details
       *
       * @param request DescribeGatewayAttributeRequest
       * @return DescribeGatewayAttributeResponse
       */
      Models::DescribeGatewayAttributeResponse describeGatewayAttribute(const Models::DescribeGatewayAttributeRequest &request);

      /**
       * @summary Queries a list of gateway instances.
       *
       * @param request DescribeGatewayListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGatewayListResponse
       */
      Models::DescribeGatewayListResponse describeGatewayListWithOptions(const Models::DescribeGatewayListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of gateway instances.
       *
       * @param request DescribeGatewayListRequest
       * @return DescribeGatewayListResponse
       */
      Models::DescribeGatewayListResponse describeGatewayList(const Models::DescribeGatewayListRequest &request);

      /**
       * @summary Retrieves details for Polarlakebase Global Data Networks (GDNs) across all regions in your account.
       *
       * @param request DescribeGlobalDataNetworkListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDataNetworkListResponse
       */
      Models::DescribeGlobalDataNetworkListResponse describeGlobalDataNetworkListWithOptions(const Models::DescribeGlobalDataNetworkListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for Polarlakebase Global Data Networks (GDNs) across all regions in your account.
       *
       * @param request DescribeGlobalDataNetworkListRequest
       * @return DescribeGlobalDataNetworkListResponse
       */
      Models::DescribeGlobalDataNetworkListResponse describeGlobalDataNetworkList(const Models::DescribeGlobalDataNetworkListRequest &request);

      /**
       * @summary Retrieves details for a Global Database Network (GDN).
       *
       * @param request DescribeGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDatabaseNetworkResponse
       */
      Models::DescribeGlobalDatabaseNetworkResponse describeGlobalDatabaseNetworkWithOptions(const Models::DescribeGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a Global Database Network (GDN).
       *
       * @param request DescribeGlobalDatabaseNetworkRequest
       * @return DescribeGlobalDatabaseNetworkResponse
       */
      Models::DescribeGlobalDatabaseNetworkResponse describeGlobalDatabaseNetwork(const Models::DescribeGlobalDatabaseNetworkRequest &request);

      /**
       * @summary View details for all Global Database Networks (GDNs) in your account.
       *
       * @param request DescribeGlobalDatabaseNetworksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDatabaseNetworksResponse
       */
      Models::DescribeGlobalDatabaseNetworksResponse describeGlobalDatabaseNetworksWithOptions(const Models::DescribeGlobalDatabaseNetworksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View details for all Global Database Networks (GDNs) in your account.
       *
       * @param request DescribeGlobalDatabaseNetworksRequest
       * @return DescribeGlobalDatabaseNetworksResponse
       */
      Models::DescribeGlobalDatabaseNetworksResponse describeGlobalDatabaseNetworks(const Models::DescribeGlobalDatabaseNetworksRequest &request);

      /**
       * @summary Queries the list of global IP allowlist templates.
       *
       * @param request DescribeGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalSecurityIPGroupResponse
       */
      Models::DescribeGlobalSecurityIPGroupResponse describeGlobalSecurityIPGroupWithOptions(const Models::DescribeGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of global IP allowlist templates.
       *
       * @param request DescribeGlobalSecurityIPGroupRequest
       * @return DescribeGlobalSecurityIPGroupResponse
       */
      Models::DescribeGlobalSecurityIPGroupResponse describeGlobalSecurityIPGroup(const Models::DescribeGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Queries the relationship between a cluster and a global IP whitelist template.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelationWithOptions(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the relationship between a cluster and a global IP whitelist template.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelation(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request);

      /**
       * @summary Queries high availability (HA) logs for an instance.
       *
       * @description > - Only PolarDB for MySQL supports this operation.
       *
       * @param request DescribeHALogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHALogsResponse
       */
      Models::DescribeHALogsResponse describeHALogsWithOptions(const Models::DescribeHALogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries high availability (HA) logs for an instance.
       *
       * @description > - Only PolarDB for MySQL supports this operation.
       *
       * @param request DescribeHALogsRequest
       * @return DescribeHALogsResponse
       */
      Models::DescribeHALogsResponse describeHALogs(const Models::DescribeHALogsRequest &request);

      /**
       * @summary Lists the historical events in Event Center.
       *
       * @param request DescribeHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEventsWithOptions(const Models::DescribeHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the historical events in Event Center.
       *
       * @param request DescribeHistoryEventsRequest
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEvents(const Models::DescribeHistoryEventsRequest &request);

      /**
       * @summary Retrieves a list of historical administrative tasks for PolarDB for MySQL instances, such as parameter changes, and instance restarts.
       *
       * @param request DescribeHistoryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasksWithOptions(const Models::DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of historical administrative tasks for PolarDB for MySQL instances, such as parameter changes, and instance restarts.
       *
       * @param request DescribeHistoryTasksRequest
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasks(const Models::DescribeHistoryTasksRequest &request);

      /**
       * @summary Queries task statistics in Task Center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStatWithOptions(const Models::DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries task statistics in Task Center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStat(const Models::DescribeHistoryTasksStatRequest &request);

      /**
       * @summary Queries a license order.
       *
       * @param request DescribeLicenseOrderDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLicenseOrderDetailsResponse
       */
      Models::DescribeLicenseOrderDetailsResponse describeLicenseOrderDetailsWithOptions(const Models::DescribeLicenseOrderDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a license order.
       *
       * @param request DescribeLicenseOrderDetailsRequest
       * @return DescribeLicenseOrderDetailsResponse
       */
      Models::DescribeLicenseOrderDetailsResponse describeLicenseOrderDetails(const Models::DescribeLicenseOrderDetailsRequest &request);

      /**
       * @summary This operation queries a list of license orders.
       *
       * @param request DescribeLicenseOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLicenseOrdersResponse
       */
      Models::DescribeLicenseOrdersResponse describeLicenseOrdersWithOptions(const Models::DescribeLicenseOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries a list of license orders.
       *
       * @param request DescribeLicenseOrdersRequest
       * @return DescribeLicenseOrdersResponse
       */
      Models::DescribeLicenseOrdersResponse describeLicenseOrders(const Models::DescribeLicenseOrdersRequest &request);

      /**
       * @summary Queries the available time range to recover from a backup.
       *
       * @param request DescribeLocalAvailableRecoveryTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLocalAvailableRecoveryTimeResponse
       */
      Models::DescribeLocalAvailableRecoveryTimeResponse describeLocalAvailableRecoveryTimeWithOptions(const Models::DescribeLocalAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available time range to recover from a backup.
       *
       * @param request DescribeLocalAvailableRecoveryTimeRequest
       * @return DescribeLocalAvailableRecoveryTimeResponse
       */
      Models::DescribeLocalAvailableRecoveryTimeResponse describeLocalAvailableRecoveryTime(const Models::DescribeLocalAvailableRecoveryTimeRequest &request);

      /**
       * @summary Queries the data retention policy for the log backups of a PolarDB cluster.
       *
       * @param request DescribeLogBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogBackupPolicyResponse
       */
      Models::DescribeLogBackupPolicyResponse describeLogBackupPolicyWithOptions(const Models::DescribeLogBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data retention policy for the log backups of a PolarDB cluster.
       *
       * @param request DescribeLogBackupPolicyRequest
       * @return DescribeLogBackupPolicyResponse
       */
      Models::DescribeLogBackupPolicyResponse describeLogBackupPolicy(const Models::DescribeLogBackupPolicyRequest &request);

      /**
       * @summary Queries the data masking rules of a PolarDB cluster or the information about a specified masking rule.
       *
       * @param request DescribeMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRulesWithOptions(const Models::DescribeMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data masking rules of a PolarDB cluster or the information about a specified masking rule.
       *
       * @param request DescribeMaskingRulesRequest
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRules(const Models::DescribeMaskingRulesRequest &request);

      /**
       * @summary Queries recoverable databases and tables.
       *
       * @param request DescribeMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaListWithOptions(const Models::DescribeMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries recoverable databases and tables.
       *
       * @param request DescribeMetaListRequest
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaList(const Models::DescribeMetaListRequest &request);

      /**
       * @summary Model Query API
       *
       * @param request DescribeModelApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelApisResponse
       */
      Models::DescribeModelApisResponse describeModelApisWithOptions(const Models::DescribeModelApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Model Query API
       *
       * @param request DescribeModelApisRequest
       * @return DescribeModelApisResponse
       */
      Models::DescribeModelApisResponse describeModelApis(const Models::DescribeModelApisRequest &request);

      /**
       * @summary List model services
       *
       * @param request DescribeModelServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelServicesResponse
       */
      Models::DescribeModelServicesResponse describeModelServicesWithOptions(const Models::DescribeModelServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List model services
       *
       * @param request DescribeModelServicesRequest
       * @return DescribeModelServicesResponse
       */
      Models::DescribeModelServicesResponse describeModelServices(const Models::DescribeModelServicesRequest &request);

      /**
       * @summary Queries the modification history of parameters.
       *
       * @param request DescribeModifyParameterLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLogWithOptions(const Models::DescribeModifyParameterLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the modification history of parameters.
       *
       * @param request DescribeModifyParameterLogRequest
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLog(const Models::DescribeModifyParameterLogRequest &request);

      /**
       * @summary Queries network channels.
       *
       * @param request DescribeNetworkChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkChannelResponse
       */
      Models::DescribeNetworkChannelResponse describeNetworkChannelWithOptions(const Models::DescribeNetworkChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network channels.
       *
       * @param request DescribeNetworkChannelRequest
       * @return DescribeNetworkChannelResponse
       */
      Models::DescribeNetworkChannelResponse describeNetworkChannel(const Models::DescribeNetworkChannelRequest &request);

      /**
       * @summary Retrieves the details of a specified parameter template.
       *
       * @description Parameter templates let you centrally manage parameters for multiple clusters. You can quickly apply a parameter template to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > This feature currently supports only PolarDB for MySQL clusters.
       *
       * @param request DescribeParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroupWithOptions(const Models::DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified parameter template.
       *
       * @description Parameter templates let you centrally manage parameters for multiple clusters. You can quickly apply a parameter template to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > This feature currently supports only PolarDB for MySQL clusters.
       *
       * @param request DescribeParameterGroupRequest
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroup(const Models::DescribeParameterGroupRequest &request);

      /**
       * @summary This operation queries the parameter templates in a specified region.
       *
       * @description Parameter templates allow you to manage cluster parameters in batches and quickly apply them to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > This feature is available only for PolarDB for MySQL clusters.
       *
       * @param request DescribeParameterGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroupsWithOptions(const Models::DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries the parameter templates in a specified region.
       *
       * @description Parameter templates allow you to manage cluster parameters in batches and quickly apply them to PolarDB clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > This feature is available only for PolarDB for MySQL clusters.
       *
       * @param request DescribeParameterGroupsRequest
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroups(const Models::DescribeParameterGroupsRequest &request);

      /**
       * @summary Queries the default parameters of a database cluster.
       *
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default parameters of a database cluster.
       *
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @summary Queries the information about a pending event.
       *
       * @param request DescribePendingMaintenanceActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePendingMaintenanceActionResponse
       */
      Models::DescribePendingMaintenanceActionResponse describePendingMaintenanceActionWithOptions(const Models::DescribePendingMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a pending event.
       *
       * @param request DescribePendingMaintenanceActionRequest
       * @return DescribePendingMaintenanceActionResponse
       */
      Models::DescribePendingMaintenanceActionResponse describePendingMaintenanceAction(const Models::DescribePendingMaintenanceActionRequest &request);

      /**
       * @summary Retrieves a count of pending events for various task types.
       *
       * @param request DescribePendingMaintenanceActionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePendingMaintenanceActionsResponse
       */
      Models::DescribePendingMaintenanceActionsResponse describePendingMaintenanceActionsWithOptions(const Models::DescribePendingMaintenanceActionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a count of pending events for various task types.
       *
       * @param request DescribePendingMaintenanceActionsRequest
       * @return DescribePendingMaintenanceActionsResponse
       */
      Models::DescribePendingMaintenanceActionsResponse describePendingMaintenanceActions(const Models::DescribePendingMaintenanceActionsRequest &request);

      /**
       * @summary Queries the chat records of a specified session.
       *
       * @param request DescribePolarAgentChatRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarAgentChatRecordsResponse
       */
      Models::DescribePolarAgentChatRecordsResponse describePolarAgentChatRecordsWithOptions(const Models::DescribePolarAgentChatRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the chat records of a specified session.
       *
       * @param request DescribePolarAgentChatRecordsRequest
       * @return DescribePolarAgentChatRecordsResponse
       */
      Models::DescribePolarAgentChatRecordsResponse describePolarAgentChatRecords(const Models::DescribePolarAgentChatRecordsRequest &request);

      /**
       * @summary Queries the status of a session.
       *
       * @param request DescribePolarAgentSessionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarAgentSessionStatusResponse
       */
      Models::DescribePolarAgentSessionStatusResponse describePolarAgentSessionStatusWithOptions(const Models::DescribePolarAgentSessionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a session.
       *
       * @param request DescribePolarAgentSessionStatusRequest
       * @return DescribePolarAgentSessionStatusResponse
       */
      Models::DescribePolarAgentSessionStatusResponse describePolarAgentSessionStatus(const Models::DescribePolarAgentSessionStatusRequest &request);

      /**
       * @summary Queries historical session records.
       *
       * @param request DescribePolarAgentUserSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarAgentUserSessionsResponse
       */
      Models::DescribePolarAgentUserSessionsResponse describePolarAgentUserSessionsWithOptions(const Models::DescribePolarAgentUserSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical session records.
       *
       * @param request DescribePolarAgentUserSessionsRequest
       * @return DescribePolarAgentUserSessionsResponse
       */
      Models::DescribePolarAgentUserSessionsResponse describePolarAgentUserSessions(const Models::DescribePolarAgentUserSessionsRequest &request);

      /**
       * @summary Queries all installed plug-ins and their status information under a specified application.
       *
       * @param tmpReq DescribePolarClawAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarClawAgentsResponse
       */
      Models::DescribePolarClawAgentsResponse describePolarClawAgentsWithOptions(const Models::DescribePolarClawAgentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all installed plug-ins and their status information under a specified application.
       *
       * @param request DescribePolarClawAgentsRequest
       * @return DescribePolarClawAgentsResponse
       */
      Models::DescribePolarClawAgentsResponse describePolarClawAgents(const Models::DescribePolarClawAgentsRequest &request);

      /**
       * @summary Lists all installed PolarClaw channels and their status information.
       *
       * @param tmpReq DescribePolarClawChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarClawChannelsResponse
       */
      Models::DescribePolarClawChannelsResponse describePolarClawChannelsWithOptions(const Models::DescribePolarClawChannelsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all installed PolarClaw channels and their status information.
       *
       * @param request DescribePolarClawChannelsRequest
       * @return DescribePolarClawChannelsResponse
       */
      Models::DescribePolarClawChannelsResponse describePolarClawChannels(const Models::DescribePolarClawChannelsRequest &request);

      /**
       * @summary Query all or specific scheduled tasks in PolarClaw and their details.
       *
       * @description ## Request description
       * - You can use this API to retrieve all scheduled tasks in a PolarClaw application or filter specific tasks using the `JobIdList` parameter.
       * - If you do not specify the `JobIdList` parameter, the API returns all scheduled tasks in the application.
       *
       * @param tmpReq DescribePolarClawCronJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarClawCronJobsResponse
       */
      Models::DescribePolarClawCronJobsResponse describePolarClawCronJobsWithOptions(const Models::DescribePolarClawCronJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query all or specific scheduled tasks in PolarClaw and their details.
       *
       * @description ## Request description
       * - You can use this API to retrieve all scheduled tasks in a PolarClaw application or filter specific tasks using the `JobIdList` parameter.
       * - If you do not specify the `JobIdList` parameter, the API returns all scheduled tasks in the application.
       *
       * @param request DescribePolarClawCronJobsRequest
       * @return DescribePolarClawCronJobsResponse
       */
      Models::DescribePolarClawCronJobsResponse describePolarClawCronJobs(const Models::DescribePolarClawCronJobsRequest &request);

      /**
       * @summary Lists all installed PolarClaw MCP services and their configurations.
       *
       * @param request DescribePolarClawMCPServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarClawMCPServersResponse
       */
      Models::DescribePolarClawMCPServersResponse describePolarClawMCPServersWithOptions(const Models::DescribePolarClawMCPServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all installed PolarClaw MCP services and their configurations.
       *
       * @param request DescribePolarClawMCPServersRequest
       * @return DescribePolarClawMCPServersResponse
       */
      Models::DescribePolarClawMCPServersResponse describePolarClawMCPServers(const Models::DescribePolarClawMCPServersRequest &request);

      /**
       * @summary Lists all installed PolarClaw plugins and their status.
       *
       * @description ## Request
       * - This API gets information about all plugins for a given application, including built-in and user-installed plugins.
       * - Use the `PluginList` parameter to request information for specific plugins. If you omit this parameter, the API returns details for all plugins.
       *
       * @param request DescribePolarClawPluginsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarClawPluginsResponse
       */
      Models::DescribePolarClawPluginsResponse describePolarClawPluginsWithOptions(const Models::DescribePolarClawPluginsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all installed PolarClaw plugins and their status.
       *
       * @description ## Request
       * - This API gets information about all plugins for a given application, including built-in and user-installed plugins.
       * - Use the `PluginList` parameter to request information for specific plugins. If you omit this parameter, the API returns details for all plugins.
       *
       * @param request DescribePolarClawPluginsRequest
       * @return DescribePolarClawPluginsResponse
       */
      Models::DescribePolarClawPluginsResponse describePolarClawPlugins(const Models::DescribePolarClawPluginsRequest &request);

      /**
       * @summary Queries the status of a PolarClaw asynchronous task.
       *
       * @param request DescribePolarClawTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarClawTaskResponse
       */
      Models::DescribePolarClawTaskResponse describePolarClawTaskWithOptions(const Models::DescribePolarClawTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a PolarClaw asynchronous task.
       *
       * @param request DescribePolarClawTaskRequest
       * @return DescribePolarClawTaskResponse
       */
      Models::DescribePolarClawTaskResponse describePolarClawTask(const Models::DescribePolarClawTaskRequest &request);

      /**
       * @summary Retrieves the details of a PolarLakebase instance.
       *
       * @param request DescribePolarFsAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarFsAttributeResponse
       */
      Models::DescribePolarFsAttributeResponse describePolarFsAttributeWithOptions(const Models::DescribePolarFsAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a PolarLakebase instance.
       *
       * @param request DescribePolarFsAttributeRequest
       * @return DescribePolarFsAttributeResponse
       */
      Models::DescribePolarFsAttributeResponse describePolarFsAttribute(const Models::DescribePolarFsAttributeRequest &request);

      /**
       * @summary Lists the files and subdirectories under a specified path.
       *
       * @description ## 请求说明
       * - **Path** 参数必须提供一个绝对路径。
       * - **Recursive** 参数默认为 `false`，如果设置为 `true`，则会递归列出所有子目录的内容。
       * - **Depth** 参数用于限制递归深度，默认值为 `1`。
       * - **Filter** 参数支持通配符或正则表达式过滤结果。
       *
       * @param request DescribePolarFsObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarFsObjectsResponse
       */
      Models::DescribePolarFsObjectsResponse describePolarFsObjectsWithOptions(const Models::DescribePolarFsObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the files and subdirectories under a specified path.
       *
       * @description ## 请求说明
       * - **Path** 参数必须提供一个绝对路径。
       * - **Recursive** 参数默认为 `false`，如果设置为 `true`，则会递归列出所有子目录的内容。
       * - **Depth** 参数用于限制递归深度，默认值为 `1`。
       * - **Filter** 参数支持通配符或正则表达式过滤结果。
       *
       * @param request DescribePolarFsObjectsRequest
       * @return DescribePolarFsObjectsResponse
       */
      Models::DescribePolarFsObjectsResponse describePolarFsObjects(const Models::DescribePolarFsObjectsRequest &request);

      /**
       * @summary Retrieves all quota rules for a specified PolarFileSystem (PolarFS) instance.
       *
       * @description ## Request
       * - This operation queries all quota rules for a specific PolarFS instance. It supports wildcard matching with the `QuotaNameMatch` and `PatternMatch` parameters.
       * - Paging is not yet available and will be released in a future kernel update.
       * - The `PolarFsInstanceId` parameter is required to specify the PolarFS instance to query.
       * - You can use optional parameters, such as `QuotaNameMatch` and `PatternMatch`, to filter quota rules.
       * - The returned data includes the total number of quota rules, the number of rules on the current page, and details for each rule, such as the rule ID, name, description, and capacity limit.
       *
       * @param request DescribePolarFsQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarFsQuotaResponse
       */
      Models::DescribePolarFsQuotaResponse describePolarFsQuotaWithOptions(const Models::DescribePolarFsQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all quota rules for a specified PolarFileSystem (PolarFS) instance.
       *
       * @description ## Request
       * - This operation queries all quota rules for a specific PolarFS instance. It supports wildcard matching with the `QuotaNameMatch` and `PatternMatch` parameters.
       * - Paging is not yet available and will be released in a future kernel update.
       * - The `PolarFsInstanceId` parameter is required to specify the PolarFS instance to query.
       * - You can use optional parameters, such as `QuotaNameMatch` and `PatternMatch`, to filter quota rules.
       * - The returned data includes the total number of quota rules, the number of rules on the current page, and details for each rule, such as the rule ID, name, description, and capacity limit.
       *
       * @param request DescribePolarFsQuotaRequest
       * @return DescribePolarFsQuotaResponse
       */
      Models::DescribePolarFsQuotaResponse describePolarFsQuota(const Models::DescribePolarFsQuotaRequest &request);

      /**
       * @summary Retrieves the quota list.
       *
       * @param request DescribePolarFsQuotaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarFsQuotaListResponse
       */
      Models::DescribePolarFsQuotaListResponse describePolarFsQuotaListWithOptions(const Models::DescribePolarFsQuotaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the quota list.
       *
       * @param request DescribePolarFsQuotaListRequest
       * @return DescribePolarFsQuotaListResponse
       */
      Models::DescribePolarFsQuotaListResponse describePolarFsQuotaList(const Models::DescribePolarFsQuotaListRequest &request);

      /**
       * @summary Checks whether the SQL Explorer feature is enabled for a target cluster.
       *
       * @description **Note:**
       * This API operation is deprecated. Use [Query the configurations of DAS Enterprise Edition](https://help.aliyun.com/document_detail/2778837.html) instead.
       *
       * @param request DescribePolarSQLCollectorPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarSQLCollectorPolicyResponse
       */
      Models::DescribePolarSQLCollectorPolicyResponse describePolarSQLCollectorPolicyWithOptions(const Models::DescribePolarSQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the SQL Explorer feature is enabled for a target cluster.
       *
       * @description **Note:**
       * This API operation is deprecated. Use [Query the configurations of DAS Enterprise Edition](https://help.aliyun.com/document_detail/2778837.html) instead.
       *
       * @param request DescribePolarSQLCollectorPolicyRequest
       * @return DescribePolarSQLCollectorPolicyResponse
       */
      Models::DescribePolarSQLCollectorPolicyResponse describePolarSQLCollectorPolicy(const Models::DescribePolarSQLCollectorPolicyRequest &request);

      /**
       * @summary Queries rate limit policies.
       *
       * @param request DescribeRateLimitPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRateLimitPolicyResponse
       */
      Models::DescribeRateLimitPolicyResponse describeRateLimitPolicyWithOptions(const Models::DescribeRateLimitPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries rate limit policies.
       *
       * @param request DescribeRateLimitPolicyRequest
       * @return DescribeRateLimitPolicyResponse
       */
      Models::DescribeRateLimitPolicyResponse describeRateLimitPolicy(const Models::DescribeRateLimitPolicyRequest &request);

      /**
       * @summary Queries a list of vSwitches.
       *
       * @param request DescribeRdsVSwitchsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVSwitchsResponse
       */
      Models::DescribeRdsVSwitchsResponse describeRdsVSwitchsWithOptions(const Models::DescribeRdsVSwitchsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of vSwitches.
       *
       * @param request DescribeRdsVSwitchsRequest
       * @return DescribeRdsVSwitchsResponse
       */
      Models::DescribeRdsVSwitchsResponse describeRdsVSwitchs(const Models::DescribeRdsVSwitchsRequest &request);

      /**
       * @summary Describes a list of VPCs.
       *
       * @param request DescribeRdsVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcsWithOptions(const Models::DescribeRdsVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes a list of VPCs.
       *
       * @param request DescribeRdsVpcsRequest
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcs(const Models::DescribeRdsVpcsRequest &request);

      /**
       * @summary Queries the regions and zones that are supported by PolarDB.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions and zones that are supported by PolarDB.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Describes cross-cloud resource plans.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourcePackagesResponse
       */
      Models::DescribeResourcePackagesResponse describeResourcePackagesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes cross-cloud resource plans.
       *
       * @return DescribeResourcePackagesResponse
       */
      Models::DescribeResourcePackagesResponse describeResourcePackages();

      /**
       * @summary Returns the details of SQL throttling rules.
       *
       * @param request DescribeSQLRateLimitingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLRateLimitingRulesResponse
       */
      Models::DescribeSQLRateLimitingRulesResponse describeSQLRateLimitingRulesWithOptions(const Models::DescribeSQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the details of SQL throttling rules.
       *
       * @param request DescribeSQLRateLimitingRulesRequest
       * @return DescribeSQLRateLimitingRulesResponse
       */
      Models::DescribeSQLRateLimitingRulesResponse describeSQLRateLimitingRules(const Models::DescribeSQLRateLimitingRulesRequest &request);

      /**
       * @summary Retrieves the details of all scheduled tasks.
       *
       * @param request DescribeScheduleTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduleTasksResponse
       */
      Models::DescribeScheduleTasksResponse describeScheduleTasksWithOptions(const Models::DescribeScheduleTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of all scheduled tasks.
       *
       * @param request DescribeScheduleTasksRequest
       * @return DescribeScheduleTasksResponse
       */
      Models::DescribeScheduleTasksResponse describeScheduleTasks(const Models::DescribeScheduleTasksRequest &request);

      /**
       * @summary Queries shared backup sets.
       *
       * @param request DescribeSharedBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSharedBackupsResponse
       */
      Models::DescribeSharedBackupsResponse describeSharedBackupsWithOptions(const Models::DescribeSharedBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries shared backup sets.
       *
       * @param request DescribeSharedBackupsRequest
       * @return DescribeSharedBackupsResponse
       */
      Models::DescribeSharedBackupsResponse describeSharedBackups(const Models::DescribeSharedBackupsRequest &request);

      /**
       * @summary Queries the details of slow query logs for a PolarDB cluster.
       *
       * @description > - This operation is supported only for PolarDB for MySQL clusters.
       * >
       * > - For PolarDB for PostgreSQL and PolarDB for PostgreSQL (Oracle Compatible) clusters, use the [DAS API to query slow log records](https://help.aliyun.com/document_detail/2922426.html).
       * >
       * > - Starting September 1, 2024, the value of the `SQLHash` field will change due to an optimization of the SQL templating algorithm. For more information, see [[Notice\\] Optimization of the templating algorithm for slow SQL queries](~~2845725~~).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of slow query logs for a PolarDB cluster.
       *
       * @description > - This operation is supported only for PolarDB for MySQL clusters.
       * >
       * > - For PolarDB for PostgreSQL and PolarDB for PostgreSQL (Oracle Compatible) clusters, use the [DAS API to query slow log records](https://help.aliyun.com/document_detail/2922426.html).
       * >
       * > - Starting September 1, 2024, the value of the `SQLHash` field will change due to an optimization of the SQL templating algorithm. For more information, see [[Notice\\] Optimization of the templating algorithm for slow SQL queries](~~2845725~~).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries the slow query log statistics for a PolarDB cluster.
       *
       * @description > - This API is available only for PolarDB for MySQL.
       * >
       * > - Effective September 1, 2024, the SQLHash field value will change when you call this API due to an optimization to the SQL templating algorithm. For more information, see [Optimization of the templating algorithm for slow SQL queries](https://help.aliyun.com/document_detail/2845725.html).
       *
       * @param request DescribeSlowLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogsWithOptions(const Models::DescribeSlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the slow query log statistics for a PolarDB cluster.
       *
       * @description > - This API is available only for PolarDB for MySQL.
       * >
       * > - Effective September 1, 2024, the SQLHash field value will change when you call this API due to an optimization to the SQL templating algorithm. For more information, see [Optimization of the templating algorithm for slow SQL queries](https://help.aliyun.com/document_detail/2845725.html).
       *
       * @param request DescribeSlowLogsRequest
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogs(const Models::DescribeSlowLogsRequest &request);

      /**
       * @summary Queries the progress details of tasks generated by API calls, such as creating a cluster.
       *
       * @description - You can view the progress details of tasks generated by either direct API calls, such as [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html), or operations in the PolarDB console, such as [creating a cluster](https://help.aliyun.com/document_detail/58769.html).
       * - Currently, this operation supports viewing the progress details only for tasks generated when you create a cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation, provided that the `CreationOption` parameter is not set to `CreateGdnStandby`.
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress details of tasks generated by API calls, such as creating a cluster.
       *
       * @description - You can view the progress details of tasks generated by either direct API calls, such as [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html), or operations in the PolarDB console, such as [creating a cluster](https://help.aliyun.com/document_detail/58769.html).
       * - Currently, this operation supports viewing the progress details only for tasks generated when you create a cluster by calling the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation, provided that the `CreationOption` parameter is not set to `CreateGdnStandby`.
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Queries the verification reports.
       *
       * @param request DescribeUpgradeReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpgradeReportResponse
       */
      Models::DescribeUpgradeReportResponse describeUpgradeReportWithOptions(const Models::DescribeUpgradeReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the verification reports.
       *
       * @param request DescribeUpgradeReportRequest
       * @return DescribeUpgradeReportResponse
       */
      Models::DescribeUpgradeReportResponse describeUpgradeReport(const Models::DescribeUpgradeReportRequest &request);

      /**
       * @summary Retrieves a list of Key Management Service (KMS) keys.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(const Models::DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of Key Management Service (KMS) keys.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(const Models::DescribeUserEncryptionKeyListRequest &request);

      /**
       * @summary Retrieves information about vSwitches.
       *
       * @param request DescribeVSwitchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchListResponse
       */
      Models::DescribeVSwitchListResponse describeVSwitchListWithOptions(const Models::DescribeVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about vSwitches.
       *
       * @param request DescribeVSwitchListRequest
       * @return DescribeVSwitchListResponse
       */
      Models::DescribeVSwitchListResponse describeVSwitchList(const Models::DescribeVSwitchListRequest &request);

      /**
       * @summary Queries one or more vSwitches.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more vSwitches.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Queries one or more VPCs.
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more VPCs.
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary Queries the available zones.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available zones.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Disables DynamoDB compatibility.
       *
       * @param request DisableDBClusterDynamoDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDBClusterDynamoDBResponse
       */
      Models::DisableDBClusterDynamoDBResponse disableDBClusterDynamoDBWithOptions(const Models::DisableDBClusterDynamoDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables DynamoDB compatibility.
       *
       * @param request DisableDBClusterDynamoDBRequest
       * @return DisableDBClusterDynamoDBResponse
       */
      Models::DisableDBClusterDynamoDBResponse disableDBClusterDynamoDB(const Models::DisableDBClusterDynamoDBRequest &request);

      /**
       * @summary Disables the Orca (Redis-compatible) feature for a PolarDB cluster.
       *
       * @param request DisableDBClusterOrcaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDBClusterOrcaResponse
       */
      Models::DisableDBClusterOrcaResponse disableDBClusterOrcaWithOptions(const Models::DisableDBClusterOrcaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the Orca (Redis-compatible) feature for a PolarDB cluster.
       *
       * @param request DisableDBClusterOrcaRequest
       * @return DisableDBClusterOrcaResponse
       */
      Models::DisableDBClusterOrcaResponse disableDBClusterOrca(const Models::DisableDBClusterOrcaRequest &request);

      /**
       * @summary Disables steady-state serverless.
       *
       * @param request DisableDBClusterServerlessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDBClusterServerlessResponse
       */
      Models::DisableDBClusterServerlessResponse disableDBClusterServerlessWithOptions(const Models::DisableDBClusterServerlessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables steady-state serverless.
       *
       * @param request DisableDBClusterServerlessRequest
       * @return DisableDBClusterServerlessResponse
       */
      Models::DisableDBClusterServerlessResponse disableDBClusterServerless(const Models::DisableDBClusterServerlessRequest &request);

      /**
       * @summary This API disables a specified PolarClaw channel.
       *
       * @description ## Description
       * Call the`DisablePolarClawChannel` API to disable a PolarClaw channel for a specific application. Before you perform this operation, make sure you have the target channel ID and the application ID.
       *
       * @param request DisablePolarClawChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisablePolarClawChannelResponse
       */
      Models::DisablePolarClawChannelResponse disablePolarClawChannelWithOptions(const Models::DisablePolarClawChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API disables a specified PolarClaw channel.
       *
       * @description ## Description
       * Call the`DisablePolarClawChannel` API to disable a PolarClaw channel for a specific application. Before you perform this operation, make sure you have the target channel ID and the application ID.
       *
       * @param request DisablePolarClawChannelRequest
       * @return DisablePolarClawChannelResponse
       */
      Models::DisablePolarClawChannelResponse disablePolarClawChannel(const Models::DisablePolarClawChannelRequest &request);

      /**
       * @summary Disables a PolarClaw cron job.
       *
       * @param request DisablePolarClawCronJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisablePolarClawCronJobResponse
       */
      Models::DisablePolarClawCronJobResponse disablePolarClawCronJobWithOptions(const Models::DisablePolarClawCronJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a PolarClaw cron job.
       *
       * @param request DisablePolarClawCronJobRequest
       * @return DisablePolarClawCronJobResponse
       */
      Models::DisablePolarClawCronJobResponse disablePolarClawCronJob(const Models::DisablePolarClawCronJobRequest &request);

      /**
       * @summary Disables the PolarClaw plugin.
       *
       * @param request DisablePolarClawPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisablePolarClawPluginResponse
       */
      Models::DisablePolarClawPluginResponse disablePolarClawPluginWithOptions(const Models::DisablePolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the PolarClaw plugin.
       *
       * @param request DisablePolarClawPluginRequest
       * @return DisablePolarClawPluginResponse
       */
      Models::DisablePolarClawPluginResponse disablePolarClawPlugin(const Models::DisablePolarClawPluginRequest &request);

      /**
       * @summary Enables DynamoDB compatibility.
       *
       * @param request EnableDBClusterDynamoDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDBClusterDynamoDBResponse
       */
      Models::EnableDBClusterDynamoDBResponse enableDBClusterDynamoDBWithOptions(const Models::EnableDBClusterDynamoDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables DynamoDB compatibility.
       *
       * @param request EnableDBClusterDynamoDBRequest
       * @return EnableDBClusterDynamoDBResponse
       */
      Models::EnableDBClusterDynamoDBResponse enableDBClusterDynamoDB(const Models::EnableDBClusterDynamoDBRequest &request);

      /**
       * @summary Enables the Orca (Redis-compatible) feature for a PolarDB cluster.
       *
       * @param request EnableDBClusterOrcaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDBClusterOrcaResponse
       */
      Models::EnableDBClusterOrcaResponse enableDBClusterOrcaWithOptions(const Models::EnableDBClusterOrcaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Orca (Redis-compatible) feature for a PolarDB cluster.
       *
       * @param request EnableDBClusterOrcaRequest
       * @return EnableDBClusterOrcaResponse
       */
      Models::EnableDBClusterOrcaResponse enableDBClusterOrca(const Models::EnableDBClusterOrcaRequest &request);

      /**
       * @summary Enables steady-state serverless.
       *
       * @param request EnableDBClusterServerlessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDBClusterServerlessResponse
       */
      Models::EnableDBClusterServerlessResponse enableDBClusterServerlessWithOptions(const Models::EnableDBClusterServerlessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables steady-state serverless.
       *
       * @param request EnableDBClusterServerlessRequest
       * @return EnableDBClusterServerlessResponse
       */
      Models::EnableDBClusterServerlessResponse enableDBClusterServerless(const Models::EnableDBClusterServerlessRequest &request);

      /**
       * @summary Modifies the status of SQL firewall rules for a cluster.
       *
       * @param request EnableFirewallRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableFirewallRulesResponse
       */
      Models::EnableFirewallRulesResponse enableFirewallRulesWithOptions(const Models::EnableFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of SQL firewall rules for a cluster.
       *
       * @param request EnableFirewallRulesRequest
       * @return EnableFirewallRulesResponse
       */
      Models::EnableFirewallRulesResponse enableFirewallRules(const Models::EnableFirewallRulesRequest &request);

      /**
       * @summary Enables a PolarClaw channel.
       *
       * @param request EnablePolarClawChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnablePolarClawChannelResponse
       */
      Models::EnablePolarClawChannelResponse enablePolarClawChannelWithOptions(const Models::EnablePolarClawChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a PolarClaw channel.
       *
       * @param request EnablePolarClawChannelRequest
       * @return EnablePolarClawChannelResponse
       */
      Models::EnablePolarClawChannelResponse enablePolarClawChannel(const Models::EnablePolarClawChannelRequest &request);

      /**
       * @summary Enables a cron job in PolarClaw.
       *
       * @description ## Request
       * This operation enables a cron job in a PolarClaw application to run tasks on a schedule. Specify the correct `ApplicationId` to associate the job with the target application.
       *
       * @param request EnablePolarClawCronJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnablePolarClawCronJobResponse
       */
      Models::EnablePolarClawCronJobResponse enablePolarClawCronJobWithOptions(const Models::EnablePolarClawCronJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a cron job in PolarClaw.
       *
       * @description ## Request
       * This operation enables a cron job in a PolarClaw application to run tasks on a schedule. Specify the correct `ApplicationId` to associate the job with the target application.
       *
       * @param request EnablePolarClawCronJobRequest
       * @return EnablePolarClawCronJobResponse
       */
      Models::EnablePolarClawCronJobResponse enablePolarClawCronJob(const Models::EnablePolarClawCronJobRequest &request);

      /**
       * @summary Enables a PolarClaw plugin.
       *
       * @param request EnablePolarClawPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnablePolarClawPluginResponse
       */
      Models::EnablePolarClawPluginResponse enablePolarClawPluginWithOptions(const Models::EnablePolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a PolarClaw plugin.
       *
       * @param request EnablePolarClawPluginRequest
       * @return EnablePolarClawPluginResponse
       */
      Models::EnablePolarClawPluginResponse enablePolarClawPlugin(const Models::EnablePolarClawPluginRequest &request);

      /**
       * @summary Enables or disables SQL throttling rules.
       *
       * @param request EnableSQLRateLimitingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSQLRateLimitingRulesResponse
       */
      Models::EnableSQLRateLimitingRulesResponse enableSQLRateLimitingRulesWithOptions(const Models::EnableSQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables SQL throttling rules.
       *
       * @param request EnableSQLRateLimitingRulesRequest
       * @return EnableSQLRateLimitingRulesResponse
       */
      Models::EnableSQLRateLimitingRulesResponse enableSQLRateLimitingRules(const Models::EnableSQLRateLimitingRulesRequest &request);

      /**
       * @summary Evaluates the resources in a region.
       *
       * @param request EvaluateRegionResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateRegionResourceResponse
       */
      Models::EvaluateRegionResourceResponse evaluateRegionResourceWithOptions(const Models::EvaluateRegionResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Evaluates the resources in a region.
       *
       * @param request EvaluateRegionResourceRequest
       * @return EvaluateRegionResourceResponse
       */
      Models::EvaluateRegionResourceResponse evaluateRegionResource(const Models::EvaluateRegionResourceRequest &request);

      /**
       * @summary Calls a cross-cloud OpenAPI.
       *
       * @param request ExecuteCrossCloudOpenAPIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteCrossCloudOpenAPIResponse
       */
      Models::ExecuteCrossCloudOpenAPIResponse executeCrossCloudOpenAPIWithOptions(const Models::ExecuteCrossCloudOpenAPIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls a cross-cloud OpenAPI.
       *
       * @param request ExecuteCrossCloudOpenAPIRequest
       * @return ExecuteCrossCloudOpenAPIResponse
       */
      Models::ExecuteCrossCloudOpenAPIResponse executeCrossCloudOpenAPI(const Models::ExecuteCrossCloudOpenAPIRequest &request);

      /**
       * @summary Performs a manual failover to promote a read-only node to the primary node in a PolarDB cluster.
       *
       * @param request FailoverDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FailoverDBClusterResponse
       */
      Models::FailoverDBClusterResponse failoverDBClusterWithOptions(const Models::FailoverDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a manual failover to promote a read-only node to the primary node in a PolarDB cluster.
       *
       * @param request FailoverDBClusterRequest
       * @return FailoverDBClusterResponse
       */
      Models::FailoverDBClusterResponse failoverDBCluster(const Models::FailoverDBClusterRequest &request);

      /**
       * @summary Initiates a zonal failover for a PolarDB cluster, promoting a secondary node to primary.
       *
       * @param request FailoverDBClusterZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FailoverDBClusterZonalResponse
       */
      Models::FailoverDBClusterZonalResponse failoverDBClusterZonalWithOptions(const Models::FailoverDBClusterZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a zonal failover for a PolarDB cluster, promoting a secondary node to primary.
       *
       * @param request FailoverDBClusterZonalRequest
       * @return FailoverDBClusterZonalResponse
       */
      Models::FailoverDBClusterZonalResponse failoverDBClusterZonal(const Models::FailoverDBClusterZonalRequest &request);

      /**
       * @summary Generates a report for a pre-upgrade check.
       *
       * @param request GenerateUpgradeReportForSyncCloneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUpgradeReportForSyncCloneResponse
       */
      Models::GenerateUpgradeReportForSyncCloneResponse generateUpgradeReportForSyncCloneWithOptions(const Models::GenerateUpgradeReportForSyncCloneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a report for a pre-upgrade check.
       *
       * @param request GenerateUpgradeReportForSyncCloneRequest
       * @return GenerateUpgradeReportForSyncCloneResponse
       */
      Models::GenerateUpgradeReportForSyncCloneResponse generateUpgradeReportForSyncClone(const Models::GenerateUpgradeReportForSyncCloneRequest &request);

      /**
       * @summary Creates a chat record.
       *
       * @param request GetPolarAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolarAgentResponse
       */
      FutureGenerator<Models::GetPolarAgentResponse> getPolarAgentWithSSE(const Models::GetPolarAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a chat record.
       *
       * @param request GetPolarAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolarAgentResponse
       */
      Models::GetPolarAgentResponse getPolarAgentWithOptions(const Models::GetPolarAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a chat record.
       *
       * @param request GetPolarAgentRequest
       * @return GetPolarAgentResponse
       */
      Models::GetPolarAgentResponse getPolarAgent(const Models::GetPolarAgentRequest &request);

      /**
       * @summary Retrieves the PolarClaw configuration.
       *
       * @param request GetPolarClawConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolarClawConfigResponse
       */
      Models::GetPolarClawConfigResponse getPolarClawConfigWithOptions(const Models::GetPolarClawConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the PolarClaw configuration.
       *
       * @param request GetPolarClawConfigRequest
       * @return GetPolarClawConfigResponse
       */
      Models::GetPolarClawConfigResponse getPolarClawConfig(const Models::GetPolarClawConfigRequest &request);

      /**
       * @summary Grants a standard account the permissions to access one or more databases in a specified PolarDB cluster.
       *
       * @description > - An account can be authorized to access one or more databases.
       * >
       * > - If the specified account already has the access permissions on the specified databases, the operation returns a successful response.
       * >
       * > - Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
       * >
       * > - This operation is supported only for PolarDB for MySQL clusters.
       * >
       * > - By default, a privileged account for a cluster has all the permissions on the databases in the cluster.
       *
       * @param request GrantAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilegeWithOptions(const Models::GrantAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a standard account the permissions to access one or more databases in a specified PolarDB cluster.
       *
       * @description > - An account can be authorized to access one or more databases.
       * >
       * > - If the specified account already has the access permissions on the specified databases, the operation returns a successful response.
       * >
       * > - Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
       * >
       * > - This operation is supported only for PolarDB for MySQL clusters.
       * >
       * > - By default, a privileged account for a cluster has all the permissions on the databases in the cluster.
       *
       * @param request GrantAccountPrivilegeRequest
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilege(const Models::GrantAccountPrivilegeRequest &request);

      /**
       * @summary Modifies the account permissions on a PolarDB for Xscale cluster.
       *
       * @param request GrantAccountPrivilegeZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantAccountPrivilegeZonalResponse
       */
      Models::GrantAccountPrivilegeZonalResponse grantAccountPrivilegeZonalWithOptions(const Models::GrantAccountPrivilegeZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the account permissions on a PolarDB for Xscale cluster.
       *
       * @param request GrantAccountPrivilegeZonalRequest
       * @return GrantAccountPrivilegeZonalResponse
       */
      Models::GrantAccountPrivilegeZonalResponse grantAccountPrivilegeZonal(const Models::GrantAccountPrivilegeZonalRequest &request);

      /**
       * @summary Installs a PolarClaw plugin.
       *
       * @param request InstallPolarClawPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallPolarClawPluginResponse
       */
      Models::InstallPolarClawPluginResponse installPolarClawPluginWithOptions(const Models::InstallPolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs a PolarClaw plugin.
       *
       * @param request InstallPolarClawPluginRequest
       * @return InstallPolarClawPluginResponse
       */
      Models::InstallPolarClawPluginResponse installPolarClawPlugin(const Models::InstallPolarClawPluginRequest &request);

      /**
       * @summary Queries a list of orders.
       *
       * @param request ListOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrdersResponse
       */
      Models::ListOrdersResponse listOrdersWithOptions(const Models::ListOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of orders.
       *
       * @param request ListOrdersRequest
       * @return ListOrdersResponse
       */
      Models::ListOrdersResponse listOrders(const Models::ListOrdersRequest &request);

      /**
       * @summary Lists PolarClaw bindings.
       *
       * @param tmpReq ListPolarClawBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolarClawBindingsResponse
       */
      Models::ListPolarClawBindingsResponse listPolarClawBindingsWithOptions(const Models::ListPolarClawBindingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists PolarClaw bindings.
       *
       * @param request ListPolarClawBindingsRequest
       * @return ListPolarClawBindingsResponse
       */
      Models::ListPolarClawBindingsResponse listPolarClawBindings(const Models::ListPolarClawBindingsRequest &request);

      /**
       * @summary List PolarClaw device pairings
       *
       * @param request ListPolarClawDevicePairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolarClawDevicePairsResponse
       */
      Models::ListPolarClawDevicePairsResponse listPolarClawDevicePairsWithOptions(const Models::ListPolarClawDevicePairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List PolarClaw device pairings
       *
       * @param request ListPolarClawDevicePairsRequest
       * @return ListPolarClawDevicePairsResponse
       */
      Models::ListPolarClawDevicePairsResponse listPolarClawDevicePairs(const Models::ListPolarClawDevicePairsRequest &request);

      /**
       * @summary Queries the tags that are attached to one or more PolarDB clusters, or the PolarDB clusters that are attached to one or more tags.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are attached to one or more PolarDB clusters, or the PolarDB clusters that are attached to one or more tags.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tags that are attached to resources in a specified region.
       *
       * @param request ListTagResourcesForRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesForRegionResponse
       */
      Models::ListTagResourcesForRegionResponse listTagResourcesForRegionWithOptions(const Models::ListTagResourcesForRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are attached to resources in a specified region.
       *
       * @param request ListTagResourcesForRegionRequest
       * @return ListTagResourcesForRegionResponse
       */
      Models::ListTagResourcesForRegionResponse listTagResourcesForRegion(const Models::ListTagResourcesForRegionRequest &request);

      /**
       * @summary Logs into a PolarClaw channel.
       *
       * @param request LoginPolarClawChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoginPolarClawChannelResponse
       */
      Models::LoginPolarClawChannelResponse loginPolarClawChannelWithOptions(const Models::LoginPolarClawChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Logs into a PolarClaw channel.
       *
       * @param request LoginPolarClawChannelRequest
       * @return LoginPolarClawChannelResponse
       */
      Models::LoginPolarClawChannelResponse loginPolarClawChannel(const Models::LoginPolarClawChannelRequest &request);

      /**
       * @summary Starts a DB cluster.
       *
       * @param request ManuallyStartDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManuallyStartDBClusterResponse
       */
      Models::ManuallyStartDBClusterResponse manuallyStartDBClusterWithOptions(const Models::ManuallyStartDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a DB cluster.
       *
       * @param request ManuallyStartDBClusterRequest
       * @return ManuallyStartDBClusterResponse
       */
      Models::ManuallyStartDBClusterResponse manuallyStartDBCluster(const Models::ManuallyStartDBClusterRequest &request);

      /**
       * @summary Modify the name of an AI instance
       *
       * @param request ModifyAIDBClusterDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAIDBClusterDescriptionResponse
       */
      Models::ModifyAIDBClusterDescriptionResponse modifyAIDBClusterDescriptionWithOptions(const Models::ModifyAIDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the name of an AI instance
       *
       * @param request ModifyAIDBClusterDescriptionRequest
       * @return ModifyAIDBClusterDescriptionResponse
       */
      Models::ModifyAIDBClusterDescriptionResponse modifyAIDBClusterDescription(const Models::ModifyAIDBClusterDescriptionRequest &request);

      /**
       * @summary Modifies the description of a PolarDB database account.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a PolarDB database account.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Modifies the description of a PolarDB on ENS account.
       *
       * @param request ModifyAccountDescriptionZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionZonalResponse
       */
      Models::ModifyAccountDescriptionZonalResponse modifyAccountDescriptionZonalWithOptions(const Models::ModifyAccountDescriptionZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a PolarDB on ENS account.
       *
       * @param request ModifyAccountDescriptionZonalRequest
       * @return ModifyAccountDescriptionZonalResponse
       */
      Models::ModifyAccountDescriptionZonalResponse modifyAccountDescriptionZonal(const Models::ModifyAccountDescriptionZonalRequest &request);

      /**
       * @summary Changes the lock status of a PolarDB database account.
       *
       * @param request ModifyAccountLockStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountLockStateResponse
       */
      Models::ModifyAccountLockStateResponse modifyAccountLockStateWithOptions(const Models::ModifyAccountLockStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the lock status of a PolarDB database account.
       *
       * @param request ModifyAccountLockStateRequest
       * @return ModifyAccountLockStateResponse
       */
      Models::ModifyAccountLockStateResponse modifyAccountLockState(const Models::ModifyAccountLockStateRequest &request);

      /**
       * @summary Changes the password of a database account for a specified PolarDB cluster.
       *
       * @param request ModifyAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPasswordWithOptions(const Models::ModifyAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the password of a database account for a specified PolarDB cluster.
       *
       * @param request ModifyAccountPasswordRequest
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPassword(const Models::ModifyAccountPasswordRequest &request);

      /**
       * @summary Modifies the password of an account in a PolarDB for Xscale cluster.
       *
       * @param request ModifyAccountPasswordZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountPasswordZonalResponse
       */
      Models::ModifyAccountPasswordZonalResponse modifyAccountPasswordZonalWithOptions(const Models::ModifyAccountPasswordZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password of an account in a PolarDB for Xscale cluster.
       *
       * @param request ModifyAccountPasswordZonalRequest
       * @return ModifyAccountPasswordZonalResponse
       */
      Models::ModifyAccountPasswordZonalResponse modifyAccountPasswordZonal(const Models::ModifyAccountPasswordZonalRequest &request);

      /**
       * @summary Configures the operations and maintenance (O&M) settings for a user. These settings include the active maintenance window.
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConfWithOptions(const Models::ModifyActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the operations and maintenance (O&M) settings for a user. These settings include the active maintenance window.
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConf(const Models::ModifyActiveOperationMaintainConfRequest &request);

      /**
       * @summary Modifies the switching time of scheduled O\\\\\\&M events for an instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switching time of scheduled O\\\\\\&M events for an instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Updates the description of a PolarDB application.
       *
       * @param request ModifyApplicationDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApplicationDescriptionResponse
       */
      Models::ModifyApplicationDescriptionResponse modifyApplicationDescriptionWithOptions(const Models::ModifyApplicationDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a PolarDB application.
       *
       * @param request ModifyApplicationDescriptionRequest
       * @return ModifyApplicationDescriptionResponse
       */
      Models::ModifyApplicationDescriptionResponse modifyApplicationDescription(const Models::ModifyApplicationDescriptionRequest &request);

      /**
       * @summary Modifies the configuration parameters of a sub-component within a specified PolarDB application.
       *
       * @param tmpReq ModifyApplicationParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApplicationParameterResponse
       */
      Models::ModifyApplicationParameterResponse modifyApplicationParameterWithOptions(const Models::ModifyApplicationParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration parameters of a sub-component within a specified PolarDB application.
       *
       * @param request ModifyApplicationParameterRequest
       * @return ModifyApplicationParameterResponse
       */
      Models::ModifyApplicationParameterResponse modifyApplicationParameter(const Models::ModifyApplicationParameterRequest &request);

      /**
       * @summary Modifies the prompt for a specified application.
       *
       * @param request ModifyApplicationPromptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApplicationPromptResponse
       */
      Models::ModifyApplicationPromptResponse modifyApplicationPromptWithOptions(const Models::ModifyApplicationPromptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the prompt for a specified application.
       *
       * @param request ModifyApplicationPromptRequest
       * @return ModifyApplicationPromptResponse
       */
      Models::ModifyApplicationPromptResponse modifyApplicationPrompt(const Models::ModifyApplicationPromptRequest &request);

      /**
       * @summary Modifies the Serverless configuration of a PolarDB application.
       *
       * @param request ModifyApplicationServerlessConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApplicationServerlessConfResponse
       */
      Models::ModifyApplicationServerlessConfResponse modifyApplicationServerlessConfWithOptions(const Models::ModifyApplicationServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Serverless configuration of a PolarDB application.
       *
       * @param request ModifyApplicationServerlessConfRequest
       * @return ModifyApplicationServerlessConfResponse
       */
      Models::ModifyApplicationServerlessConfResponse modifyApplicationServerlessConf(const Models::ModifyApplicationServerlessConfRequest &request);

      /**
       * @summary Modifies the IP address whitelist and security group configuration for a PolarDB application.
       *
       * @param request ModifyApplicationWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApplicationWhitelistResponse
       */
      Models::ModifyApplicationWhitelistResponse modifyApplicationWhitelistWithOptions(const Models::ModifyApplicationWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist and security group configuration for a PolarDB application.
       *
       * @param request ModifyApplicationWhitelistRequest
       * @return ModifyApplicationWhitelistResponse
       */
      Models::ModifyApplicationWhitelistResponse modifyApplicationWhitelist(const Models::ModifyApplicationWhitelistRequest &request);

      /**
       * @summary Sets the auto-renewal status for a subscription PolarDB cluster.
       *
       * @param request ModifyAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttributeWithOptions(const Models::ModifyAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the auto-renewal status for a subscription PolarDB cluster.
       *
       * @param request ModifyAutoRenewAttributeRequest
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttribute(const Models::ModifyAutoRenewAttributeRequest &request);

      /**
       * @summary Modifies the automatic backup policy for a PolarDB cluster.
       *
       * @description > You can also modify the automatic backup policy for a PolarDB cluster in the console. For more information, see [backup settings](https://help.aliyun.com/document_detail/280422.html).
       *
       * @param tmpReq ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic backup policy for a PolarDB cluster.
       *
       * @description > You can also modify the automatic backup policy for a PolarDB cluster in the console. For more information, see [backup settings](https://help.aliyun.com/document_detail/280422.html).
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Modifies a budget policy.
       *
       * @param request ModifyBudgetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBudgetPolicyResponse
       */
      Models::ModifyBudgetPolicyResponse modifyBudgetPolicyWithOptions(const Models::ModifyBudgetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a budget policy.
       *
       * @param request ModifyBudgetPolicyRequest
       * @return ModifyBudgetPolicyResponse
       */
      Models::ModifyBudgetPolicyResponse modifyBudgetPolicy(const Models::ModifyBudgetPolicyRequest &request);

      /**
       * @summary Modifies the properties of a consumer.
       *
       * @param request ModifyConsumerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumerResponse
       */
      Models::ModifyConsumerResponse modifyConsumerWithOptions(const Models::ModifyConsumerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the properties of a consumer.
       *
       * @param request ModifyConsumerRequest
       * @return ModifyConsumerResponse
       */
      Models::ModifyConsumerResponse modifyConsumer(const Models::ModifyConsumerRequest &request);

      /**
       * @summary Modifies a consumer group.
       *
       * @param request ModifyConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumerGroupResponse
       */
      Models::ModifyConsumerGroupResponse modifyConsumerGroupWithOptions(const Models::ModifyConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a consumer group.
       *
       * @param request ModifyConsumerGroupRequest
       * @return ModifyConsumerGroupResponse
       */
      Models::ModifyConsumerGroupResponse modifyConsumerGroup(const Models::ModifyConsumerGroupRequest &request);

      /**
       * @summary Modifies a cost rule.
       *
       * @param request ModifyCostRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCostRuleResponse
       */
      Models::ModifyCostRuleResponse modifyCostRuleWithOptions(const Models::ModifyCostRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a cost rule.
       *
       * @param request ModifyCostRuleRequest
       * @return ModifyCostRuleResponse
       */
      Models::ModifyCostRuleResponse modifyCostRule(const Models::ModifyCostRuleRequest &request);

      /**
       * @summary Modifies the policy for a scheduled task.
       *
       * @param request ModifyCronJobPolicyServerlessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCronJobPolicyServerlessResponse
       */
      Models::ModifyCronJobPolicyServerlessResponse modifyCronJobPolicyServerlessWithOptions(const Models::ModifyCronJobPolicyServerlessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the policy for a scheduled task.
       *
       * @param request ModifyCronJobPolicyServerlessRequest
       * @return ModifyCronJobPolicyServerlessResponse
       */
      Models::ModifyCronJobPolicyServerlessResponse modifyCronJobPolicyServerless(const Models::ModifyCronJobPolicyServerlessRequest &request);

      /**
       * @summary Modify the feature configuration of a PolarDB MySQL cluster.
       *
       * @param request ModifyDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBClusterWithOptions(const Models::ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the feature configuration of a PolarDB MySQL cluster.
       *
       * @param request ModifyDBClusterRequest
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBCluster(const Models::ModifyDBClusterRequest &request);

      /**
       * @summary Creates or modifies the access whitelist for a cluster. The whitelist can be an IP address whitelist or a security group.
       *
       * @param request ModifyDBClusterAccessWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterAccessWhitelistResponse
       */
      Models::ModifyDBClusterAccessWhitelistResponse modifyDBClusterAccessWhitelistWithOptions(const Models::ModifyDBClusterAccessWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies the access whitelist for a cluster. The whitelist can be an IP address whitelist or a security group.
       *
       * @param request ModifyDBClusterAccessWhitelistRequest
       * @return ModifyDBClusterAccessWhitelistResponse
       */
      Models::ModifyDBClusterAccessWhitelistResponse modifyDBClusterAccessWhitelist(const Models::ModifyDBClusterAccessWhitelistRequest &request);

      /**
       * @summary Modify cluster parameters and apply them to specified nodes.
       *
       * @param request ModifyDBClusterAndNodesParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterAndNodesParametersResponse
       */
      Models::ModifyDBClusterAndNodesParametersResponse modifyDBClusterAndNodesParametersWithOptions(const Models::ModifyDBClusterAndNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify cluster parameters and apply them to specified nodes.
       *
       * @param request ModifyDBClusterAndNodesParametersRequest
       * @return ModifyDBClusterAndNodesParametersResponse
       */
      Models::ModifyDBClusterAndNodesParametersResponse modifyDBClusterAndNodesParameters(const Models::ModifyDBClusterAndNodesParametersRequest &request);

      /**
       * @summary Modifies the high-availability mode of a cluster.
       *
       * @param request ModifyDBClusterArchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterArchResponse
       */
      Models::ModifyDBClusterArchResponse modifyDBClusterArchWithOptions(const Models::ModifyDBClusterArchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the high-availability mode of a cluster.
       *
       * @param request ModifyDBClusterArchRequest
       * @return ModifyDBClusterArchResponse
       */
      Models::ModifyDBClusterArchResponse modifyDBClusterArch(const Models::ModifyDBClusterArchRequest &request);

      /**
       * @summary Enables or disables SQL collector for a PolarDB cluster. The features related to SQL collector include Audit Logs and SQL Explorer.
       *
       * @description **Note:** This API has been deprecated and is no longer maintained. We recommend that you use [Enable or configure DAS Enterprise Edition](https://help.aliyun.com/document_detail/2778835.html).
       * > If DAS Enterprise Edition is available in the region of the cluster, calling this API to enable SQL Audit automatically enables the latest DAS Enterprise Edition available in that region. For information about database engines and regions supported by each DAS Enterprise Edition version, see [Supported database engines and regions for DAS Enterprise Edition](https://help.aliyun.com/document_detail/156204.html).
       *
       * @param request ModifyDBClusterAuditLogCollectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterAuditLogCollectorResponse
       */
      Models::ModifyDBClusterAuditLogCollectorResponse modifyDBClusterAuditLogCollectorWithOptions(const Models::ModifyDBClusterAuditLogCollectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables SQL collector for a PolarDB cluster. The features related to SQL collector include Audit Logs and SQL Explorer.
       *
       * @description **Note:** This API has been deprecated and is no longer maintained. We recommend that you use [Enable or configure DAS Enterprise Edition](https://help.aliyun.com/document_detail/2778835.html).
       * > If DAS Enterprise Edition is available in the region of the cluster, calling this API to enable SQL Audit automatically enables the latest DAS Enterprise Edition available in that region. For information about database engines and regions supported by each DAS Enterprise Edition version, see [Supported database engines and regions for DAS Enterprise Edition](https://help.aliyun.com/document_detail/156204.html).
       *
       * @param request ModifyDBClusterAuditLogCollectorRequest
       * @return ModifyDBClusterAuditLogCollectorResponse
       */
      Models::ModifyDBClusterAuditLogCollectorResponse modifyDBClusterAuditLogCollector(const Models::ModifyDBClusterAuditLogCollectorRequest &request);

      /**
       * @summary Enables or disables the cluster lock.
       *
       * @param request ModifyDBClusterDeletionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterDeletionResponse
       */
      Models::ModifyDBClusterDeletionResponse modifyDBClusterDeletionWithOptions(const Models::ModifyDBClusterDeletionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the cluster lock.
       *
       * @param request ModifyDBClusterDeletionRequest
       * @return ModifyDBClusterDeletionResponse
       */
      Models::ModifyDBClusterDeletionResponse modifyDBClusterDeletion(const Models::ModifyDBClusterDeletionRequest &request);

      /**
       * @summary Modifies the description of a PolarDB cluster.
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(const Models::ModifyDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a PolarDB cluster.
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescription(const Models::ModifyDBClusterDescriptionRequest &request);

      /**
       * @summary Modifies the description of a cluster.
       *
       * @param request ModifyDBClusterDescriptionZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterDescriptionZonalResponse
       */
      Models::ModifyDBClusterDescriptionZonalResponse modifyDBClusterDescriptionZonalWithOptions(const Models::ModifyDBClusterDescriptionZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a cluster.
       *
       * @param request ModifyDBClusterDescriptionZonalRequest
       * @return ModifyDBClusterDescriptionZonalResponse
       */
      Models::ModifyDBClusterDescriptionZonalResponse modifyDBClusterDescriptionZonal(const Models::ModifyDBClusterDescriptionZonalRequest &request);

      /**
       * @summary This operation modifies the properties of a PolarDB cluster endpoint. You can configure settings such as the read/write mode, automatic node addition, consistency level, transaction splitting, the connection pool, and whether the primary node accepts read requests.
       *
       * @param request ModifyDBClusterEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterEndpointResponse
       */
      Models::ModifyDBClusterEndpointResponse modifyDBClusterEndpointWithOptions(const Models::ModifyDBClusterEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation modifies the properties of a PolarDB cluster endpoint. You can configure settings such as the read/write mode, automatic node addition, consistency level, transaction splitting, the connection pool, and whether the primary node accepts read requests.
       *
       * @param request ModifyDBClusterEndpointRequest
       * @return ModifyDBClusterEndpointResponse
       */
      Models::ModifyDBClusterEndpointResponse modifyDBClusterEndpoint(const Models::ModifyDBClusterEndpointRequest &request);

      /**
       * @summary Modifies the connection string for an edge cluster for PolarDB on ENS.
       *
       * @param request ModifyDBClusterEndpointZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterEndpointZonalResponse
       */
      Models::ModifyDBClusterEndpointZonalResponse modifyDBClusterEndpointZonalWithOptions(const Models::ModifyDBClusterEndpointZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the connection string for an edge cluster for PolarDB on ENS.
       *
       * @param request ModifyDBClusterEndpointZonalRequest
       * @return ModifyDBClusterEndpointZonalResponse
       */
      Models::ModifyDBClusterEndpointZonalResponse modifyDBClusterEndpointZonal(const Models::ModifyDBClusterEndpointZonalRequest &request);

      /**
       * @summary Modifies the routine maintenance window for a PolarDB cluster.
       *
       * @description > Set the routine maintenance window for the cluster to a time during off-peak hours. Alibaba Cloud performs cluster maintenance during this window to minimize the impact on your business.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(const Models::ModifyDBClusterMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the routine maintenance window for a PolarDB cluster.
       *
       * @description > Set the routine maintenance window for the cluster to a time during off-peak hours. Alibaba Cloud performs cluster maintenance during this window to minimize the impact on your business.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(const Models::ModifyDBClusterMaintainTimeRequest &request);

      /**
       * @summary Switches or rolls back a migration task for a one-click upgrade from RDS to PolarDB.
       *
       * @description - If this operation is called before the switchover, it performs a switchover.
       * - If this operation is called after the switchover is complete, it performs a rollback.
       * > A one-click upgrade task must be created for the cluster before you call this operation. To create the task, call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [One-click upgrade from RDS MySQL to PolarDB for MySQL](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request ModifyDBClusterMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMigrationResponse
       */
      Models::ModifyDBClusterMigrationResponse modifyDBClusterMigrationWithOptions(const Models::ModifyDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches or rolls back a migration task for a one-click upgrade from RDS to PolarDB.
       *
       * @description - If this operation is called before the switchover, it performs a switchover.
       * - If this operation is called after the switchover is complete, it performs a rollback.
       * > A one-click upgrade task must be created for the cluster before you call this operation. To create the task, call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation and set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [One-click upgrade from RDS MySQL to PolarDB for MySQL](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request ModifyDBClusterMigrationRequest
       * @return ModifyDBClusterMigrationResponse
       */
      Models::ModifyDBClusterMigrationResponse modifyDBClusterMigration(const Models::ModifyDBClusterMigrationRequest &request);

      /**
       * @summary Modifies the source and target instances of a Data Transmission Service (DTS) task.
       *
       * @param request ModifyDBClusterMigrationEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMigrationEndpointResponse
       */
      Models::ModifyDBClusterMigrationEndpointResponse modifyDBClusterMigrationEndpointWithOptions(const Models::ModifyDBClusterMigrationEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the source and target instances of a Data Transmission Service (DTS) task.
       *
       * @param request ModifyDBClusterMigrationEndpointRequest
       * @return ModifyDBClusterMigrationEndpointResponse
       */
      Models::ModifyDBClusterMigrationEndpointResponse modifyDBClusterMigrationEndpoint(const Models::ModifyDBClusterMigrationEndpointRequest &request);

      /**
       * @summary Modifies the interval at which the monitoring data of a PolarDB cluster is collected.
       *
       * @description *   When the monitoring data is collected every 5 seconds:
       *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * *   When the monitoring data is collected every 60 seconds:
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       *
       * @param request ModifyDBClusterMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMonitorResponse
       */
      Models::ModifyDBClusterMonitorResponse modifyDBClusterMonitorWithOptions(const Models::ModifyDBClusterMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the interval at which the monitoring data of a PolarDB cluster is collected.
       *
       * @description *   When the monitoring data is collected every 5 seconds:
       *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * *   When the monitoring data is collected every 60 seconds:
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       *
       * @param request ModifyDBClusterMonitorRequest
       * @return ModifyDBClusterMonitorResponse
       */
      Models::ModifyDBClusterMonitorResponse modifyDBClusterMonitor(const Models::ModifyDBClusterMonitorRequest &request);

      /**
       * @summary Modifies the parameters of a PolarDB cluster or applies an existing parameter template to a destination cluster.
       *
       * @description The parameter template feature in PolarDB lets you centrally manage parameters and apply them to your clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > The parameter template feature is available only for PolarDB for MySQL.
       *
       * @param request ModifyDBClusterParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterParametersResponse
       */
      Models::ModifyDBClusterParametersResponse modifyDBClusterParametersWithOptions(const Models::ModifyDBClusterParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a PolarDB cluster or applies an existing parameter template to a destination cluster.
       *
       * @description The parameter template feature in PolarDB lets you centrally manage parameters and apply them to your clusters. For more information, see [Use parameter templates](https://help.aliyun.com/document_detail/207009.html).
       * > The parameter template feature is available only for PolarDB for MySQL.
       *
       * @param request ModifyDBClusterParametersRequest
       * @return ModifyDBClusterParametersResponse
       */
      Models::ModifyDBClusterParametersResponse modifyDBClusterParameters(const Models::ModifyDBClusterParametersRequest &request);

      /**
       * @summary Changes the primary zone of a PolarDB cluster.
       *
       * @param request ModifyDBClusterPrimaryZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterPrimaryZoneResponse
       */
      Models::ModifyDBClusterPrimaryZoneResponse modifyDBClusterPrimaryZoneWithOptions(const Models::ModifyDBClusterPrimaryZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the primary zone of a PolarDB cluster.
       *
       * @param request ModifyDBClusterPrimaryZoneRequest
       * @return ModifyDBClusterPrimaryZoneResponse
       */
      Models::ModifyDBClusterPrimaryZoneResponse modifyDBClusterPrimaryZone(const Models::ModifyDBClusterPrimaryZoneRequest &request);

      /**
       * @summary Modifies the resource group of a database cluster.
       *
       * @param request ModifyDBClusterResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResourceGroupResponse
       */
      Models::ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroupWithOptions(const Models::ModifyDBClusterResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group of a database cluster.
       *
       * @param request ModifyDBClusterResourceGroupRequest
       * @return ModifyDBClusterResourceGroupResponse
       */
      Models::ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroup(const Models::ModifyDBClusterResourceGroupRequest &request);

      /**
       * @summary Enables or disables SSL encryption for a PolarDB cluster, or updates its CA certificate.
       *
       * @param request ModifyDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterSSLResponse
       */
      Models::ModifyDBClusterSSLResponse modifyDBClusterSSLWithOptions(const Models::ModifyDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables SSL encryption for a PolarDB cluster, or updates its CA certificate.
       *
       * @param request ModifyDBClusterSSLRequest
       * @return ModifyDBClusterSSLResponse
       */
      Models::ModifyDBClusterSSLResponse modifyDBClusterSSL(const Models::ModifyDBClusterSSLRequest &request);

      /**
       * @summary Modifies the configuration of a serverless cluster.
       *
       * @param request ModifyDBClusterServerlessConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterServerlessConfResponse
       */
      Models::ModifyDBClusterServerlessConfResponse modifyDBClusterServerlessConfWithOptions(const Models::ModifyDBClusterServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a serverless cluster.
       *
       * @param request ModifyDBClusterServerlessConfRequest
       * @return ModifyDBClusterServerlessConfResponse
       */
      Models::ModifyDBClusterServerlessConfResponse modifyDBClusterServerlessConf(const Models::ModifyDBClusterServerlessConfRequest &request);

      /**
       * @summary Modifies the storage performance of a PolarDB for MySQL cluster.
       *
       * @param request ModifyDBClusterStoragePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterStoragePerformanceResponse
       */
      Models::ModifyDBClusterStoragePerformanceResponse modifyDBClusterStoragePerformanceWithOptions(const Models::ModifyDBClusterStoragePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the storage performance of a PolarDB for MySQL cluster.
       *
       * @param request ModifyDBClusterStoragePerformanceRequest
       * @return ModifyDBClusterStoragePerformanceResponse
       */
      Models::ModifyDBClusterStoragePerformanceResponse modifyDBClusterStoragePerformance(const Models::ModifyDBClusterStoragePerformanceRequest &request);

      /**
       * @summary This operation modifies the storage space for pay-as-you-go enterprise edition and standard edition clusters.
       *
       * @description > You cannot scale down the storage space of PolarDB for PostgreSQL clusters.
       *
       * @param request ModifyDBClusterStorageSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterStorageSpaceResponse
       */
      Models::ModifyDBClusterStorageSpaceResponse modifyDBClusterStorageSpaceWithOptions(const Models::ModifyDBClusterStorageSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation modifies the storage space for pay-as-you-go enterprise edition and standard edition clusters.
       *
       * @description > You cannot scale down the storage space of PolarDB for PostgreSQL clusters.
       *
       * @param request ModifyDBClusterStorageSpaceRequest
       * @return ModifyDBClusterStorageSpaceResponse
       */
      Models::ModifyDBClusterStorageSpaceResponse modifyDBClusterStorageSpace(const Models::ModifyDBClusterStorageSpaceRequest &request);

      /**
       * @summary ModifyDBClusterTDE
       *
       * @description > - You must activate Key Management Service (KMS) before you perform this operation. For more information, see [Purchase a dedicated KMS instance](https://help.aliyun.com/document_detail/153781.html).
       * >
       * > - You cannot disable transparent data encryption (TDE) after you enable it.
       *
       * @param request ModifyDBClusterTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterTDEResponse
       */
      Models::ModifyDBClusterTDEResponse modifyDBClusterTDEWithOptions(const Models::ModifyDBClusterTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyDBClusterTDE
       *
       * @description > - You must activate Key Management Service (KMS) before you perform this operation. For more information, see [Purchase a dedicated KMS instance](https://help.aliyun.com/document_detail/153781.html).
       * >
       * > - You cannot disable transparent data encryption (TDE) after you enable it.
       *
       * @param request ModifyDBClusterTDERequest
       * @return ModifyDBClusterTDEResponse
       */
      Models::ModifyDBClusterTDEResponse modifyDBClusterTDE(const Models::ModifyDBClusterTDERequest &request);

      /**
       * @summary Modifies the vSwitch parameters for a cluster.
       *
       * @param request ModifyDBClusterVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterVpcResponse
       */
      Models::ModifyDBClusterVpcResponse modifyDBClusterVpcWithOptions(const Models::ModifyDBClusterVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the vSwitch parameters for a cluster.
       *
       * @param request ModifyDBClusterVpcRequest
       * @return ModifyDBClusterVpcResponse
       */
      Models::ModifyDBClusterVpcResponse modifyDBClusterVpc(const Models::ModifyDBClusterVpcRequest &request);

      /**
       * @summary Modifies the description of a database in a PolarDB for MySQL cluster.
       *
       * @param request ModifyDBDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescriptionWithOptions(const Models::ModifyDBDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database in a PolarDB for MySQL cluster.
       *
       * @param request ModifyDBDescriptionRequest
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescription(const Models::ModifyDBDescriptionRequest &request);

      /**
       * @summary Modifies the database description of an edge cluster for PolarDB on ENS.
       *
       * @param request ModifyDBDescriptionZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBDescriptionZonalResponse
       */
      Models::ModifyDBDescriptionZonalResponse modifyDBDescriptionZonalWithOptions(const Models::ModifyDBDescriptionZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the database description of an edge cluster for PolarDB on ENS.
       *
       * @param request ModifyDBDescriptionZonalRequest
       * @return ModifyDBDescriptionZonalResponse
       */
      Models::ModifyDBDescriptionZonalResponse modifyDBDescriptionZonal(const Models::ModifyDBDescriptionZonalRequest &request);

      /**
       * @summary Modifies the connection address of a PolarDB cluster. The address can be a primary address, default cluster address, custom cluster address, or private domain name.
       *
       * @param request ModifyDBEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBEndpointAddressResponse
       */
      Models::ModifyDBEndpointAddressResponse modifyDBEndpointAddressWithOptions(const Models::ModifyDBEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the connection address of a PolarDB cluster. The address can be a primary address, default cluster address, custom cluster address, or private domain name.
       *
       * @param request ModifyDBEndpointAddressRequest
       * @return ModifyDBEndpointAddressResponse
       */
      Models::ModifyDBEndpointAddressResponse modifyDBEndpointAddress(const Models::ModifyDBEndpointAddressRequest &request);

      /**
       * @summary Modifies the node specifications of a PolarDB cluster.
       *
       * @param request ModifyDBNodeClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeClassResponse
       */
      Models::ModifyDBNodeClassResponse modifyDBNodeClassWithOptions(const Models::ModifyDBNodeClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the node specifications of a PolarDB cluster.
       *
       * @param request ModifyDBNodeClassRequest
       * @return ModifyDBNodeClassResponse
       */
      Models::ModifyDBNodeClassResponse modifyDBNodeClass(const Models::ModifyDBNodeClassRequest &request);

      /**
       * @summary Modifies the configuration of a node in a PolarDB cluster.
       *
       * @param request ModifyDBNodeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeConfigResponse
       */
      Models::ModifyDBNodeConfigResponse modifyDBNodeConfigWithOptions(const Models::ModifyDBNodeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a node in a PolarDB cluster.
       *
       * @param request ModifyDBNodeConfigRequest
       * @return ModifyDBNodeConfigResponse
       */
      Models::ModifyDBNodeConfigResponse modifyDBNodeConfig(const Models::ModifyDBNodeConfigRequest &request);

      /**
       * @summary Modifies the name of a node in a PolarDB cluster.
       *
       * @param request ModifyDBNodeDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeDescriptionResponse
       */
      Models::ModifyDBNodeDescriptionResponse modifyDBNodeDescriptionWithOptions(const Models::ModifyDBNodeDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a node in a PolarDB cluster.
       *
       * @param request ModifyDBNodeDescriptionRequest
       * @return ModifyDBNodeDescriptionResponse
       */
      Models::ModifyDBNodeDescriptionResponse modifyDBNodeDescription(const Models::ModifyDBNodeDescriptionRequest &request);

      /**
       * @summary Enables or disables the failover with hot replica feature for a node in a cluster.
       *
       * @param request ModifyDBNodeHotReplicaModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeHotReplicaModeResponse
       */
      Models::ModifyDBNodeHotReplicaModeResponse modifyDBNodeHotReplicaModeWithOptions(const Models::ModifyDBNodeHotReplicaModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the failover with hot replica feature for a node in a cluster.
       *
       * @param request ModifyDBNodeHotReplicaModeRequest
       * @return ModifyDBNodeHotReplicaModeResponse
       */
      Models::ModifyDBNodeHotReplicaModeResponse modifyDBNodeHotReplicaMode(const Models::ModifyDBNodeHotReplicaModeRequest &request);

      /**
       * @summary Modifies the Snapshot Consistency Cluster (SCC) mode for a specified node in a PolarDB cluster.
       *
       * @param request ModifyDBNodeSccModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeSccModeResponse
       */
      Models::ModifyDBNodeSccModeResponse modifyDBNodeSccModeWithOptions(const Models::ModifyDBNodeSccModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Snapshot Consistency Cluster (SCC) mode for a specified node in a PolarDB cluster.
       *
       * @param request ModifyDBNodeSccModeRequest
       * @return ModifyDBNodeSccModeResponse
       */
      Models::ModifyDBNodeSccModeResponse modifyDBNodeSccMode(const Models::ModifyDBNodeSccModeRequest &request);

      /**
       * @summary Modifies the specifications of a single node in a PolarDB cluster.
       *
       * @param request ModifyDBNodesClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodesClassResponse
       */
      Models::ModifyDBNodesClassResponse modifyDBNodesClassWithOptions(const Models::ModifyDBNodesClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications of a single node in a PolarDB cluster.
       *
       * @param request ModifyDBNodesClassRequest
       * @return ModifyDBNodesClassResponse
       */
      Models::ModifyDBNodesClassResponse modifyDBNodesClass(const Models::ModifyDBNodesClassRequest &request);

      /**
       * @summary Modifies and applies the parameters of one or more nodes.
       *
       * @param request ModifyDBNodesParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodesParametersResponse
       */
      Models::ModifyDBNodesParametersResponse modifyDBNodesParametersWithOptions(const Models::ModifyDBNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies and applies the parameters of one or more nodes.
       *
       * @param request ModifyDBNodesParametersRequest
       * @return ModifyDBNodesParametersResponse
       */
      Models::ModifyDBNodesParametersResponse modifyDBNodesParameters(const Models::ModifyDBNodesParametersRequest &request);

      /**
       * @summary Modifies role permissions.
       *
       * @param request ModifyEncryptionDBRolePrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEncryptionDBRolePrivilegeResponse
       */
      Models::ModifyEncryptionDBRolePrivilegeResponse modifyEncryptionDBRolePrivilegeWithOptions(const Models::ModifyEncryptionDBRolePrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies role permissions.
       *
       * @param request ModifyEncryptionDBRolePrivilegeRequest
       * @return ModifyEncryptionDBRolePrivilegeResponse
       */
      Models::ModifyEncryptionDBRolePrivilegeResponse modifyEncryptionDBRolePrivilege(const Models::ModifyEncryptionDBRolePrivilegeRequest &request);

      /**
       * @summary Modifies an encryption policy.
       *
       * @param request ModifyEncryptionDBSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEncryptionDBSecretResponse
       */
      Models::ModifyEncryptionDBSecretResponse modifyEncryptionDBSecretWithOptions(const Models::ModifyEncryptionDBSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an encryption policy.
       *
       * @param request ModifyEncryptionDBSecretRequest
       * @return ModifyEncryptionDBSecretResponse
       */
      Models::ModifyEncryptionDBSecretResponse modifyEncryptionDBSecret(const Models::ModifyEncryptionDBSecretRequest &request);

      /**
       * @summary Modifies the configuration of the SQL firewall.
       *
       * @param request ModifyFirewallRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFirewallRulesResponse
       */
      Models::ModifyFirewallRulesResponse modifyFirewallRulesWithOptions(const Models::ModifyFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of the SQL firewall.
       *
       * @param request ModifyFirewallRulesRequest
       * @return ModifyFirewallRulesResponse
       */
      Models::ModifyFirewallRulesResponse modifyFirewallRules(const Models::ModifyFirewallRulesRequest &request);

      /**
       * @summary Modifies a global database network (GDN).
       *
       * @param request ModifyGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalDatabaseNetworkResponse
       */
      Models::ModifyGlobalDatabaseNetworkResponse modifyGlobalDatabaseNetworkWithOptions(const Models::ModifyGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a global database network (GDN).
       *
       * @param request ModifyGlobalDatabaseNetworkRequest
       * @return ModifyGlobalDatabaseNetworkResponse
       */
      Models::ModifyGlobalDatabaseNetworkResponse modifyGlobalDatabaseNetwork(const Models::ModifyGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Modifies an IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupResponse
       */
      Models::ModifyGlobalSecurityIPGroupResponse modifyGlobalSecurityIPGroupWithOptions(const Models::ModifyGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRequest
       * @return ModifyGlobalSecurityIPGroupResponse
       */
      Models::ModifyGlobalSecurityIPGroupResponse modifyGlobalSecurityIPGroup(const Models::ModifyGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Modifies the name of a global IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupNameResponse
       */
      Models::ModifyGlobalSecurityIPGroupNameResponse modifyGlobalSecurityIPGroupNameWithOptions(const Models::ModifyGlobalSecurityIPGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a global IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupNameRequest
       * @return ModifyGlobalSecurityIPGroupNameResponse
       */
      Models::ModifyGlobalSecurityIPGroupNameResponse modifyGlobalSecurityIPGroupName(const Models::ModifyGlobalSecurityIPGroupNameRequest &request);

      /**
       * @summary Modifies the association between a cluster and a global IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupRelationResponse
       */
      Models::ModifyGlobalSecurityIPGroupRelationResponse modifyGlobalSecurityIPGroupRelationWithOptions(const Models::ModifyGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the association between a cluster and a global IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRelationRequest
       * @return ModifyGlobalSecurityIPGroupRelationResponse
       */
      Models::ModifyGlobalSecurityIPGroupRelationResponse modifyGlobalSecurityIPGroupRelation(const Models::ModifyGlobalSecurityIPGroupRelationRequest &request);

      /**
       * @summary Modifies the log backup retention policy for a PolarDB cluster.
       *
       * @param tmpReq ModifyLogBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLogBackupPolicyResponse
       */
      Models::ModifyLogBackupPolicyResponse modifyLogBackupPolicyWithOptions(const Models::ModifyLogBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log backup retention policy for a PolarDB cluster.
       *
       * @param request ModifyLogBackupPolicyRequest
       * @return ModifyLogBackupPolicyResponse
       */
      Models::ModifyLogBackupPolicyResponse modifyLogBackupPolicy(const Models::ModifyLogBackupPolicyRequest &request);

      /**
       * @summary Modifies or creates data masking rules.
       *
       * @param request ModifyMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRulesWithOptions(const Models::ModifyMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies or creates data masking rules.
       *
       * @param request ModifyMaskingRulesRequest
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRules(const Models::ModifyMaskingRulesRequest &request);

      /**
       * @summary Modifies a model API.
       *
       * @param request ModifyModelApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyModelApiResponse
       */
      Models::ModifyModelApiResponse modifyModelApiWithOptions(const Models::ModifyModelApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a model API.
       *
       * @param request ModifyModelApiRequest
       * @return ModifyModelApiResponse
       */
      Models::ModifyModelApiResponse modifyModelApi(const Models::ModifyModelApiRequest &request);

      /**
       * @summary Modifies a model service.
       *
       * @param request ModifyModelServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyModelServiceResponse
       */
      Models::ModifyModelServiceResponse modifyModelServiceWithOptions(const Models::ModifyModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a model service.
       *
       * @param request ModifyModelServiceRequest
       * @return ModifyModelServiceResponse
       */
      Models::ModifyModelServiceResponse modifyModelService(const Models::ModifyModelServiceRequest &request);

      /**
       * @summary Modifies the switching time of a pending event.
       *
       * @param request ModifyPendingMaintenanceActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPendingMaintenanceActionResponse
       */
      Models::ModifyPendingMaintenanceActionResponse modifyPendingMaintenanceActionWithOptions(const Models::ModifyPendingMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switching time of a pending event.
       *
       * @param request ModifyPendingMaintenanceActionRequest
       * @return ModifyPendingMaintenanceActionResponse
       */
      Models::ModifyPendingMaintenanceActionResponse modifyPendingMaintenanceAction(const Models::ModifyPendingMaintenanceActionRequest &request);

      /**
       * @summary Modifies a rate limit policy.
       *
       * @param request ModifyRateLimitPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRateLimitPolicyResponse
       */
      Models::ModifyRateLimitPolicyResponse modifyRateLimitPolicyWithOptions(const Models::ModifyRateLimitPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a rate limit policy.
       *
       * @param request ModifyRateLimitPolicyRequest
       * @return ModifyRateLimitPolicyResponse
       */
      Models::ModifyRateLimitPolicyResponse modifyRateLimitPolicy(const Models::ModifyRateLimitPolicyRequest &request);

      /**
       * @summary Modifies a cross-cloud resource plan.
       *
       * @param request ModifyResourcePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourcePackageResponse
       */
      Models::ModifyResourcePackageResponse modifyResourcePackageWithOptions(const Models::ModifyResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a cross-cloud resource plan.
       *
       * @param request ModifyResourcePackageRequest
       * @return ModifyResourcePackageResponse
       */
      Models::ModifyResourcePackageResponse modifyResourcePackage(const Models::ModifyResourcePackageRequest &request);

      /**
       * @summary Modifies SQL throttling rules.
       *
       * @param request ModifySQLRateLimitingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySQLRateLimitingRulesResponse
       */
      Models::ModifySQLRateLimitingRulesResponse modifySQLRateLimitingRulesWithOptions(const Models::ModifySQLRateLimitingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies SQL throttling rules.
       *
       * @param request ModifySQLRateLimitingRulesRequest
       * @return ModifySQLRateLimitingRulesResponse
       */
      Models::ModifySQLRateLimitingRulesResponse modifySQLRateLimitingRules(const Models::ModifySQLRateLimitingRulesRequest &request);

      /**
       * @summary Modifies the specified scheduled task.
       *
       * @param request ModifyScheduleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduleTaskResponse
       */
      Models::ModifyScheduleTaskResponse modifyScheduleTaskWithOptions(const Models::ModifyScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specified scheduled task.
       *
       * @param request ModifyScheduleTaskRequest
       * @return ModifyScheduleTaskResponse
       */
      Models::ModifyScheduleTaskResponse modifyScheduleTask(const Models::ModifyScheduleTaskRequest &request);

      /**
       * @summary Renames or moves files in a PolarFs instance.
       *
       * @param request MovePolarFsObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MovePolarFsObjectsResponse
       */
      Models::MovePolarFsObjectsResponse movePolarFsObjectsWithOptions(const Models::MovePolarFsObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames or moves files in a PolarFs instance.
       *
       * @param request MovePolarFsObjectsRequest
       * @return MovePolarFsObjectsResponse
       */
      Models::MovePolarFsObjectsResponse movePolarFsObjects(const Models::MovePolarFsObjectsRequest &request);

      /**
       * @summary Enables the PolarDB for AI feature.
       *
       * @param request OpenAITaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenAITaskResponse
       */
      Models::OpenAITaskResponse openAITaskWithOptions(const Models::OpenAITaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the PolarDB for AI feature.
       *
       * @param request OpenAITaskRequest
       * @return OpenAITaskResponse
       */
      Models::OpenAITaskResponse openAITask(const Models::OpenAITaskRequest &request);

      /**
       * @summary Restarts, pauses, or starts an application on a PolarDB instance without deleting the instance.
       *
       * @param request OperateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateApplicationResponse
       */
      Models::OperateApplicationResponse operateApplicationWithOptions(const Models::OperateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts, pauses, or starts an application on a PolarDB instance without deleting the instance.
       *
       * @param request OperateApplicationRequest
       * @return OperateApplicationResponse
       */
      Models::OperateApplicationResponse operateApplication(const Models::OperateApplicationRequest &request);

      /**
       * @summary Updates a PolarClaw configuration.
       *
       * @param tmpReq PatchPolarClawConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PatchPolarClawConfigResponse
       */
      Models::PatchPolarClawConfigResponse patchPolarClawConfigWithOptions(const Models::PatchPolarClawConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a PolarClaw configuration.
       *
       * @param request PatchPolarClawConfigRequest
       * @return PatchPolarClawConfigResponse
       */
      Models::PatchPolarClawConfigResponse patchPolarClawConfig(const Models::PatchPolarClawConfigRequest &request);

      /**
       * @summary Reactivates the backup feature.
       *
       * @param request ReactivateDBClusterBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReactivateDBClusterBackupResponse
       */
      Models::ReactivateDBClusterBackupResponse reactivateDBClusterBackupWithOptions(const Models::ReactivateDBClusterBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reactivates the backup feature.
       *
       * @param request ReactivateDBClusterBackupRequest
       * @return ReactivateDBClusterBackupResponse
       */
      Models::ReactivateDBClusterBackupResponse reactivateDBClusterBackup(const Models::ReactivateDBClusterBackupRequest &request);

      /**
       * @summary Refreshes the storage usage for a cluster instance.
       *
       * @param request RefreshDBClusterStorageUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshDBClusterStorageUsageResponse
       */
      Models::RefreshDBClusterStorageUsageResponse refreshDBClusterStorageUsageWithOptions(const Models::RefreshDBClusterStorageUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the storage usage for a cluster instance.
       *
       * @param request RefreshDBClusterStorageUsageRequest
       * @return RefreshDBClusterStorageUsageResponse
       */
      Models::RefreshDBClusterStorageUsageResponse refreshDBClusterStorageUsage(const Models::RefreshDBClusterStorageUsageRequest &request);

      /**
       * @summary Rejects a PolarClaw device pairing request.
       *
       * @param request RejectPolarClawDevicePairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectPolarClawDevicePairResponse
       */
      Models::RejectPolarClawDevicePairResponse rejectPolarClawDevicePairWithOptions(const Models::RejectPolarClawDevicePairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rejects a PolarClaw device pairing request.
       *
       * @param request RejectPolarClawDevicePairRequest
       * @return RejectPolarClawDevicePairResponse
       */
      Models::RejectPolarClawDevicePairResponse rejectPolarClawDevicePair(const Models::RejectPolarClawDevicePairRequest &request);

      /**
       * @summary Removes application environment variables. This operation supports only PolarClaw.
       *
       * @param tmpReq RemoveApplicationEnvironmentVariablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveApplicationEnvironmentVariablesResponse
       */
      Models::RemoveApplicationEnvironmentVariablesResponse removeApplicationEnvironmentVariablesWithOptions(const Models::RemoveApplicationEnvironmentVariablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes application environment variables. This operation supports only PolarClaw.
       *
       * @param request RemoveApplicationEnvironmentVariablesRequest
       * @return RemoveApplicationEnvironmentVariablesResponse
       */
      Models::RemoveApplicationEnvironmentVariablesResponse removeApplicationEnvironmentVariables(const Models::RemoveApplicationEnvironmentVariablesRequest &request);

      /**
       * @summary Removes a secondary cluster from a Global Database Network (GDN).
       *
       * @description > The primary cluster in a GDN cannot be removed.
       *
       * @param request RemoveDBClusterFromGDNRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDBClusterFromGDNResponse
       */
      Models::RemoveDBClusterFromGDNResponse removeDBClusterFromGDNWithOptions(const Models::RemoveDBClusterFromGDNRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a secondary cluster from a Global Database Network (GDN).
       *
       * @description > The primary cluster in a GDN cannot be removed.
       *
       * @param request RemoveDBClusterFromGDNRequest
       * @return RemoveDBClusterFromGDNResponse
       */
      Models::RemoveDBClusterFromGDNResponse removeDBClusterFromGDN(const Models::RemoveDBClusterFromGDNRequest &request);

      /**
       * @summary Unpairs a PolarClaw device.
       *
       * @param request RemovePolarClawDevicePairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePolarClawDevicePairResponse
       */
      Models::RemovePolarClawDevicePairResponse removePolarClawDevicePairWithOptions(const Models::RemovePolarClawDevicePairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpairs a PolarClaw device.
       *
       * @param request RemovePolarClawDevicePairRequest
       * @return RemovePolarClawDevicePairResponse
       */
      Models::RemovePolarClawDevicePairResponse removePolarClawDevicePair(const Models::RemovePolarClawDevicePairRequest &request);

      /**
       * @summary Deletes a PolarClaw MCP server.
       *
       * @param request RemovePolarClawMCPServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePolarClawMCPServerResponse
       */
      Models::RemovePolarClawMCPServerResponse removePolarClawMCPServerWithOptions(const Models::RemovePolarClawMCPServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a PolarClaw MCP server.
       *
       * @param request RemovePolarClawMCPServerRequest
       * @return RemovePolarClawMCPServerResponse
       */
      Models::RemovePolarClawMCPServerResponse removePolarClawMCPServer(const Models::RemovePolarClawMCPServerRequest &request);

      /**
       * @summary Resets the permissions of a privileged account for a PolarDB cluster.
       *
       * @description > - Only PolarDB for MySQL clusters support this operation.
       * >
       * > - If the privileged account of your cluster encounters exceptions, you can reset the permissions by using this operation. For example, the permissions are accidentally revoked.
       *
       * @param request ResetAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccountWithOptions(const Models::ResetAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the permissions of a privileged account for a PolarDB cluster.
       *
       * @description > - Only PolarDB for MySQL clusters support this operation.
       * >
       * > - If the privileged account of your cluster encounters exceptions, you can reset the permissions by using this operation. For example, the permissions are accidentally revoked.
       *
       * @param request ResetAccountRequest
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccount(const Models::ResetAccountRequest &request);

      /**
       * @summary Resets the password for a PolarDB database account.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password for a PolarDB database account.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Resets an account in a PolarDB for Xscale cluster.
       *
       * @param request ResetAccountZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountZonalResponse
       */
      Models::ResetAccountZonalResponse resetAccountZonalWithOptions(const Models::ResetAccountZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets an account in a PolarDB for Xscale cluster.
       *
       * @param request ResetAccountZonalRequest
       * @return ResetAccountZonalResponse
       */
      Models::ResetAccountZonalResponse resetAccountZonal(const Models::ResetAccountZonalRequest &request);

      /**
       * @summary Resets an api key.
       *
       * @param request ResetConsumerApiKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetConsumerApiKeyResponse
       */
      Models::ResetConsumerApiKeyResponse resetConsumerApiKeyWithOptions(const Models::ResetConsumerApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets an api key.
       *
       * @param request ResetConsumerApiKeyRequest
       * @return ResetConsumerApiKeyResponse
       */
      Models::ResetConsumerApiKeyResponse resetConsumerApiKey(const Models::ResetConsumerApiKeyRequest &request);

      /**
       * @summary Resets the network of a secondary cluster in a Global Database Network (GDN).
       *
       * @param request ResetGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetGlobalDatabaseNetworkResponse
       */
      Models::ResetGlobalDatabaseNetworkResponse resetGlobalDatabaseNetworkWithOptions(const Models::ResetGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the network of a secondary cluster in a Global Database Network (GDN).
       *
       * @param request ResetGlobalDatabaseNetworkRequest
       * @return ResetGlobalDatabaseNetworkResponse
       */
      Models::ResetGlobalDatabaseNetworkResponse resetGlobalDatabaseNetwork(const Models::ResetGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Restarts database links.
       *
       * @param request RestartDBLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBLinkResponse
       */
      Models::RestartDBLinkResponse restartDBLinkWithOptions(const Models::RestartDBLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts database links.
       *
       * @param request RestartDBLinkRequest
       * @return RestartDBLinkResponse
       */
      Models::RestartDBLinkResponse restartDBLink(const Models::RestartDBLinkRequest &request);

      /**
       * @summary Restarts a node of a PolarDB cluster.
       *
       * @param request RestartDBNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBNodeResponse
       */
      Models::RestartDBNodeResponse restartDBNodeWithOptions(const Models::RestartDBNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a node of a PolarDB cluster.
       *
       * @param request RestartDBNodeRequest
       * @return RestartDBNodeResponse
       */
      Models::RestartDBNodeResponse restartDBNode(const Models::RestartDBNodeRequest &request);

      /**
       * @summary Restarts a node of an edge cluster for PolarDB on ENS.
       *
       * @param request RestartDBNodeZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBNodeZonalResponse
       */
      Models::RestartDBNodeZonalResponse restartDBNodeZonalWithOptions(const Models::RestartDBNodeZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a node of an edge cluster for PolarDB on ENS.
       *
       * @param request RestartDBNodeZonalRequest
       * @return RestartDBNodeZonalResponse
       */
      Models::RestartDBNodeZonalResponse restartDBNodeZonal(const Models::RestartDBNodeZonalRequest &request);

      /**
       * @summary Restores databases or tables to a PolarDB cluster.
       *
       * @param request RestoreTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTableWithOptions(const Models::RestoreTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores databases or tables to a PolarDB cluster.
       *
       * @param request RestoreTableRequest
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTable(const Models::RestoreTableRequest &request);

      /**
       * @summary Revokes access permissions on a database from a PolarDB standard account.
       *
       * @param request RevokeAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilegeWithOptions(const Models::RevokeAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes access permissions on a database from a PolarDB standard account.
       *
       * @param request RevokeAccountPrivilegeRequest
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilege(const Models::RevokeAccountPrivilegeRequest &request);

      /**
       * @summary Revokes permissions from an account.
       *
       * @param request RevokeAccountPrivilegeZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAccountPrivilegeZonalResponse
       */
      Models::RevokeAccountPrivilegeZonalResponse revokeAccountPrivilegeZonalWithOptions(const Models::RevokeAccountPrivilegeZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions from an account.
       *
       * @param request RevokeAccountPrivilegeZonalRequest
       * @return RevokeAccountPrivilegeZonalResponse
       */
      Models::RevokeAccountPrivilegeZonalResponse revokeAccountPrivilegeZonal(const Models::RevokeAccountPrivilegeZonalRequest &request);

      /**
       * @summary Runs a PolarClaw cron job.
       *
       * @param request RunPolarClawCronJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunPolarClawCronJobResponse
       */
      Models::RunPolarClawCronJobResponse runPolarClawCronJobWithOptions(const Models::RunPolarClawCronJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a PolarClaw cron job.
       *
       * @param request RunPolarClawCronJobRequest
       * @return RunPolarClawCronJobResponse
       */
      Models::RunPolarClawCronJobResponse runPolarClawCronJob(const Models::RunPolarClawCronJobRequest &request);

      /**
       * @summary Retrieves memories based on a search query.
       *
       * @param request SearchMemoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMemoriesResponse
       */
      Models::SearchMemoriesResponse searchMemoriesWithOptions(const Models::SearchMemoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves memories based on a search query.
       *
       * @param request SearchMemoriesRequest
       * @return SearchMemoriesResponse
       */
      Models::SearchMemoriesResponse searchMemories(const Models::SearchMemoriesRequest &request);

      /**
       * @summary Sets file quota rules for specific directories in a PolarFS instance.
       *
       * @description ## Request
       * This operation sets file quota rules for specific directories in a PolarFS instance. Use the `FilePathQuotas` parameter to define the target directories and their properties. The path for `FilePathId` must be an absolute path from the root directory, not from a mount target. The `Strategy` parameter controls how the rule applies to existing files. By default, the operation applies a rule only if one does not already exist.
       * ### Notes
       * - The `FilePathQuotas` list can contain up to 21 items.
       * - To apply the rule to subdirectories at multiple levels under `FilePathId`, set the `MaxDepth` parameter. To traverse to the deepest level, set this value to 0.
       *
       * @param request SetPolarFsFileQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPolarFsFileQuotaResponse
       */
      Models::SetPolarFsFileQuotaResponse setPolarFsFileQuotaWithOptions(const Models::SetPolarFsFileQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets file quota rules for specific directories in a PolarFS instance.
       *
       * @description ## Request
       * This operation sets file quota rules for specific directories in a PolarFS instance. Use the `FilePathQuotas` parameter to define the target directories and their properties. The path for `FilePathId` must be an absolute path from the root directory, not from a mount target. The `Strategy` parameter controls how the rule applies to existing files. By default, the operation applies a rule only if one does not already exist.
       * ### Notes
       * - The `FilePathQuotas` list can contain up to 21 items.
       * - To apply the rule to subdirectories at multiple levels under `FilePathId`, set the `MaxDepth` parameter. To traverse to the deepest level, set this value to 0.
       *
       * @param request SetPolarFsFileQuotaRequest
       * @return SetPolarFsFileQuotaResponse
       */
      Models::SetPolarFsFileQuotaResponse setPolarFsFileQuota(const Models::SetPolarFsFileQuotaRequest &request);

      /**
       * @summary Switches over the primary and secondary clusters in a global database network (GDN).
       *
       * @param request SwitchOverGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchOverGlobalDatabaseNetworkResponse
       */
      Models::SwitchOverGlobalDatabaseNetworkResponse switchOverGlobalDatabaseNetworkWithOptions(const Models::SwitchOverGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches over the primary and secondary clusters in a global database network (GDN).
       *
       * @param request SwitchOverGlobalDatabaseNetworkRequest
       * @return SwitchOverGlobalDatabaseNetworkResponse
       */
      Models::SwitchOverGlobalDatabaseNetworkResponse switchOverGlobalDatabaseNetwork(const Models::SwitchOverGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Adds tags to PolarDB clusters.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to PolarDB clusters.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Temporarily Modifies the configuration of a node.
       *
       * @param request TempModifyDBNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempModifyDBNodeResponse
       */
      Models::TempModifyDBNodeResponse tempModifyDBNodeWithOptions(const Models::TempModifyDBNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Temporarily Modifies the configuration of a node.
       *
       * @param request TempModifyDBNodeRequest
       * @return TempModifyDBNodeResponse
       */
      Models::TempModifyDBNodeResponse tempModifyDBNode(const Models::TempModifyDBNodeRequest &request);

      /**
       * @summary Changes the billing method of a PolarDB cluster.
       *
       * @description > - PolarDB clusters support two billing methods: subscription and pay-as-you-go. You can change the billing method of a cluster from subscription to pay-as-you-go, or from pay-as-you-go to subscription. For more information, see [Change the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/172886.html) and [Change the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/84076.html).
       * >
       * > - You cannot change the billing method from pay-as-you-go to subscription if your Alibaba Cloud account has an insufficient balance.
       * >
       * > - When you change the billing method from subscription to pay-as-you-go, the system automatically refunds your remaining prepaid fees.
       *
       * @param request TransformDBClusterPayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformDBClusterPayTypeResponse
       */
      Models::TransformDBClusterPayTypeResponse transformDBClusterPayTypeWithOptions(const Models::TransformDBClusterPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a PolarDB cluster.
       *
       * @description > - PolarDB clusters support two billing methods: subscription and pay-as-you-go. You can change the billing method of a cluster from subscription to pay-as-you-go, or from pay-as-you-go to subscription. For more information, see [Change the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/172886.html) and [Change the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/84076.html).
       * >
       * > - You cannot change the billing method from pay-as-you-go to subscription if your Alibaba Cloud account has an insufficient balance.
       * >
       * > - When you change the billing method from subscription to pay-as-you-go, the system automatically refunds your remaining prepaid fees.
       *
       * @param request TransformDBClusterPayTypeRequest
       * @return TransformDBClusterPayTypeResponse
       */
      Models::TransformDBClusterPayTypeResponse transformDBClusterPayType(const Models::TransformDBClusterPayTypeRequest &request);

      /**
       * @summary Unbinds a PolarClaw Agent.
       *
       * @param request UnbindPolarClawAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindPolarClawAgentResponse
       */
      Models::UnbindPolarClawAgentResponse unbindPolarClawAgentWithOptions(const Models::UnbindPolarClawAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a PolarClaw Agent.
       *
       * @param request UnbindPolarClawAgentRequest
       * @return UnbindPolarClawAgentResponse
       */
      Models::UnbindPolarClawAgentResponse unbindPolarClawAgent(const Models::UnbindPolarClawAgentRequest &request);

      /**
       * @summary Uninstalls a PolarClaw plugin.
       *
       * @param request UninstallPolarClawPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallPolarClawPluginResponse
       */
      Models::UninstallPolarClawPluginResponse uninstallPolarClawPluginWithOptions(const Models::UninstallPolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls a PolarClaw plugin.
       *
       * @param request UninstallPolarClawPluginRequest
       * @return UninstallPolarClawPluginResponse
       */
      Models::UninstallPolarClawPluginResponse uninstallPolarClawPlugin(const Models::UninstallPolarClawPluginRequest &request);

      /**
       * @summary Detaches tags from a PolarDB cluster.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches tags from a PolarDB cluster.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the environment variables of an application. This operation is only supported for PolarClaw.
       *
       * @param tmpReq UpdateApplicationEnvironmentVariablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationEnvironmentVariablesResponse
       */
      Models::UpdateApplicationEnvironmentVariablesResponse updateApplicationEnvironmentVariablesWithOptions(const Models::UpdateApplicationEnvironmentVariablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the environment variables of an application. This operation is only supported for PolarClaw.
       *
       * @param request UpdateApplicationEnvironmentVariablesRequest
       * @return UpdateApplicationEnvironmentVariablesResponse
       */
      Models::UpdateApplicationEnvironmentVariablesResponse updateApplicationEnvironmentVariables(const Models::UpdateApplicationEnvironmentVariablesRequest &request);

      /**
       * @summary Updates one or more extensions.
       *
       * @param request UpdateExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExtensionsResponse
       */
      Models::UpdateExtensionsResponse updateExtensionsWithOptions(const Models::UpdateExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates one or more extensions.
       *
       * @param request UpdateExtensionsRequest
       * @return UpdateExtensionsResponse
       */
      Models::UpdateExtensionsResponse updateExtensions(const Models::UpdateExtensionsRequest &request);

      /**
       * @summary Update PolarClaw Agent
       *
       * @param tmpReq UpdatePolarClawAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolarClawAgentResponse
       */
      Models::UpdatePolarClawAgentResponse updatePolarClawAgentWithOptions(const Models::UpdatePolarClawAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update PolarClaw Agent
       *
       * @param request UpdatePolarClawAgentRequest
       * @return UpdatePolarClawAgentResponse
       */
      Models::UpdatePolarClawAgentResponse updatePolarClawAgent(const Models::UpdatePolarClawAgentRequest &request);

      /**
       * @summary Updates the configuration of a PolarClaw scheduled task, allowing for partial field updates.
       *
       * @param tmpReq UpdatePolarClawCronJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolarClawCronJobResponse
       */
      Models::UpdatePolarClawCronJobResponse updatePolarClawCronJobWithOptions(const Models::UpdatePolarClawCronJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a PolarClaw scheduled task, allowing for partial field updates.
       *
       * @param request UpdatePolarClawCronJobRequest
       * @return UpdatePolarClawCronJobResponse
       */
      Models::UpdatePolarClawCronJobResponse updatePolarClawCronJob(const Models::UpdatePolarClawCronJobRequest &request);

      /**
       * @summary Upgrades the kernel version of a PolarDB for MySQL cluster.
       *
       * @description > *  You can update only the revision version of a PolarDB for MySQL cluster, for example, from 8.0.1.1.3 to 8.0.1.1.4.
       * >*   You can use only your Alibaba Cloud account to create scheduled tasks that update the kernel version of a PolarDB for MySQL cluster. RAM users are not authorized to update the kernel version of a PolarDB for MySQL cluster.
       *
       * @param request UpgradeDBClusterVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBClusterVersionResponse
       */
      Models::UpgradeDBClusterVersionResponse upgradeDBClusterVersionWithOptions(const Models::UpgradeDBClusterVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the kernel version of a PolarDB for MySQL cluster.
       *
       * @description > *  You can update only the revision version of a PolarDB for MySQL cluster, for example, from 8.0.1.1.3 to 8.0.1.1.4.
       * >*   You can use only your Alibaba Cloud account to create scheduled tasks that update the kernel version of a PolarDB for MySQL cluster. RAM users are not authorized to update the kernel version of a PolarDB for MySQL cluster.
       *
       * @param request UpgradeDBClusterVersionRequest
       * @return UpgradeDBClusterVersionResponse
       */
      Models::UpgradeDBClusterVersionResponse upgradeDBClusterVersion(const Models::UpgradeDBClusterVersionRequest &request);

      /**
       * @summary Upgrades the minor version of a PolarDB cluster.
       *
       * @param request UpgradeDBClusterVersionZonalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBClusterVersionZonalResponse
       */
      Models::UpgradeDBClusterVersionZonalResponse upgradeDBClusterVersionZonalWithOptions(const Models::UpgradeDBClusterVersionZonalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the minor version of a PolarDB cluster.
       *
       * @param request UpgradeDBClusterVersionZonalRequest
       * @return UpgradeDBClusterVersionZonalResponse
       */
      Models::UpgradeDBClusterVersionZonalResponse upgradeDBClusterVersionZonal(const Models::UpgradeDBClusterVersionZonalRequest &request);

      /**
       * @summary Upgrades a PolarClaw channel.
       *
       * @param tmpReq UpgradePolarClawChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradePolarClawChannelResponse
       */
      Models::UpgradePolarClawChannelResponse upgradePolarClawChannelWithOptions(const Models::UpgradePolarClawChannelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a PolarClaw channel.
       *
       * @param request UpgradePolarClawChannelRequest
       * @return UpgradePolarClawChannelResponse
       */
      Models::UpgradePolarClawChannelResponse upgradePolarClawChannel(const Models::UpgradePolarClawChannelRequest &request);

      /**
       * @summary Upgrades a PolarClaw plugin.
       *
       * @param request UpgradePolarClawPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradePolarClawPluginResponse
       */
      Models::UpgradePolarClawPluginResponse upgradePolarClawPluginWithOptions(const Models::UpgradePolarClawPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a PolarClaw plugin.
       *
       * @param request UpgradePolarClawPluginRequest
       * @return UpgradePolarClawPluginResponse
       */
      Models::UpgradePolarClawPluginResponse upgradePolarClawPlugin(const Models::UpgradePolarClawPluginRequest &request);

      /**
       * @summary Upgrades the PolarClaw feature.
       *
       * @param request UpgradePolarClawSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradePolarClawSkillsResponse
       */
      Models::UpgradePolarClawSkillsResponse upgradePolarClawSkillsWithOptions(const Models::UpgradePolarClawSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the PolarClaw feature.
       *
       * @param request UpgradePolarClawSkillsRequest
       * @return UpgradePolarClawSkillsResponse
       */
      Models::UpgradePolarClawSkillsResponse upgradePolarClawSkills(const Models::UpgradePolarClawSkillsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
