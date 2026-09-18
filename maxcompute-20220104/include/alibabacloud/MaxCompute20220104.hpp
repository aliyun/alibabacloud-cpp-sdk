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
       * @summary Creates a quota plan.
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
       * @summary Creates a quota plan.
       *
       * @description Please ensure that before using this interface, you have fully understood the <props="china">[Pricing and Charges](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[Pricing and Charges](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) of MaxCompute Elastic Reserved CU.
       *
       * @param request CreateComputeQuotaPlanRequest
       * @return CreateComputeQuotaPlanResponse
       */
      Models::CreateComputeQuotaPlanResponse createComputeQuotaPlan(const string &nickname, const Models::CreateComputeQuotaPlanRequest &request);

      /**
       * @summary Creates a data source to perform data migration from the data source to MaxCompute through Migration Service (MMA 4.0).
       *
       * @param request CreateMmsDataSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmsDataSourceResponse
       */
      Models::CreateMmsDataSourceResponse createMmsDataSourceWithOptions(const Models::CreateMmsDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data source to perform data migration from the data source to MaxCompute through Migration Service (MMA 4.0).
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
       * @summary CreateMmsTimer
       *
       * @description Before you call this API, make sure you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for dedicated resource groups and elastic reserved computing resources in the Data Transmission Service.
       *
       * @param request CreateMmsTimerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmsTimerResponse
       */
      Models::CreateMmsTimerResponse createMmsTimerWithOptions(const string &sourceId, const Models::CreateMmsTimerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateMmsTimer
       *
       * @description Before you call this API, make sure you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for dedicated resource groups and elastic reserved computing resources in the Data Transmission Service.
       *
       * @param request CreateMmsTimerRequest
       * @return CreateMmsTimerResponse
       */
      Models::CreateMmsTimerResponse createMmsTimer(const string &sourceId, const Models::CreateMmsTimerRequest &request);

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
       * @summary Creates a quota. When you activate MaxCompute for the first time, you must first create a pay-as-you-go quota. If you create a subscription quota, automatic payment is deducted.
       *
       * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/product/maxcompute/pricing?spm=5176.30275541.J_ZGek9Blx07Hclc3Ddt9dg.2.19502f3dPPfezu&scm=20140722.S_card@@%E4%BA%A7%E5%93%81@@143540.S_new~UND~card.ID_card@@%E4%BA%A7%E5%93%81@@143540-RL_MaxCompute-LOC_2024SPSearchCard-OR_ser-PAR1_213c994b17738148516424527d0d07-V_4-RE_new9-P0_0-P1_0) of MaxCompute.**
       *
       * @param request CreateQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaResponse
       */
      Models::CreateQuotaResponse createQuotaWithOptions(const Models::CreateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quota. When you activate MaxCompute for the first time, you must first create a pay-as-you-go quota. If you create a subscription quota, automatic payment is deducted.
       *
       * @description **Before using this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/product/maxcompute/pricing?spm=5176.30275541.J_ZGek9Blx07Hclc3Ddt9dg.2.19502f3dPPfezu&scm=20140722.S_card@@%E4%BA%A7%E5%93%81@@143540.S_new~UND~card.ID_card@@%E4%BA%A7%E5%93%81@@143540-RL_MaxCompute-LOC_2024SPSearchCard-OR_ser-PAR1_213c994b17738148516424527d0d07-V_4-RE_new9-P0_0-P1_0) of MaxCompute.**
       *
       * @param request CreateQuotaRequest
       * @return CreateQuotaResponse
       */
      Models::CreateQuotaResponse createQuota(const Models::CreateQuotaRequest &request);

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
       * @summary Deletes a MaxCompute quota plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeQuotaPlanResponse
       */
      Models::DeleteComputeQuotaPlanResponse deleteComputeQuotaPlanWithOptions(const string &nickname, const string &planName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MaxCompute quota plan.
       *
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
       * @summary Deletes a timer from a specified data source.
       *
       * @description Before you call this operation, ensure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for exclusive resource groups and elastic reserved computing resources of the Data Transfer Service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMmsTimerResponse
       */
      Models::DeleteMmsTimerResponse deleteMmsTimerWithOptions(const string &sourceId, const string &timerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a timer from a specified data source.
       *
       * @description Before you call this operation, ensure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for exclusive resource groups and elastic reserved computing resources of the Data Transfer Service.
       *
       * @return DeleteMmsTimerResponse
       */
      Models::DeleteMmsTimerResponse deleteMmsTimer(const string &sourceId, const string &timerId);

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
       * @summary Deletes a project-level role in MaxCompute.
       *
       * @param request DeleteRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const string &projectName, const string &roleName, const Models::DeleteRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a project-level role in MaxCompute.
       *
       * @param request DeleteRoleRequest
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const string &projectName, const string &roleName, const Models::DeleteRoleRequest &request);

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
       * @summary Queries basic information about a job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobInfoResponse
       */
      Models::GetJobInfoResponse getJobInfoWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries basic information about a job.
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
       * @summary Retrieves a single MMA asynchronous task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsAsyncTaskResponse
       */
      Models::GetMmsAsyncTaskResponse getMmsAsyncTaskWithOptions(const string &sourceId, const string &asyncTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a single MMA asynchronous task.
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
       * @summary Retrieves the details of a single MMA migration plan.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsJobResponse
       */
      Models::GetMmsJobResponse getMmsJobWithOptions(const string &sourceId, const string &jobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a single MMA migration plan.
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
       * @summary GetMmsTimer
       *
       * @description Before using this API, review the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for dedicated resource groups and elastic reserved computing resources used for data transfer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMmsTimerResponse
       */
      Models::GetMmsTimerResponse getMmsTimerWithOptions(const string &sourceId, const string &timerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetMmsTimer
       *
       * @description Before using this API, review the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for dedicated resource groups and elastic reserved computing resources used for data transfer.
       *
       * @return GetMmsTimerResponse
       */
      Models::GetMmsTimerResponse getMmsTimer(const string &sourceId, const string &timerId);

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
       * @summary Queries the basic information of a MaxCompute project.
       *
       * @param request GetProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const string &projectName, const Models::GetProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of a MaxCompute project.
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
       * @summary Retrieves the total storage information.
       *
       * @param request GetStorageAmountSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageAmountSummaryResponse
       */
      Models::GetStorageAmountSummaryResponse getStorageAmountSummaryWithOptions(const Models::GetStorageAmountSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the total storage information.
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
       * @summary Lists job compute usage at the instance level.
       *
       * @param request ListComputeMetricsByInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeMetricsByInstanceResponse
       */
      Models::ListComputeMetricsByInstanceResponse listComputeMetricsByInstanceWithOptions(const Models::ListComputeMetricsByInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists job compute usage at the instance level.
       *
       * @param request ListComputeMetricsByInstanceRequest
       * @return ListComputeMetricsByInstanceResponse
       */
      Models::ListComputeMetricsByInstanceResponse listComputeMetricsByInstance(const Models::ListComputeMetricsByInstanceRequest &request);

      /**
       * @summary View detailed compute usage for jobs by Signature.
       *
       * @description Gets job details by signature.
       *
       * @param request ListComputeMetricsBySignatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeMetricsBySignatureResponse
       */
      Models::ListComputeMetricsBySignatureResponse listComputeMetricsBySignatureWithOptions(const Models::ListComputeMetricsBySignatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View detailed compute usage for jobs by Signature.
       *
       * @description Gets job details by signature.
       *
       * @param request ListComputeMetricsBySignatureRequest
       * @return ListComputeMetricsBySignatureResponse
       */
      Models::ListComputeMetricsBySignatureResponse listComputeMetricsBySignature(const Models::ListComputeMetricsBySignatureRequest &request);

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
       * @summary Retrieves a list of projects for cost analysis over a specified time period.
       *
       * @description Retrieves the projects for which cost analysis is required.
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of projects for cost analysis over a specified time period.
       *
       * @description Retrieves the projects for which cost analysis is required.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the list of jobs.
       *
       * @param request ListJobInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobInfosResponse
       */
      Models::ListJobInfosResponse listJobInfosWithOptions(const Models::ListJobInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of jobs.
       *
       * @param request ListJobInfosRequest
       * @return ListJobInfosResponse
       */
      Models::ListJobInfosResponse listJobInfos(const Models::ListJobInfosRequest &request);

      /**
       * @summary Queries a performance metric of the job that is complete.
       *
       * @param request ListJobMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobMetricResponse
       */
      Models::ListJobMetricResponse listJobMetricWithOptions(const Models::ListJobMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a performance metric of the job that is complete.
       *
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
       * @summary Lists the configuration items for a specified data source type.
       *
       * @description Before calling this operation, ensure you understand the <props="china">[billing methods and price](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[billing methods and price](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) for MaxCompute Reserved CUs.
       *
       * @param request ListMmsDataSourceConfigItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsDataSourceConfigItemsResponse
       */
      Models::ListMmsDataSourceConfigItemsResponse listMmsDataSourceConfigItemsWithOptions(const Models::ListMmsDataSourceConfigItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the configuration items for a specified data source type.
       *
       * @description Before calling this operation, ensure you understand the <props="china">[billing methods and price](https://help.aliyun.com/zh/maxcompute/product-overview/computing-pricing-1)
       * <props="intl">[billing methods and price](https://www.alibabacloud.com/help/maxcompute/product-overview/computing-pricing-1) for MaxCompute Reserved CUs.
       *
       * @param request ListMmsDataSourceConfigItemsRequest
       * @return ListMmsDataSourceConfigItemsResponse
       */
      Models::ListMmsDataSourceConfigItemsResponse listMmsDataSourceConfigItems(const Models::ListMmsDataSourceConfigItemsRequest &request);

      /**
       * @summary MaxCompute Migration Assist (MMA) data sources
       *
       * @param request ListMmsDataSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsDataSourcesResponse
       */
      Models::ListMmsDataSourcesResponse listMmsDataSourcesWithOptions(const Models::ListMmsDataSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary MaxCompute Migration Assist (MMA) data sources
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
       * @summary Retrieves a list of data migration tasks.
       *
       * @param request ListMmsTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsTasksResponse
       */
      Models::ListMmsTasksResponse listMmsTasksWithOptions(const string &sourceId, const Models::ListMmsTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data migration tasks.
       *
       * @param request ListMmsTasksRequest
       * @return ListMmsTasksResponse
       */
      Models::ListMmsTasksResponse listMmsTasks(const string &sourceId, const Models::ListMmsTasksRequest &request);

      /**
       * @summary Lists the logs of a scheduled task for a specific data source.
       *
       * @description Before calling this operation, ensure you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for the data transfer service, exclusive resource groups, and elastic reserved computing resources.
       *
       * @param request ListMmsTimerLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsTimerLogsResponse
       */
      Models::ListMmsTimerLogsResponse listMmsTimerLogsWithOptions(const string &sourceId, const string &timerId, const Models::ListMmsTimerLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the logs of a scheduled task for a specific data source.
       *
       * @description Before calling this operation, ensure you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for the data transfer service, exclusive resource groups, and elastic reserved computing resources.
       *
       * @param request ListMmsTimerLogsRequest
       * @return ListMmsTimerLogsResponse
       */
      Models::ListMmsTimerLogsResponse listMmsTimerLogs(const string &sourceId, const string &timerId, const Models::ListMmsTimerLogsRequest &request);

      /**
       * @summary Lists the timers for a specified data source.
       *
       * @description Before calling this operation, ensure you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for exclusive resource groups and elastic reserved computing resources for Data Transmission Service.
       *
       * @param request ListMmsTimersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmsTimersResponse
       */
      Models::ListMmsTimersResponse listMmsTimersWithOptions(const string &sourceId, const Models::ListMmsTimersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the timers for a specified data source.
       *
       * @description Before calling this operation, ensure you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for exclusive resource groups and elastic reserved computing resources for Data Transmission Service.
       *
       * @param request ListMmsTimersRequest
       * @return ListMmsTimersResponse
       */
      Models::ListMmsTimersResponse listMmsTimers(const string &sourceId, const Models::ListMmsTimersRequest &request);

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
       * @summary Retrieves a list of MaxCompute projects.
       *
       * @param request ListProjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of MaxCompute projects.
       *
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
       * @summary Retrieves storage details for the partitions of a partitioned table in a MaxCompute project.
       *
       * @param tmpReq ListStoragePartitionsInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStoragePartitionsInfoResponse
       */
      Models::ListStoragePartitionsInfoResponse listStoragePartitionsInfoWithOptions(const string &project, const string &table, const Models::ListStoragePartitionsInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves storage details for the partitions of a partitioned table in a MaxCompute project.
       *
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
       * @summary Obtains users in a MaxCompute project.
       *
       * @param request ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains users in a MaxCompute project.
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
       * @summary Queries details about the Tunnel Data Transmission Service for a specified time range.
       *
       * @description ## Usage notes
       * - You can use this API to query Tunnel metrics, including slot usage details (`slot_usage_detail`), throughput details (`throughput_detail`), and a throughput summary (`throughput_summary`).
       * - The `quotaNickname` and `project` parameters cannot both be empty.
       * - If the `groupList` parameter includes `table` or `ip`, the `project` parameter is required. If groupList includes `ip`, the `tableList` parameter is also required.
       * - The `orderColumn` parameter supports `maxValue`, `minValue`, `avgValue`, and `sumValue` (only for `throughput_summary`). If this parameter is omitted, the results are not sorted.
       * - The `ascOrder` parameter defaults to `false` (descending order).
       * - The `limit` parameter specifies the number of results to return, with a default of 10 and a maximum of 100.
       *
       * @param request QueryTunnelMetricDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTunnelMetricDetailResponse
       */
      Models::QueryTunnelMetricDetailResponse queryTunnelMetricDetailWithOptions(const string &metric, const Models::QueryTunnelMetricDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about the Tunnel Data Transmission Service for a specified time range.
       *
       * @description ## Usage notes
       * - You can use this API to query Tunnel metrics, including slot usage details (`slot_usage_detail`), throughput details (`throughput_detail`), and a throughput summary (`throughput_summary`).
       * - The `quotaNickname` and `project` parameters cannot both be empty.
       * - If the `groupList` parameter includes `table` or `ip`, the `project` parameter is required. If groupList includes `ip`, the `tableList` parameter is also required.
       * - The `orderColumn` parameter supports `maxValue`, `minValue`, `avgValue`, and `sumValue` (only for `throughput_summary`). If this parameter is omitted, the results are not sorted.
       * - The `ascOrder` parameter defaults to `false` (descending order).
       * - The `limit` parameter specifies the number of results to return, with a default of 10 and a maximum of 100.
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
       * @summary Retries a migration task.
       *
       * @description Before you call this operation, ensure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for the data transfer service, dedicated resource groups, and elastic reserved compute resources.
       *
       * @param request RetryMmsTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryMmsTaskResponse
       */
      Models::RetryMmsTaskResponse retryMmsTaskWithOptions(const string &sourceId, const string &taskId, const Models::RetryMmsTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries a migration task.
       *
       * @description Before you call this operation, ensure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for the data transfer service, dedicated resource groups, and elastic reserved compute resources.
       *
       * @param request RetryMmsTaskRequest
       * @return RetryMmsTaskResponse
       */
      Models::RetryMmsTaskResponse retryMmsTask(const string &sourceId, const string &taskId, const Models::RetryMmsTaskRequest &request);

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
       * @summary Summarizes cost information by instance or billable item.
       *
       * @description Summarizes cost information by instance or billable item.
       *
       * @param request SumBillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SumBillsResponse
       */
      Models::SumBillsResponse sumBillsWithOptions(const Models::SumBillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Summarizes cost information by instance or billable item.
       *
       * @description Summarizes cost information by instance or billable item.
       *
       * @param request SumBillsRequest
       * @return SumBillsResponse
       */
      Models::SumBillsResponse sumBills(const Models::SumBillsRequest &request);

      /**
       * @summary Retrieves a daily summary of costs, grouped by instance or billable item.
       *
       * @description Retrieves a daily summary of costs, grouped by instance or billable item.
       *
       * @param request SumBillsByDateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SumBillsByDateResponse
       */
      Models::SumBillsByDateResponse sumBillsByDateWithOptions(const Models::SumBillsByDateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a daily summary of costs, grouped by instance or billable item.
       *
       * @description Retrieves a daily summary of costs, grouped by instance or billable item.
       *
       * @param request SumBillsByDateRequest
       * @return SumBillsByDateResponse
       */
      Models::SumBillsByDateResponse sumBillsByDate(const Models::SumBillsByDateRequest &request);

      /**
       * @summary Calculates the total number of usage records.
       *
       * @description Calculates the total number of usage records over a specified time range.
       *
       * @param request SumComputeMetricsByRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SumComputeMetricsByRecordResponse
       */
      Models::SumComputeMetricsByRecordResponse sumComputeMetricsByRecordWithOptions(const Models::SumComputeMetricsByRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calculates the total number of usage records.
       *
       * @description Calculates the total number of usage records over a specified time range.
       *
       * @param request SumComputeMetricsByRecordRequest
       * @return SumComputeMetricsByRecordResponse
       */
      Models::SumComputeMetricsByRecordResponse sumComputeMetricsByRecord(const Models::SumComputeMetricsByRecordRequest &request);

      /**
       * @summary Aggregates compute usage by scanned data volume or CU usage.
       *
       * @description Aggregates compute usage by scanned data volume or CU usage.
       *
       * @param request SumComputeMetricsByUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SumComputeMetricsByUsageResponse
       */
      Models::SumComputeMetricsByUsageResponse sumComputeMetricsByUsageWithOptions(const Models::SumComputeMetricsByUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Aggregates compute usage by scanned data volume or CU usage.
       *
       * @description Aggregates compute usage by scanned data volume or CU usage.
       *
       * @param request SumComputeMetricsByUsageRequest
       * @return SumComputeMetricsByUsageResponse
       */
      Models::SumComputeMetricsByUsageResponse sumComputeMetricsByUsage(const Models::SumComputeMetricsByUsageRequest &request);

      /**
       * @summary View a daily breakdown of costs by instance or billable item.
       *
       * @param request SumDailyBillsByItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SumDailyBillsByItemResponse
       */
      Models::SumDailyBillsByItemResponse sumDailyBillsByItemWithOptions(const Models::SumDailyBillsByItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View a daily breakdown of costs by instance or billable item.
       *
       * @param request SumDailyBillsByItemRequest
       * @return SumDailyBillsByItemResponse
       */
      Models::SumDailyBillsByItemResponse sumDailyBillsByItem(const Models::SumDailyBillsByItemRequest &request);

      /**
       * @summary Retrieves aggregated storage metrics over a specified date range, grouped by project or storage class.
       *
       * @param request SumStorageMetricsByDateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SumStorageMetricsByDateResponse
       */
      Models::SumStorageMetricsByDateResponse sumStorageMetricsByDateWithOptions(const Models::SumStorageMetricsByDateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves aggregated storage metrics over a specified date range, grouped by project or storage class.
       *
       * @param request SumStorageMetricsByDateRequest
       * @return SumStorageMetricsByDateResponse
       */
      Models::SumStorageMetricsByDateResponse sumStorageMetricsByDate(const Models::SumStorageMetricsByDateRequest &request);

      /**
       * @summary Aggregates storage usage by storage type.
       *
       * @description Aggregates storage usage by storage type.
       *
       * @param request SumStorageMetricsByTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SumStorageMetricsByTypeResponse
       */
      Models::SumStorageMetricsByTypeResponse sumStorageMetricsByTypeWithOptions(const Models::SumStorageMetricsByTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Aggregates storage usage by storage type.
       *
       * @description Aggregates storage usage by storage type.
       *
       * @param request SumStorageMetricsByTypeRequest
       * @return SumStorageMetricsByTypeResponse
       */
      Models::SumStorageMetricsByTypeResponse sumStorageMetricsByType(const Models::SumStorageMetricsByTypeRequest &request);

      /**
       * @summary Triggers a timer for a specific datasource.
       *
       * @param request TriggerMmsTimerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerMmsTimerResponse
       */
      Models::TriggerMmsTimerResponse triggerMmsTimerWithOptions(const string &sourceId, const string &timerId, const Models::TriggerMmsTimerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a timer for a specific datasource.
       *
       * @param request TriggerMmsTimerRequest
       * @return TriggerMmsTimerResponse
       */
      Models::TriggerMmsTimerResponse triggerMmsTimer(const string &sourceId, const string &timerId, const Models::TriggerMmsTimerRequest &request);

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
       * @summary Updates the basic configuration of a MaxCompute quota, including adding or deleting level-2 quotas, defining the basic attributes of a level-2 quota, and configuring compute units (CUs) for a quota plan that is in effect.
       *
       * @param request UpdateComputeSubQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeSubQuotaResponse
       */
      Models::UpdateComputeSubQuotaResponse updateComputeSubQuotaWithOptions(const string &nickname, const Models::UpdateComputeSubQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic configuration of a MaxCompute quota, including adding or deleting level-2 quotas, defining the basic attributes of a level-2 quota, and configuring compute units (CUs) for a quota plan that is in effect.
       *
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
       * @summary Updates the metadata of a specified database.
       *
       * @description Before you call this operation, make sure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of Data Transmission Service dedicated resource groups and elastic reserved computing resources.
       *
       * @param request UpdateMmsDbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMmsDbResponse
       */
      Models::UpdateMmsDbResponse updateMmsDbWithOptions(const string &sourceId, const string &dbId, const Models::UpdateMmsDbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the metadata of a specified database.
       *
       * @description Before you call this operation, make sure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of Data Transmission Service dedicated resource groups and elastic reserved computing resources.
       *
       * @param request UpdateMmsDbRequest
       * @return UpdateMmsDbResponse
       */
      Models::UpdateMmsDbResponse updateMmsDb(const string &sourceId, const string &dbId, const Models::UpdateMmsDbRequest &request);

      /**
       * @summary Updates table metadata.
       *
       * @description Before you call this operation, make sure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of exclusive resource groups for data transmission and elastic reserved computing resources.
       *
       * @param request UpdateMmsTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMmsTableResponse
       */
      Models::UpdateMmsTableResponse updateMmsTableWithOptions(const string &sourceId, const string &tableId, const Models::UpdateMmsTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates table metadata.
       *
       * @description Before you call this operation, make sure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of exclusive resource groups for data transmission and elastic reserved computing resources.
       *
       * @param request UpdateMmsTableRequest
       * @return UpdateMmsTableResponse
       */
      Models::UpdateMmsTableResponse updateMmsTable(const string &sourceId, const string &tableId, const Models::UpdateMmsTableRequest &request);

      /**
       * @summary Updates table metadata.
       *
       * @description Before you call this API, make sure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for Data Transmission Service exclusive resource groups and elastic reserved computing resources.
       *
       * @param request UpdateMmsTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMmsTablesResponse
       */
      Models::UpdateMmsTablesResponse updateMmsTablesWithOptions(const string &sourceId, const Models::UpdateMmsTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates table metadata.
       *
       * @description Before you call this API, make sure that you understand the <props="china">[billing methods and pricing](https://help.aliyun.com/zh/maxcompute/product-overview/data-transfer-fees-hourly-billing)
       * <props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) for Data Transmission Service exclusive resource groups and elastic reserved computing resources.
       *
       * @param request UpdateMmsTablesRequest
       * @return UpdateMmsTablesResponse
       */
      Models::UpdateMmsTablesResponse updateMmsTables(const string &sourceId, const Models::UpdateMmsTablesRequest &request);

      /**
       * @summary Updates a scheduled task.
       *
       * @description Before you call this operation, make sure that you fully understand the <props="china">[billing methods and pricing](https://www.alibabacloud.com/help/en/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of dedicated resource groups and elastic reserved compute resources for Data Transmission Service.
       *
       * @param request UpdateMmsTimerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMmsTimerResponse
       */
      Models::UpdateMmsTimerResponse updateMmsTimerWithOptions(const string &sourceId, const string &timerId, const Models::UpdateMmsTimerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a scheduled task.
       *
       * @description Before you call this operation, make sure that you fully understand the <props="china">[billing methods and pricing](https://www.alibabacloud.com/help/en/maxcompute/product-overview/data-transfer-fees-hourly-billing)<props="intl">[billing methods and pricing](https://www.alibabacloud.com/help/maxcompute/product-overview/data-transfer-fees-hourly-billing) of dedicated resource groups and elastic reserved compute resources for Data Transmission Service.
       *
       * @param request UpdateMmsTimerRequest
       * @return UpdateMmsTimerResponse
       */
      Models::UpdateMmsTimerResponse updateMmsTimer(const string &sourceId, const string &timerId, const Models::UpdateMmsTimerRequest &request);

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
       * @summary Updates the default computing quota of a project.
       *
       * @param request UpdateProjectDefaultQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectDefaultQuotaResponse
       */
      Models::UpdateProjectDefaultQuotaResponse updateProjectDefaultQuotaWithOptions(const string &projectName, const Models::UpdateProjectDefaultQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the default computing quota of a project.
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
