// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MAXCOMPUTE20220104_HPP_
#define ALIBABACLOUD_MAXCOMPUTE20220104_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MaxCompute20220104Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MaxCompute20220104.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyComputeQuotaPlanResponse
       */
      Models::ApplyComputeQuotaPlanResponse applyComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ApplyComputeQuotaPlanResponse
       */
      Models::ApplyComputeQuotaPlanResponse applyComputeQuotaPlan(const string &nickname, const string &planName);

      /**
       * @param request CreateComputeQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeQuotaPlanResponse
       */
      Models::CreateComputeQuotaPlanResponse createComputeQuotaPlanWithOptions(const string &nickname, const Models::CreateComputeQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateComputeQuotaPlanRequest
       * @return CreateComputeQuotaPlanResponse
       */
      Models::CreateComputeQuotaPlanResponse createComputeQuotaPlan(const string &nickname, const Models::CreateComputeQuotaPlanRequest &request);

      /**
       * @summary Creates a data source to migrate data to MaxCompute using MaxCompute Migration Assist (MMA).
       *
       * @param request CreateMmsDataSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmsDataSourceResponse
       */
      Models::CreateMmsDataSourceResponse createMmsDataSourceWithOptions(const Models::CreateMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data source to migrate data to MaxCompute using MaxCompute Migration Assist (MMA).
       *
       * @param request CreateMmsDataSourceRequest
       * @return CreateMmsDataSourceResponse
       */
      Models::CreateMmsDataSourceResponse createMmsDataSource(const Models::CreateMmsDataSourceRequest &request);

      /**
       * @summary Creates a job to pull metadata from a data source.
       *
       * @param request CreateMmsFetchMetadataJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmsFetchMetadataJobResponse
       */
      Models::CreateMmsFetchMetadataJobResponse createMmsFetchMetadataJobWithOptions(const string &sourceId, const Models::CreateMmsFetchMetadataJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job to pull metadata from a data source.
       *
       * @param request CreateMmsFetchMetadataJobRequest
       * @return CreateMmsFetchMetadataJobResponse
       */
      Models::CreateMmsFetchMetadataJobResponse createMmsFetchMetadataJob(const string &sourceId, const Models::CreateMmsFetchMetadataJobRequest &request);

      /**
       * @summary Creates a data migration task.
       *
       * @param request CreateMmsJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmsJobResponse
       */
      Models::CreateMmsJobResponse createMmsJobWithOptions(const string &sourceId, const Models::CreateMmsJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data migration task.
       *
       * @param request CreateMmsJobRequest
       * @return CreateMmsJobResponse
       */
      Models::CreateMmsJobResponse createMmsJob(const string &sourceId, const Models::CreateMmsJobRequest &request);

      /**
       * @param request CreatePackageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePackageResponse
       */
      Models::CreatePackageResponse createPackageWithOptions(const string &projectName, const Models::CreatePackageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreatePackageRequest
       * @return CreatePackageResponse
       */
      Models::CreatePackageResponse createPackage(const string &projectName, const Models::CreatePackageRequest &request);

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
       * @summary Creates a quota. When you enable MaxCompute for the first time, a pay-as-you-go quota must be created. If you create a subscription quota, your Alibaba Cloud account is automatically charged.
       *
       * @description **Before using this operation, review the MaxCompute billing model and [pricing](https://www.aliyun.com/product/maxcompute/pricing?spm=5176.30275541.J_ZGek9Blx07Hclc3Ddt9dg.2.19502f3dPPfezu\\&scm=20140722.S_card@@%E4%BA%A7%E5%93%81@@143540.S_new~UND~card.ID_card@@%E4%BA%A7%E5%93%81@@143540-RL_MaxCompute-LOC_2024SPSearchCard-OR_ser-PAR1_213c994b17738148516424527d0d07-V_4-RE_new9-P0_0-P1_0).**
       *
       * @param request CreateQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaResponse
       */
      Models::CreateQuotaResponse createQuotaWithOptions(const Models::CreateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quota. When you enable MaxCompute for the first time, a pay-as-you-go quota must be created. If you create a subscription quota, your Alibaba Cloud account is automatically charged.
       *
       * @description **Before using this operation, review the MaxCompute billing model and [pricing](https://www.aliyun.com/product/maxcompute/pricing?spm=5176.30275541.J_ZGek9Blx07Hclc3Ddt9dg.2.19502f3dPPfezu\\&scm=20140722.S_card@@%E4%BA%A7%E5%93%81@@143540.S_new~UND~card.ID_card@@%E4%BA%A7%E5%93%81@@143540-RL_MaxCompute-LOC_2024SPSearchCard-OR_ser-PAR1_213c994b17738148516424527d0d07-V_4-RE_new9-P0_0-P1_0).**
       *
       * @param request CreateQuotaRequest
       * @return CreateQuotaResponse
       */
      Models::CreateQuotaResponse createQuota(const Models::CreateQuotaRequest &request);

      /**
       * @param request CreateQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaPlanResponse
       */
      Models::CreateQuotaPlanResponse createQuotaPlanWithOptions(const string &nickname, const Models::CreateQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateQuotaPlanRequest
       * @return CreateQuotaPlanResponse
       */
      Models::CreateQuotaPlanResponse createQuotaPlan(const string &nickname, const Models::CreateQuotaPlanRequest &request);

      /**
       * @param request CreateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const string &projectName, const Models::CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const string &projectName, const Models::CreateRoleRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeQuotaPlanResponse
       */
      Models::DeleteComputeQuotaPlanResponse deleteComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DeleteComputeQuotaPlanResponse
       */
      Models::DeleteComputeQuotaPlanResponse deleteComputeQuotaPlan(const string &nickname, const string &planName);

      /**
       * @summary Deletes a MaxCompute Migration Assist (MMA) data source and its associated migration plans and metadata.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMmsDataSourceResponse
       */
      Models::DeleteMmsDataSourceResponse deleteMmsDataSourceWithOptions(const string &sourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MaxCompute Migration Assist (MMA) data source and its associated migration plans and metadata.
       *
       * @return DeleteMmsDataSourceResponse
       */
      Models::DeleteMmsDataSourceResponse deleteMmsDataSource(const string &sourceId);

      /**
       * @summary Deletes a MaxCompute Migration Assist (MMA) data migration plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMmsJobResponse
       */
      Models::DeleteMmsJobResponse deleteMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MaxCompute Migration Assist (MMA) data migration plan.
       *
       * @return DeleteMmsJobResponse
       */
      Models::DeleteMmsJobResponse deleteMmsJob(const string &sourceId, const string &jobId);

      /**
       * @summary Deletes a MaxCompute project. This operation is irreversible. Use this API with caution.
       *
       * @param request DeleteProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const string &projectName, const Models::DeleteProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MaxCompute project. This operation is irreversible. Use this API with caution.
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const string &projectName, const Models::DeleteProjectRequest &request);

      /**
       * @param request DeleteQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQuotaPlanResponse
       */
      Models::DeleteQuotaPlanResponse deleteQuotaPlanWithOptions(const string &nickname, const string &planName, const Models::DeleteQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteQuotaPlanRequest
       * @return DeleteQuotaPlanResponse
       */
      Models::DeleteQuotaPlanResponse deleteQuotaPlan(const string &nickname, const string &planName, const Models::DeleteQuotaPlanRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeEffectivePlanResponse
       */
      Models::GetComputeEffectivePlanResponse getComputeEffectivePlanWithOptions(const string &nickname, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetComputeEffectivePlanResponse
       */
      Models::GetComputeEffectivePlanResponse getComputeEffectivePlan(const string &nickname);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeQuotaPlanResponse
       */
      Models::GetComputeQuotaPlanResponse getComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetComputeQuotaPlanResponse
       */
      Models::GetComputeQuotaPlanResponse getComputeQuotaPlan(const string &nickname, const string &planName);

      /**
       * @param request GetComputeQuotaScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeQuotaScheduleResponse
       */
      Models::GetComputeQuotaScheduleResponse getComputeQuotaScheduleWithOptions(const string &nickname, const Models::GetComputeQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetComputeQuotaScheduleRequest
       * @return GetComputeQuotaScheduleResponse
       */
      Models::GetComputeQuotaScheduleResponse getComputeQuotaSchedule(const string &nickname, const Models::GetComputeQuotaScheduleRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobInfoResponse
       */
      Models::GetJobInfoResponse getJobInfoWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetJobInfoResponse
       */
      Models::GetJobInfoResponse getJobInfo(const string &instanceId);

      /**
       * @param tmpReq GetJobResourceUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResourceUsageResponse
       */
      Models::GetJobResourceUsageResponse getJobResourceUsageWithOptions(const Models::GetJobResourceUsageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetJobResourceUsageRequest
       * @return GetJobResourceUsageResponse
       */
      Models::GetJobResourceUsageResponse getJobResourceUsage(const Models::GetJobResourceUsageRequest &request);

      /**
       * @summary Retrieves a single asynchronous task from MaxCompute Migration Assist (MMA).
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsAsyncTaskResponse
       */
      Models::GetMmsAsyncTaskResponse getMmsAsyncTaskWithOptions(const string &sourceId, const string &asyncTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a single asynchronous task from MaxCompute Migration Assist (MMA).
       *
       * @return GetMmsAsyncTaskResponse
       */
      Models::GetMmsAsyncTaskResponse getMmsAsyncTask(const string &sourceId, const string &asyncTaskId);

      /**
       * @summary Retrieves the details of a single MaxCompute Migration Assist (MMA) data source.
       *
       * @param request GetMmsDataSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsDataSourceResponse
       */
      Models::GetMmsDataSourceResponse getMmsDataSourceWithOptions(const string &sourceId, const Models::GetMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a single MaxCompute Migration Assist (MMA) data source.
       *
       * @param request GetMmsDataSourceRequest
       * @return GetMmsDataSourceResponse
       */
      Models::GetMmsDataSourceResponse getMmsDataSource(const string &sourceId, const Models::GetMmsDataSourceRequest &request);

      /**
       * @summary Retrieves a database from a MaxCompute Migration Assist (MMA) data source.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsDbResponse
       */
      Models::GetMmsDbResponse getMmsDbWithOptions(const string &sourceId, const string &dbId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a database from a MaxCompute Migration Assist (MMA) data source.
       *
       * @return GetMmsDbResponse
       */
      Models::GetMmsDbResponse getMmsDb(const string &sourceId, const string &dbId);

      /**
       * @summary Retrieves the details of a MaxCompute Migration Assist (MMA) job that fetches metadata.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsFetchMetadataJobResponse
       */
      Models::GetMmsFetchMetadataJobResponse getMmsFetchMetadataJobWithOptions(const string &sourceId, const string &scanId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a MaxCompute Migration Assist (MMA) job that fetches metadata.
       *
       * @return GetMmsFetchMetadataJobResponse
       */
      Models::GetMmsFetchMetadataJobResponse getMmsFetchMetadataJob(const string &sourceId, const string &scanId);

      /**
       * @summary Retrieves the details of a single MaxCompute Migration Assist (MMA) migration plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsJobResponse
       */
      Models::GetMmsJobResponse getMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a single MaxCompute Migration Assist (MMA) migration plan.
       *
       * @return GetMmsJobResponse
       */
      Models::GetMmsJobResponse getMmsJob(const string &sourceId, const string &jobId);

      /**
       * @summary Retrieves a partition from a MaxCompute Migration Assist (MMA) data source.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsPartitionResponse
       */
      Models::GetMmsPartitionResponse getMmsPartitionWithOptions(const string &sourceId, const string &partitionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a partition from a MaxCompute Migration Assist (MMA) data source.
       *
       * @return GetMmsPartitionResponse
       */
      Models::GetMmsPartitionResponse getMmsPartition(const string &sourceId, const string &partitionId);

      /**
       * @summary Retrieves a table from a MaxCompute Migration Assist (MMA) data source.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsTableResponse
       */
      Models::GetMmsTableResponse getMmsTableWithOptions(const string &sourceId, const string &tableId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a table from a MaxCompute Migration Assist (MMA) data source.
       *
       * @return GetMmsTableResponse
       */
      Models::GetMmsTableResponse getMmsTable(const string &sourceId, const string &tableId);

      /**
       * @summary Retrieves the details of a specific migration task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsTaskResponse
       */
      Models::GetMmsTaskResponse getMmsTaskWithOptions(const string &sourceId, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific migration task.
       *
       * @return GetMmsTaskResponse
       */
      Models::GetMmsTaskResponse getMmsTask(const string &sourceId, const string &taskId);

      /**
       * @param request GetPackageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPackageResponse
       */
      Models::GetPackageResponse getPackageWithOptions(const string &projectName, const string &packageName, const Models::GetPackageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetPackageRequest
       * @return GetPackageResponse
       */
      Models::GetPackageResponse getPackage(const string &projectName, const string &packageName, const Models::GetPackageRequest &request);

      /**
       * @summary Queries the basic information about a MaxCompute project.
       *
       * @param request GetProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const string &projectName, const Models::GetProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a MaxCompute project.
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const string &projectName, const Models::GetProjectRequest &request);

      /**
       * @summary Retrieve information for the specified level-1 quota group. Warning: This operation will be decommissioned on July 31, 2024. It will be replaced by the `QueryQuota` operation. The request parameters, response parameters, and features of the two operations are the same.
       *
       * @param request GetQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuotaWithOptions(const string &nickname, const Models::GetQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve information for the specified level-1 quota group. Warning: This operation will be decommissioned on July 31, 2024. It will be replaced by the `QueryQuota` operation. The request parameters, response parameters, and features of the two operations are the same.
       *
       * @param request GetQuotaRequest
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuota(const string &nickname, const Models::GetQuotaRequest &request);

      /**
       * @param request GetQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaPlanResponse
       */
      Models::GetQuotaPlanResponse getQuotaPlanWithOptions(const string &nickname, const string &planName, const Models::GetQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQuotaPlanRequest
       * @return GetQuotaPlanResponse
       */
      Models::GetQuotaPlanResponse getQuotaPlan(const string &nickname, const string &planName, const Models::GetQuotaPlanRequest &request);

      /**
       * @param request GetQuotaScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaScheduleResponse
       */
      Models::GetQuotaScheduleResponse getQuotaScheduleWithOptions(const string &nickname, const Models::GetQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQuotaScheduleRequest
       * @return GetQuotaScheduleResponse
       */
      Models::GetQuotaScheduleResponse getQuotaSchedule(const string &nickname, const Models::GetQuotaScheduleRequest &request);

      /**
       * @param tmpReq GetQuotaUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaUsageResponse
       */
      Models::GetQuotaUsageResponse getQuotaUsageWithOptions(const string &nickname, const Models::GetQuotaUsageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQuotaUsageRequest
       * @return GetQuotaUsageResponse
       */
      Models::GetQuotaUsageResponse getQuotaUsage(const string &nickname, const Models::GetQuotaUsageRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleAclResponse
       */
      Models::GetRoleAclResponse getRoleAclWithOptions(const string &projectName, const string &roleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetRoleAclResponse
       */
      Models::GetRoleAclResponse getRoleAcl(const string &projectName, const string &roleName);

      /**
       * @param request GetRoleAclOnObjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleAclOnObjectResponse
       */
      Models::GetRoleAclOnObjectResponse getRoleAclOnObjectWithOptions(const string &projectName, const string &roleName, const Models::GetRoleAclOnObjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRoleAclOnObjectRequest
       * @return GetRoleAclOnObjectResponse
       */
      Models::GetRoleAclOnObjectResponse getRoleAclOnObject(const string &projectName, const string &roleName, const Models::GetRoleAclOnObjectRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRolePolicyResponse
       */
      Models::GetRolePolicyResponse getRolePolicyWithOptions(const string &projectName, const string &roleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetRolePolicyResponse
       */
      Models::GetRolePolicyResponse getRolePolicy(const string &projectName, const string &roleName);

      /**
       * @param tmpReq GetRunningJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRunningJobsResponse
       */
      Models::GetRunningJobsResponse getRunningJobsWithOptions(const Models::GetRunningJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRunningJobsRequest
       * @return GetRunningJobsResponse
       */
      Models::GetRunningJobsResponse getRunningJobs(const Models::GetRunningJobsRequest &request);

      /**
       * @summary Retrieves a summary of the total storage amount.
       *
       * @param request GetStorageAmountSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageAmountSummaryResponse
       */
      Models::GetStorageAmountSummaryResponse getStorageAmountSummaryWithOptions(const Models::GetStorageAmountSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a summary of the total storage amount.
       *
       * @param request GetStorageAmountSummaryRequest
       * @return GetStorageAmountSummaryResponse
       */
      Models::GetStorageAmountSummaryResponse getStorageAmountSummary(const Models::GetStorageAmountSummaryRequest &request);

      /**
       * @summary Retrieves a summary of storage usage.
       *
       * @param request GetStorageSizeSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageSizeSummaryResponse
       */
      Models::GetStorageSizeSummaryResponse getStorageSizeSummaryWithOptions(const Models::GetStorageSizeSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a summary of storage usage.
       *
       * @param request GetStorageSizeSummaryRequest
       * @return GetStorageSizeSummaryResponse
       */
      Models::GetStorageSizeSummaryResponse getStorageSizeSummary(const Models::GetStorageSizeSummaryRequest &request);

      /**
       * @summary Retrieves the year-on-year (YoY) change in storage usage.
       *
       * @param tmpReq GetStorageSummaryComparedRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageSummaryComparedResponse
       */
      Models::GetStorageSummaryComparedResponse getStorageSummaryComparedWithOptions(const string &type, const Models::GetStorageSummaryComparedRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the year-on-year (YoY) change in storage usage.
       *
       * @param request GetStorageSummaryComparedRequest
       * @return GetStorageSummaryComparedResponse
       */
      Models::GetStorageSummaryComparedResponse getStorageSummaryCompared(const string &type, const Models::GetStorageSummaryComparedRequest &request);

      /**
       * @param request GetTableInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableInfoResponse
       */
      Models::GetTableInfoResponse getTableInfoWithOptions(const string &projectName, const string &tableName, const Models::GetTableInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTableInfoRequest
       * @return GetTableInfoResponse
       */
      Models::GetTableInfoResponse getTableInfo(const string &projectName, const string &tableName, const Models::GetTableInfoRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrustedProjectsResponse
       */
      Models::GetTrustedProjectsResponse getTrustedProjectsWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetTrustedProjectsResponse
       */
      Models::GetTrustedProjectsResponse getTrustedProjects(const string &projectName);

      /**
       * @param request KillJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillJobsResponse
       */
      Models::KillJobsResponse killJobsWithOptions(const Models::KillJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request KillJobsRequest
       * @return KillJobsResponse
       */
      Models::KillJobsResponse killJobs(const Models::KillJobsRequest &request);

      /**
       * @param request ListComputeMetricsByInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeMetricsByInstanceResponse
       */
      Models::ListComputeMetricsByInstanceResponse listComputeMetricsByInstanceWithOptions(const Models::ListComputeMetricsByInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListComputeMetricsByInstanceRequest
       * @return ListComputeMetricsByInstanceResponse
       */
      Models::ListComputeMetricsByInstanceResponse listComputeMetricsByInstance(const Models::ListComputeMetricsByInstanceRequest &request);

      /**
       * @summary Lists compute quota plans.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeQuotaPlanResponse
       */
      Models::ListComputeQuotaPlanResponse listComputeQuotaPlanWithOptions(const string &nickname, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists compute quota plans.
       *
       * @return ListComputeQuotaPlanResponse
       */
      Models::ListComputeQuotaPlanResponse listComputeQuotaPlan(const string &nickname);

      /**
       * @param request ListFunctionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctionsWithOptions(const string &projectName, const Models::ListFunctionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFunctionsRequest
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctions(const string &projectName, const Models::ListFunctionsRequest &request);

      /**
       * @summary Retrieves a list of jobs.
       *
       * @param request ListJobInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobInfosResponse
       */
      Models::ListJobInfosResponse listJobInfosWithOptions(const Models::ListJobInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of jobs.
       *
       * @param request ListJobInfosRequest
       * @return ListJobInfosResponse
       */
      Models::ListJobInfosResponse listJobInfos(const Models::ListJobInfosRequest &request);

      /**
       * @param request ListJobMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobMetricResponse
       */
      Models::ListJobMetricResponse listJobMetricWithOptions(const Models::ListJobMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListJobMetricRequest
       * @return ListJobMetricResponse
       */
      Models::ListJobMetricResponse listJobMetric(const Models::ListJobMetricRequest &request);

      /**
       * @summary Retrieves job snapshot data at a specific point in time.
       *
       * @param request ListJobSnapshotInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobSnapshotInfosResponse
       */
      Models::ListJobSnapshotInfosResponse listJobSnapshotInfosWithOptions(const Models::ListJobSnapshotInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves job snapshot data at a specific point in time.
       *
       * @param request ListJobSnapshotInfosRequest
       * @return ListJobSnapshotInfosResponse
       */
      Models::ListJobSnapshotInfosResponse listJobSnapshotInfos(const Models::ListJobSnapshotInfosRequest &request);

      /**
       * @summary Lists the MaxCompute Migration Assist (MMA) data sources.
       *
       * @param request ListMmsDataSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsDataSourcesResponse
       */
      Models::ListMmsDataSourcesResponse listMmsDataSourcesWithOptions(const Models::ListMmsDataSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the MaxCompute Migration Assist (MMA) data sources.
       *
       * @param request ListMmsDataSourcesRequest
       * @return ListMmsDataSourcesResponse
       */
      Models::ListMmsDataSourcesResponse listMmsDataSources(const Models::ListMmsDataSourcesRequest &request);

      /**
       * @summary List databases in the MMA data source.
       *
       * @param tmpReq ListMmsDbsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsDbsResponse
       */
      Models::ListMmsDbsResponse listMmsDbsWithOptions(const string &sourceId, const Models::ListMmsDbsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List databases in the MMA data source.
       *
       * @param request ListMmsDbsRequest
       * @return ListMmsDbsResponse
       */
      Models::ListMmsDbsResponse listMmsDbs(const string &sourceId, const Models::ListMmsDbsRequest &request);

      /**
       * @summary Lists migration jobs.
       *
       * @param request ListMmsJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsJobsResponse
       */
      Models::ListMmsJobsResponse listMmsJobsWithOptions(const string &sourceId, const Models::ListMmsJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists migration jobs.
       *
       * @param request ListMmsJobsRequest
       * @return ListMmsJobsResponse
       */
      Models::ListMmsJobsResponse listMmsJobs(const string &sourceId, const Models::ListMmsJobsRequest &request);

      /**
       * @summary Lists the partitions in a MaxCompute Migration Assist (MMA) data source.
       *
       * @param tmpReq ListMmsPartitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsPartitionsResponse
       */
      Models::ListMmsPartitionsResponse listMmsPartitionsWithOptions(const string &sourceId, const Models::ListMmsPartitionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the partitions in a MaxCompute Migration Assist (MMA) data source.
       *
       * @param request ListMmsPartitionsRequest
       * @return ListMmsPartitionsResponse
       */
      Models::ListMmsPartitionsResponse listMmsPartitions(const string &sourceId, const Models::ListMmsPartitionsRequest &request);

      /**
       * @summary Lists the tables in a MaxCompute Migration Assist (MMA) data source.
       *
       * @param tmpReq ListMmsTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsTablesResponse
       */
      Models::ListMmsTablesResponse listMmsTablesWithOptions(const string &sourceId, const Models::ListMmsTablesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the tables in a MaxCompute Migration Assist (MMA) data source.
       *
       * @param request ListMmsTablesRequest
       * @return ListMmsTablesResponse
       */
      Models::ListMmsTablesResponse listMmsTables(const string &sourceId, const Models::ListMmsTablesRequest &request);

      /**
       * @summary Lists the execution logs for a specific migration task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsTaskLogsResponse
       */
      Models::ListMmsTaskLogsResponse listMmsTaskLogsWithOptions(const string &sourceId, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the execution logs for a specific migration task.
       *
       * @return ListMmsTaskLogsResponse
       */
      Models::ListMmsTaskLogsResponse listMmsTaskLogs(const string &sourceId, const string &taskId);

      /**
       * @summary Retrieves a list of migration tasks.
       *
       * @param request ListMmsTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsTasksResponse
       */
      Models::ListMmsTasksResponse listMmsTasksWithOptions(const string &sourceId, const Models::ListMmsTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of migration tasks.
       *
       * @param request ListMmsTasksRequest
       * @return ListMmsTasksResponse
       */
      Models::ListMmsTasksResponse listMmsTasks(const string &sourceId, const Models::ListMmsTasksRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPackagesResponse
       */
      Models::ListPackagesResponse listPackagesWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListPackagesResponse
       */
      Models::ListPackagesResponse listPackages(const string &projectName);

      /**
       * @summary ListProjectUsers
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectUsersResponse
       */
      Models::ListProjectUsersResponse listProjectUsersWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListProjectUsers
       *
       * @return ListProjectUsersResponse
       */
      Models::ListProjectUsersResponse listProjectUsers(const string &projectName);

      /**
       * @param request ListProjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary Retrieves a list of quotas.
       *
       * @param request ListQuotasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotasWithOptions(const Models::ListQuotasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of quotas.
       *
       * @param request ListQuotasRequest
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotas(const Models::ListQuotasRequest &request);

      /**
       * @param request ListQuotasPlansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotasPlansResponse
       */
      Models::ListQuotasPlansResponse listQuotasPlansWithOptions(const string &nickname, const Models::ListQuotasPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListQuotasPlansRequest
       * @return ListQuotasPlansResponse
       */
      Models::ListQuotasPlansResponse listQuotasPlans(const string &nickname, const Models::ListQuotasPlansRequest &request);

      /**
       * @param request ListResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResourcesWithOptions(const string &projectName, const Models::ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const string &projectName, const Models::ListResourcesRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const string &projectName);

      /**
       * @param tmpReq ListStoragePartitionsInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStoragePartitionsInfoResponse
       */
      Models::ListStoragePartitionsInfoResponse listStoragePartitionsInfoWithOptions(const string &project, const string &table, const Models::ListStoragePartitionsInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListStoragePartitionsInfoRequest
       * @return ListStoragePartitionsInfoResponse
       */
      Models::ListStoragePartitionsInfoResponse listStoragePartitionsInfo(const string &project, const string &table, const Models::ListStoragePartitionsInfoRequest &request);

      /**
       * @summary Retrieves the storage details of projects.
       *
       * @param request ListStorageProjectsInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStorageProjectsInfoResponse
       */
      Models::ListStorageProjectsInfoResponse listStorageProjectsInfoWithOptions(const Models::ListStorageProjectsInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the storage details of projects.
       *
       * @param request ListStorageProjectsInfoRequest
       * @return ListStorageProjectsInfoResponse
       */
      Models::ListStorageProjectsInfoResponse listStorageProjectsInfo(const Models::ListStorageProjectsInfoRequest &request);

      /**
       * @param tmpReq ListStorageTablesInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStorageTablesInfoResponse
       */
      Models::ListStorageTablesInfoResponse listStorageTablesInfoWithOptions(const string &project, const Models::ListStorageTablesInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListStorageTablesInfoRequest
       * @return ListStorageTablesInfoResponse
       */
      Models::ListStorageTablesInfoResponse listStorageTablesInfo(const string &project, const Models::ListStorageTablesInfoRequest &request);

      /**
       * @param request ListTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const string &projectName, const Models::ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const string &projectName, const Models::ListTablesRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTunnelQuotaTimerResponse
       */
      Models::ListTunnelQuotaTimerResponse listTunnelQuotaTimerWithOptions(const string &nickname, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListTunnelQuotaTimerResponse
       */
      Models::ListTunnelQuotaTimerResponse listTunnelQuotaTimer(const string &nickname);

      /**
       * @param request ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersByRoleResponse
       */
      Models::ListUsersByRoleResponse listUsersByRoleWithOptions(const string &projectName, const string &roleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListUsersByRoleResponse
       */
      Models::ListUsersByRoleResponse listUsersByRole(const string &projectName, const string &roleName);

      /**
       * @param request QueryQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryQuotaResponse
       */
      Models::QueryQuotaResponse queryQuotaWithOptions(const string &nickname, const Models::QueryQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryQuotaRequest
       * @return QueryQuotaResponse
       */
      Models::QueryQuotaResponse queryQuota(const string &nickname, const Models::QueryQuotaRequest &request);

      /**
       * @summary Queries the time series data of resource consumption for a quota.
       *
       * @param request QueryQuotaMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryQuotaMetricResponse
       */
      Models::QueryQuotaMetricResponse queryQuotaMetricWithOptions(const string &metric, const Models::QueryQuotaMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time series data of resource consumption for a quota.
       *
       * @param request QueryQuotaMetricRequest
       * @return QueryQuotaMetricResponse
       */
      Models::QueryQuotaMetricResponse queryQuotaMetric(const string &metric, const Models::QueryQuotaMetricRequest &request);

      /**
       * @summary Queries time-series metrics of data storage.
       *
       * @param request QueryStorageMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryStorageMetricResponse
       */
      Models::QueryStorageMetricResponse queryStorageMetricWithOptions(const string &metric, const Models::QueryStorageMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries time-series metrics of data storage.
       *
       * @param request QueryStorageMetricRequest
       * @return QueryStorageMetricResponse
       */
      Models::QueryStorageMetricResponse queryStorageMetric(const string &metric, const Models::QueryStorageMetricRequest &request);

      /**
       * @summary Queries metric data for the Tunnel Data Transmission Service within a specified time range.
       *
       * @description - You can use this API to query various Tunnel metrics, such as slot usage (`slot_usage`), slot usage limit (`slot_max`), throughput (`throughput`), throughput rate (`throughput_speed`), and number of requests (`request`).
       * - The `startTime` and `endTime` parameters are required. They specify the start and end of the time range for the query. The values are UNIX timestamps in seconds.
       * - The `metric` parameter is also required. It specifies the type of metric to query.
       * - Depending on the value of `metric`, you may need to specify additional parameters for filtering to refine your query. These parameters include `quotaNickname`, `project`, `tableList`, `operationList`, `codeList`, `groupList`, and `topN`.
       * - For some `metric` values, you must specify other parameters. For example, if `groupList` contains `table` or `ip`, you must specify the `project` parameter and other required parameters. In this case, the system returns only the top N results.
       * - The `strategy` parameter defines the data aggregation logic. This logic is used when the automatic step size exceeds 60 seconds over a long time range. The default value is `max`.
       * - Ensure all parameters meet the requirements in this document to prevent request failures.
       *
       * @param request QueryTunnelMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTunnelMetricResponse
       */
      Models::QueryTunnelMetricResponse queryTunnelMetricWithOptions(const string &metric, const Models::QueryTunnelMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metric data for the Tunnel Data Transmission Service within a specified time range.
       *
       * @description - You can use this API to query various Tunnel metrics, such as slot usage (`slot_usage`), slot usage limit (`slot_max`), throughput (`throughput`), throughput rate (`throughput_speed`), and number of requests (`request`).
       * - The `startTime` and `endTime` parameters are required. They specify the start and end of the time range for the query. The values are UNIX timestamps in seconds.
       * - The `metric` parameter is also required. It specifies the type of metric to query.
       * - Depending on the value of `metric`, you may need to specify additional parameters for filtering to refine your query. These parameters include `quotaNickname`, `project`, `tableList`, `operationList`, `codeList`, `groupList`, and `topN`.
       * - For some `metric` values, you must specify other parameters. For example, if `groupList` contains `table` or `ip`, you must specify the `project` parameter and other required parameters. In this case, the system returns only the top N results.
       * - The `strategy` parameter defines the data aggregation logic. This logic is used when the automatic step size exceeds 60 seconds over a long time range. The default value is `max`.
       * - Ensure all parameters meet the requirements in this document to prevent request failures.
       *
       * @param request QueryTunnelMetricRequest
       * @return QueryTunnelMetricResponse
       */
      Models::QueryTunnelMetricResponse queryTunnelMetric(const string &metric, const Models::QueryTunnelMetricRequest &request);

      /**
       * @summary Queries detailed data for the Tunnel Data Transmission Service within a specified time range.
       *
       * @description - This operation queries various Tunnel metrics, such as slot usage details (`slot_usage_detail`), throughput details (`throughput_detail`), and a throughput summary (`throughput_summary`).
       * - The `quotaNickname` and `project` parameters cannot both be empty.
       * - If the groupList parameter contains `table` or `ip`, you must specify the `project` parameter. If the `groupList` parameter contains `ip`, you must also specify the `tableList` parameter.
       * - The orderColumn parameter can be set to `maxValue`, `minValue`, `avgValue`, or `sumValue`. The `sumValue` option is valid only for `throughput_summary`. By default, this parameter is empty, which means that no sorting is performed.
       * - The default value of the `ascOrder` parameter is `false`, which indicates that the results are sorted in descending order.
       * - The `limit` parameter specifies the maximum number of entries to return. The default value is 10, and the maximum value is 100.
       *
       * @param request QueryTunnelMetricDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTunnelMetricDetailResponse
       */
      Models::QueryTunnelMetricDetailResponse queryTunnelMetricDetailWithOptions(const string &metric, const Models::QueryTunnelMetricDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed data for the Tunnel Data Transmission Service within a specified time range.
       *
       * @description - This operation queries various Tunnel metrics, such as slot usage details (`slot_usage_detail`), throughput details (`throughput_detail`), and a throughput summary (`throughput_summary`).
       * - The `quotaNickname` and `project` parameters cannot both be empty.
       * - If the groupList parameter contains `table` or `ip`, you must specify the `project` parameter. If the `groupList` parameter contains `ip`, you must also specify the `tableList` parameter.
       * - The orderColumn parameter can be set to `maxValue`, `minValue`, `avgValue`, or `sumValue`. The `sumValue` option is valid only for `throughput_summary`. By default, this parameter is empty, which means that no sorting is performed.
       * - The default value of the `ascOrder` parameter is `false`, which indicates that the results are sorted in descending order.
       * - The `limit` parameter specifies the maximum number of entries to return. The default value is 10, and the maximum value is 100.
       *
       * @param request QueryTunnelMetricDetailRequest
       * @return QueryTunnelMetricDetailResponse
       */
      Models::QueryTunnelMetricDetailResponse queryTunnelMetricDetail(const string &metric, const Models::QueryTunnelMetricDetailRequest &request);

      /**
       * @summary Retries a data migration job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryMmsJobResponse
       */
      Models::RetryMmsJobResponse retryMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries a data migration job.
       *
       * @return RetryMmsJobResponse
       */
      Models::RetryMmsJobResponse retryMmsJob(const string &sourceId, const string &jobId);

      /**
       * @summary Starts a data migration job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMmsJobResponse
       */
      Models::StartMmsJobResponse startMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a data migration job.
       *
       * @return StartMmsJobResponse
       */
      Models::StartMmsJobResponse startMmsJob(const string &sourceId, const string &jobId);

      /**
       * @summary Stops a data migration job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMmsJobResponse
       */
      Models::StopMmsJobResponse stopMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a data migration job.
       *
       * @return StopMmsJobResponse
       */
      Models::StopMmsJobResponse stopMmsJob(const string &sourceId, const string &jobId);

      /**
       * @summary Retrieves the storage information for each category or project on a specified date.
       *
       * @param request SumStorageMetricsByDateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SumStorageMetricsByDateResponse
       */
      Models::SumStorageMetricsByDateResponse sumStorageMetricsByDateWithOptions(const Models::SumStorageMetricsByDateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the storage information for each category or project on a specified date.
       *
       * @param request SumStorageMetricsByDateRequest
       * @return SumStorageMetricsByDateResponse
       */
      Models::SumStorageMetricsByDateResponse sumStorageMetricsByDate(const Models::SumStorageMetricsByDateRequest &request);

      /**
       * @param request UpdateComputeQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeQuotaPlanResponse
       */
      Models::UpdateComputeQuotaPlanResponse updateComputeQuotaPlanWithOptions(const string &nickname, const Models::UpdateComputeQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateComputeQuotaPlanRequest
       * @return UpdateComputeQuotaPlanResponse
       */
      Models::UpdateComputeQuotaPlanResponse updateComputeQuotaPlan(const string &nickname, const Models::UpdateComputeQuotaPlanRequest &request);

      /**
       * @summary Updates the time-based schedule for a computing quota.
       *
       * @description Before you call this operation, ensure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of reserved compute units (CUs) in MaxCompute.
       *
       * @param request UpdateComputeQuotaScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeQuotaScheduleResponse
       */
      Models::UpdateComputeQuotaScheduleResponse updateComputeQuotaScheduleWithOptions(const string &nickname, const Models::UpdateComputeQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the time-based schedule for a computing quota.
       *
       * @description Before you call this operation, ensure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of reserved compute units (CUs) in MaxCompute.
       *
       * @param request UpdateComputeQuotaScheduleRequest
       * @return UpdateComputeQuotaScheduleResponse
       */
      Models::UpdateComputeQuotaScheduleResponse updateComputeQuotaSchedule(const string &nickname, const Models::UpdateComputeQuotaScheduleRequest &request);

      /**
       * @param request UpdateComputeSubQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeSubQuotaResponse
       */
      Models::UpdateComputeSubQuotaResponse updateComputeSubQuotaWithOptions(const string &nickname, const Models::UpdateComputeSubQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateComputeSubQuotaRequest
       * @return UpdateComputeSubQuotaResponse
       */
      Models::UpdateComputeSubQuotaResponse updateComputeSubQuota(const string &nickname, const Models::UpdateComputeSubQuotaRequest &request);

      /**
       * @summary Refreshes the metadata of a MaxCompute Migration Assist (MMA) data source.
       *
       * @param request UpdateMmsDataSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMmsDataSourceResponse
       */
      Models::UpdateMmsDataSourceResponse updateMmsDataSourceWithOptions(const string &sourceId, const Models::UpdateMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the metadata of a MaxCompute Migration Assist (MMA) data source.
       *
       * @param request UpdateMmsDataSourceRequest
       * @return UpdateMmsDataSourceResponse
       */
      Models::UpdateMmsDataSourceResponse updateMmsDataSource(const string &sourceId, const Models::UpdateMmsDataSourceRequest &request);

      /**
       * @param request UpdatePackageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePackageResponse
       */
      Models::UpdatePackageResponse updatePackageWithOptions(const string &projectName, const string &packageName, const Models::UpdatePackageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdatePackageRequest
       * @return UpdatePackageResponse
       */
      Models::UpdatePackageResponse updatePackage(const string &projectName, const string &packageName, const Models::UpdatePackageRequest &request);

      /**
       * @summary Modifies the basic information of a project.
       *
       * @param request UpdateProjectBasicMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectBasicMetaResponse
       */
      Models::UpdateProjectBasicMetaResponse updateProjectBasicMetaWithOptions(const string &projectName, const Models::UpdateProjectBasicMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic information of a project.
       *
       * @param request UpdateProjectBasicMetaRequest
       * @return UpdateProjectBasicMetaResponse
       */
      Models::UpdateProjectBasicMetaResponse updateProjectBasicMeta(const string &projectName, const Models::UpdateProjectBasicMetaRequest &request);

      /**
       * @param request UpdateProjectDefaultQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectDefaultQuotaResponse
       */
      Models::UpdateProjectDefaultQuotaResponse updateProjectDefaultQuotaWithOptions(const string &projectName, const Models::UpdateProjectDefaultQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateProjectDefaultQuotaRequest
       * @return UpdateProjectDefaultQuotaResponse
       */
      Models::UpdateProjectDefaultQuotaResponse updateProjectDefaultQuota(const string &projectName, const Models::UpdateProjectDefaultQuotaRequest &request);

      /**
       * @param request UpdateProjectIpWhiteListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectIpWhiteListResponse
       */
      Models::UpdateProjectIpWhiteListResponse updateProjectIpWhiteListWithOptions(const string &projectName, const Models::UpdateProjectIpWhiteListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateProjectIpWhiteListRequest
       * @return UpdateProjectIpWhiteListResponse
       */
      Models::UpdateProjectIpWhiteListResponse updateProjectIpWhiteList(const string &projectName, const Models::UpdateProjectIpWhiteListRequest &request);

      /**
       * @summary Upgrades a project\\"s Layer 2 model to a Layer 3 model.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectModelTierResponse
       */
      Models::UpdateProjectModelTierResponse updateProjectModelTierWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a project\\"s Layer 2 model to a Layer 3 model.
       *
       * @return UpdateProjectModelTierResponse
       */
      Models::UpdateProjectModelTierResponse updateProjectModelTier(const string &projectName);

      /**
       * @param request UpdateQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaPlanResponse
       */
      Models::UpdateQuotaPlanResponse updateQuotaPlanWithOptions(const string &nickname, const string &planName, const Models::UpdateQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateQuotaPlanRequest
       * @return UpdateQuotaPlanResponse
       */
      Models::UpdateQuotaPlanResponse updateQuotaPlan(const string &nickname, const string &planName, const Models::UpdateQuotaPlanRequest &request);

      /**
       * @param request UpdateQuotaScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaScheduleResponse
       */
      Models::UpdateQuotaScheduleResponse updateQuotaScheduleWithOptions(const string &nickname, const Models::UpdateQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateQuotaScheduleRequest
       * @return UpdateQuotaScheduleResponse
       */
      Models::UpdateQuotaScheduleResponse updateQuotaSchedule(const string &nickname, const Models::UpdateQuotaScheduleRequest &request);

      /**
       * @summary Updates the time-based auto-scaling configuration for an exclusive resource group for Data Transmission Service (Tunnel Quota).
       *
       * @description Before you call this operation, ensure that you fully understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for exclusive Data Transmission Service resource groups and elastic reserved computing resources.
       *
       * @param request UpdateTunnelQuotaTimerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTunnelQuotaTimerResponse
       */
      Models::UpdateTunnelQuotaTimerResponse updateTunnelQuotaTimerWithOptions(const string &nickname, const Models::UpdateTunnelQuotaTimerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the time-based auto-scaling configuration for an exclusive resource group for Data Transmission Service (Tunnel Quota).
       *
       * @description Before you call this operation, ensure that you fully understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for exclusive Data Transmission Service resource groups and elastic reserved computing resources.
       *
       * @param request UpdateTunnelQuotaTimerRequest
       * @return UpdateTunnelQuotaTimerResponse
       */
      Models::UpdateTunnelQuotaTimerResponse updateTunnelQuotaTimer(const string &nickname, const Models::UpdateTunnelQuotaTimerRequest &request);

      /**
       * @summary Adds or removes users from a project role.
       *
       * @param request UpdateUsersToRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUsersToRoleResponse
       */
      Models::UpdateUsersToRoleResponse updateUsersToRoleWithOptions(const string &projectName, const string &roleName, const Models::UpdateUsersToRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or removes users from a project role.
       *
       * @param request UpdateUsersToRoleRequest
       * @return UpdateUsersToRoleResponse
       */
      Models::UpdateUsersToRoleResponse updateUsersToRole(const string &projectName, const string &roleName, const Models::UpdateUsersToRoleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
