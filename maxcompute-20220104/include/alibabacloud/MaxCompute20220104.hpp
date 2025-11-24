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
       * @summary Activate a Quota Plan Immediately.
       *
       * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyComputeQuotaPlanResponse
       */
      Models::ApplyComputeQuotaPlanResponse applyComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activate a Quota Plan Immediately.
       *
       * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
       *
       * @return ApplyComputeQuotaPlanResponse
       */
      Models::ApplyComputeQuotaPlanResponse applyComputeQuotaPlan(const string &nickname, const string &planName);

      /**
       * @summary Create MaxCompute ComputeQuotaPlan.
       *
       * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
       *
       * @param request CreateComputeQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeQuotaPlanResponse
       */
      Models::CreateComputeQuotaPlanResponse createComputeQuotaPlanWithOptions(const string &nickname, const Models::CreateComputeQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create MaxCompute ComputeQuotaPlan.
       *
       * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
       *
       * @param request CreateComputeQuotaPlanRequest
       * @return CreateComputeQuotaPlanResponse
       */
      Models::CreateComputeQuotaPlanResponse createComputeQuotaPlan(const string &nickname, const Models::CreateComputeQuotaPlanRequest &request);

      /**
       * @summary CreateMmsDataSource
       *
       * @param request CreateMmsDataSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmsDataSourceResponse
       */
      Models::CreateMmsDataSourceResponse createMmsDataSourceWithOptions(const Models::CreateMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateMmsDataSource
       *
       * @param request CreateMmsDataSourceRequest
       * @return CreateMmsDataSourceResponse
       */
      Models::CreateMmsDataSourceResponse createMmsDataSource(const Models::CreateMmsDataSourceRequest &request);

      /**
       * @summary 创建数据源的更新元数据操作
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmsFetchMetadataJobResponse
       */
      Models::CreateMmsFetchMetadataJobResponse createMmsFetchMetadataJobWithOptions(const string &sourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据源的更新元数据操作
       *
       * @return CreateMmsFetchMetadataJobResponse
       */
      Models::CreateMmsFetchMetadataJobResponse createMmsFetchMetadataJob(const string &sourceId);

      /**
       * @summary 创建迁移任务
       *
       * @param request CreateMmsJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmsJobResponse
       */
      Models::CreateMmsJobResponse createMmsJobWithOptions(const string &sourceId, const Models::CreateMmsJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建迁移任务
       *
       * @param request CreateMmsJobRequest
       * @return CreateMmsJobResponse
       */
      Models::CreateMmsJobResponse createMmsJob(const string &sourceId, const Models::CreateMmsJobRequest &request);

      /**
       * @summary Creates a package.
       *
       * @param request CreatePackageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePackageResponse
       */
      Models::CreatePackageResponse createPackageWithOptions(const string &projectName, const Models::CreatePackageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a package.
       *
       * @param request CreatePackageRequest
       * @return CreatePackageResponse
       */
      Models::CreatePackageResponse createPackage(const string &projectName, const Models::CreatePackageRequest &request);

      /**
       * @summary Creates a MaxCompute project.
       *
       * @param request CreateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a MaxCompute project.
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary Creates a quota plan.
       *
       * @param request CreateQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaPlanResponse
       */
      Models::CreateQuotaPlanResponse createQuotaPlanWithOptions(const string &nickname, const Models::CreateQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quota plan.
       *
       * @param request CreateQuotaPlanRequest
       * @return CreateQuotaPlanResponse
       */
      Models::CreateQuotaPlanResponse createQuotaPlan(const string &nickname, const Models::CreateQuotaPlanRequest &request);

      /**
       * @summary Creates a role at the MaxCompute project level.
       *
       * @param request CreateRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const string &projectName, const Models::CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a role at the MaxCompute project level.
       *
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const string &projectName, const Models::CreateRoleRequest &request);

      /**
       * @summary Delete MaxCompute compute quota plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeQuotaPlanResponse
       */
      Models::DeleteComputeQuotaPlanResponse deleteComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete MaxCompute compute quota plan.
       *
       * @return DeleteComputeQuotaPlanResponse
       */
      Models::DeleteComputeQuotaPlanResponse deleteComputeQuotaPlan(const string &nickname, const string &planName);

      /**
       * @summary 删除数据源
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMmsDataSourceResponse
       */
      Models::DeleteMmsDataSourceResponse deleteMmsDataSourceWithOptions(const string &sourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据源
       *
       * @return DeleteMmsDataSourceResponse
       */
      Models::DeleteMmsDataSourceResponse deleteMmsDataSource(const string &sourceId);

      /**
       * @summary 删除迁移计划
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMmsJobResponse
       */
      Models::DeleteMmsJobResponse deleteMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除迁移计划
       *
       * @return DeleteMmsJobResponse
       */
      Models::DeleteMmsJobResponse deleteMmsJob(const string &sourceId, const string &jobId);

      /**
       * @summary Deletes a MaxCompute project.
       *
       * @param request DeleteProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const string &projectName, const Models::DeleteProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MaxCompute project.
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const string &projectName, const Models::DeleteProjectRequest &request);

      /**
       * @summary Deletes a quota plan.
       *
       * @param request DeleteQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQuotaPlanResponse
       */
      Models::DeleteQuotaPlanResponse deleteQuotaPlanWithOptions(const string &nickname, const string &planName, const Models::DeleteQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quota plan.
       *
       * @param request DeleteQuotaPlanRequest
       * @return DeleteQuotaPlanResponse
       */
      Models::DeleteQuotaPlanResponse deleteQuotaPlan(const string &nickname, const string &planName, const Models::DeleteQuotaPlanRequest &request);

      /**
       * @summary GetComputeEffectivePlan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeEffectivePlanResponse
       */
      Models::GetComputeEffectivePlanResponse getComputeEffectivePlanWithOptions(const string &nickname, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetComputeEffectivePlan.
       *
       * @return GetComputeEffectivePlanResponse
       */
      Models::GetComputeEffectivePlanResponse getComputeEffectivePlan(const string &nickname);

      /**
       * @summary Get detailed information of a single compute quota plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeQuotaPlanResponse
       */
      Models::GetComputeQuotaPlanResponse getComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get detailed information of a single compute quota plan.
       *
       * @return GetComputeQuotaPlanResponse
       */
      Models::GetComputeQuotaPlanResponse getComputeQuotaPlan(const string &nickname, const string &planName);

      /**
       * @summary Displays the time-specific configuration of compute quota.
       *
       * @param request GetComputeQuotaScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeQuotaScheduleResponse
       */
      Models::GetComputeQuotaScheduleResponse getComputeQuotaScheduleWithOptions(const string &nickname, const Models::GetComputeQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays the time-specific configuration of compute quota.
       *
       * @param request GetComputeQuotaScheduleRequest
       * @return GetComputeQuotaScheduleResponse
       */
      Models::GetComputeQuotaScheduleResponse getComputeQuotaSchedule(const string &nickname, const Models::GetComputeQuotaScheduleRequest &request);

      /**
       * @summary Queries the basic information about a job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobInfoResponse
       */
      Models::GetJobInfoResponse getJobInfoWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a job.
       *
       * @return GetJobInfoResponse
       */
      Models::GetJobInfoResponse getJobInfo(const string &instanceId);

      /**
       * @summary Performs statistics on all jobs that are complete on a specified day and obtains the total resource usage of each job executor on a daily basis.
       *
       * @param tmpReq GetJobResourceUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResourceUsageResponse
       */
      Models::GetJobResourceUsageResponse getJobResourceUsageWithOptions(const Models::GetJobResourceUsageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs statistics on all jobs that are complete on a specified day and obtains the total resource usage of each job executor on a daily basis.
       *
       * @param request GetJobResourceUsageRequest
       * @return GetJobResourceUsageResponse
       */
      Models::GetJobResourceUsageResponse getJobResourceUsage(const Models::GetJobResourceUsageRequest &request);

      /**
       * @summary GetMmsAsyncTask
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsAsyncTaskResponse
       */
      Models::GetMmsAsyncTaskResponse getMmsAsyncTaskWithOptions(const string &sourceId, const string &asyncTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetMmsAsyncTask
       *
       * @return GetMmsAsyncTaskResponse
       */
      Models::GetMmsAsyncTaskResponse getMmsAsyncTask(const string &sourceId, const string &asyncTaskId);

      /**
       * @summary 获取数据源
       *
       * @param request GetMmsDataSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsDataSourceResponse
       */
      Models::GetMmsDataSourceResponse getMmsDataSourceWithOptions(const string &sourceId, const Models::GetMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据源
       *
       * @param request GetMmsDataSourceRequest
       * @return GetMmsDataSourceResponse
       */
      Models::GetMmsDataSourceResponse getMmsDataSource(const string &sourceId, const Models::GetMmsDataSourceRequest &request);

      /**
       * @summary GetMmsDb
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsDbResponse
       */
      Models::GetMmsDbResponse getMmsDbWithOptions(const string &sourceId, const string &dbId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetMmsDb
       *
       * @return GetMmsDbResponse
       */
      Models::GetMmsDbResponse getMmsDb(const string &sourceId, const string &dbId);

      /**
       * @summary GetMmsFetchMetadataJob
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsFetchMetadataJobResponse
       */
      Models::GetMmsFetchMetadataJobResponse getMmsFetchMetadataJobWithOptions(const string &sourceId, const string &scanId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetMmsFetchMetadataJob
       *
       * @return GetMmsFetchMetadataJobResponse
       */
      Models::GetMmsFetchMetadataJobResponse getMmsFetchMetadataJob(const string &sourceId, const string &scanId);

      /**
       * @summary 获取迁移计划
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsJobResponse
       */
      Models::GetMmsJobResponse getMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取迁移计划
       *
       * @return GetMmsJobResponse
       */
      Models::GetMmsJobResponse getMmsJob(const string &sourceId, const string &jobId);

      /**
       * @summary GetMmsPartition
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsPartitionResponse
       */
      Models::GetMmsPartitionResponse getMmsPartitionWithOptions(const string &sourceId, const string &partitionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetMmsPartition
       *
       * @return GetMmsPartitionResponse
       */
      Models::GetMmsPartitionResponse getMmsPartition(const string &sourceId, const string &partitionId);

      /**
       * @summary GetMmsTable
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsTableResponse
       */
      Models::GetMmsTableResponse getMmsTableWithOptions(const string &sourceId, const string &tableId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetMmsTable
       *
       * @return GetMmsTableResponse
       */
      Models::GetMmsTableResponse getMmsTable(const string &sourceId, const string &tableId);

      /**
       * @summary GetMmsTask
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsTaskResponse
       */
      Models::GetMmsTaskResponse getMmsTaskWithOptions(const string &sourceId, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetMmsTask
       *
       * @return GetMmsTaskResponse
       */
      Models::GetMmsTaskResponse getMmsTask(const string &sourceId, const string &taskId);

      /**
       * @summary Obtains the information about a package.
       *
       * @param request GetPackageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPackageResponse
       */
      Models::GetPackageResponse getPackageWithOptions(const string &projectName, const string &packageName, const Models::GetPackageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about a package.
       *
       * @param request GetPackageRequest
       * @return GetPackageResponse
       */
      Models::GetPackageResponse getPackage(const string &projectName, const string &packageName, const Models::GetPackageRequest &request);

      /**
       * @summary Queries the information about a MaxCompute project.
       *
       * @param request GetProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const string &projectName, const Models::GetProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a MaxCompute project.
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const string &projectName, const Models::GetProjectRequest &request);

      /**
       * @summary Obtains the information about a specified level-1 quota.
       *
       * @param request GetQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuotaWithOptions(const string &nickname, const Models::GetQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about a specified level-1 quota.
       *
       * @param request GetQuotaRequest
       * @return GetQuotaResponse
       */
      Models::GetQuotaResponse getQuota(const string &nickname, const Models::GetQuotaRequest &request);

      /**
       * @summary Obtains the information of a quota plan.
       *
       * @param request GetQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaPlanResponse
       */
      Models::GetQuotaPlanResponse getQuotaPlanWithOptions(const string &nickname, const string &planName, const Models::GetQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information of a quota plan.
       *
       * @param request GetQuotaPlanRequest
       * @return GetQuotaPlanResponse
       */
      Models::GetQuotaPlanResponse getQuotaPlan(const string &nickname, const string &planName, const Models::GetQuotaPlanRequest &request);

      /**
       * @summary Obtains the scheduling plan for a quota plan.
       *
       * @param request GetQuotaScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaScheduleResponse
       */
      Models::GetQuotaScheduleResponse getQuotaScheduleWithOptions(const string &nickname, const Models::GetQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the scheduling plan for a quota plan.
       *
       * @param request GetQuotaScheduleRequest
       * @return GetQuotaScheduleResponse
       */
      Models::GetQuotaScheduleResponse getQuotaSchedule(const string &nickname, const Models::GetQuotaScheduleRequest &request);

      /**
       * @summary Queries quota resource consumption information.
       *
       * @param tmpReq GetQuotaUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaUsageResponse
       */
      Models::GetQuotaUsageResponse getQuotaUsageWithOptions(const string &nickname, const Models::GetQuotaUsageRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quota resource consumption information.
       *
       * @param request GetQuotaUsageRequest
       * @return GetQuotaUsageResponse
       */
      Models::GetQuotaUsageResponse getQuotaUsage(const string &nickname, const Models::GetQuotaUsageRequest &request);

      /**
       * @summary Obtains the ACL-based permissions that is granted to a project-level role.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleAclResponse
       */
      Models::GetRoleAclResponse getRoleAclWithOptions(const string &projectName, const string &roleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the ACL-based permissions that is granted to a project-level role.
       *
       * @return GetRoleAclResponse
       */
      Models::GetRoleAclResponse getRoleAcl(const string &projectName, const string &roleName);

      /**
       * @summary Obtains ACL-based permissions on an object that are granted to a project-level role.
       *
       * @param request GetRoleAclOnObjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleAclOnObjectResponse
       */
      Models::GetRoleAclOnObjectResponse getRoleAclOnObjectWithOptions(const string &projectName, const string &roleName, const Models::GetRoleAclOnObjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains ACL-based permissions on an object that are granted to a project-level role.
       *
       * @param request GetRoleAclOnObjectRequest
       * @return GetRoleAclOnObjectResponse
       */
      Models::GetRoleAclOnObjectResponse getRoleAclOnObject(const string &projectName, const string &roleName, const Models::GetRoleAclOnObjectRequest &request);

      /**
       * @summary Obtains the policy that is attached to a project-level role.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRolePolicyResponse
       */
      Models::GetRolePolicyResponse getRolePolicyWithOptions(const string &projectName, const string &roleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the policy that is attached to a project-level role.
       *
       * @return GetRolePolicyResponse
       */
      Models::GetRolePolicyResponse getRolePolicy(const string &projectName, const string &roleName);

      /**
       * @summary Obtains the running state data of jobs that are in the running state in a specified period of time.
       *
       * @param tmpReq GetRunningJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRunningJobsResponse
       */
      Models::GetRunningJobsResponse getRunningJobsWithOptions(const Models::GetRunningJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the running state data of jobs that are in the running state in a specified period of time.
       *
       * @param request GetRunningJobsRequest
       * @return GetRunningJobsResponse
       */
      Models::GetRunningJobsResponse getRunningJobs(const Models::GetRunningJobsRequest &request);

      /**
       * @param request GetStorageAmountSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageAmountSummaryResponse
       */
      Models::GetStorageAmountSummaryResponse getStorageAmountSummaryWithOptions(const Models::GetStorageAmountSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetStorageAmountSummaryRequest
       * @return GetStorageAmountSummaryResponse
       */
      Models::GetStorageAmountSummaryResponse getStorageAmountSummary(const Models::GetStorageAmountSummaryRequest &request);

      /**
       * @param request GetStorageSizeSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageSizeSummaryResponse
       */
      Models::GetStorageSizeSummaryResponse getStorageSizeSummaryWithOptions(const Models::GetStorageSizeSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetStorageSizeSummaryRequest
       * @return GetStorageSizeSummaryResponse
       */
      Models::GetStorageSizeSummaryResponse getStorageSizeSummary(const Models::GetStorageSizeSummaryRequest &request);

      /**
       * @param tmpReq GetStorageSummaryComparedRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageSummaryComparedResponse
       */
      Models::GetStorageSummaryComparedResponse getStorageSummaryComparedWithOptions(const string &type, const Models::GetStorageSummaryComparedRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetStorageSummaryComparedRequest
       * @return GetStorageSummaryComparedResponse
       */
      Models::GetStorageSummaryComparedResponse getStorageSummaryCompared(const string &type, const Models::GetStorageSummaryComparedRequest &request);

      /**
       * @summary Views the information about MaxCompute internal tables, views, external tables, clustered tables, or transactional tables.
       *
       * @param request GetTableInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableInfoResponse
       */
      Models::GetTableInfoResponse getTableInfoWithOptions(const string &projectName, const string &tableName, const Models::GetTableInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views the information about MaxCompute internal tables, views, external tables, clustered tables, or transactional tables.
       *
       * @param request GetTableInfoRequest
       * @return GetTableInfoResponse
       */
      Models::GetTableInfoResponse getTableInfo(const string &projectName, const string &tableName, const Models::GetTableInfoRequest &request);

      /**
       * @summary Obtains the trusted projects of the current project.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrustedProjectsResponse
       */
      Models::GetTrustedProjectsResponse getTrustedProjectsWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the trusted projects of the current project.
       *
       * @return GetTrustedProjectsResponse
       */
      Models::GetTrustedProjectsResponse getTrustedProjects(const string &projectName);

      /**
       * @summary Terminates a running job.
       *
       * @param request KillJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillJobsResponse
       */
      Models::KillJobsResponse killJobsWithOptions(const Models::KillJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a running job.
       *
       * @param request KillJobsRequest
       * @return KillJobsResponse
       */
      Models::KillJobsResponse killJobs(const Models::KillJobsRequest &request);

      /**
       * @summary Get compute usage of pay-as-you-go jobs.
       *
       * @param request ListComputeMetricsByInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeMetricsByInstanceResponse
       */
      Models::ListComputeMetricsByInstanceResponse listComputeMetricsByInstanceWithOptions(const Models::ListComputeMetricsByInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get compute usage of pay-as-you-go jobs.
       *
       * @param request ListComputeMetricsByInstanceRequest
       * @return ListComputeMetricsByInstanceResponse
       */
      Models::ListComputeMetricsByInstanceResponse listComputeMetricsByInstance(const Models::ListComputeMetricsByInstanceRequest &request);

      /**
       * @summary Get computeQuotaPlan list.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeQuotaPlanResponse
       */
      Models::ListComputeQuotaPlanResponse listComputeQuotaPlanWithOptions(const string &nickname, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get computeQuotaPlan list.
       *
       * @return ListComputeQuotaPlanResponse
       */
      Models::ListComputeQuotaPlanResponse listComputeQuotaPlan(const string &nickname);

      /**
       * @summary Obtains functions in a MaxCompute project.
       *
       * @param request ListFunctionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctionsWithOptions(const string &projectName, const Models::ListFunctionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains functions in a MaxCompute project.
       *
       * @param request ListFunctionsRequest
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctions(const string &projectName, const Models::ListFunctionsRequest &request);

      /**
       * @summary Views a list of jobs.
       *
       * @param request ListJobInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobInfosResponse
       */
      Models::ListJobInfosResponse listJobInfosWithOptions(const Models::ListJobInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views a list of jobs.
       *
       * @param request ListJobInfosRequest
       * @return ListJobInfosResponse
       */
      Models::ListJobInfosResponse listJobInfos(const Models::ListJobInfosRequest &request);

      /**
       * @summary Retrieve performance metrics for completed jobs.
       *
       * @param request ListJobMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobMetricResponse
       */
      Models::ListJobMetricResponse listJobMetricWithOptions(const Models::ListJobMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve performance metrics for completed jobs.
       *
       * @param request ListJobMetricRequest
       * @return ListJobMetricResponse
       */
      Models::ListJobMetricResponse listJobMetric(const Models::ListJobMetricRequest &request);

      /**
       * @summary Views a list of job snapshot data at a specific point in time.
       *
       * @param request ListJobSnapshotInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobSnapshotInfosResponse
       */
      Models::ListJobSnapshotInfosResponse listJobSnapshotInfosWithOptions(const Models::ListJobSnapshotInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views a list of job snapshot data at a specific point in time.
       *
       * @param request ListJobSnapshotInfosRequest
       * @return ListJobSnapshotInfosResponse
       */
      Models::ListJobSnapshotInfosResponse listJobSnapshotInfos(const Models::ListJobSnapshotInfosRequest &request);

      /**
       * @summary ListMmsDataSources
       *
       * @param request ListMmsDataSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsDataSourcesResponse
       */
      Models::ListMmsDataSourcesResponse listMmsDataSourcesWithOptions(const Models::ListMmsDataSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListMmsDataSources
       *
       * @param request ListMmsDataSourcesRequest
       * @return ListMmsDataSourcesResponse
       */
      Models::ListMmsDataSourcesResponse listMmsDataSources(const Models::ListMmsDataSourcesRequest &request);

      /**
       * @summary 获取一个数据源内“库”列表
       *
       * @param tmpReq ListMmsDbsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsDbsResponse
       */
      Models::ListMmsDbsResponse listMmsDbsWithOptions(const string &sourceId, const Models::ListMmsDbsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一个数据源内“库”列表
       *
       * @param request ListMmsDbsRequest
       * @return ListMmsDbsResponse
       */
      Models::ListMmsDbsResponse listMmsDbs(const string &sourceId, const Models::ListMmsDbsRequest &request);

      /**
       * @summary ListMmsJobs
       *
       * @param request ListMmsJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsJobsResponse
       */
      Models::ListMmsJobsResponse listMmsJobsWithOptions(const string &sourceId, const Models::ListMmsJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListMmsJobs
       *
       * @param request ListMmsJobsRequest
       * @return ListMmsJobsResponse
       */
      Models::ListMmsJobsResponse listMmsJobs(const string &sourceId, const Models::ListMmsJobsRequest &request);

      /**
       * @summary 获取元数据-分区
       *
       * @param tmpReq ListMmsPartitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsPartitionsResponse
       */
      Models::ListMmsPartitionsResponse listMmsPartitionsWithOptions(const string &sourceId, const Models::ListMmsPartitionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取元数据-分区
       *
       * @param request ListMmsPartitionsRequest
       * @return ListMmsPartitionsResponse
       */
      Models::ListMmsPartitionsResponse listMmsPartitions(const string &sourceId, const Models::ListMmsPartitionsRequest &request);

      /**
       * @summary ListMmsTables
       *
       * @param tmpReq ListMmsTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsTablesResponse
       */
      Models::ListMmsTablesResponse listMmsTablesWithOptions(const string &sourceId, const Models::ListMmsTablesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListMmsTables
       *
       * @param request ListMmsTablesRequest
       * @return ListMmsTablesResponse
       */
      Models::ListMmsTablesResponse listMmsTables(const string &sourceId, const Models::ListMmsTablesRequest &request);

      /**
       * @summary ListMmsTaskLogs
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsTaskLogsResponse
       */
      Models::ListMmsTaskLogsResponse listMmsTaskLogsWithOptions(const string &sourceId, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListMmsTaskLogs
       *
       * @return ListMmsTaskLogsResponse
       */
      Models::ListMmsTaskLogsResponse listMmsTaskLogs(const string &sourceId, const string &taskId);

      /**
       * @summary ListMmsTasks
       *
       * @param request ListMmsTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsTasksResponse
       */
      Models::ListMmsTasksResponse listMmsTasksWithOptions(const string &sourceId, const Models::ListMmsTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListMmsTasks
       *
       * @param request ListMmsTasksRequest
       * @return ListMmsTasksResponse
       */
      Models::ListMmsTasksResponse listMmsTasks(const string &sourceId, const Models::ListMmsTasksRequest &request);

      /**
       * @summary Queries the packages in a MaxCompute project.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPackagesResponse
       */
      Models::ListPackagesResponse listPackagesWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the packages in a MaxCompute project.
       *
       * @return ListPackagesResponse
       */
      Models::ListPackagesResponse listPackages(const string &projectName);

      /**
       * @summary Queries a list of users in a project.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectUsersResponse
       */
      Models::ListProjectUsersResponse listProjectUsersWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of users in a project.
       *
       * @return ListProjectUsersResponse
       */
      Models::ListProjectUsersResponse listProjectUsers(const string &projectName);

      /**
       * @summary Queries a list of MaxCompute projects.
       *
       * @param request ListProjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of MaxCompute projects.
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary Queries quotas.
       *
       * @param request ListQuotasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotasWithOptions(const Models::ListQuotasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quotas.
       *
       * @param request ListQuotasRequest
       * @return ListQuotasResponse
       */
      Models::ListQuotasResponse listQuotas(const Models::ListQuotasRequest &request);

      /**
       * @summary Obtains quota plans.
       *
       * @param request ListQuotasPlansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotasPlansResponse
       */
      Models::ListQuotasPlansResponse listQuotasPlansWithOptions(const string &nickname, const Models::ListQuotasPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains quota plans.
       *
       * @param request ListQuotasPlansRequest
       * @return ListQuotasPlansResponse
       */
      Models::ListQuotasPlansResponse listQuotasPlans(const string &nickname, const Models::ListQuotasPlansRequest &request);

      /**
       * @summary Obtains resources in a MaxCompute project.
       *
       * @param request ListResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResourcesWithOptions(const string &projectName, const Models::ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains resources in a MaxCompute project.
       *
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const string &projectName, const Models::ListResourcesRequest &request);

      /**
       * @summary Obtains MaxCompute project-level roles.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains MaxCompute project-level roles.
       *
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const string &projectName);

      /**
       * @summary Queries the storage details of a specific partition in a partitioned table in a MaxCompute project.
       *
       * @param tmpReq ListStoragePartitionsInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStoragePartitionsInfoResponse
       */
      Models::ListStoragePartitionsInfoResponse listStoragePartitionsInfoWithOptions(const string &project, const string &table, const Models::ListStoragePartitionsInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage details of a specific partition in a partitioned table in a MaxCompute project.
       *
       * @param request ListStoragePartitionsInfoRequest
       * @return ListStoragePartitionsInfoResponse
       */
      Models::ListStoragePartitionsInfoResponse listStoragePartitionsInfo(const string &project, const string &table, const Models::ListStoragePartitionsInfoRequest &request);

      /**
       * @param request ListStorageProjectsInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStorageProjectsInfoResponse
       */
      Models::ListStorageProjectsInfoResponse listStorageProjectsInfoWithOptions(const Models::ListStorageProjectsInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListStorageProjectsInfoRequest
       * @return ListStorageProjectsInfoResponse
       */
      Models::ListStorageProjectsInfoResponse listStorageProjectsInfo(const Models::ListStorageProjectsInfoRequest &request);

      /**
       * @summary Queries the table storage details of a MaxCompute project.
       *
       * @param tmpReq ListStorageTablesInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStorageTablesInfoResponse
       */
      Models::ListStorageTablesInfoResponse listStorageTablesInfoWithOptions(const string &project, const Models::ListStorageTablesInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the table storage details of a MaxCompute project.
       *
       * @param request ListStorageTablesInfoRequest
       * @return ListStorageTablesInfoResponse
       */
      Models::ListStorageTablesInfoResponse listStorageTablesInfo(const string &project, const Models::ListStorageTablesInfoRequest &request);

      /**
       * @summary Obtains tables in a MaxCompute project.
       *
       * @param request ListTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const string &projectName, const Models::ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains tables in a MaxCompute project.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const string &projectName, const Models::ListTablesRequest &request);

      /**
       * @summary Displays the time-specific configuration of an exclusive resource group for Tunnel (referred to as Tunnel quota).
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTunnelQuotaTimerResponse
       */
      Models::ListTunnelQuotaTimerResponse listTunnelQuotaTimerWithOptions(const string &nickname, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays the time-specific configuration of an exclusive resource group for Tunnel (referred to as Tunnel quota).
       *
       * @return ListTunnelQuotaTimerResponse
       */
      Models::ListTunnelQuotaTimerResponse listTunnelQuotaTimer(const string &nickname);

      /**
       * @summary Queries a list of all users under a tenant.
       *
       * @param request ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of all users under a tenant.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Obtains information about the users who are assigned a project-level role.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersByRoleResponse
       */
      Models::ListUsersByRoleResponse listUsersByRoleWithOptions(const string &projectName, const string &roleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains information about the users who are assigned a project-level role.
       *
       * @return ListUsersByRoleResponse
       */
      Models::ListUsersByRoleResponse listUsersByRole(const string &projectName, const string &roleName);

      /**
       * @summary Queries the information about a specified level-1 quota group.
       *
       * @param request QueryQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryQuotaResponse
       */
      Models::QueryQuotaResponse queryQuotaWithOptions(const string &nickname, const Models::QueryQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified level-1 quota group.
       *
       * @param request QueryQuotaRequest
       * @return QueryQuotaResponse
       */
      Models::QueryQuotaResponse queryQuota(const string &nickname, const Models::QueryQuotaRequest &request);

      /**
       * @summary 查询quota的资源使用信息
       *
       * @param request QueryQuotaMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryQuotaMetricResponse
       */
      Models::QueryQuotaMetricResponse queryQuotaMetricWithOptions(const string &metric, const Models::QueryQuotaMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询quota的资源使用信息
       *
       * @param request QueryQuotaMetricRequest
       * @return QueryQuotaMetricResponse
       */
      Models::QueryQuotaMetricResponse queryQuotaMetric(const string &metric, const Models::QueryQuotaMetricRequest &request);

      /**
       * @summary 查看存储数据的时序指标
       *
       * @param request QueryStorageMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryStorageMetricResponse
       */
      Models::QueryStorageMetricResponse queryStorageMetricWithOptions(const string &metric, const Models::QueryStorageMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看存储数据的时序指标
       *
       * @param request QueryStorageMetricRequest
       * @return QueryStorageMetricResponse
       */
      Models::QueryStorageMetricResponse queryStorageMetric(const string &metric, const Models::QueryStorageMetricRequest &request);

      /**
       * @summary 查询tunnel资源使用信息
       *
       * @param request QueryTunnelMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTunnelMetricResponse
       */
      Models::QueryTunnelMetricResponse queryTunnelMetricWithOptions(const string &metric, const Models::QueryTunnelMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询tunnel资源使用信息
       *
       * @param request QueryTunnelMetricRequest
       * @return QueryTunnelMetricResponse
       */
      Models::QueryTunnelMetricResponse queryTunnelMetric(const string &metric, const Models::QueryTunnelMetricRequest &request);

      /**
       * @summary 查询tunnel资源使用详情
       *
       * @param request QueryTunnelMetricDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTunnelMetricDetailResponse
       */
      Models::QueryTunnelMetricDetailResponse queryTunnelMetricDetailWithOptions(const string &metric, const Models::QueryTunnelMetricDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询tunnel资源使用详情
       *
       * @param request QueryTunnelMetricDetailRequest
       * @return QueryTunnelMetricDetailResponse
       */
      Models::QueryTunnelMetricDetailResponse queryTunnelMetricDetail(const string &metric, const Models::QueryTunnelMetricDetailRequest &request);

      /**
       * @summary RetryMmsJob
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryMmsJobResponse
       */
      Models::RetryMmsJobResponse retryMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RetryMmsJob
       *
       * @return RetryMmsJobResponse
       */
      Models::RetryMmsJobResponse retryMmsJob(const string &sourceId, const string &jobId);

      /**
       * @summary StartMmsJob
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMmsJobResponse
       */
      Models::StartMmsJobResponse startMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StartMmsJob
       *
       * @return StartMmsJobResponse
       */
      Models::StartMmsJobResponse startMmsJob(const string &sourceId, const string &jobId);

      /**
       * @summary StopMmsJob
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMmsJobResponse
       */
      Models::StopMmsJobResponse stopMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StopMmsJob
       *
       * @return StopMmsJobResponse
       */
      Models::StopMmsJobResponse stopMmsJob(const string &sourceId, const string &jobId);

      /**
       * @param request SumStorageMetricsByDateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SumStorageMetricsByDateResponse
       */
      Models::SumStorageMetricsByDateResponse sumStorageMetricsByDateWithOptions(const Models::SumStorageMetricsByDateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SumStorageMetricsByDateRequest
       * @return SumStorageMetricsByDateResponse
       */
      Models::SumStorageMetricsByDateResponse sumStorageMetricsByDate(const Models::SumStorageMetricsByDateRequest &request);

      /**
       * @summary Update the ComputeQuotaPlan.
       *
       * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
       *
       * @param request UpdateComputeQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeQuotaPlanResponse
       */
      Models::UpdateComputeQuotaPlanResponse updateComputeQuotaPlanWithOptions(const string &nickname, const Models::UpdateComputeQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the ComputeQuotaPlan.
       *
       * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
       *
       * @param request UpdateComputeQuotaPlanRequest
       * @return UpdateComputeQuotaPlanResponse
       */
      Models::UpdateComputeQuotaPlanResponse updateComputeQuotaPlan(const string &nickname, const Models::UpdateComputeQuotaPlanRequest &request);

      /**
       * @summary Update the time-based plan for computing quota.
       *
       * @description Please ensure that before using this interface, you have fully understood the<props="china">[Pricing and Billing](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[Pricing and Billing](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
       *
       * @param request UpdateComputeQuotaScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeQuotaScheduleResponse
       */
      Models::UpdateComputeQuotaScheduleResponse updateComputeQuotaScheduleWithOptions(const string &nickname, const Models::UpdateComputeQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the time-based plan for computing quota.
       *
       * @description Please ensure that before using this interface, you have fully understood the<props="china">[Pricing and Billing](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[Pricing and Billing](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
       *
       * @param request UpdateComputeQuotaScheduleRequest
       * @return UpdateComputeQuotaScheduleResponse
       */
      Models::UpdateComputeQuotaScheduleResponse updateComputeQuotaSchedule(const string &nickname, const Models::UpdateComputeQuotaScheduleRequest &request);

      /**
       * @summary Update the basic configuration of the calculation quota, including adding or deleting the sub quota, modifying the basic properties of the secondary quota, and the CU configuration of the effective quota plan.
       *
       * @param request UpdateComputeSubQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeSubQuotaResponse
       */
      Models::UpdateComputeSubQuotaResponse updateComputeSubQuotaWithOptions(const string &nickname, const Models::UpdateComputeSubQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the basic configuration of the calculation quota, including adding or deleting the sub quota, modifying the basic properties of the secondary quota, and the CU configuration of the effective quota plan.
       *
       * @param request UpdateComputeSubQuotaRequest
       * @return UpdateComputeSubQuotaResponse
       */
      Models::UpdateComputeSubQuotaResponse updateComputeSubQuota(const string &nickname, const Models::UpdateComputeSubQuotaRequest &request);

      /**
       * @summary 更新数据源配置、名称，启/停数据源实例
       *
       * @param request UpdateMmsDataSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMmsDataSourceResponse
       */
      Models::UpdateMmsDataSourceResponse updateMmsDataSourceWithOptions(const string &sourceId, const Models::UpdateMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据源配置、名称，启/停数据源实例
       *
       * @param request UpdateMmsDataSourceRequest
       * @return UpdateMmsDataSourceResponse
       */
      Models::UpdateMmsDataSourceResponse updateMmsDataSource(const string &sourceId, const Models::UpdateMmsDataSourceRequest &request);

      /**
       * @summary Updates the objects in a package and projects in which the package can be installed.
       *
       * @param request UpdatePackageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePackageResponse
       */
      Models::UpdatePackageResponse updatePackageWithOptions(const string &projectName, const string &packageName, const Models::UpdatePackageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the objects in a package and projects in which the package can be installed.
       *
       * @param request UpdatePackageRequest
       * @return UpdatePackageResponse
       */
      Models::UpdatePackageResponse updatePackage(const string &projectName, const string &packageName, const Models::UpdatePackageRequest &request);

      /**
       * @summary Update Project Basic Information
       *
       * @param request UpdateProjectBasicMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectBasicMetaResponse
       */
      Models::UpdateProjectBasicMetaResponse updateProjectBasicMetaWithOptions(const string &projectName, const Models::UpdateProjectBasicMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Project Basic Information
       *
       * @param request UpdateProjectBasicMetaRequest
       * @return UpdateProjectBasicMetaResponse
       */
      Models::UpdateProjectBasicMetaResponse updateProjectBasicMeta(const string &projectName, const Models::UpdateProjectBasicMetaRequest &request);

      /**
       * @summary Modify Default Project Compute Quota
       *
       * @param request UpdateProjectDefaultQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectDefaultQuotaResponse
       */
      Models::UpdateProjectDefaultQuotaResponse updateProjectDefaultQuotaWithOptions(const string &projectName, const Models::UpdateProjectDefaultQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Default Project Compute Quota
       *
       * @param request UpdateProjectDefaultQuotaRequest
       * @return UpdateProjectDefaultQuotaResponse
       */
      Models::UpdateProjectDefaultQuotaResponse updateProjectDefaultQuota(const string &projectName, const Models::UpdateProjectDefaultQuotaRequest &request);

      /**
       * @summary Modifies the IP address whitelist of a MaxCompute project.
       *
       * @param request UpdateProjectIpWhiteListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectIpWhiteListResponse
       */
      Models::UpdateProjectIpWhiteListResponse updateProjectIpWhiteListWithOptions(const string &projectName, const Models::UpdateProjectIpWhiteListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist of a MaxCompute project.
       *
       * @param request UpdateProjectIpWhiteListRequest
       * @return UpdateProjectIpWhiteListResponse
       */
      Models::UpdateProjectIpWhiteListResponse updateProjectIpWhiteList(const string &projectName, const Models::UpdateProjectIpWhiteListRequest &request);

      /**
       * @summary 将project的二层模型升级为三层模型
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectModelTierResponse
       */
      Models::UpdateProjectModelTierResponse updateProjectModelTierWithOptions(const string &projectName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将project的二层模型升级为三层模型
       *
       * @return UpdateProjectModelTierResponse
       */
      Models::UpdateProjectModelTierResponse updateProjectModelTier(const string &projectName);

      /**
       * @summary Updates a quota plan.
       *
       * @param request UpdateQuotaPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaPlanResponse
       */
      Models::UpdateQuotaPlanResponse updateQuotaPlanWithOptions(const string &nickname, const string &planName, const Models::UpdateQuotaPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a quota plan.
       *
       * @param request UpdateQuotaPlanRequest
       * @return UpdateQuotaPlanResponse
       */
      Models::UpdateQuotaPlanResponse updateQuotaPlan(const string &nickname, const string &planName, const Models::UpdateQuotaPlanRequest &request);

      /**
       * @summary Updates the scheduling plan for a quota plan.
       *
       * @param request UpdateQuotaScheduleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaScheduleResponse
       */
      Models::UpdateQuotaScheduleResponse updateQuotaScheduleWithOptions(const string &nickname, const Models::UpdateQuotaScheduleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the scheduling plan for a quota plan.
       *
       * @param request UpdateQuotaScheduleRequest
       * @return UpdateQuotaScheduleResponse
       */
      Models::UpdateQuotaScheduleResponse updateQuotaSchedule(const string &nickname, const Models::UpdateQuotaScheduleRequest &request);

      /**
       * @summary Updates the time-specific configuration of an exclusive resource group for Tunnel (referred to as Tunnel quota).
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing and prices](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of Tunnel quotas and elastically reserved computing resources.
       *
       * @param request UpdateTunnelQuotaTimerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTunnelQuotaTimerResponse
       */
      Models::UpdateTunnelQuotaTimerResponse updateTunnelQuotaTimerWithOptions(const string &nickname, const Models::UpdateTunnelQuotaTimerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the time-specific configuration of an exclusive resource group for Tunnel (referred to as Tunnel quota).
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing and prices](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of Tunnel quotas and elastically reserved computing resources.
       *
       * @param request UpdateTunnelQuotaTimerRequest
       * @return UpdateTunnelQuotaTimerResponse
       */
      Models::UpdateTunnelQuotaTimerResponse updateTunnelQuotaTimer(const string &nickname, const Models::UpdateTunnelQuotaTimerRequest &request);

      /**
       * @summary Add or remove users from a project role.
       *
       * @param request UpdateUsersToRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUsersToRoleResponse
       */
      Models::UpdateUsersToRoleResponse updateUsersToRoleWithOptions(const string &projectName, const string &roleName, const Models::UpdateUsersToRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add or remove users from a project role.
       *
       * @param request UpdateUsersToRoleRequest
       * @return UpdateUsersToRoleResponse
       */
      Models::UpdateUsersToRoleResponse updateUsersToRole(const string &projectName, const string &roleName, const Models::UpdateUsersToRoleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
