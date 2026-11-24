// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIKAFKASTREAMING20260202_HPP_
#define ALIBABACLOUD_ALIKAFKASTREAMING20260202_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AlikafkaStreaming20260202Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AlikafkaStreaming20260202.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Validates whether a specified Flink SQL statement complies with the specifications.
       *
       * @description ## Operation description
       * - You can invoke this operation by using the GET or POST method.
       * - You must specify the `InstanceId`, `JobName`, and `SqlContent` parameters. The `SqlContent` parameter specifies the Flink SQL statement to be validated.
       * - In the response, the `Data.Valid` field indicates whether the SQL statement passed the validation. If the validation fails, the fault details are returned in the `Data.ErrorList` field.
       * - The current version requires both the instance ID (`InstanceId`) and the job name (`JobName`) to build the job context.
       * - A successful response only indicates that the system starts to execute the validation flow. It does not directly indicate whether the SQL statement is valid. Check the `Data.Valid` field to determine whether the SQL statement is valid.
       * - For error codes and exception handling, refer to the Error codes section in the References.
       *
       * @param request CheckSqlContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSqlContentResponse
       */
      Models::CheckSqlContentResponse checkSqlContentWithOptions(const Models::CheckSqlContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates whether a specified Flink SQL statement complies with the specifications.
       *
       * @description ## Operation description
       * - You can invoke this operation by using the GET or POST method.
       * - You must specify the `InstanceId`, `JobName`, and `SqlContent` parameters. The `SqlContent` parameter specifies the Flink SQL statement to be validated.
       * - In the response, the `Data.Valid` field indicates whether the SQL statement passed the validation. If the validation fails, the fault details are returned in the `Data.ErrorList` field.
       * - The current version requires both the instance ID (`InstanceId`) and the job name (`JobName`) to build the job context.
       * - A successful response only indicates that the system starts to execute the validation flow. It does not directly indicate whether the SQL statement is valid. Check the `Data.Valid` field to determine whether the SQL statement is valid.
       * - For error codes and exception handling, refer to the Error codes section in the References.
       *
       * @param request CheckSqlContentRequest
       * @return CheckSqlContentResponse
       */
      Models::CheckSqlContentResponse checkSqlContent(const Models::CheckSqlContentRequest &request);

      /**
       * @summary Creates a compute instance. This operation only completes the purchase phase. After the instance is created, call StartComputeInstance to complete network configuration and deployment.
       *
       * @description Creates a compute instance. This operation only completes the purchase phase. After the instance is created, call StartComputeInstance to complete network configuration and deployment.
       * - API version: 2026-02-02
       * - Action: CreateComputeInstance
       *
       * @param request CreateComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeInstanceResponse
       */
      Models::CreateComputeInstanceResponse createComputeInstanceWithOptions(const Models::CreateComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a compute instance. This operation only completes the purchase phase. After the instance is created, call StartComputeInstance to complete network configuration and deployment.
       *
       * @description Creates a compute instance. This operation only completes the purchase phase. After the instance is created, call StartComputeInstance to complete network configuration and deployment.
       * - API version: 2026-02-02
       * - Action: CreateComputeInstance
       *
       * @param request CreateComputeInstanceRequest
       * @return CreateComputeInstanceResponse
       */
      Models::CreateComputeInstanceResponse createComputeInstance(const Models::CreateComputeInstanceRequest &request);

      /**
       * @summary Creates a Flink SQL job on a running compute instance.
       *
       * @description ## Request description
       * - This API creates a new Flink SQL job on a specified running compute instance.
       * - The created job is in the `INIT` state.
       * - You can control the resource usage of the job by setting `CuLimit` and `CuReserved`.
       * - The `Remark` field allows you to add remarks to the job for easier management and identification.
       * - Make sure that the `RegionId`, `InstanceId`, and `JobName` parameters are accurate. Otherwise, the request may fail.
       * - If you attempt to create a job with a duplicate name, an error is returned.
       * - The compute instance must be in the running state to successfully create a job.
       *
       * @param request CreateComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeJobResponse
       */
      Models::CreateComputeJobResponse createComputeJobWithOptions(const Models::CreateComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Flink SQL job on a running compute instance.
       *
       * @description ## Request description
       * - This API creates a new Flink SQL job on a specified running compute instance.
       * - The created job is in the `INIT` state.
       * - You can control the resource usage of the job by setting `CuLimit` and `CuReserved`.
       * - The `Remark` field allows you to add remarks to the job for easier management and identification.
       * - Make sure that the `RegionId`, `InstanceId`, and `JobName` parameters are accurate. Otherwise, the request may fail.
       * - If you attempt to create a job with a duplicate name, an error is returned.
       * - The compute instance must be in the running state to successfully create a job.
       *
       * @param request CreateComputeJobRequest
       * @return CreateComputeJobResponse
       */
      Models::CreateComputeJobResponse createComputeJob(const Models::CreateComputeJobRequest &request);

      /**
       * @summary Deletes a compute instance that is in the pending deployment, stopped, or released state.
       *
       * @description Deletes a compute instance that is in the pending deployment, stopped, or released state.
       * - API version: 2026-02-02
       * - Action: DeleteComputeInstance
       *
       * @param request DeleteComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeInstanceResponse
       */
      Models::DeleteComputeInstanceResponse deleteComputeInstanceWithOptions(const Models::DeleteComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a compute instance that is in the pending deployment, stopped, or released state.
       *
       * @description Deletes a compute instance that is in the pending deployment, stopped, or released state.
       * - API version: 2026-02-02
       * - Action: DeleteComputeInstance
       *
       * @param request DeleteComputeInstanceRequest
       * @return DeleteComputeInstanceResponse
       */
      Models::DeleteComputeInstanceResponse deleteComputeInstance(const Models::DeleteComputeInstanceRequest &request);

      /**
       * @summary Deletes a specified compute job. A successful request indicates that the deletion request has been accepted.
       *
       * @description ## Request description
       * - This operation deletes a specific compute job.
       * - A successful call to this operation only indicates that the deletion request has been accepted by the system. The deletion is not completed immediately.
       * - Make sure that the `RegionId`, `InstanceId`, and `JobName` parameters are accurate. Otherwise, the request may fail.
       * - If the compute instance or job is in a state that does not allow deletion, such as a non-running state, an error message is returned.
       * - The deletion operation is irreversible. Proceed with caution.
       *
       * @param request DeleteComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeJobResponse
       */
      Models::DeleteComputeJobResponse deleteComputeJobWithOptions(const Models::DeleteComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified compute job. A successful request indicates that the deletion request has been accepted.
       *
       * @description ## Request description
       * - This operation deletes a specific compute job.
       * - A successful call to this operation only indicates that the deletion request has been accepted by the system. The deletion is not completed immediately.
       * - Make sure that the `RegionId`, `InstanceId`, and `JobName` parameters are accurate. Otherwise, the request may fail.
       * - If the compute instance or job is in a state that does not allow deletion, such as a non-running state, an error message is returned.
       * - The deletion operation is irreversible. Proceed with caution.
       *
       * @param request DeleteComputeJobRequest
       * @return DeleteComputeJobResponse
       */
      Models::DeleteComputeJobResponse deleteComputeJob(const Models::DeleteComputeJobRequest &request);

      /**
       * @summary Queries the details of a specified compute instance.
       *
       * @param request GetComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeInstanceResponse
       */
      Models::GetComputeInstanceResponse getComputeInstanceWithOptions(const Models::GetComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified compute instance.
       *
       * @param request GetComputeInstanceRequest
       * @return GetComputeInstanceResponse
       */
      Models::GetComputeInstanceResponse getComputeInstance(const Models::GetComputeInstanceRequest &request);

      /**
       * @summary Queries the details of a compute job in Alikafka Streaming by using a parameter query.
       *
       * @description ## Request description
       * - This operation queries the details of a specified compute job.
       * - You can use the GET or POST method to send requests.
       * - The `RegionId`, `InstanceId`, and `JobName` parameters are required.
       * - The authorization action is `alikafkastreaming:GetComputeJob`, and the access level is Read.
       *
       * @param request GetComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeJobResponse
       */
      Models::GetComputeJobResponse getComputeJobWithOptions(const Models::GetComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a compute job in Alikafka Streaming by using a parameter query.
       *
       * @description ## Request description
       * - This operation queries the details of a specified compute job.
       * - You can use the GET or POST method to send requests.
       * - The `RegionId`, `InstanceId`, and `JobName` parameters are required.
       * - The authorization action is `alikafkastreaming:GetComputeJob`, and the access level is Read.
       *
       * @param request GetComputeJobRequest
       * @return GetComputeJobResponse
       */
      Models::GetComputeJobResponse getComputeJob(const Models::GetComputeJobRequest &request);

      /**
       * @summary 获取debug信息
       *
       * @param request GetJobDebugDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobDebugDataResponse
       */
      Models::GetJobDebugDataResponse getJobDebugDataWithOptions(const Models::GetJobDebugDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取debug信息
       *
       * @param request GetJobDebugDataRequest
       * @return GetJobDebugDataResponse
       */
      Models::GetJobDebugDataResponse getJobDebugData(const Models::GetJobDebugDataRequest &request);

      /**
       * @summary 查询实例列表（分页）
       *
       * @param tmpReq ListComputeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeInstancesResponse
       */
      Models::ListComputeInstancesResponse listComputeInstancesWithOptions(const Models::ListComputeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例列表（分页）
       *
       * @param request ListComputeInstancesRequest
       * @return ListComputeInstancesResponse
       */
      Models::ListComputeInstancesResponse listComputeInstances(const Models::ListComputeInstancesRequest &request);

      /**
       * @summary Queries compute instances under the current account by using paging.
       *
       * @param tmpReq ListComputeInstancesInPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeInstancesInPageResponse
       */
      Models::ListComputeInstancesInPageResponse listComputeInstancesInPageWithOptions(const Models::ListComputeInstancesInPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries compute instances under the current account by using paging.
       *
       * @param request ListComputeInstancesInPageRequest
       * @return ListComputeInstancesInPageResponse
       */
      Models::ListComputeInstancesInPageResponse listComputeInstancesInPage(const Models::ListComputeInstancesInPageRequest &request);

      /**
       * @summary Queries all job information under a specified compute instance by using paging.
       *
       * @description ## Request description
       * - This operation supports a cursor-based paged query by using the `MaxResults` and `NextToken` parameters.
       * - You do not need to specify `NextToken` in the first request. For subsequent requests, use the `NextToken` value returned in the previous response.
       * - You can search by job name or remark, and specify different sorting fields and directions.
       * - The authorization action is `alikafkastreaming:ListComputeJobs`. The access level is List, which applies to all resources.
       *
       * @param request ListComputeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeJobsResponse
       */
      Models::ListComputeJobsResponse listComputeJobsWithOptions(const Models::ListComputeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all job information under a specified compute instance by using paging.
       *
       * @description ## Request description
       * - This operation supports a cursor-based paged query by using the `MaxResults` and `NextToken` parameters.
       * - You do not need to specify `NextToken` in the first request. For subsequent requests, use the `NextToken` value returned in the previous response.
       * - You can search by job name or remark, and specify different sorting fields and directions.
       * - The authorization action is `alikafkastreaming:ListComputeJobs`. The access level is List, which applies to all resources.
       *
       * @param request ListComputeJobsRequest
       * @return ListComputeJobsResponse
       */
      Models::ListComputeJobsResponse listComputeJobs(const Models::ListComputeJobsRequest &request);

      /**
       * @summary 查询创建 SQL 任务时支持的连接器列表
       *
       * @param request ListSupportedConnectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupportedConnectorsResponse
       */
      Models::ListSupportedConnectorsResponse listSupportedConnectorsWithOptions(const Models::ListSupportedConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询创建 SQL 任务时支持的连接器列表
       *
       * @param request ListSupportedConnectorsRequest
       * @return ListSupportedConnectorsResponse
       */
      Models::ListSupportedConnectorsResponse listSupportedConnectors(const Models::ListSupportedConnectorsRequest &request);

      /**
       * @summary Re-enables a stopped pay-as-you-go compute instance. A successful response indicates that the re-enablement request has been accepted.
       *
       * @description Re-enables a stopped pay-as-you-go compute instance. A successful response indicates that the re-enablement request has been accepted.
       * - API version: 2026-02-02
       * - Action: ReopenComputeInstance
       *
       * @param request ReopenComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReopenComputeInstanceResponse
       */
      Models::ReopenComputeInstanceResponse reopenComputeInstanceWithOptions(const Models::ReopenComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-enables a stopped pay-as-you-go compute instance. A successful response indicates that the re-enablement request has been accepted.
       *
       * @description Re-enables a stopped pay-as-you-go compute instance. A successful response indicates that the re-enablement request has been accepted.
       * - API version: 2026-02-02
       * - Action: ReopenComputeInstance
       *
       * @param request ReopenComputeInstanceRequest
       * @return ReopenComputeInstanceResponse
       */
      Models::ReopenComputeInstanceResponse reopenComputeInstance(const Models::ReopenComputeInstanceRequest &request);

      /**
       * @summary 重启 JOB
       *
       * @param request RestartComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartComputeJobResponse
       */
      Models::RestartComputeJobResponse restartComputeJobWithOptions(const Models::RestartComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启 JOB
       *
       * @param request RestartComputeJobRequest
       * @return RestartComputeJobResponse
       */
      Models::RestartComputeJobResponse restartComputeJob(const Models::RestartComputeJobRequest &request);

      /**
       * @summary Configures the network and deploys a compute instance in the pending deployment state.
       *
       * @description Configures the network and deploys a compute instance in the pending deployment state.
       * - API version: 2026-02-02
       * - Action: StartComputeInstance
       *
       * @param tmpReq StartComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartComputeInstanceResponse
       */
      Models::StartComputeInstanceResponse startComputeInstanceWithOptions(const Models::StartComputeInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the network and deploys a compute instance in the pending deployment state.
       *
       * @description Configures the network and deploys a compute instance in the pending deployment state.
       * - API version: 2026-02-02
       * - Action: StartComputeInstance
       *
       * @param request StartComputeInstanceRequest
       * @return StartComputeInstanceResponse
       */
      Models::StartComputeInstanceResponse startComputeInstance(const Models::StartComputeInstanceRequest &request);

      /**
       * @summary Starts, resumes, or debugs a compute job.
       *
       * @description ## Request description
       * - `RecoveryMode` supports two modes: `savepoint` and `stateless`. If you select the `savepoint` mode but no savepoint is available, an error is returned.
       * - The `CuLimit` and `CuReserved` parameters are used to set the CU limit and the number of reserved CUs for the job, respectively. Integers and decimals are supported.
       * - Make sure that the values of the `RegionId`, `InstanceId`, and `JobName` parameters are correct and exist. Otherwise, the request fails.
       *
       * @param request StartComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartComputeJobResponse
       */
      Models::StartComputeJobResponse startComputeJobWithOptions(const Models::StartComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts, resumes, or debugs a compute job.
       *
       * @description ## Request description
       * - `RecoveryMode` supports two modes: `savepoint` and `stateless`. If you select the `savepoint` mode but no savepoint is available, an error is returned.
       * - The `CuLimit` and `CuReserved` parameters are used to set the CU limit and the number of reserved CUs for the job, respectively. Integers and decimals are supported.
       * - Make sure that the values of the `RegionId`, `InstanceId`, and `JobName` parameters are correct and exist. Otherwise, the request fails.
       *
       * @param request StartComputeJobRequest
       * @return StartComputeJobResponse
       */
      Models::StartComputeJobResponse startComputeJob(const Models::StartComputeJobRequest &request);

      /**
       * @summary Stops a running pay-as-you-go compute instance. A successful response indicates that the stop request has been accepted.
       *
       * @description Stops a running pay-as-you-go compute instance. A successful response indicates that the stop request has been accepted.
       * - API version: 2026-02-02
       * - Action: StopComputeInstance
       *
       * @param request StopComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopComputeInstanceResponse
       */
      Models::StopComputeInstanceResponse stopComputeInstanceWithOptions(const Models::StopComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running pay-as-you-go compute instance. A successful response indicates that the stop request has been accepted.
       *
       * @description Stops a running pay-as-you-go compute instance. A successful response indicates that the stop request has been accepted.
       * - API version: 2026-02-02
       * - Action: StopComputeInstance
       *
       * @param request StopComputeInstanceRequest
       * @return StopComputeInstanceResponse
       */
      Models::StopComputeInstanceResponse stopComputeInstance(const Models::StopComputeInstanceRequest &request);

      /**
       * @summary Stops a compute job in a specified region and instance.
       *
       * @description ## Request description
       * - This operation stops the production or debug runtime instance of a specified compute job.
       * - A successful response indicates that the stop request has been accepted, but it does not mean that the job stops immediately.
       *
       * @param request StopComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopComputeJobResponse
       */
      Models::StopComputeJobResponse stopComputeJobWithOptions(const Models::StopComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a compute job in a specified region and instance.
       *
       * @description ## Request description
       * - This operation stops the production or debug runtime instance of a specified compute job.
       * - A successful response indicates that the stop request has been accepted, but it does not mean that the job stops immediately.
       *
       * @param request StopComputeJobRequest
       * @return StopComputeJobResponse
       */
      Models::StopComputeJobResponse stopComputeJob(const Models::StopComputeJobRequest &request);

      /**
       * @summary Updates the name of a compute instance. The instance must be in the deployment preparation or running state.
       *
       * @description Updates the name of a compute instance. The instance must be in the deployment preparation or running state.
       * - API version: 2026-02-02
       * - Action: UpdateComputeInstanceName
       *
       * @param request UpdateComputeInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeInstanceNameResponse
       */
      Models::UpdateComputeInstanceNameResponse updateComputeInstanceNameWithOptions(const Models::UpdateComputeInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name of a compute instance. The instance must be in the deployment preparation or running state.
       *
       * @description Updates the name of a compute instance. The instance must be in the deployment preparation or running state.
       * - API version: 2026-02-02
       * - Action: UpdateComputeInstanceName
       *
       * @param request UpdateComputeInstanceNameRequest
       * @return UpdateComputeInstanceNameResponse
       */
      Models::UpdateComputeInstanceNameResponse updateComputeInstanceName(const Models::UpdateComputeInstanceNameRequest &request);

      /**
       * @summary Modifies the remarks of a specified compute job.
       *
       * @description ## Request description
       * - Ensure that the provided `InstanceId` and `JobName` are valid. Otherwise, an error is returned.
       * - You cannot execute this operation if the instance is not in the running state.
       * - Modifications are not supported if the current job is running as a debug node or undergoing changes.
       *
       * @param request UpdateComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeJobResponse
       */
      Models::UpdateComputeJobResponse updateComputeJobWithOptions(const Models::UpdateComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remarks of a specified compute job.
       *
       * @description ## Request description
       * - Ensure that the provided `InstanceId` and `JobName` are valid. Otherwise, an error is returned.
       * - You cannot execute this operation if the instance is not in the running state.
       * - Modifications are not supported if the current job is running as a debug node or undergoing changes.
       *
       * @param request UpdateComputeJobRequest
       * @return UpdateComputeJobResponse
       */
      Models::UpdateComputeJobResponse updateComputeJob(const Models::UpdateComputeJobRequest &request);

      /**
       * @summary Modifies the compute unit (CU) limit and the number of reserved CUs for a specified compute job.
       *
       * @description ## Request description
       * This operation allows you to modify the compute unit (CU) limit and the number of reserved CUs for a specific compute job. Before calling this operation, ensure that the specified `InstanceId` and `JobName` are correct and that the instance is in the running state. Additionally, verify the validity and reasonableness of the `CuLimit` and `CuReserved` parameters to prevent request failures caused by exceeding limits or violating business logic.
       *
       * @param request UpdateComputeJobCuRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeJobCuResponse
       */
      Models::UpdateComputeJobCuResponse updateComputeJobCuWithOptions(const Models::UpdateComputeJobCuRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the compute unit (CU) limit and the number of reserved CUs for a specified compute job.
       *
       * @description ## Request description
       * This operation allows you to modify the compute unit (CU) limit and the number of reserved CUs for a specific compute job. Before calling this operation, ensure that the specified `InstanceId` and `JobName` are correct and that the instance is in the running state. Additionally, verify the validity and reasonableness of the `CuLimit` and `CuReserved` parameters to prevent request failures caused by exceeding limits or violating business logic.
       *
       * @param request UpdateComputeJobCuRequest
       * @return UpdateComputeJobCuResponse
       */
      Models::UpdateComputeJobCuResponse updateComputeJobCu(const Models::UpdateComputeJobCuRequest &request);

      /**
       * @summary Updates the Flink SQL draft saved for a specified compute job.
       *
       * @description ## Request description
       * This operation updates the Flink SQL draft saved for a specific compute job under a given compute instance. Make sure that the provided `InstanceId` and `JobName` are accurate, and the current status of the job supports SQL modification.
       * - **Precautions**:
       *   - Make sure that the target instance is in the running state.
       *   - The current job status must allow SQL modification. The job must not be undergoing debugging or modification.
       *   - The `DraftSql` parameter must contain a complete and correctly formatted Flink SQL statement.
       *
       * @param request UpdateComputeJobDraftSqlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeJobDraftSqlResponse
       */
      Models::UpdateComputeJobDraftSqlResponse updateComputeJobDraftSqlWithOptions(const Models::UpdateComputeJobDraftSqlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Flink SQL draft saved for a specified compute job.
       *
       * @description ## Request description
       * This operation updates the Flink SQL draft saved for a specific compute job under a given compute instance. Make sure that the provided `InstanceId` and `JobName` are accurate, and the current status of the job supports SQL modification.
       * - **Precautions**:
       *   - Make sure that the target instance is in the running state.
       *   - The current job status must allow SQL modification. The job must not be undergoing debugging or modification.
       *   - The `DraftSql` parameter must contain a complete and correctly formatted Flink SQL statement.
       *
       * @param request UpdateComputeJobDraftSqlRequest
       * @return UpdateComputeJobDraftSqlResponse
       */
      Models::UpdateComputeJobDraftSqlResponse updateComputeJobDraftSql(const Models::UpdateComputeJobDraftSqlRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
