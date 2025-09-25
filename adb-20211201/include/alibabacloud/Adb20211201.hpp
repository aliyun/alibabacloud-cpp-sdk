// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ADB20211201_HPP_
#define ALIBABACLOUD_ADB20211201_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Adb20211201Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Adb20211201.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Applies for a public endpoint for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnectionWithOptions(const Models::AllocateClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a public endpoint for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnection(const Models::AllocateClusterPublicConnectionRequest &request);

      /**
       * @summary Applies an optimization suggestion.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ApplyAdviceByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAdviceByIdResponse
       */
      Models::ApplyAdviceByIdResponse applyAdviceByIdWithOptions(const Models::ApplyAdviceByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies an optimization suggestion.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ApplyAdviceByIdRequest
       * @return ApplyAdviceByIdResponse
       */
      Models::ApplyAdviceByIdResponse applyAdviceById(const Models::ApplyAdviceByIdRequest &request);

      /**
       * @summary Attaches an elastic network interface (ENI) to an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request AttachUserENIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachUserENIResponse
       */
      Models::AttachUserENIResponse attachUserENIWithOptions(const Models::AttachUserENIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an elastic network interface (ENI) to an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request AttachUserENIRequest
       * @return AttachUserENIResponse
       */
      Models::AttachUserENIResponse attachUserENI(const Models::AttachUserENIRequest &request);

      /**
       * @summary Applies optimization suggestions.
       *
       * @param request BatchApplyAdviceByIdListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchApplyAdviceByIdListResponse
       */
      Models::BatchApplyAdviceByIdListResponse batchApplyAdviceByIdListWithOptions(const Models::BatchApplyAdviceByIdListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies optimization suggestions.
       *
       * @param request BatchApplyAdviceByIdListRequest
       * @return BatchApplyAdviceByIdListResponse
       */
      Models::BatchApplyAdviceByIdListResponse batchApplyAdviceByIdList(const Models::BatchApplyAdviceByIdListRequest &request);

      /**
       * @summary Associates a standard account of an AnalyticDB for MySQL cluster with a Resource Access Management (RAM) user.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request BindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAccountResponse
       */
      Models::BindAccountResponse bindAccountWithOptions(const Models::BindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a standard account of an AnalyticDB for MySQL cluster with a Resource Access Management (RAM) user.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request BindAccountRequest
       * @return BindAccountResponse
       */
      Models::BindAccountResponse bindAccount(const Models::BindAccountRequest &request);

      /**
       * @summary Associates a resource group with a database account.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request BindDBResourceGroupWithUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindDBResourceGroupWithUserResponse
       */
      Models::BindDBResourceGroupWithUserResponse bindDBResourceGroupWithUserWithOptions(const Models::BindDBResourceGroupWithUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a resource group with a database account.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request BindDBResourceGroupWithUserRequest
       * @return BindDBResourceGroupWithUserResponse
       */
      Models::BindDBResourceGroupWithUserResponse bindDBResourceGroupWithUser(const Models::BindDBResourceGroupWithUserRequest &request);

      /**
       * @summary Terminates part of the code in a Spark job.
       *
       * @param request CancelSparkReplStatementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSparkReplStatementResponse
       */
      Models::CancelSparkReplStatementResponse cancelSparkReplStatementWithOptions(const Models::CancelSparkReplStatementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates part of the code in a Spark job.
       *
       * @param request CancelSparkReplStatementRequest
       * @return CancelSparkReplStatementResponse
       */
      Models::CancelSparkReplStatementResponse cancelSparkReplStatement(const Models::CancelSparkReplStatementRequest &request);

      /**
       * @summary Cancels the execution of a Spark SQL statement.
       *
       * @param request CancelSparkWarehouseBatchSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSparkWarehouseBatchSQLResponse
       */
      Models::CancelSparkWarehouseBatchSQLResponse cancelSparkWarehouseBatchSQLWithOptions(const Models::CancelSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the execution of a Spark SQL statement.
       *
       * @param request CancelSparkWarehouseBatchSQLRequest
       * @return CancelSparkWarehouseBatchSQLResponse
       */
      Models::CancelSparkWarehouseBatchSQLResponse cancelSparkWarehouseBatchSQL(const Models::CancelSparkWarehouseBatchSQLRequest &request);

      /**
       * @summary Queries whether a database account of an AnalyticDB for MySQL cluster is associated with a Resource Access Management (RAM) user.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CheckBindRamUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckBindRamUserResponse
       */
      Models::CheckBindRamUserResponse checkBindRamUserWithOptions(const Models::CheckBindRamUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a database account of an AnalyticDB for MySQL cluster is associated with a Resource Access Management (RAM) user.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CheckBindRamUserRequest
       * @return CheckBindRamUserResponse
       */
      Models::CheckBindRamUserResponse checkBindRamUser(const Models::CheckBindRamUserRequest &request);

      /**
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CheckSampleDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSampleDataSetResponse
       */
      Models::CheckSampleDataSetResponse checkSampleDataSetWithOptions(const Models::CheckSampleDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CheckSampleDataSetRequest
       * @return CheckSampleDataSetResponse
       */
      Models::CheckSampleDataSetResponse checkSampleDataSet(const Models::CheckSampleDataSetRequest &request);

      /**
       * @summary 配置导出的SLS 或者OSS 信息，实例级别唯一，遵循一次配置多次使用的原则
       *
       * @param tmpReq ConfigureResultExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureResultExportResponse
       */
      Models::ConfigureResultExportResponse configureResultExportWithOptions(const Models::ConfigureResultExportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置导出的SLS 或者OSS 信息，实例级别唯一，遵循一次配置多次使用的原则
       *
       * @param request ConfigureResultExportRequest
       * @return ConfigureResultExportResponse
       */
      Models::ConfigureResultExportResponse configureResultExport(const Models::ConfigureResultExportRequest &request);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) job.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateAPSJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAPSJobResponse
       */
      Models::CreateAPSJobResponse createAPSJobWithOptions(const Models::CreateAPSJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) job.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateAPSJobRequest
       * @return CreateAPSJobResponse
       */
      Models::CreateAPSJobResponse createAPSJob(const Models::CreateAPSJobRequest &request);

      /**
       * @summary Creates a database account for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) replication job.
       *
       * @param request CreateApsCopyWorkloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsCopyWorkloadResponse
       */
      Models::CreateApsCopyWorkloadResponse createApsCopyWorkloadWithOptions(const Models::CreateApsCopyWorkloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) replication job.
       *
       * @param request CreateApsCopyWorkloadRequest
       * @return CreateApsCopyWorkloadResponse
       */
      Models::CreateApsCopyWorkloadResponse createApsCopyWorkload(const Models::CreateApsCopyWorkloadRequest &request);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) data source.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param tmpReq CreateApsDatasoureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsDatasoureResponse
       */
      Models::CreateApsDatasoureResponse createApsDatasoureWithOptions(const Models::CreateApsDatasoureRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) data source.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateApsDatasoureRequest
       * @return CreateApsDatasoureResponse
       */
      Models::CreateApsDatasoureResponse createApsDatasoure(const Models::CreateApsDatasoureRequest &request);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) job from a Hive data source.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateApsHiveJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsHiveJobResponse
       */
      Models::CreateApsHiveJobResponse createApsHiveJobWithOptions(const Models::CreateApsHiveJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) job from a Hive data source.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateApsHiveJobRequest
       * @return CreateApsHiveJobResponse
       */
      Models::CreateApsHiveJobResponse createApsHiveJob(const Models::CreateApsHiveJobRequest &request);

      /**
       * @summary 创建Kafka到Huid的APS链路
       *
       * @param tmpReq CreateApsKafkaHudiJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsKafkaHudiJobResponse
       */
      Models::CreateApsKafkaHudiJobResponse createApsKafkaHudiJobWithOptions(const Models::CreateApsKafkaHudiJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Kafka到Huid的APS链路
       *
       * @param request CreateApsKafkaHudiJobRequest
       * @return CreateApsKafkaHudiJobResponse
       */
      Models::CreateApsKafkaHudiJobResponse createApsKafkaHudiJob(const Models::CreateApsKafkaHudiJobRequest &request);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) job from Simple Log Service (SLS) to an AnalyticDB for MySQL Data Warehouse Edition cluster.
       *
       * @param tmpReq CreateApsSlsADBJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsSlsADBJobResponse
       */
      Models::CreateApsSlsADBJobResponse createApsSlsADBJobWithOptions(const Models::CreateApsSlsADBJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AnalyticDB Pipeline Service (APS) job from Simple Log Service (SLS) to an AnalyticDB for MySQL Data Warehouse Edition cluster.
       *
       * @param request CreateApsSlsADBJobRequest
       * @return CreateApsSlsADBJobResponse
       */
      Models::CreateApsSlsADBJobResponse createApsSlsADBJob(const Models::CreateApsSlsADBJobRequest &request);

      /**
       * @summary 手动创建备份集
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 手动创建备份集
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates an AnalyticDB for MySQL Data Lakehouse Edition cluster.
       *
       * @description CreateDBCluster
       *
       * @param request CreateDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBClusterWithOptions(const Models::CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AnalyticDB for MySQL Data Lakehouse Edition cluster.
       *
       * @description CreateDBCluster
       *
       * @param request CreateDBClusterRequest
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBCluster(const Models::CreateDBClusterRequest &request);

      /**
       * @summary Creates a resource group for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param tmpReq CreateDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBResourceGroupResponse
       */
      Models::CreateDBResourceGroupResponse createDBResourceGroupWithOptions(const Models::CreateDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param request CreateDBResourceGroupRequest
       * @return CreateDBResourceGroupResponse
       */
      Models::CreateDBResourceGroupResponse createDBResourceGroup(const Models::CreateDBResourceGroupRequest &request);

      /**
       * @summary Creates a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateElasticPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateElasticPlanResponse
       */
      Models::CreateElasticPlanResponse createElasticPlanWithOptions(const Models::CreateElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateElasticPlanRequest
       * @return CreateElasticPlanResponse
       */
      Models::CreateElasticPlanResponse createElasticPlan(const Models::CreateElasticPlanRequest &request);

      /**
       * @summary Creates a lake storage.
       *
       * @param tmpReq CreateLakeStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLakeStorageResponse
       */
      Models::CreateLakeStorageResponse createLakeStorageWithOptions(const Models::CreateLakeStorageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lake storage.
       *
       * @param request CreateLakeStorageRequest
       * @return CreateLakeStorageResponse
       */
      Models::CreateLakeStorageResponse createLakeStorage(const Models::CreateLakeStorageRequest &request);

      /**
       * @summary Creates an Object Storage Service (OSS) subdirectory.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request CreateOssSubDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOssSubDirectoryResponse
       */
      Models::CreateOssSubDirectoryResponse createOssSubDirectoryWithOptions(const Models::CreateOssSubDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Object Storage Service (OSS) subdirectory.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request CreateOssSubDirectoryRequest
       * @return CreateOssSubDirectoryResponse
       */
      Models::CreateOssSubDirectoryResponse createOssSubDirectory(const Models::CreateOssSubDirectoryRequest &request);

      /**
       * @summary Creates a custom monitoring view.
       *
       * @param tmpReq CreatePerformanceViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePerformanceViewResponse
       */
      Models::CreatePerformanceViewResponse createPerformanceViewWithOptions(const Models::CreatePerformanceViewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom monitoring view.
       *
       * @param request CreatePerformanceViewRequest
       * @return CreatePerformanceViewResponse
       */
      Models::CreatePerformanceViewResponse createPerformanceView(const Models::CreatePerformanceViewRequest &request);

      /**
       * @summary Creates a Spark application template.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request CreateSparkTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSparkTemplateResponse
       */
      Models::CreateSparkTemplateResponse createSparkTemplateWithOptions(const Models::CreateSparkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Spark application template.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request CreateSparkTemplateRequest
       * @return CreateSparkTemplateResponse
       */
      Models::CreateSparkTemplateResponse createSparkTemplate(const Models::CreateSparkTemplateRequest &request);

      /**
       * @summary Deletes a database account from an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database account from an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes an AnalyticDB Pipeline Service (APS) data source.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteApsDatasoureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApsDatasoureResponse
       */
      Models::DeleteApsDatasoureResponse deleteApsDatasoureWithOptions(const Models::DeleteApsDatasoureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AnalyticDB Pipeline Service (APS) data source.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteApsDatasoureRequest
       * @return DeleteApsDatasoureResponse
       */
      Models::DeleteApsDatasoureResponse deleteApsDatasoure(const Models::DeleteApsDatasoureRequest &request);

      /**
       * @summary Deletes an AnalyticDB Pipeline Service (APS) job.
       *
       * @description *   Deleting backup sets is an asynchronous operation and may require 10 to 20 minutes to complete.
       * *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
       * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
       *
       * @param request DeleteApsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApsJobResponse
       */
      Models::DeleteApsJobResponse deleteApsJobWithOptions(const Models::DeleteApsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AnalyticDB Pipeline Service (APS) job.
       *
       * @description *   Deleting backup sets is an asynchronous operation and may require 10 to 20 minutes to complete.
       * *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
       * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
       *
       * @param request DeleteApsJobRequest
       * @return DeleteApsJobResponse
       */
      Models::DeleteApsJobResponse deleteApsJob(const Models::DeleteApsJobRequest &request);

      /**
       * @summary Manually deletes backup sets.
       *
       * @description *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
       * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
       *
       * @param request DeleteBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupsResponse
       */
      Models::DeleteBackupsResponse deleteBackupsWithOptions(const Models::DeleteBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually deletes backup sets.
       *
       * @description *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
       * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
       *
       * @param request DeleteBackupsRequest
       * @return DeleteBackupsResponse
       */
      Models::DeleteBackupsResponse deleteBackups(const Models::DeleteBackupsRequest &request);

      /**
       * @summary Deletes an AnalyticDB for MySQL cluster.
       *
       * @description ### [](#)
       * *   You can delete only pay-as-you-go clusters.
       * *   The cluster that you want to delete must be in the Running state.
       * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBClusterWithOptions(const Models::DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AnalyticDB for MySQL cluster.
       *
       * @description ### [](#)
       * *   You can delete only pay-as-you-go clusters.
       * *   The cluster that you want to delete must be in the Running state.
       * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteDBClusterRequest
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBCluster(const Models::DeleteDBClusterRequest &request);

      /**
       * @summary Deletes a resource group from an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBResourceGroupResponse
       */
      Models::DeleteDBResourceGroupResponse deleteDBResourceGroupWithOptions(const Models::DeleteDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group from an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteDBResourceGroupRequest
       * @return DeleteDBResourceGroupResponse
       */
      Models::DeleteDBResourceGroupResponse deleteDBResourceGroup(const Models::DeleteDBResourceGroupRequest &request);

      /**
       * @summary Deletes a scaling plan from an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteElasticPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteElasticPlanResponse
       */
      Models::DeleteElasticPlanResponse deleteElasticPlanWithOptions(const Models::DeleteElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scaling plan from an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteElasticPlanRequest
       * @return DeleteElasticPlanResponse
       */
      Models::DeleteElasticPlanResponse deleteElasticPlan(const Models::DeleteElasticPlanRequest &request);

      /**
       * @summary Deletes a lake storage.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteLakeStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLakeStorageResponse
       */
      Models::DeleteLakeStorageResponse deleteLakeStorageWithOptions(const Models::DeleteLakeStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lake storage.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DeleteLakeStorageRequest
       * @return DeleteLakeStorageResponse
       */
      Models::DeleteLakeStorageResponse deleteLakeStorage(const Models::DeleteLakeStorageRequest &request);

      /**
       * @summary Deletes a monitoring view.
       *
       * @param request DeletePerformanceViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePerformanceViewResponse
       */
      Models::DeletePerformanceViewResponse deletePerformanceViewWithOptions(const Models::DeletePerformanceViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a monitoring view.
       *
       * @param request DeletePerformanceViewRequest
       * @return DeletePerformanceViewResponse
       */
      Models::DeletePerformanceViewResponse deletePerformanceView(const Models::DeletePerformanceViewRequest &request);

      /**
       * @summary Deletes Spark template files.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request DeleteSparkTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSparkTemplateResponse
       */
      Models::DeleteSparkTemplateResponse deleteSparkTemplateWithOptions(const Models::DeleteSparkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes Spark template files.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request DeleteSparkTemplateRequest
       * @return DeleteSparkTemplateResponse
       */
      Models::DeleteSparkTemplateResponse deleteSparkTemplate(const Models::DeleteSparkTemplateRequest &request);

      /**
       * @summary Deletes Spark template files.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request DeleteSparkTemplateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSparkTemplateFileResponse
       */
      Models::DeleteSparkTemplateFileResponse deleteSparkTemplateFileWithOptions(const Models::DeleteSparkTemplateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes Spark template files.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request DeleteSparkTemplateFileRequest
       * @return DeleteSparkTemplateFileResponse
       */
      Models::DeleteSparkTemplateFileResponse deleteSparkTemplateFile(const Models::DeleteSparkTemplateFileRequest &request);

      /**
       * @summary Queries a list of AnalyticDB for MySQL clusters for AnalyticDB Pipeline Service (APS) federated analytics.
       *
       * @description You can call this operation to query the performance data of a cluster over a time range based on performance metrics. The collection granularity is 30 seconds. This operation allows you to query information about slow queries, such as the SQL query duration, number of scanned rows, and amount of scanned data.
       *
       * @param request DescribeAPSADBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAPSADBInstancesResponse
       */
      Models::DescribeAPSADBInstancesResponse describeAPSADBInstancesWithOptions(const Models::DescribeAPSADBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AnalyticDB for MySQL clusters for AnalyticDB Pipeline Service (APS) federated analytics.
       *
       * @description You can call this operation to query the performance data of a cluster over a time range based on performance metrics. The collection granularity is 30 seconds. This operation allows you to query information about slow queries, such as the SQL query duration, number of scanned rows, and amount of scanned data.
       *
       * @param request DescribeAPSADBInstancesRequest
       * @return DescribeAPSADBInstancesResponse
       */
      Models::DescribeAPSADBInstancesResponse describeAPSADBInstances(const Models::DescribeAPSADBInstancesRequest &request);

      /**
       * @summary Queries abnormal SQL patterns within a time range.
       *
       * @param request DescribeAbnormalPatternDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAbnormalPatternDetectionResponse
       */
      Models::DescribeAbnormalPatternDetectionResponse describeAbnormalPatternDetectionWithOptions(const Models::DescribeAbnormalPatternDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries abnormal SQL patterns within a time range.
       *
       * @param request DescribeAbnormalPatternDetectionRequest
       * @return DescribeAbnormalPatternDetectionResponse
       */
      Models::DescribeAbnormalPatternDetectionResponse describeAbnormalPatternDetection(const Models::DescribeAbnormalPatternDetectionRequest &request);

      /**
       * @summary Queries the permissions of a database account on all permission levels.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountAllPrivilegesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountAllPrivilegesResponse
       */
      Models::DescribeAccountAllPrivilegesResponse describeAccountAllPrivilegesWithOptions(const Models::DescribeAccountAllPrivilegesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions of a database account on all permission levels.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountAllPrivilegesRequest
       * @return DescribeAccountAllPrivilegesResponse
       */
      Models::DescribeAccountAllPrivilegesResponse describeAccountAllPrivileges(const Models::DescribeAccountAllPrivilegesRequest &request);

      /**
       * @summary Queries the databases, tables, and columns on which a database account has permissions.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountPrivilegeObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountPrivilegeObjectsResponse
       */
      Models::DescribeAccountPrivilegeObjectsResponse describeAccountPrivilegeObjectsWithOptions(const Models::DescribeAccountPrivilegeObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases, tables, and columns on which a database account has permissions.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountPrivilegeObjectsRequest
       * @return DescribeAccountPrivilegeObjectsResponse
       */
      Models::DescribeAccountPrivilegeObjectsResponse describeAccountPrivilegeObjects(const Models::DescribeAccountPrivilegeObjectsRequest &request);

      /**
       * @summary 获取某一ADB账户的权限
       *
       * @param request DescribeAccountPrivilegesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountPrivilegesResponse
       */
      Models::DescribeAccountPrivilegesResponse describeAccountPrivilegesWithOptions(const Models::DescribeAccountPrivilegesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取某一ADB账户的权限
       *
       * @param request DescribeAccountPrivilegesRequest
       * @return DescribeAccountPrivilegesResponse
       */
      Models::DescribeAccountPrivilegesResponse describeAccountPrivileges(const Models::DescribeAccountPrivilegesRequest &request);

      /**
       * @summary Queries the database accounts of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database accounts of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the information about table columns for an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeAdbMySqlColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdbMySqlColumnsResponse
       */
      Models::DescribeAdbMySqlColumnsResponse describeAdbMySqlColumnsWithOptions(const Models::DescribeAdbMySqlColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about table columns for an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeAdbMySqlColumnsRequest
       * @return DescribeAdbMySqlColumnsResponse
       */
      Models::DescribeAdbMySqlColumnsResponse describeAdbMySqlColumns(const Models::DescribeAdbMySqlColumnsRequest &request);

      /**
       * @summary Queries the information about table indexes.
       *
       * @param request DescribeAdbMySqlIndexesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdbMySqlIndexesResponse
       */
      Models::DescribeAdbMySqlIndexesResponse describeAdbMySqlIndexesWithOptions(const Models::DescribeAdbMySqlIndexesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about table indexes.
       *
       * @param request DescribeAdbMySqlIndexesRequest
       * @return DescribeAdbMySqlIndexesResponse
       */
      Models::DescribeAdbMySqlIndexesResponse describeAdbMySqlIndexes(const Models::DescribeAdbMySqlIndexesRequest &request);

      /**
       * @summary Queries a list of databases for an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeAdbMySqlSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdbMySqlSchemasResponse
       */
      Models::DescribeAdbMySqlSchemasResponse describeAdbMySqlSchemasWithOptions(const Models::DescribeAdbMySqlSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases for an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeAdbMySqlSchemasRequest
       * @return DescribeAdbMySqlSchemasResponse
       */
      Models::DescribeAdbMySqlSchemasResponse describeAdbMySqlSchemas(const Models::DescribeAdbMySqlSchemasRequest &request);

      /**
       * @summary Queries the information about table metadata.
       *
       * @param request DescribeAdbMySqlTableMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdbMySqlTableMetaResponse
       */
      Models::DescribeAdbMySqlTableMetaResponse describeAdbMySqlTableMetaWithOptions(const Models::DescribeAdbMySqlTableMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about table metadata.
       *
       * @param request DescribeAdbMySqlTableMetaRequest
       * @return DescribeAdbMySqlTableMetaResponse
       */
      Models::DescribeAdbMySqlTableMetaResponse describeAdbMySqlTableMeta(const Models::DescribeAdbMySqlTableMetaRequest &request);

      /**
       * @summary Queries a list of tables for an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeAdbMySqlTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdbMySqlTablesResponse
       */
      Models::DescribeAdbMySqlTablesResponse describeAdbMySqlTablesWithOptions(const Models::DescribeAdbMySqlTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tables for an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeAdbMySqlTablesRequest
       * @return DescribeAdbMySqlTablesResponse
       */
      Models::DescribeAdbMySqlTablesResponse describeAdbMySqlTables(const Models::DescribeAdbMySqlTablesRequest &request);

      /**
       * @summary Queries whether the suggestion feature is enabled.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAdviceServiceEnabledRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdviceServiceEnabledResponse
       */
      Models::DescribeAdviceServiceEnabledResponse describeAdviceServiceEnabledWithOptions(const Models::DescribeAdviceServiceEnabledRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the suggestion feature is enabled.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAdviceServiceEnabledRequest
       * @return DescribeAdviceServiceEnabledResponse
       */
      Models::DescribeAdviceServiceEnabledResponse describeAdviceServiceEnabled(const Models::DescribeAdviceServiceEnabledRequest &request);

      /**
       * @summary Queries a list of databases, tables, and columns in an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeAllDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSourceWithOptions(const Models::DescribeAllDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases, tables, and columns in an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeAllDataSourceRequest
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSource(const Models::DescribeAllDataSourceRequest &request);

      /**
       * @summary Queries the applied optimization suggestions for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAppliedAdvicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppliedAdvicesResponse
       */
      Models::DescribeAppliedAdvicesResponse describeAppliedAdvicesWithOptions(const Models::DescribeAppliedAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applied optimization suggestions for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAppliedAdvicesRequest
       * @return DescribeAppliedAdvicesResponse
       */
      Models::DescribeAppliedAdvicesResponse describeAppliedAdvices(const Models::DescribeAppliedAdvicesRequest &request);

      /**
       * @summary Queries the logs of a real-time data ingestion job for an AnalyticDB for MySQL cluster.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeApsActionLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsActionLogsResponse
       */
      Models::DescribeApsActionLogsResponse describeApsActionLogsWithOptions(const Models::DescribeApsActionLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of a real-time data ingestion job for an AnalyticDB for MySQL cluster.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeApsActionLogsRequest
       * @return DescribeApsActionLogsResponse
       */
      Models::DescribeApsActionLogsResponse describeApsActionLogs(const Models::DescribeApsActionLogsRequest &request);

      /**
       * @summary Queries the information about an AnalyticDB Pipeline Service (APS) data source.
       *
       * @param request DescribeApsDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsDatasourceResponse
       */
      Models::DescribeApsDatasourceResponse describeApsDatasourceWithOptions(const Models::DescribeApsDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an AnalyticDB Pipeline Service (APS) data source.
       *
       * @param request DescribeApsDatasourceRequest
       * @return DescribeApsDatasourceResponse
       */
      Models::DescribeApsDatasourceResponse describeApsDatasource(const Models::DescribeApsDatasourceRequest &request);

      /**
       * @summary Queries a list of AnalyticDB Pipeline Service (APS) data sources.
       *
       * @param request DescribeApsDatasourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsDatasourcesResponse
       */
      Models::DescribeApsDatasourcesResponse describeApsDatasourcesWithOptions(const Models::DescribeApsDatasourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AnalyticDB Pipeline Service (APS) data sources.
       *
       * @param request DescribeApsDatasourcesRequest
       * @return DescribeApsDatasourcesResponse
       */
      Models::DescribeApsDatasourcesResponse describeApsDatasources(const Models::DescribeApsDatasourcesRequest &request);

      /**
       * @summary Queries the information about an AnalyticDB Pipeline Service (APS) job from a Hive data source.
       *
       * @param request DescribeApsHiveWorkloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsHiveWorkloadResponse
       */
      Models::DescribeApsHiveWorkloadResponse describeApsHiveWorkloadWithOptions(const Models::DescribeApsHiveWorkloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an AnalyticDB Pipeline Service (APS) job from a Hive data source.
       *
       * @param request DescribeApsHiveWorkloadRequest
       * @return DescribeApsHiveWorkloadResponse
       */
      Models::DescribeApsHiveWorkloadResponse describeApsHiveWorkload(const Models::DescribeApsHiveWorkloadRequest &request);

      /**
       * @summary Queries the information about an AnalyticDB Pipeline Service (APS) job.
       *
       * @param request DescribeApsJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsJobDetailResponse
       */
      Models::DescribeApsJobDetailResponse describeApsJobDetailWithOptions(const Models::DescribeApsJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an AnalyticDB Pipeline Service (APS) job.
       *
       * @param request DescribeApsJobDetailRequest
       * @return DescribeApsJobDetailResponse
       */
      Models::DescribeApsJobDetailResponse describeApsJobDetail(const Models::DescribeApsJobDetailRequest &request);

      /**
       * @summary Queries a list of AnalyticDB Pipeline Service (APS) jobs.
       *
       * @param request DescribeApsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsJobsResponse
       */
      Models::DescribeApsJobsResponse describeApsJobsWithOptions(const Models::DescribeApsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AnalyticDB Pipeline Service (APS) jobs.
       *
       * @param request DescribeApsJobsRequest
       * @return DescribeApsJobsResponse
       */
      Models::DescribeApsJobsResponse describeApsJobs(const Models::DescribeApsJobsRequest &request);

      /**
       * @summary Queries the workloads of AnalyticDB Pipeline Service (APS) migration jobs.
       *
       * @param request DescribeApsMigrationWorkloadsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsMigrationWorkloadsResponse
       */
      Models::DescribeApsMigrationWorkloadsResponse describeApsMigrationWorkloadsWithOptions(const Models::DescribeApsMigrationWorkloadsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the workloads of AnalyticDB Pipeline Service (APS) migration jobs.
       *
       * @param request DescribeApsMigrationWorkloadsRequest
       * @return DescribeApsMigrationWorkloadsResponse
       */
      Models::DescribeApsMigrationWorkloadsResponse describeApsMigrationWorkloads(const Models::DescribeApsMigrationWorkloadsRequest &request);

      /**
       * @summary Queries the progress of an AnalyticDB Pipeline Service (APS) job.
       *
       * @param request DescribeApsProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsProgressResponse
       */
      Models::DescribeApsProgressResponse describeApsProgressWithOptions(const Models::DescribeApsProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of an AnalyticDB Pipeline Service (APS) job.
       *
       * @param request DescribeApsProgressRequest
       * @return DescribeApsProgressResponse
       */
      Models::DescribeApsProgressResponse describeApsProgress(const Models::DescribeApsProgressRequest &request);

      /**
       * @summary Queries the information about resource groups of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeApsResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsResourceGroupsResponse
       */
      Models::DescribeApsResourceGroupsResponse describeApsResourceGroupsWithOptions(const Models::DescribeApsResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about resource groups of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeApsResourceGroupsRequest
       * @return DescribeApsResourceGroupsResponse
       */
      Models::DescribeApsResourceGroupsResponse describeApsResourceGroups(const Models::DescribeApsResourceGroupsRequest &request);

      /**
       * @summary Queries the SQL audit logs of an AnalyticDB for MySQL cluster.
       *
       * @description *   SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL audit was disabled and re-enabled, only SQL audit logs from the time when SQL audit was re-enabled can be queried. The following operations are not recorded in SQL audit logs: **INSERT INTO VALUES**, **REPLACE INTO VALUES**, and **UPSERT INTO VALUES**.
       * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAuditLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogRecordsResponse
       */
      Models::DescribeAuditLogRecordsResponse describeAuditLogRecordsWithOptions(const Models::DescribeAuditLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SQL audit logs of an AnalyticDB for MySQL cluster.
       *
       * @description *   SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL audit was disabled and re-enabled, only SQL audit logs from the time when SQL audit was re-enabled can be queried. The following operations are not recorded in SQL audit logs: **INSERT INTO VALUES**, **REPLACE INTO VALUES**, and **UPSERT INTO VALUES**.
       * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAuditLogRecordsRequest
       * @return DescribeAuditLogRecordsResponse
       */
      Models::DescribeAuditLogRecordsResponse describeAuditLogRecords(const Models::DescribeAuditLogRecordsRequest &request);

      /**
       * @summary Queries the available optimization suggestions for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAvailableAdvicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableAdvicesResponse
       */
      Models::DescribeAvailableAdvicesResponse describeAvailableAdvicesWithOptions(const Models::DescribeAvailableAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available optimization suggestions for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeAvailableAdvicesRequest
       * @return DescribeAvailableAdvicesResponse
       */
      Models::DescribeAvailableAdvicesResponse describeAvailableAdvices(const Models::DescribeAvailableAdvicesRequest &request);

      /**
       * @summary 查看集群备份设置
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看集群备份设置
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary 查询实例备份集
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例备份集
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries the bad SQL statements that affect cluster stability within a time range.
       *
       * @param request DescribeBadSqlDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBadSqlDetectionResponse
       */
      Models::DescribeBadSqlDetectionResponse describeBadSqlDetectionWithOptions(const Models::DescribeBadSqlDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bad SQL statements that affect cluster stability within a time range.
       *
       * @param request DescribeBadSqlDetectionRequest
       * @return DescribeBadSqlDetectionResponse
       */
      Models::DescribeBadSqlDetectionResponse describeBadSqlDetection(const Models::DescribeBadSqlDetectionRequest &request);

      /**
       * @summary Queries the IP address whitelists of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterAccessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAccessWhiteListResponse
       */
      Models::DescribeClusterAccessWhiteListResponse describeClusterAccessWhiteListWithOptions(const Models::DescribeClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelists of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterAccessWhiteListRequest
       * @return DescribeClusterAccessWhiteListResponse
       */
      Models::DescribeClusterAccessWhiteListResponse describeClusterAccessWhiteList(const Models::DescribeClusterAccessWhiteListRequest &request);

      /**
       * @summary Queries the network information about an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNetInfoResponse
       */
      Models::DescribeClusterNetInfoResponse describeClusterNetInfoWithOptions(const Models::DescribeClusterNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information about an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterNetInfoRequest
       * @return DescribeClusterNetInfoResponse
       */
      Models::DescribeClusterNetInfoResponse describeClusterNetInfo(const Models::DescribeClusterNetInfoRequest &request);

      /**
       * @summary Queries the information about resource usage of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterResourceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterResourceDetailResponse
       */
      Models::DescribeClusterResourceDetailResponse describeClusterResourceDetailWithOptions(const Models::DescribeClusterResourceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about resource usage of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterResourceDetailRequest
       * @return DescribeClusterResourceDetailResponse
       */
      Models::DescribeClusterResourceDetailResponse describeClusterResourceDetail(const Models::DescribeClusterResourceDetailRequest &request);

      /**
       * @summary Queries the resource usage of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterResourceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterResourceUsageResponse
       */
      Models::DescribeClusterResourceUsageResponse describeClusterResourceUsageWithOptions(const Models::DescribeClusterResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource usage of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterResourceUsageRequest
       * @return DescribeClusterResourceUsageResponse
       */
      Models::DescribeClusterResourceUsageResponse describeClusterResourceUsage(const Models::DescribeClusterResourceUsageRequest &request);

      /**
       * @summary Queries a list of columns in a table.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumnsWithOptions(const Models::DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of columns in a table.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeColumnsRequest
       * @return DescribeColumnsResponse
       */
      Models::DescribeColumnsResponse describeColumns(const Models::DescribeColumnsRequest &request);

      /**
       * @summary Queries whether the remote build feature is enabled in the query acceleration configuration of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeCompactionServiceSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCompactionServiceSwitchResponse
       */
      Models::DescribeCompactionServiceSwitchResponse describeCompactionServiceSwitchWithOptions(const Models::DescribeCompactionServiceSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the remote build feature is enabled in the query acceleration configuration of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeCompactionServiceSwitchRequest
       * @return DescribeCompactionServiceSwitchResponse
       */
      Models::DescribeCompactionServiceSwitchResponse describeCompactionServiceSwitch(const Models::DescribeCompactionServiceSwitchRequest &request);

      /**
       * @summary Queries the computing resource usage of a resource group in an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeComputeResourceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComputeResourceUsageResponse
       */
      Models::DescribeComputeResourceUsageResponse describeComputeResourceUsageWithOptions(const Models::DescribeComputeResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the computing resource usage of a resource group in an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeComputeResourceUsageRequest
       * @return DescribeComputeResourceUsageResponse
       */
      Models::DescribeComputeResourceUsageResponse describeComputeResourceUsage(const Models::DescribeComputeResourceUsageRequest &request);

      /**
       * @summary Queries the diagnostic results of the access layer.
       *
       * @param request DescribeControllerDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeControllerDetectionResponse
       */
      Models::DescribeControllerDetectionResponse describeControllerDetectionWithOptions(const Models::DescribeControllerDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic results of the access layer.
       *
       * @param request DescribeControllerDetectionRequest
       * @return DescribeControllerDetectionResponse
       */
      Models::DescribeControllerDetectionResponse describeControllerDetection(const Models::DescribeControllerDetectionRequest &request);

      /**
       * @summary Queries the information about an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(const Models::DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterAttributeRequest
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttribute(const Models::DescribeDBClusterAttributeRequest &request);

      /**
       * @summary Queries the health status of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterHealthStatusResponse
       */
      Models::DescribeDBClusterHealthStatusResponse describeDBClusterHealthStatusWithOptions(const Models::DescribeDBClusterHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health status of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterHealthStatusRequest
       * @return DescribeDBClusterHealthStatusResponse
       */
      Models::DescribeDBClusterHealthStatusResponse describeDBClusterHealthStatus(const Models::DescribeDBClusterHealthStatusRequest &request);

      /**
       * @summary Queries the performance data of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(const Models::DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformance(const Models::DescribeDBClusterPerformanceRequest &request);

      /**
       * @summary 获取SSL配置信息
       *
       * @param request DescribeDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterSSLResponse
       */
      Models::DescribeDBClusterSSLResponse describeDBClusterSSLWithOptions(const Models::DescribeDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取SSL配置信息
       *
       * @param request DescribeDBClusterSSLRequest
       * @return DescribeDBClusterSSLResponse
       */
      Models::DescribeDBClusterSSLResponse describeDBClusterSSL(const Models::DescribeDBClusterSSLRequest &request);

      /**
       * @summary Queries the storage overview information of an AnalyticDB for MySQL cluster, such as the total data size, hot data size, cold data size, and data growth.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterSpaceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterSpaceSummaryResponse
       */
      Models::DescribeDBClusterSpaceSummaryResponse describeDBClusterSpaceSummaryWithOptions(const Models::DescribeDBClusterSpaceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage overview information of an AnalyticDB for MySQL cluster, such as the total data size, hot data size, cold data size, and data growth.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterSpaceSummaryRequest
       * @return DescribeDBClusterSpaceSummaryResponse
       */
      Models::DescribeDBClusterSpaceSummaryResponse describeDBClusterSpaceSummary(const Models::DescribeDBClusterSpaceSummaryRequest &request);

      /**
       * @summary Queries the statuses of AnalyticDB for MySQL clusters within a region.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterStatusResponse
       */
      Models::DescribeDBClusterStatusResponse describeDBClusterStatusWithOptions(const Models::DescribeDBClusterStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statuses of AnalyticDB for MySQL clusters within a region.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterStatusRequest
       * @return DescribeDBClusterStatusResponse
       */
      Models::DescribeDBClusterStatusResponse describeDBClusterStatus(const Models::DescribeDBClusterStatusRequest &request);

      /**
       * @summary Queries the information about AnalyticDB for MySQL Data Lakehouse Edition clusters within a region.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClustersWithOptions(const Models::DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about AnalyticDB for MySQL Data Lakehouse Edition clusters within a region.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClustersRequest
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClusters(const Models::DescribeDBClustersRequest &request);

      /**
       * @summary Queries the information about resource groups of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBResourceGroupResponse
       */
      Models::DescribeDBResourceGroupResponse describeDBResourceGroupWithOptions(const Models::DescribeDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about resource groups of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBResourceGroupRequest
       * @return DescribeDBResourceGroupResponse
       */
      Models::DescribeDBResourceGroupResponse describeDBResourceGroup(const Models::DescribeDBResourceGroupRequest &request);

      /**
       * @summary Queries the deduplicated statistics of resource groups, databases, usernames, and source IP addresses about SQL statements that meet a query condition for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDiagnosisDimensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisDimensionsResponse
       */
      Models::DescribeDiagnosisDimensionsResponse describeDiagnosisDimensionsWithOptions(const Models::DescribeDiagnosisDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deduplicated statistics of resource groups, databases, usernames, and source IP addresses about SQL statements that meet a query condition for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDiagnosisDimensionsRequest
       * @return DescribeDiagnosisDimensionsResponse
       */
      Models::DescribeDiagnosisDimensionsResponse describeDiagnosisDimensions(const Models::DescribeDiagnosisDimensionsRequest &request);

      /**
       * @summary Queries the diagnostic information about SQL statements that meet a query condition for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param request DescribeDiagnosisRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisRecordsResponse
       */
      Models::DescribeDiagnosisRecordsResponse describeDiagnosisRecordsWithOptions(const Models::DescribeDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic information about SQL statements that meet a query condition for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param request DescribeDiagnosisRecordsRequest
       * @return DescribeDiagnosisRecordsResponse
       */
      Models::DescribeDiagnosisRecordsResponse describeDiagnosisRecords(const Models::DescribeDiagnosisRecordsRequest &request);

      /**
       * @summary Queries the execution information about an SQL statement, including the execution plan, execution information, resource usage, and self-diagnostics results.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDiagnosisSQLInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisSQLInfoResponse
       */
      Models::DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfoWithOptions(const Models::DescribeDiagnosisSQLInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution information about an SQL statement, including the execution plan, execution information, resource usage, and self-diagnostics results.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDiagnosisSQLInfoRequest
       * @return DescribeDiagnosisSQLInfoResponse
       */
      Models::DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfo(const Models::DescribeDiagnosisSQLInfoRequest &request);

      /**
       * @summary Queries the last five SQL query download tasks of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDownloadRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadRecordsResponse
       */
      Models::DescribeDownloadRecordsResponse describeDownloadRecordsWithOptions(const Models::DescribeDownloadRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the last five SQL query download tasks of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDownloadRecordsRequest
       * @return DescribeDownloadRecordsResponse
       */
      Models::DescribeDownloadRecordsResponse describeDownloadRecords(const Models::DescribeDownloadRecordsRequest &request);

      /**
       * @summary Queries the information about a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeElasticPlanAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticPlanAttributeResponse
       */
      Models::DescribeElasticPlanAttributeResponse describeElasticPlanAttributeWithOptions(const Models::DescribeElasticPlanAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeElasticPlanAttributeRequest
       * @return DescribeElasticPlanAttributeResponse
       */
      Models::DescribeElasticPlanAttributeResponse describeElasticPlanAttribute(const Models::DescribeElasticPlanAttributeRequest &request);

      /**
       * @summary Queries a list of scaling plan jobs for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param request DescribeElasticPlanJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticPlanJobsResponse
       */
      Models::DescribeElasticPlanJobsResponse describeElasticPlanJobsWithOptions(const Models::DescribeElasticPlanJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of scaling plan jobs for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param request DescribeElasticPlanJobsRequest
       * @return DescribeElasticPlanJobsResponse
       */
      Models::DescribeElasticPlanJobsResponse describeElasticPlanJobs(const Models::DescribeElasticPlanJobsRequest &request);

      /**
       * @summary Queries the resource specifications that are supported by different types of scaling plans of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeElasticPlanSpecificationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticPlanSpecificationsResponse
       */
      Models::DescribeElasticPlanSpecificationsResponse describeElasticPlanSpecificationsWithOptions(const Models::DescribeElasticPlanSpecificationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource specifications that are supported by different types of scaling plans of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeElasticPlanSpecificationsRequest
       * @return DescribeElasticPlanSpecificationsResponse
       */
      Models::DescribeElasticPlanSpecificationsResponse describeElasticPlanSpecifications(const Models::DescribeElasticPlanSpecificationsRequest &request);

      /**
       * @summary Queries scaling plans of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeElasticPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticPlansResponse
       */
      Models::DescribeElasticPlansResponse describeElasticPlansWithOptions(const Models::DescribeElasticPlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scaling plans of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeElasticPlansRequest
       * @return DescribeElasticPlansResponse
       */
      Models::DescribeElasticPlansResponse describeElasticPlans(const Models::DescribeElasticPlansRequest &request);

      /**
       * @summary Queries the permission level and permissions supported for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @param request DescribeEnabledPrivilegesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnabledPrivilegesResponse
       */
      Models::DescribeEnabledPrivilegesResponse describeEnabledPrivilegesWithOptions(const Models::DescribeEnabledPrivilegesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permission level and permissions supported for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @param request DescribeEnabledPrivilegesRequest
       * @return DescribeEnabledPrivilegesResponse
       */
      Models::DescribeEnabledPrivilegesResponse describeEnabledPrivileges(const Models::DescribeEnabledPrivilegesRequest &request);

      /**
       * @summary Queries the disk cache size in the query acceleration configuration of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeEssdCacheConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEssdCacheConfigResponse
       */
      Models::DescribeEssdCacheConfigResponse describeEssdCacheConfigWithOptions(const Models::DescribeEssdCacheConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disk cache size in the query acceleration configuration of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeEssdCacheConfigRequest
       * @return DescribeEssdCacheConfigResponse
       */
      Models::DescribeEssdCacheConfigResponse describeEssdCacheConfig(const Models::DescribeEssdCacheConfigRequest &request);

      /**
       * @summary Queries the information about tables that have excessive primary key fields in an AnalyticDB for MySQL Data Lakehouse Edition (V5.0) cluster.
       *
       * @param request DescribeExcessivePrimaryKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExcessivePrimaryKeysResponse
       */
      Models::DescribeExcessivePrimaryKeysResponse describeExcessivePrimaryKeysWithOptions(const Models::DescribeExcessivePrimaryKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about tables that have excessive primary key fields in an AnalyticDB for MySQL Data Lakehouse Edition (V5.0) cluster.
       *
       * @param request DescribeExcessivePrimaryKeysRequest
       * @return DescribeExcessivePrimaryKeysResponse
       */
      Models::DescribeExcessivePrimaryKeysResponse describeExcessivePrimaryKeys(const Models::DescribeExcessivePrimaryKeysRequest &request);

      /**
       * @summary Queries the diagnostic results of the compute layer.
       *
       * @param request DescribeExecutorDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExecutorDetectionResponse
       */
      Models::DescribeExecutorDetectionResponse describeExecutorDetectionWithOptions(const Models::DescribeExecutorDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic results of the compute layer.
       *
       * @param request DescribeExecutorDetectionRequest
       * @return DescribeExecutorDetectionResponse
       */
      Models::DescribeExecutorDetectionResponse describeExecutorDetection(const Models::DescribeExecutorDetectionRequest &request);

      /**
       * @summary 任务中心任务列表
       *
       * @param request DescribeHistoryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasksWithOptions(const Models::DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务中心任务列表
       *
       * @param request DescribeHistoryTasksRequest
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasks(const Models::DescribeHistoryTasksRequest &request);

      /**
       * @summary 任务中心任务统计
       *
       * @param request DescribeHistoryTasksStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStatWithOptions(const Models::DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务中心任务统计
       *
       * @param request DescribeHistoryTasksStatRequest
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStat(const Models::DescribeHistoryTasksStatRequest &request);

      /**
       * @summary Queries the disk usage of all storage nodes.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeInclinedNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInclinedNodesResponse
       */
      Models::DescribeInclinedNodesResponse describeInclinedNodesWithOptions(const Models::DescribeInclinedNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disk usage of all storage nodes.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeInclinedNodesRequest
       * @return DescribeInclinedNodesResponse
       */
      Models::DescribeInclinedNodesResponse describeInclinedNodes(const Models::DescribeInclinedNodesRequest &request);

      /**
       * @summary Queries the information about skewed tables for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeInclinedTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInclinedTablesResponse
       */
      Models::DescribeInclinedTablesResponse describeInclinedTablesWithOptions(const Models::DescribeInclinedTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about skewed tables for an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeInclinedTablesRequest
       * @return DescribeInclinedTablesResponse
       */
      Models::DescribeInclinedTablesResponse describeInclinedTables(const Models::DescribeInclinedTablesRequest &request);

      /**
       * @summary 获取作业资源使用统计
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeJobResourceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobResourceUsageResponse
       */
      Models::DescribeJobResourceUsageResponse describeJobResourceUsageWithOptions(const Models::DescribeJobResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取作业资源使用统计
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeJobResourceUsageRequest
       * @return DescribeJobResourceUsageResponse
       */
      Models::DescribeJobResourceUsageResponse describeJobResourceUsage(const Models::DescribeJobResourceUsageRequest &request);

      /**
       * @summary Queries the information about the minor version of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKernelVersionResponse
       */
      Models::DescribeKernelVersionResponse describeKernelVersionWithOptions(const Models::DescribeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the minor version of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeKernelVersionRequest
       * @return DescribeKernelVersionResponse
       */
      Models::DescribeKernelVersionResponse describeKernelVersion(const Models::DescribeKernelVersionRequest &request);

      /**
       * @summary Queries the answer by a large language model (LLM) to a user question about the use of AnalyticDB for MySQL.
       *
       * @param request DescribeLLMAnswerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLLMAnswerResponse
       */
      FutrueGenerator<Models::DescribeLLMAnswerResponse> describeLLMAnswerWithSSE(const Models::DescribeLLMAnswerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the answer by a large language model (LLM) to a user question about the use of AnalyticDB for MySQL.
       *
       * @param request DescribeLLMAnswerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLLMAnswerResponse
       */
      Models::DescribeLLMAnswerResponse describeLLMAnswerWithOptions(const Models::DescribeLLMAnswerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the answer by a large language model (LLM) to a user question about the use of AnalyticDB for MySQL.
       *
       * @param request DescribeLLMAnswerRequest
       * @return DescribeLLMAnswerResponse
       */
      Models::DescribeLLMAnswerResponse describeLLMAnswer(const Models::DescribeLLMAnswerRequest &request);

      /**
       * @summary Queries a list of questions similar to a user question.
       *
       * @param request DescribeLLMSimilarQuestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLLMSimilarQuestionsResponse
       */
      Models::DescribeLLMSimilarQuestionsResponse describeLLMSimilarQuestionsWithOptions(const Models::DescribeLLMSimilarQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of questions similar to a user question.
       *
       * @param request DescribeLLMSimilarQuestionsRequest
       * @return DescribeLLMSimilarQuestionsResponse
       */
      Models::DescribeLLMSimilarQuestionsResponse describeLLMSimilarQuestions(const Models::DescribeLLMSimilarQuestionsRequest &request);

      /**
       * @summary Queries the lake cache size of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeLakeCacheSizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLakeCacheSizeResponse
       */
      Models::DescribeLakeCacheSizeResponse describeLakeCacheSizeWithOptions(const Models::DescribeLakeCacheSizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the lake cache size of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeLakeCacheSizeRequest
       * @return DescribeLakeCacheSizeResponse
       */
      Models::DescribeLakeCacheSizeResponse describeLakeCacheSize(const Models::DescribeLakeCacheSizeRequest &request);

      /**
       * @summary Queries the service account permissions of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOperatorPermissionResponse
       */
      Models::DescribeOperatorPermissionResponse describeOperatorPermissionWithOptions(const Models::DescribeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service account permissions of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeOperatorPermissionRequest
       * @return DescribeOperatorPermissionResponse
       */
      Models::DescribeOperatorPermissionResponse describeOperatorPermission(const Models::DescribeOperatorPermissionRequest &request);

      /**
       * @summary Queries the information about oversized non-partitioned tables in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeOversizeNonPartitionTableInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOversizeNonPartitionTableInfosResponse
       */
      Models::DescribeOversizeNonPartitionTableInfosResponse describeOversizeNonPartitionTableInfosWithOptions(const Models::DescribeOversizeNonPartitionTableInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about oversized non-partitioned tables in an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeOversizeNonPartitionTableInfosRequest
       * @return DescribeOversizeNonPartitionTableInfosResponse
       */
      Models::DescribeOversizeNonPartitionTableInfosResponse describeOversizeNonPartitionTableInfos(const Models::DescribeOversizeNonPartitionTableInfosRequest &request);

      /**
       * @summary Queries the information about performance metrics of an SQL pattern such as the query duration and average memory usage for an AnalyticDB for MySQL cluster within a time range.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribePatternPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePatternPerformanceResponse
       */
      Models::DescribePatternPerformanceResponse describePatternPerformanceWithOptions(const Models::DescribePatternPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about performance metrics of an SQL pattern such as the query duration and average memory usage for an AnalyticDB for MySQL cluster within a time range.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribePatternPerformanceRequest
       * @return DescribePatternPerformanceResponse
       */
      Models::DescribePatternPerformanceResponse describePatternPerformance(const Models::DescribePatternPerformanceRequest &request);

      /**
       * @summary Queries the information about a monitoring view.
       *
       * @param request DescribePerformanceViewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePerformanceViewAttributeResponse
       */
      Models::DescribePerformanceViewAttributeResponse describePerformanceViewAttributeWithOptions(const Models::DescribePerformanceViewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a monitoring view.
       *
       * @param request DescribePerformanceViewAttributeRequest
       * @return DescribePerformanceViewAttributeResponse
       */
      Models::DescribePerformanceViewAttributeResponse describePerformanceViewAttribute(const Models::DescribePerformanceViewAttributeRequest &request);

      /**
       * @summary Queries a list of monitoring views.
       *
       * @param request DescribePerformanceViewsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePerformanceViewsResponse
       */
      Models::DescribePerformanceViewsResponse describePerformanceViewsWithOptions(const Models::DescribePerformanceViewsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of monitoring views.
       *
       * @param request DescribePerformanceViewsRequest
       * @return DescribePerformanceViewsResponse
       */
      Models::DescribePerformanceViewsResponse describePerformanceViews(const Models::DescribePerformanceViewsRequest &request);

      /**
       * @summary Queries a list of regions and zones in which AnalyticDB for MySQL Data Lakehouse Edition (V3.0) is available.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of regions and zones in which AnalyticDB for MySQL Data Lakehouse Edition (V3.0) is available.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the information about resource group specifications.
       *
       * @description ### [](#)
       * For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeResourceGroupSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceGroupSpecResponse
       */
      Models::DescribeResourceGroupSpecResponse describeResourceGroupSpecWithOptions(const Models::DescribeResourceGroupSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about resource group specifications.
       *
       * @description ### [](#)
       * For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeResourceGroupSpecRequest
       * @return DescribeResourceGroupSpecResponse
       */
      Models::DescribeResourceGroupSpecResponse describeResourceGroupSpec(const Models::DescribeResourceGroupSpecRequest &request);

      /**
       * @summary 获取用户配置的导出信息
       *
       * @param request DescribeResultExportConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResultExportConfigResponse
       */
      Models::DescribeResultExportConfigResponse describeResultExportConfigWithOptions(const Models::DescribeResultExportConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户配置的导出信息
       *
       * @param request DescribeResultExportConfigRequest
       * @return DescribeResultExportConfigResponse
       */
      Models::DescribeResultExportConfigResponse describeResultExportConfig(const Models::DescribeResultExportConfigRequest &request);

      /**
       * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster within a time range.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSQLPatternsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLPatternsResponse
       */
      Models::DescribeSQLPatternsResponse describeSQLPatternsWithOptions(const Models::DescribeSQLPatternsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster within a time range.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSQLPatternsRequest
       * @return DescribeSQLPatternsResponse
       */
      Models::DescribeSQLPatternsResponse describeSQLPatterns(const Models::DescribeSQLPatternsRequest &request);

      /**
       * @summary Queries the WebSocket domain name of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeSQLWebSocketDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLWebSocketDomainResponse
       */
      Models::DescribeSQLWebSocketDomainResponse describeSQLWebSocketDomainWithOptions(const Models::DescribeSQLWebSocketDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the WebSocket domain name of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeSQLWebSocketDomainRequest
       * @return DescribeSQLWebSocketDomainResponse
       */
      Models::DescribeSQLWebSocketDomainResponse describeSQLWebSocketDomain(const Models::DescribeSQLWebSocketDomainRequest &request);

      /**
       * @summary Queries a list of databases in an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSchemasResponse
       */
      Models::DescribeSchemasResponse describeSchemasWithOptions(const Models::DescribeSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases in an AnalyticDB for MySQL cluster.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSchemasRequest
       * @return DescribeSchemasResponse
       */
      Models::DescribeSchemasResponse describeSchemas(const Models::DescribeSchemasRequest &request);

      /**
       * @summary Queries the diagnostic information about a Spark application.
       *
       * @param request DescribeSparkAppDiagnosisInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSparkAppDiagnosisInfoResponse
       */
      Models::DescribeSparkAppDiagnosisInfoResponse describeSparkAppDiagnosisInfoWithOptions(const Models::DescribeSparkAppDiagnosisInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic information about a Spark application.
       *
       * @param request DescribeSparkAppDiagnosisInfoRequest
       * @return DescribeSparkAppDiagnosisInfoResponse
       */
      Models::DescribeSparkAppDiagnosisInfoResponse describeSparkAppDiagnosisInfo(const Models::DescribeSparkAppDiagnosisInfoRequest &request);

      /**
       * @summary Queries the type of a Spark application.
       *
       * @param request DescribeSparkAppTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSparkAppTypeResponse
       */
      Models::DescribeSparkAppTypeResponse describeSparkAppTypeWithOptions(const Models::DescribeSparkAppTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the type of a Spark application.
       *
       * @param request DescribeSparkAppTypeRequest
       * @return DescribeSparkAppTypeResponse
       */
      Models::DescribeSparkAppTypeResponse describeSparkAppType(const Models::DescribeSparkAppTypeRequest &request);

      /**
       * @summary 查询Spark审计日志
       *
       * @param request DescribeSparkAuditLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSparkAuditLogRecordsResponse
       */
      Models::DescribeSparkAuditLogRecordsResponse describeSparkAuditLogRecordsWithOptions(const Models::DescribeSparkAuditLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Spark审计日志
       *
       * @param request DescribeSparkAuditLogRecordsRequest
       * @return DescribeSparkAuditLogRecordsResponse
       */
      Models::DescribeSparkAuditLogRecordsResponse describeSparkAuditLogRecords(const Models::DescribeSparkAuditLogRecordsRequest &request);

      /**
       * @summary Queries the execution logs of Spark code.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSparkCodeLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSparkCodeLogResponse
       */
      Models::DescribeSparkCodeLogResponse describeSparkCodeLogWithOptions(const Models::DescribeSparkCodeLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution logs of Spark code.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSparkCodeLogRequest
       * @return DescribeSparkCodeLogResponse
       */
      Models::DescribeSparkCodeLogResponse describeSparkCodeLog(const Models::DescribeSparkCodeLogRequest &request);

      /**
       * @summary Queries the execution result of Spark code.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSparkCodeOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSparkCodeOutputResponse
       */
      Models::DescribeSparkCodeOutputResponse describeSparkCodeOutputWithOptions(const Models::DescribeSparkCodeOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution result of Spark code.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSparkCodeOutputRequest
       * @return DescribeSparkCodeOutputResponse
       */
      Models::DescribeSparkCodeOutputResponse describeSparkCodeOutput(const Models::DescribeSparkCodeOutputRequest &request);

      /**
       * @summary Queries the URL of the web UI for a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSparkCodeWebUiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSparkCodeWebUiResponse
       */
      Models::DescribeSparkCodeWebUiResponse describeSparkCodeWebUiWithOptions(const Models::DescribeSparkCodeWebUiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the URL of the web UI for a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeSparkCodeWebUiRequest
       * @return DescribeSparkCodeWebUiResponse
       */
      Models::DescribeSparkCodeWebUiResponse describeSparkCodeWebUi(const Models::DescribeSparkCodeWebUiRequest &request);

      /**
       * @summary Queries the diagnostic information about a Spark SQL query.
       *
       * @param request DescribeSparkSQLDiagnosisAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSparkSQLDiagnosisAttributeResponse
       */
      Models::DescribeSparkSQLDiagnosisAttributeResponse describeSparkSQLDiagnosisAttributeWithOptions(const Models::DescribeSparkSQLDiagnosisAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic information about a Spark SQL query.
       *
       * @param request DescribeSparkSQLDiagnosisAttributeRequest
       * @return DescribeSparkSQLDiagnosisAttributeResponse
       */
      Models::DescribeSparkSQLDiagnosisAttributeResponse describeSparkSQLDiagnosisAttribute(const Models::DescribeSparkSQLDiagnosisAttributeRequest &request);

      /**
       * @summary Queries the diagnostic information about Spark SQL queries.
       *
       * @param request DescribeSparkSQLDiagnosisListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSparkSQLDiagnosisListResponse
       */
      Models::DescribeSparkSQLDiagnosisListResponse describeSparkSQLDiagnosisListWithOptions(const Models::DescribeSparkSQLDiagnosisListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic information about Spark SQL queries.
       *
       * @param request DescribeSparkSQLDiagnosisListRequest
       * @return DescribeSparkSQLDiagnosisListResponse
       */
      Models::DescribeSparkSQLDiagnosisListResponse describeSparkSQLDiagnosisList(const Models::DescribeSparkSQLDiagnosisListRequest &request);

      /**
       * @summary Queries the information about SQL patterns of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster within a time range.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeSqlPatternRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSqlPatternResponse
       */
      Models::DescribeSqlPatternResponse describeSqlPatternWithOptions(const Models::DescribeSqlPatternRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about SQL patterns of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster within a time range.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeSqlPatternRequest
       * @return DescribeSqlPatternResponse
       */
      Models::DescribeSqlPatternResponse describeSqlPattern(const Models::DescribeSqlPatternRequest &request);

      /**
       * @summary Queries the storage resource usage of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeStorageResourceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageResourceUsageResponse
       */
      Models::DescribeStorageResourceUsageResponse describeStorageResourceUsageWithOptions(const Models::DescribeStorageResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage resource usage of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeStorageResourceUsageRequest
       * @return DescribeStorageResourceUsageResponse
       */
      Models::DescribeStorageResourceUsageResponse describeStorageResourceUsage(const Models::DescribeStorageResourceUsageRequest &request);

      /**
       * @summary Queries the number of accesses to a table or all tables in an AnalyticDB for MySQL cluster on a date.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeTableAccessCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableAccessCountResponse
       */
      Models::DescribeTableAccessCountResponse describeTableAccessCountWithOptions(const Models::DescribeTableAccessCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of accesses to a table or all tables in an AnalyticDB for MySQL cluster on a date.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeTableAccessCountRequest
       * @return DescribeTableAccessCountResponse
       */
      Models::DescribeTableAccessCountResponse describeTableAccessCount(const Models::DescribeTableAccessCountRequest &request);

      /**
       * @summary Queries the information about data distribution among shards of a table.
       *
       * @param request DescribeTableDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableDetailResponse
       */
      Models::DescribeTableDetailResponse describeTableDetailWithOptions(const Models::DescribeTableDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about data distribution among shards of a table.
       *
       * @param request DescribeTableDetailRequest
       * @return DescribeTableDetailResponse
       */
      Models::DescribeTableDetailResponse describeTableDetail(const Models::DescribeTableDetailRequest &request);

      /**
       * @summary Queries the information about partition diagnostics.
       *
       * @param request DescribeTablePartitionDiagnoseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTablePartitionDiagnoseResponse
       */
      Models::DescribeTablePartitionDiagnoseResponse describeTablePartitionDiagnoseWithOptions(const Models::DescribeTablePartitionDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about partition diagnostics.
       *
       * @param request DescribeTablePartitionDiagnoseRequest
       * @return DescribeTablePartitionDiagnoseResponse
       */
      Models::DescribeTablePartitionDiagnoseResponse describeTablePartitionDiagnose(const Models::DescribeTablePartitionDiagnoseRequest &request);

      /**
       * @summary Queries the table statistics of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeTableStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableStatisticsResponse
       */
      Models::DescribeTableStatisticsResponse describeTableStatisticsWithOptions(const Models::DescribeTableStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the table statistics of an AnalyticDB for MySQL cluster.
       *
       * @param request DescribeTableStatisticsRequest
       * @return DescribeTableStatisticsResponse
       */
      Models::DescribeTableStatisticsResponse describeTableStatistics(const Models::DescribeTableStatisticsRequest &request);

      /**
       * @summary Queries a list of tables in a database.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTablesWithOptions(const Models::DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tables in a database.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeTablesRequest
       * @return DescribeTablesResponse
       */
      Models::DescribeTablesResponse describeTables(const Models::DescribeTablesRequest &request);

      /**
       * @summary Queries available quotas.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeUserQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserQuotaResponse
       */
      Models::DescribeUserQuotaResponse describeUserQuotaWithOptions(const Models::DescribeUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available quotas.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeUserQuotaRequest
       * @return DescribeUserQuotaResponse
       */
      Models::DescribeUserQuotaResponse describeUserQuota(const Models::DescribeUserQuotaRequest &request);

      /**
       * @summary Queries the diagnostic results of the storage layer.
       *
       * @param request DescribeWorkerDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWorkerDetectionResponse
       */
      Models::DescribeWorkerDetectionResponse describeWorkerDetectionWithOptions(const Models::DescribeWorkerDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic results of the storage layer.
       *
       * @param request DescribeWorkerDetectionRequest
       * @return DescribeWorkerDetectionResponse
       */
      Models::DescribeWorkerDetectionResponse describeWorkerDetection(const Models::DescribeWorkerDetectionRequest &request);

      /**
       * @summary 解绑用户弹性网卡
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DetachUserENIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachUserENIResponse
       */
      Models::DetachUserENIResponse detachUserENIWithOptions(const Models::DetachUserENIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑用户弹性网卡
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DetachUserENIRequest
       * @return DetachUserENIResponse
       */
      Models::DetachUserENIResponse detachUserENI(const Models::DetachUserENIRequest &request);

      /**
       * @summary Disables the suggestion feature.
       *
       * @param request DisableAdviceServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAdviceServiceResponse
       */
      Models::DisableAdviceServiceResponse disableAdviceServiceWithOptions(const Models::DisableAdviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the suggestion feature.
       *
       * @param request DisableAdviceServiceRequest
       * @return DisableAdviceServiceResponse
       */
      Models::DisableAdviceServiceResponse disableAdviceService(const Models::DisableAdviceServiceRequest &request);

      /**
       * @summary Disables a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DisableElasticPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableElasticPlanResponse
       */
      Models::DisableElasticPlanResponse disableElasticPlanWithOptions(const Models::DisableElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DisableElasticPlanRequest
       * @return DisableElasticPlanResponse
       */
      Models::DisableElasticPlanResponse disableElasticPlan(const Models::DisableElasticPlanRequest &request);

      /**
       * @summary Downloads the diagnostic information about SQL statements that meet a query condition for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DownloadDiagnosisRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadDiagnosisRecordsResponse
       */
      Models::DownloadDiagnosisRecordsResponse downloadDiagnosisRecordsWithOptions(const Models::DownloadDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads the diagnostic information about SQL statements that meet a query condition for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DownloadDiagnosisRecordsRequest
       * @return DownloadDiagnosisRecordsResponse
       */
      Models::DownloadDiagnosisRecordsResponse downloadDiagnosisRecords(const Models::DownloadDiagnosisRecordsRequest &request);

      /**
       * @summary Queries the Object Storage Service (OSS) URL of the downloaded certificate authority (CA) certificate that is used to connect to the wide table engine.
       *
       * @param request DownloadInstanceCACertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadInstanceCACertificateResponse
       */
      Models::DownloadInstanceCACertificateResponse downloadInstanceCACertificateWithOptions(const Models::DownloadInstanceCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Object Storage Service (OSS) URL of the downloaded certificate authority (CA) certificate that is used to connect to the wide table engine.
       *
       * @param request DownloadInstanceCACertificateRequest
       * @return DownloadInstanceCACertificateResponse
       */
      Models::DownloadInstanceCACertificateResponse downloadInstanceCACertificate(const Models::DownloadInstanceCACertificateRequest &request);

      /**
       * @summary Enables the suggestion feature.
       *
       * @param request EnableAdviceServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAdviceServiceResponse
       */
      Models::EnableAdviceServiceResponse enableAdviceServiceWithOptions(const Models::EnableAdviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the suggestion feature.
       *
       * @param request EnableAdviceServiceRequest
       * @return EnableAdviceServiceResponse
       */
      Models::EnableAdviceServiceResponse enableAdviceService(const Models::EnableAdviceServiceRequest &request);

      /**
       * @summary Enables a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request EnableElasticPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableElasticPlanResponse
       */
      Models::EnableElasticPlanResponse enableElasticPlanWithOptions(const Models::EnableElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request EnableElasticPlanRequest
       * @return EnableElasticPlanResponse
       */
      Models::EnableElasticPlanResponse enableElasticPlan(const Models::EnableElasticPlanRequest &request);

      /**
       * @summary Executes part of the code in a Spark job.
       *
       * @param request ExecuteSparkReplStatementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteSparkReplStatementResponse
       */
      Models::ExecuteSparkReplStatementResponse executeSparkReplStatementWithOptions(const Models::ExecuteSparkReplStatementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes part of the code in a Spark job.
       *
       * @param request ExecuteSparkReplStatementRequest
       * @return ExecuteSparkReplStatementResponse
       */
      Models::ExecuteSparkReplStatementResponse executeSparkReplStatement(const Models::ExecuteSparkReplStatementRequest &request);

      /**
       * @summary Executes Spark SQL statements in batches.
       *
       * @param request ExecuteSparkWarehouseBatchSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteSparkWarehouseBatchSQLResponse
       */
      Models::ExecuteSparkWarehouseBatchSQLResponse executeSparkWarehouseBatchSQLWithOptions(const Models::ExecuteSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes Spark SQL statements in batches.
       *
       * @param request ExecuteSparkWarehouseBatchSQLRequest
       * @return ExecuteSparkWarehouseBatchSQLResponse
       */
      Models::ExecuteSparkWarehouseBatchSQLResponse executeSparkWarehouseBatchSQL(const Models::ExecuteSparkWarehouseBatchSQLRequest &request);

      /**
       * @deprecated OpenAPI ExistRunningSQLEngine is deprecated
       *
       * @summary Queries whether a running SQL engine exists.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request ExistRunningSQLEngineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExistRunningSQLEngineResponse
       */
      Models::ExistRunningSQLEngineResponse existRunningSQLEngineWithOptions(const Models::ExistRunningSQLEngineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ExistRunningSQLEngine is deprecated
       *
       * @summary Queries whether a running SQL engine exists.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request ExistRunningSQLEngineRequest
       * @return ExistRunningSQLEngineResponse
       */
      Models::ExistRunningSQLEngineResponse existRunningSQLEngine(const Models::ExistRunningSQLEngineRequest &request);

      /**
       * @summary 获取Spark权限说明,失败时给出配置权限的帮助信息
       *
       * @param request GetADBSparkNecessaryRAMPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetADBSparkNecessaryRAMPermissionsResponse
       */
      Models::GetADBSparkNecessaryRAMPermissionsResponse getADBSparkNecessaryRAMPermissionsWithOptions(const Models::GetADBSparkNecessaryRAMPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Spark权限说明,失败时给出配置权限的帮助信息
       *
       * @param request GetADBSparkNecessaryRAMPermissionsRequest
       * @return GetADBSparkNecessaryRAMPermissionsResponse
       */
      Models::GetADBSparkNecessaryRAMPermissionsResponse getADBSparkNecessaryRAMPermissions(const Models::GetADBSparkNecessaryRAMPermissionsRequest &request);

      /**
       * @summary Queries a list of databases.
       *
       * @param request GetApsManagedDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApsManagedDatabasesResponse
       */
      Models::GetApsManagedDatabasesResponse getApsManagedDatabasesWithOptions(const Models::GetApsManagedDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases.
       *
       * @param request GetApsManagedDatabasesRequest
       * @return GetApsManagedDatabasesResponse
       */
      Models::GetApsManagedDatabasesResponse getApsManagedDatabases(const Models::GetApsManagedDatabasesRequest &request);

      /**
       * @summary Queries the table creation statement for tables.
       *
       * @param request GetCreateTableSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreateTableSQLResponse
       */
      Models::GetCreateTableSQLResponse getCreateTableSQLWithOptions(const Models::GetCreateTableSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the table creation statement for tables.
       *
       * @param request GetCreateTableSQLRequest
       * @return GetCreateTableSQLResponse
       */
      Models::GetCreateTableSQLResponse getCreateTableSQL(const Models::GetCreateTableSQLRequest &request);

      /**
       * @summary Queries the information about databases.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetDatabaseObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseObjectsResponse
       */
      Models::GetDatabaseObjectsResponse getDatabaseObjectsWithOptions(const Models::GetDatabaseObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about databases.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetDatabaseObjectsRequest
       * @return GetDatabaseObjectsResponse
       */
      Models::GetDatabaseObjectsResponse getDatabaseObjects(const Models::GetDatabaseObjectsRequest &request);

      /**
       * @summary Queries a lake storage.
       *
       * @param request GetLakeStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLakeStorageResponse
       */
      Models::GetLakeStorageResponse getLakeStorageWithOptions(const Models::GetLakeStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a lake storage.
       *
       * @param request GetLakeStorageRequest
       * @return GetLakeStorageResponse
       */
      Models::GetLakeStorageResponse getLakeStorage(const Models::GetLakeStorageRequest &request);

      /**
       * @summary Queries the information about the retry log of a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppAttemptLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkAppAttemptLogResponse
       */
      Models::GetSparkAppAttemptLogResponse getSparkAppAttemptLogWithOptions(const Models::GetSparkAppAttemptLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the retry log of a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppAttemptLogRequest
       * @return GetSparkAppAttemptLogResponse
       */
      Models::GetSparkAppAttemptLogResponse getSparkAppAttemptLog(const Models::GetSparkAppAttemptLogRequest &request);

      /**
       * @summary Queries the information about an Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkAppInfoResponse
       */
      Models::GetSparkAppInfoResponse getSparkAppInfoWithOptions(const Models::GetSparkAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppInfoRequest
       * @return GetSparkAppInfoResponse
       */
      Models::GetSparkAppInfoResponse getSparkAppInfo(const Models::GetSparkAppInfoRequest &request);

      /**
       * @summary Queries the logs of a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkAppLogResponse
       */
      Models::GetSparkAppLogResponse getSparkAppLogWithOptions(const Models::GetSparkAppLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppLogRequest
       * @return GetSparkAppLogResponse
       */
      Models::GetSparkAppLogResponse getSparkAppLog(const Models::GetSparkAppLogRequest &request);

      /**
       * @summary Queries the metrics of a Spark application.
       *
       * @description *   Before you call this operation, you must call the [PreloadSparkAppMetrics](https://help.aliyun.com/document_detail/612447.html) operation to preload the metrics of a Spark application.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkAppMetricsResponse
       */
      Models::GetSparkAppMetricsResponse getSparkAppMetricsWithOptions(const Models::GetSparkAppMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics of a Spark application.
       *
       * @description *   Before you call this operation, you must call the [PreloadSparkAppMetrics](https://help.aliyun.com/document_detail/612447.html) operation to preload the metrics of a Spark application.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppMetricsRequest
       * @return GetSparkAppMetricsResponse
       */
      Models::GetSparkAppMetricsResponse getSparkAppMetrics(const Models::GetSparkAppMetricsRequest &request);

      /**
       * @summary Queries the status of a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkAppStateResponse
       */
      Models::GetSparkAppStateResponse getSparkAppStateWithOptions(const Models::GetSparkAppStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkAppStateRequest
       * @return GetSparkAppStateResponse
       */
      Models::GetSparkAppStateResponse getSparkAppState(const Models::GetSparkAppStateRequest &request);

      /**
       * @summary Queries the URL of the web UI for a Spark application.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetSparkAppWebUiAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkAppWebUiAddressResponse
       */
      Models::GetSparkAppWebUiAddressResponse getSparkAppWebUiAddressWithOptions(const Models::GetSparkAppWebUiAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the URL of the web UI for a Spark application.
       *
       * @description *   General endpoint: `adb.aliyuncs.com`.
       * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetSparkAppWebUiAddressRequest
       * @return GetSparkAppWebUiAddressResponse
       */
      Models::GetSparkAppWebUiAddressResponse getSparkAppWebUiAddress(const Models::GetSparkAppWebUiAddressRequest &request);

      /**
       * @summary Queries the Spark log configuration of an AnalyticDB for MySQL cluster, including the default Spark log path.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkConfigLogPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkConfigLogPathResponse
       */
      Models::GetSparkConfigLogPathResponse getSparkConfigLogPathWithOptions(const Models::GetSparkConfigLogPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Spark log configuration of an AnalyticDB for MySQL cluster, including the default Spark log path.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkConfigLogPathRequest
       * @return GetSparkConfigLogPathResponse
       */
      Models::GetSparkConfigLogPathResponse getSparkConfigLogPath(const Models::GetSparkConfigLogPathRequest &request);

      /**
       * @summary Queries the results of a Spark log analysis task.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkLogAnalyzeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkLogAnalyzeTaskResponse
       */
      Models::GetSparkLogAnalyzeTaskResponse getSparkLogAnalyzeTaskWithOptions(const Models::GetSparkLogAnalyzeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of a Spark log analysis task.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkLogAnalyzeTaskRequest
       * @return GetSparkLogAnalyzeTaskResponse
       */
      Models::GetSparkLogAnalyzeTaskResponse getSparkLogAnalyzeTask(const Models::GetSparkLogAnalyzeTaskRequest &request);

      /**
       * @summary Queries the status of a Spark session.
       *
       * @param request GetSparkReplSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkReplSessionResponse
       */
      Models::GetSparkReplSessionResponse getSparkReplSessionWithOptions(const Models::GetSparkReplSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a Spark session.
       *
       * @param request GetSparkReplSessionRequest
       * @return GetSparkReplSessionResponse
       */
      Models::GetSparkReplSessionResponse getSparkReplSession(const Models::GetSparkReplSessionRequest &request);

      /**
       * @summary Queries the execution result of a code block.
       *
       * @param request GetSparkReplStatementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkReplStatementResponse
       */
      Models::GetSparkReplStatementResponse getSparkReplStatementWithOptions(const Models::GetSparkReplStatementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution result of a code block.
       *
       * @param request GetSparkReplStatementRequest
       * @return GetSparkReplStatementResponse
       */
      Models::GetSparkReplStatementResponse getSparkReplStatement(const Models::GetSparkReplStatementRequest &request);

      /**
       * @deprecated OpenAPI GetSparkSQLEngineState is deprecated
       *
       * @summary Queries the state information about the Spark SQL engine.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkSQLEngineStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkSQLEngineStateResponse
       */
      Models::GetSparkSQLEngineStateResponse getSparkSQLEngineStateWithOptions(const Models::GetSparkSQLEngineStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetSparkSQLEngineState is deprecated
       *
       * @summary Queries the state information about the Spark SQL engine.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkSQLEngineStateRequest
       * @return GetSparkSQLEngineStateResponse
       */
      Models::GetSparkSQLEngineStateResponse getSparkSQLEngineState(const Models::GetSparkSQLEngineStateRequest &request);

      /**
       * @summary Queries the content of a Spark application template.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkTemplateFileContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkTemplateFileContentResponse
       */
      Models::GetSparkTemplateFileContentResponse getSparkTemplateFileContentWithOptions(const Models::GetSparkTemplateFileContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the content of a Spark application template.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkTemplateFileContentRequest
       * @return GetSparkTemplateFileContentResponse
       */
      Models::GetSparkTemplateFileContentResponse getSparkTemplateFileContent(const Models::GetSparkTemplateFileContentRequest &request);

      /**
       * @summary Queries the directory structure of Spark applications.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkTemplateFolderTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkTemplateFolderTreeResponse
       */
      Models::GetSparkTemplateFolderTreeResponse getSparkTemplateFolderTreeWithOptions(const Models::GetSparkTemplateFolderTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the directory structure of Spark applications.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkTemplateFolderTreeRequest
       * @return GetSparkTemplateFolderTreeResponse
       */
      Models::GetSparkTemplateFolderTreeResponse getSparkTemplateFolderTree(const Models::GetSparkTemplateFolderTreeRequest &request);

      /**
       * @summary Queries the directory structure of Spark applications.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkTemplateFullTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkTemplateFullTreeResponse
       */
      Models::GetSparkTemplateFullTreeResponse getSparkTemplateFullTreeWithOptions(const Models::GetSparkTemplateFullTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the directory structure of Spark applications.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request GetSparkTemplateFullTreeRequest
       * @return GetSparkTemplateFullTreeResponse
       */
      Models::GetSparkTemplateFullTreeResponse getSparkTemplateFullTree(const Models::GetSparkTemplateFullTreeRequest &request);

      /**
       * @summary Queries the execution result of a Spark SQL statement.
       *
       * @param request GetSparkWarehouseBatchSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkWarehouseBatchSQLResponse
       */
      Models::GetSparkWarehouseBatchSQLResponse getSparkWarehouseBatchSQLWithOptions(const Models::GetSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution result of a Spark SQL statement.
       *
       * @param request GetSparkWarehouseBatchSQLRequest
       * @return GetSparkWarehouseBatchSQLResponse
       */
      Models::GetSparkWarehouseBatchSQLResponse getSparkWarehouseBatchSQL(const Models::GetSparkWarehouseBatchSQLRequest &request);

      /**
       * @summary 获取表
       *
       * @param request GetTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableResponse
       */
      Models::GetTableResponse getTableWithOptions(const Models::GetTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取表
       *
       * @param request GetTableRequest
       * @return GetTableResponse
       */
      Models::GetTableResponse getTable(const Models::GetTableRequest &request);

      /**
       * @summary Queries the information about columns.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetTableColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnsResponse
       */
      Models::GetTableColumnsResponse getTableColumnsWithOptions(const Models::GetTableColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about columns.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetTableColumnsRequest
       * @return GetTableColumnsResponse
       */
      Models::GetTableColumnsResponse getTableColumns(const Models::GetTableColumnsRequest &request);

      /**
       * @summary Queries the statement that is used to create a table.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetTableDDLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableDDLResponse
       */
      Models::GetTableDDLResponse getTableDDLWithOptions(const Models::GetTableDDLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statement that is used to create a table.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetTableDDLRequest
       * @return GetTableDDLResponse
       */
      Models::GetTableDDLResponse getTableDDL(const Models::GetTableDDLRequest &request);

      /**
       * @summary 获取table概要信息
       *
       * @param request GetTableObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableObjectsResponse
       */
      Models::GetTableObjectsResponse getTableObjectsWithOptions(const Models::GetTableObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取table概要信息
       *
       * @param request GetTableObjectsRequest
       * @return GetTableObjectsResponse
       */
      Models::GetTableObjectsResponse getTableObjects(const Models::GetTableObjectsRequest &request);

      /**
       * @summary Queries the statement that is used to create a view.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetViewDDLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetViewDDLResponse
       */
      Models::GetViewDDLResponse getViewDDLWithOptions(const Models::GetViewDDLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statement that is used to create a view.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetViewDDLRequest
       * @return GetViewDDLResponse
       */
      Models::GetViewDDLResponse getViewDDL(const Models::GetViewDDLRequest &request);

      /**
       * @summary Queries the information about views.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetViewObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetViewObjectsResponse
       */
      Models::GetViewObjectsResponse getViewObjectsWithOptions(const Models::GetViewObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about views.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request GetViewObjectsRequest
       * @return GetViewObjectsResponse
       */
      Models::GetViewObjectsResponse getViewObjects(const Models::GetViewObjectsRequest &request);

      /**
       * @summary Grants permissions to the service account of an AnalyticDB for MySQL cluster.
       *
       * @param request GrantOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermissionWithOptions(const Models::GrantOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to the service account of an AnalyticDB for MySQL cluster.
       *
       * @param request GrantOperatorPermissionRequest
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermission(const Models::GrantOperatorPermissionRequest &request);

      /**
       * @summary Terminates an ongoing query.
       *
       * @param request KillProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcessWithOptions(const Models::KillProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates an ongoing query.
       *
       * @param request KillProcessRequest
       * @return KillProcessResponse
       */
      Models::KillProcessResponse killProcess(const Models::KillProcessRequest &request);

      /**
       * @summary Terminates a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request KillSparkAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillSparkAppResponse
       */
      Models::KillSparkAppResponse killSparkAppWithOptions(const Models::KillSparkAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request KillSparkAppRequest
       * @return KillSparkAppResponse
       */
      Models::KillSparkAppResponse killSparkApp(const Models::KillSparkAppRequest &request);

      /**
       * @summary Terminates a Spark log analysis task and queries the information about the analysis task.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request KillSparkLogAnalyzeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillSparkLogAnalyzeTaskResponse
       */
      Models::KillSparkLogAnalyzeTaskResponse killSparkLogAnalyzeTaskWithOptions(const Models::KillSparkLogAnalyzeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a Spark log analysis task and queries the information about the analysis task.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request KillSparkLogAnalyzeTaskRequest
       * @return KillSparkLogAnalyzeTaskResponse
       */
      Models::KillSparkLogAnalyzeTaskResponse killSparkLogAnalyzeTask(const Models::KillSparkLogAnalyzeTaskRequest &request);

      /**
       * @deprecated OpenAPI KillSparkSQLEngine is deprecated
       *
       * @summary Shuts down a Spark SQL engine.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request KillSparkSQLEngineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KillSparkSQLEngineResponse
       */
      Models::KillSparkSQLEngineResponse killSparkSQLEngineWithOptions(const Models::KillSparkSQLEngineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI KillSparkSQLEngine is deprecated
       *
       * @summary Shuts down a Spark SQL engine.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request KillSparkSQLEngineRequest
       * @return KillSparkSQLEngineResponse
       */
      Models::KillSparkSQLEngineResponse killSparkSQLEngine(const Models::KillSparkSQLEngineRequest &request);

      /**
       * @summary Queries a list of lifecycle management policies of an AnalyticDB for MySQL cluster.
       *
       * @param request ListApsLifecycleStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApsLifecycleStrategyResponse
       */
      Models::ListApsLifecycleStrategyResponse listApsLifecycleStrategyWithOptions(const Models::ListApsLifecycleStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of lifecycle management policies of an AnalyticDB for MySQL cluster.
       *
       * @param request ListApsLifecycleStrategyRequest
       * @return ListApsLifecycleStrategyResponse
       */
      Models::ListApsLifecycleStrategyResponse listApsLifecycleStrategy(const Models::ListApsLifecycleStrategyRequest &request);

      /**
       * @summary Queries a list of lake storage optimization policies for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ListApsOptimizationStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApsOptimizationStrategyResponse
       */
      Models::ListApsOptimizationStrategyResponse listApsOptimizationStrategyWithOptions(const Models::ListApsOptimizationStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of lake storage optimization policies for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ListApsOptimizationStrategyRequest
       * @return ListApsOptimizationStrategyResponse
       */
      Models::ListApsOptimizationStrategyResponse listApsOptimizationStrategy(const Models::ListApsOptimizationStrategyRequest &request);

      /**
       * @summary Queries a list of optimization jobs executed based on a lifecycle management policy. The system runs optimization jobs on a regular basis based on lifecycle management policies.
       *
       * @param request ListApsOptimizationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApsOptimizationTasksResponse
       */
      Models::ListApsOptimizationTasksResponse listApsOptimizationTasksWithOptions(const Models::ListApsOptimizationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of optimization jobs executed based on a lifecycle management policy. The system runs optimization jobs on a regular basis based on lifecycle management policies.
       *
       * @param request ListApsOptimizationTasksRequest
       * @return ListApsOptimizationTasksResponse
       */
      Models::ListApsOptimizationTasksResponse listApsOptimizationTasks(const Models::ListApsOptimizationTasksRequest &request);

      /**
       * @summary Queries a list of lake storages.
       *
       * @param request ListLakeStoragesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLakeStoragesResponse
       */
      Models::ListLakeStoragesResponse listLakeStoragesWithOptions(const Models::ListLakeStoragesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of lake storages.
       *
       * @param request ListLakeStoragesRequest
       * @return ListLakeStoragesResponse
       */
      Models::ListLakeStoragesResponse listLakeStorages(const Models::ListLakeStoragesRequest &request);

      /**
       * @summary Queries the execution records of result set export jobs of a Resource Access Management (RAM) user.
       *
       * @param tmpReq ListResultExportJobHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResultExportJobHistoryResponse
       */
      Models::ListResultExportJobHistoryResponse listResultExportJobHistoryWithOptions(const Models::ListResultExportJobHistoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution records of result set export jobs of a Resource Access Management (RAM) user.
       *
       * @param request ListResultExportJobHistoryRequest
       * @return ListResultExportJobHistoryResponse
       */
      Models::ListResultExportJobHistoryResponse listResultExportJobHistory(const Models::ListResultExportJobHistoryRequest &request);

      /**
       * @summary Queries the information about retry attempts of a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request ListSparkAppAttemptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSparkAppAttemptsResponse
       */
      Models::ListSparkAppAttemptsResponse listSparkAppAttemptsWithOptions(const Models::ListSparkAppAttemptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about retry attempts of a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request ListSparkAppAttemptsRequest
       * @return ListSparkAppAttemptsResponse
       */
      Models::ListSparkAppAttemptsResponse listSparkAppAttempts(const Models::ListSparkAppAttemptsRequest &request);

      /**
       * @summary Queries the Spark applications that run on an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @param request ListSparkAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSparkAppsResponse
       */
      Models::ListSparkAppsResponse listSparkAppsWithOptions(const Models::ListSparkAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Spark applications that run on an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @param request ListSparkAppsRequest
       * @return ListSparkAppsResponse
       */
      Models::ListSparkAppsResponse listSparkApps(const Models::ListSparkAppsRequest &request);

      /**
       * @summary Queries a list of Spark log analysis tasks.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request ListSparkLogAnalyzeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSparkLogAnalyzeTasksResponse
       */
      Models::ListSparkLogAnalyzeTasksResponse listSparkLogAnalyzeTasksWithOptions(const Models::ListSparkLogAnalyzeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Spark log analysis tasks.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request ListSparkLogAnalyzeTasksRequest
       * @return ListSparkLogAnalyzeTasksResponse
       */
      Models::ListSparkLogAnalyzeTasksResponse listSparkLogAnalyzeTasks(const Models::ListSparkLogAnalyzeTasksRequest &request);

      /**
       * @summary Queries a list of Spark template file IDs for AnalyticDB for MySQL clusters.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request ListSparkTemplateFileIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSparkTemplateFileIdsResponse
       */
      Models::ListSparkTemplateFileIdsResponse listSparkTemplateFileIdsWithOptions(const Models::ListSparkTemplateFileIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Spark template file IDs for AnalyticDB for MySQL clusters.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request ListSparkTemplateFileIdsRequest
       * @return ListSparkTemplateFileIdsResponse
       */
      Models::ListSparkTemplateFileIdsResponse listSparkTemplateFileIds(const Models::ListSparkTemplateFileIdsRequest &request);

      /**
       * @summary Queries a list of Spark SQL statements.
       *
       * @param request ListSparkWarehouseBatchSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSparkWarehouseBatchSQLResponse
       */
      Models::ListSparkWarehouseBatchSQLResponse listSparkWarehouseBatchSQLWithOptions(const Models::ListSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Spark SQL statements.
       *
       * @param request ListSparkWarehouseBatchSQLRequest
       * @return ListSparkWarehouseBatchSQLResponse
       */
      Models::ListSparkWarehouseBatchSQLResponse listSparkWarehouseBatchSQL(const Models::ListSparkWarehouseBatchSQLRequest &request);

      /**
       * @summary Queries the tags that are added to AnalyticDB for MySQL clusters, or the AnalyticDB for MySQL clusters that have tags added.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to AnalyticDB for MySQL clusters, or the AnalyticDB for MySQL clusters that have tags added.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Loads a built-in dataset.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request LoadSampleDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadSampleDataSetResponse
       */
      Models::LoadSampleDataSetResponse loadSampleDataSetWithOptions(const Models::LoadSampleDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Loads a built-in dataset.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request LoadSampleDataSetRequest
       * @return LoadSampleDataSetResponse
       */
      Models::LoadSampleDataSetResponse loadSampleDataSet(const Models::LoadSampleDataSetRequest &request);

      /**
       * @summary Modifies the description of a database account for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Modifies the permissions of a database account.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param tmpReq ModifyAccountPrivilegesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountPrivilegesResponse
       */
      Models::ModifyAccountPrivilegesResponse modifyAccountPrivilegesWithOptions(const Models::ModifyAccountPrivilegesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of a database account.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyAccountPrivilegesRequest
       * @return ModifyAccountPrivilegesResponse
       */
      Models::ModifyAccountPrivilegesResponse modifyAccountPrivileges(const Models::ModifyAccountPrivilegesRequest &request);

      /**
       * @summary Modifies an AnalyticDB Pipeline Service (APS) data source.
       *
       * @description ### [](#)
       * *   You can call this operation only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
       * *   You cannot modify the number of nodes for the USER_DEFAULT resource group.
       *
       * @param tmpReq ModifyApsDatasoureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApsDatasoureResponse
       */
      Models::ModifyApsDatasoureResponse modifyApsDatasoureWithOptions(const Models::ModifyApsDatasoureRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an AnalyticDB Pipeline Service (APS) data source.
       *
       * @description ### [](#)
       * *   You can call this operation only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
       * *   You cannot modify the number of nodes for the USER_DEFAULT resource group.
       *
       * @param request ModifyApsDatasoureRequest
       * @return ModifyApsDatasoureResponse
       */
      Models::ModifyApsDatasoureResponse modifyApsDatasoure(const Models::ModifyApsDatasoureRequest &request);

      /**
       * @summary Modifies an AnalyticDB Pipeline Service (APS) job.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyApsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApsJobResponse
       */
      Models::ModifyApsJobResponse modifyApsJobWithOptions(const Models::ModifyApsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an AnalyticDB Pipeline Service (APS) job.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyApsJobRequest
       * @return ModifyApsJobResponse
       */
      Models::ModifyApsJobResponse modifyApsJob(const Models::ModifyApsJobRequest &request);

      /**
       * @summary Modifies an AnalyticDB Pipeline Service (APS) job from Simple Log Service (SLS) to an AnalyticDB for MySQL Data Warehouse Edition cluster.
       *
       * @param tmpReq ModifyApsSlsADBJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApsSlsADBJobResponse
       */
      Models::ModifyApsSlsADBJobResponse modifyApsSlsADBJobWithOptions(const Models::ModifyApsSlsADBJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an AnalyticDB Pipeline Service (APS) job from Simple Log Service (SLS) to an AnalyticDB for MySQL Data Warehouse Edition cluster.
       *
       * @param request ModifyApsSlsADBJobRequest
       * @return ModifyApsSlsADBJobResponse
       */
      Models::ModifyApsSlsADBJobResponse modifyApsSlsADBJob(const Models::ModifyApsSlsADBJobRequest &request);

      /**
       * @summary Modifies the AnalyticDB Pipeline Service (APS) workload name.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyApsWorkloadNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApsWorkloadNameResponse
       */
      Models::ModifyApsWorkloadNameResponse modifyApsWorkloadNameWithOptions(const Models::ModifyApsWorkloadNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the AnalyticDB Pipeline Service (APS) workload name.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyApsWorkloadNameRequest
       * @return ModifyApsWorkloadNameResponse
       */
      Models::ModifyApsWorkloadNameResponse modifyApsWorkloadName(const Models::ModifyApsWorkloadNameRequest &request);

      /**
       * @summary Modifies the SQL audit settings of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyAuditLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAuditLogConfigResponse
       */
      Models::ModifyAuditLogConfigResponse modifyAuditLogConfigWithOptions(const Models::ModifyAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SQL audit settings of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyAuditLogConfigRequest
       * @return ModifyAuditLogConfigResponse
       */
      Models::ModifyAuditLogConfigResponse modifyAuditLogConfig(const Models::ModifyAuditLogConfigRequest &request);

      /**
       * @summary Modifies the backup policy of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup policy of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Enables the wide table engine feature for an AnalyticDB for MySQL cluster or modifies the disk cache size of the wide table engine of an AnalyticDB for MySQL cluster for which you enabled the wide table engine feature.
       *
       * @param request ModifyClickhouseEngineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClickhouseEngineResponse
       */
      Models::ModifyClickhouseEngineResponse modifyClickhouseEngineWithOptions(const Models::ModifyClickhouseEngineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the wide table engine feature for an AnalyticDB for MySQL cluster or modifies the disk cache size of the wide table engine of an AnalyticDB for MySQL cluster for which you enabled the wide table engine feature.
       *
       * @param request ModifyClickhouseEngineRequest
       * @return ModifyClickhouseEngineResponse
       */
      Models::ModifyClickhouseEngineResponse modifyClickhouseEngine(const Models::ModifyClickhouseEngineRequest &request);

      /**
       * @summary Modifies the IP address whitelist of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param request ModifyClusterAccessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterAccessWhiteListResponse
       */
      Models::ModifyClusterAccessWhiteListResponse modifyClusterAccessWhiteListWithOptions(const Models::ModifyClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param request ModifyClusterAccessWhiteListRequest
       * @return ModifyClusterAccessWhiteListResponse
       */
      Models::ModifyClusterAccessWhiteListResponse modifyClusterAccessWhiteList(const Models::ModifyClusterAccessWhiteListRequest &request);

      /**
       * @summary Modifies the public endpoint of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyClusterConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterConnectionStringResponse
       */
      Models::ModifyClusterConnectionStringResponse modifyClusterConnectionStringWithOptions(const Models::ModifyClusterConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the public endpoint of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyClusterConnectionStringRequest
       * @return ModifyClusterConnectionStringResponse
       */
      Models::ModifyClusterConnectionStringResponse modifyClusterConnectionString(const Models::ModifyClusterConnectionStringRequest &request);

      /**
       * @summary Modifies the status of the remote build feature in the query acceleration configuration of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyCompactionServiceSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCompactionServiceSwitchResponse
       */
      Models::ModifyCompactionServiceSwitchResponse modifyCompactionServiceSwitchWithOptions(const Models::ModifyCompactionServiceSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of the remote build feature in the query acceleration configuration of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyCompactionServiceSwitchRequest
       * @return ModifyCompactionServiceSwitchResponse
       */
      Models::ModifyCompactionServiceSwitchResponse modifyCompactionServiceSwitch(const Models::ModifyCompactionServiceSwitchRequest &request);

      /**
       * @summary Changes the configurations of an AnalyticDB for MySQL Data Lakehouse Edition cluster.
       *
       * @description ### [](#)
       * *   During a scaling event, you are not allowed to execute the `SUBMIT JOB` statement to submit asynchronous jobs. If your business requires asynchronous jobs, perform scaling during appropriate periods.
       * *   When you scale a cluster, data in the cluster is migrated for redistribution. The amount of time that is required to migrate data is proportional to the data volume. During a scaling event, the services provided by the cluster are not interrupted. When you downgrade cluster specifications, data migration may require up to dozens of hours to complete. Proceed with caution especially if your cluster contains a large amount of data.
       * *   If the cluster has a built-in dataset loaded, make sure that the cluster has reserved storage resources of at least 24 AnalyticDB compute units (ACUs). Otherwise, the built-in dataset cannot be used.
       * *   When the scaling process is about to end, transient connections may occur. We recommend that you scale your cluster during off-peak hours or make sure that your application is configured to automatically reconnect to your cluster.
       * *   You can change an AnalyticDB for MySQL cluster from Data Warehouse Edition to Data Lakehouse Edition, but not the other way around. For more information, see Change a cluster from Data Warehouse Edition to Data Lakehouse Edition.
       * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBClusterWithOptions(const Models::ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the configurations of an AnalyticDB for MySQL Data Lakehouse Edition cluster.
       *
       * @description ### [](#)
       * *   During a scaling event, you are not allowed to execute the `SUBMIT JOB` statement to submit asynchronous jobs. If your business requires asynchronous jobs, perform scaling during appropriate periods.
       * *   When you scale a cluster, data in the cluster is migrated for redistribution. The amount of time that is required to migrate data is proportional to the data volume. During a scaling event, the services provided by the cluster are not interrupted. When you downgrade cluster specifications, data migration may require up to dozens of hours to complete. Proceed with caution especially if your cluster contains a large amount of data.
       * *   If the cluster has a built-in dataset loaded, make sure that the cluster has reserved storage resources of at least 24 AnalyticDB compute units (ACUs). Otherwise, the built-in dataset cannot be used.
       * *   When the scaling process is about to end, transient connections may occur. We recommend that you scale your cluster during off-peak hours or make sure that your application is configured to automatically reconnect to your cluster.
       * *   You can change an AnalyticDB for MySQL cluster from Data Warehouse Edition to Data Lakehouse Edition, but not the other way around. For more information, see Change a cluster from Data Warehouse Edition to Data Lakehouse Edition.
       * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyDBClusterRequest
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBCluster(const Models::ModifyDBClusterRequest &request);

      /**
       * @summary Modifies the description of an AnalyticDB for MySQL cluster to facilitate the maintenance and management of the cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(const Models::ModifyDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an AnalyticDB for MySQL cluster to facilitate the maintenance and management of the cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescription(const Models::ModifyDBClusterDescriptionRequest &request);

      /**
       * @summary Modifies the maintenance window of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(const Models::ModifyDBClusterMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(const Models::ModifyDBClusterMaintainTimeRequest &request);

      /**
       * @summary Changes the resource group to which an AnalyticDB for MySQL cluster belongs.
       *
       * @param request ModifyDBClusterResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResourceGroupResponse
       */
      Models::ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroupWithOptions(const Models::ModifyDBClusterResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which an AnalyticDB for MySQL cluster belongs.
       *
       * @param request ModifyDBClusterResourceGroupRequest
       * @return ModifyDBClusterResourceGroupResponse
       */
      Models::ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroup(const Models::ModifyDBClusterResourceGroupRequest &request);

      /**
       * @summary 配置SSL
       *
       * @param request ModifyDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterSSLResponse
       */
      Models::ModifyDBClusterSSLResponse modifyDBClusterSSLWithOptions(const Models::ModifyDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置SSL
       *
       * @param request ModifyDBClusterSSLRequest
       * @return ModifyDBClusterSSLResponse
       */
      Models::ModifyDBClusterSSLResponse modifyDBClusterSSL(const Models::ModifyDBClusterSSLRequest &request);

      /**
       * @summary Changes the virtual IP address (VIP) that is used to connect to an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterVipResponse
       */
      Models::ModifyDBClusterVipResponse modifyDBClusterVipWithOptions(const Models::ModifyDBClusterVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the virtual IP address (VIP) that is used to connect to an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyDBClusterVipRequest
       * @return ModifyDBClusterVipResponse
       */
      Models::ModifyDBClusterVipResponse modifyDBClusterVip(const Models::ModifyDBClusterVipRequest &request);

      /**
       * @summary Modifies the amount of reserved computing resources for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param tmpReq ModifyDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBResourceGroupResponse
       */
      Models::ModifyDBResourceGroupResponse modifyDBResourceGroupWithOptions(const Models::ModifyDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the amount of reserved computing resources for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyDBResourceGroupRequest
       * @return ModifyDBResourceGroupResponse
       */
      Models::ModifyDBResourceGroupResponse modifyDBResourceGroup(const Models::ModifyDBResourceGroupRequest &request);

      /**
       * @summary Modifies a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param request ModifyElasticPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticPlanResponse
       */
      Models::ModifyElasticPlanResponse modifyElasticPlanWithOptions(const Models::ModifyElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scaling plan for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
       *
       * @param request ModifyElasticPlanRequest
       * @return ModifyElasticPlanResponse
       */
      Models::ModifyElasticPlanResponse modifyElasticPlan(const Models::ModifyElasticPlanRequest &request);

      /**
       * @summary Modifies the disk cache size in the query acceleration configuration of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyEssdCacheConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEssdCacheConfigResponse
       */
      Models::ModifyEssdCacheConfigResponse modifyEssdCacheConfigWithOptions(const Models::ModifyEssdCacheConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the disk cache size in the query acceleration configuration of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyEssdCacheConfigRequest
       * @return ModifyEssdCacheConfigResponse
       */
      Models::ModifyEssdCacheConfigResponse modifyEssdCacheConfig(const Models::ModifyEssdCacheConfigRequest &request);

      /**
       * @summary Modifies the lake cache size of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyLakeCacheSizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLakeCacheSizeResponse
       */
      Models::ModifyLakeCacheSizeResponse modifyLakeCacheSizeWithOptions(const Models::ModifyLakeCacheSizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the lake cache size of an AnalyticDB for MySQL cluster.
       *
       * @param request ModifyLakeCacheSizeRequest
       * @return ModifyLakeCacheSizeResponse
       */
      Models::ModifyLakeCacheSizeResponse modifyLakeCacheSize(const Models::ModifyLakeCacheSizeRequest &request);

      /**
       * @summary Modifies the information about a custom monitoring view.
       *
       * @param tmpReq ModifyPerformanceViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPerformanceViewResponse
       */
      Models::ModifyPerformanceViewResponse modifyPerformanceViewWithOptions(const Models::ModifyPerformanceViewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a custom monitoring view.
       *
       * @param request ModifyPerformanceViewRequest
       * @return ModifyPerformanceViewResponse
       */
      Models::ModifyPerformanceViewResponse modifyPerformanceView(const Models::ModifyPerformanceViewRequest &request);

      /**
       * @summary 修改SQL脚本模板位置
       *
       * @param request ModifySqlTemplatePositionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySqlTemplatePositionResponse
       */
      Models::ModifySqlTemplatePositionResponse modifySqlTemplatePositionWithOptions(const Models::ModifySqlTemplatePositionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改SQL脚本模板位置
       *
       * @param request ModifySqlTemplatePositionRequest
       * @return ModifySqlTemplatePositionResponse
       */
      Models::ModifySqlTemplatePositionResponse modifySqlTemplatePosition(const Models::ModifySqlTemplatePositionRequest &request);

      /**
       * @summary Modifies the vSwitches that are connected to elastic network interfaces (ENIs).
       *
       * @param request ModifyUserEniVswitchOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserEniVswitchOptionsResponse
       */
      Models::ModifyUserEniVswitchOptionsResponse modifyUserEniVswitchOptionsWithOptions(const Models::ModifyUserEniVswitchOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the vSwitches that are connected to elastic network interfaces (ENIs).
       *
       * @param request ModifyUserEniVswitchOptionsRequest
       * @return ModifyUserEniVswitchOptionsResponse
       */
      Models::ModifyUserEniVswitchOptionsResponse modifyUserEniVswitchOptions(const Models::ModifyUserEniVswitchOptionsRequest &request);

      /**
       * @summary Preloads metrics for a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request PreloadSparkAppMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreloadSparkAppMetricsResponse
       */
      Models::PreloadSparkAppMetricsResponse preloadSparkAppMetricsWithOptions(const Models::PreloadSparkAppMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Preloads metrics for a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request PreloadSparkAppMetricsRequest
       * @return PreloadSparkAppMetricsResponse
       */
      Models::PreloadSparkAppMetricsResponse preloadSparkAppMetrics(const Models::PreloadSparkAppMetricsRequest &request);

      /**
       * @summary Releases the public endpoint of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnectionWithOptions(const Models::ReleaseClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnection(const Models::ReleaseClusterPublicConnectionRequest &request);

      /**
       * @summary Resets the password of a database account for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a database account for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Revokes permissions from the service account of an AnalyticDB for MySQL cluster.
       *
       * @param request RevokeOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermissionWithOptions(const Models::RevokeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions from the service account of an AnalyticDB for MySQL cluster.
       *
       * @param request RevokeOperatorPermissionRequest
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermission(const Models::RevokeOperatorPermissionRequest &request);

      /**
       * @summary Modifies the Spark log configuration.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request SetSparkAppLogRootPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSparkAppLogRootPathResponse
       */
      Models::SetSparkAppLogRootPathResponse setSparkAppLogRootPathWithOptions(const Models::SetSparkAppLogRootPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Spark log configuration.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request SetSparkAppLogRootPathRequest
       * @return SetSparkAppLogRootPathResponse
       */
      Models::SetSparkAppLogRootPathResponse setSparkAppLogRootPath(const Models::SetSparkAppLogRootPathRequest &request);

      /**
       * @summary Starts an AnalyticDB Pipeline Service (APS) job.
       *
       * @param request StartApsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartApsJobResponse
       */
      Models::StartApsJobResponse startApsJobWithOptions(const Models::StartApsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an AnalyticDB Pipeline Service (APS) job.
       *
       * @param request StartApsJobRequest
       * @return StartApsJobResponse
       */
      Models::StartApsJobResponse startApsJob(const Models::StartApsJobRequest &request);

      /**
       * @summary Starts a Spark session.
       *
       * @param request StartSparkReplSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSparkReplSessionResponse
       */
      Models::StartSparkReplSessionResponse startSparkReplSessionWithOptions(const Models::StartSparkReplSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a Spark session.
       *
       * @param request StartSparkReplSessionRequest
       * @return StartSparkReplSessionResponse
       */
      Models::StartSparkReplSessionResponse startSparkReplSession(const Models::StartSparkReplSessionRequest &request);

      /**
       * @deprecated OpenAPI StartSparkSQLEngine is deprecated
       *
       * @summary Starts the Spark SQL engine.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request StartSparkSQLEngineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSparkSQLEngineResponse
       */
      Models::StartSparkSQLEngineResponse startSparkSQLEngineWithOptions(const Models::StartSparkSQLEngineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI StartSparkSQLEngine is deprecated
       *
       * @summary Starts the Spark SQL engine.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request StartSparkSQLEngineRequest
       * @return StartSparkSQLEngineResponse
       */
      Models::StartSparkSQLEngineResponse startSparkSQLEngine(const Models::StartSparkSQLEngineRequest &request);

      /**
       * @summary Submits an SQL query and exports a result set.
       *
       * @param request SubmitResultExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitResultExportJobResponse
       */
      Models::SubmitResultExportJobResponse submitResultExportJobWithOptions(const Models::SubmitResultExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an SQL query and exports a result set.
       *
       * @param request SubmitResultExportJobRequest
       * @return SubmitResultExportJobResponse
       */
      Models::SubmitResultExportJobResponse submitResultExportJob(const Models::SubmitResultExportJobRequest &request);

      /**
       * @summary Submits a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request SubmitSparkAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSparkAppResponse
       */
      Models::SubmitSparkAppResponse submitSparkAppWithOptions(const Models::SubmitSparkAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a Spark application.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request SubmitSparkAppRequest
       * @return SubmitSparkAppResponse
       */
      Models::SubmitSparkAppResponse submitSparkApp(const Models::SubmitSparkAppRequest &request);

      /**
       * @summary Submits a Spark log analysis task and queries the analysis results.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request SubmitSparkLogAnalyzeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSparkLogAnalyzeTaskResponse
       */
      Models::SubmitSparkLogAnalyzeTaskResponse submitSparkLogAnalyzeTaskWithOptions(const Models::SubmitSparkLogAnalyzeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a Spark log analysis task and queries the analysis results.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request SubmitSparkLogAnalyzeTaskRequest
       * @return SubmitSparkLogAnalyzeTaskResponse
       */
      Models::SubmitSparkLogAnalyzeTaskResponse submitSparkLogAnalyzeTask(const Models::SubmitSparkLogAnalyzeTaskRequest &request);

      /**
       * @summary Suspends an AnalyticDB Pipeline Service (APS) job.
       *
       * @param request SuspendApsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendApsJobResponse
       */
      Models::SuspendApsJobResponse suspendApsJobWithOptions(const Models::SuspendApsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends an AnalyticDB Pipeline Service (APS) job.
       *
       * @param request SuspendApsJobRequest
       * @return SuspendApsJobResponse
       */
      Models::SuspendApsJobResponse suspendApsJob(const Models::SuspendApsJobRequest &request);

      /**
       * @summary Disassociates a standard account of an AnalyticDB for MySQL cluster from a Resource Access Management (RAM) user.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request UnbindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAccountResponse
       */
      Models::UnbindAccountResponse unbindAccountWithOptions(const Models::UnbindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a standard account of an AnalyticDB for MySQL cluster from a Resource Access Management (RAM) user.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request UnbindAccountRequest
       * @return UnbindAccountResponse
       */
      Models::UnbindAccountResponse unbindAccount(const Models::UnbindAccountRequest &request);

      /**
       * @summary Disassociates resource groups from database accounts for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request UnbindDBResourceGroupWithUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDBResourceGroupWithUserResponse
       */
      Models::UnbindDBResourceGroupWithUserResponse unbindDBResourceGroupWithUserWithOptions(const Models::UnbindDBResourceGroupWithUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates resource groups from database accounts for an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request UnbindDBResourceGroupWithUserRequest
       * @return UnbindDBResourceGroupWithUserResponse
       */
      Models::UnbindDBResourceGroupWithUserResponse unbindDBResourceGroupWithUser(const Models::UnbindDBResourceGroupWithUserRequest &request);

      /**
       * @summary Updates a lake storage.
       *
       * @param tmpReq UpdateLakeStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLakeStorageResponse
       */
      Models::UpdateLakeStorageResponse updateLakeStorageWithOptions(const Models::UpdateLakeStorageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a lake storage.
       *
       * @param request UpdateLakeStorageRequest
       * @return UpdateLakeStorageResponse
       */
      Models::UpdateLakeStorageResponse updateLakeStorage(const Models::UpdateLakeStorageRequest &request);

      /**
       * @summary Updates a Spark application template.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request UpdateSparkTemplateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSparkTemplateFileResponse
       */
      Models::UpdateSparkTemplateFileResponse updateSparkTemplateFileWithOptions(const Models::UpdateSparkTemplateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Spark application template.
       *
       * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
       *
       * @param request UpdateSparkTemplateFileRequest
       * @return UpdateSparkTemplateFileResponse
       */
      Models::UpdateSparkTemplateFileResponse updateSparkTemplateFile(const Models::UpdateSparkTemplateFileRequest &request);

      /**
       * @summary Updates the minor version of an AnalyticDB for MySQL cluster.
       *
       * @param request UpgradeKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeKernelVersionResponse
       */
      Models::UpgradeKernelVersionResponse upgradeKernelVersionWithOptions(const Models::UpgradeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the minor version of an AnalyticDB for MySQL cluster.
       *
       * @param request UpgradeKernelVersionRequest
       * @return UpgradeKernelVersionResponse
       */
      Models::UpgradeKernelVersionResponse upgradeKernelVersion(const Models::UpgradeKernelVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
