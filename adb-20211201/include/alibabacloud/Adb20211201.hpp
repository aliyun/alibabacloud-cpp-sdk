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
       * @summary Adds a knowledge base document.
       *
       * @param request AddKnowledgeFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddKnowledgeFileResponse
       */
      Models::AddKnowledgeFileResponse addKnowledgeFileWithOptions(const Models::AddKnowledgeFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a knowledge base document.
       *
       * @param request AddKnowledgeFileRequest
       * @return AddKnowledgeFileResponse
       */
      Models::AddKnowledgeFileResponse addKnowledgeFile(const Models::AddKnowledgeFileRequest &request);

      /**
       * @summary Allocates a public connection address for a cluster.
       *
       * @description For a list of service endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnectionWithOptions(const Models::AllocateClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allocates a public connection address for a cluster.
       *
       * @description For a list of service endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request AllocateClusterPublicConnectionRequest
       * @return AllocateClusterPublicConnectionResponse
       */
      Models::AllocateClusterPublicConnectionResponse allocateClusterPublicConnection(const Models::AllocateClusterPublicConnectionRequest &request);

      /**
       * @summary Applies a single optimization suggestion.
       *
       * @description For the endpoints of this service, refer to [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ApplyAdviceByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAdviceByIdResponse
       */
      Models::ApplyAdviceByIdResponse applyAdviceByIdWithOptions(const Models::ApplyAdviceByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies a single optimization suggestion.
       *
       * @description For the endpoints of this service, refer to [Endpoint](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Applies optimization suggestions in batches.
       *
       * @description For the endpoint of this service, refer to [Service registration](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request BatchApplyAdviceByIdListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchApplyAdviceByIdListResponse
       */
      Models::BatchApplyAdviceByIdListResponse batchApplyAdviceByIdListWithOptions(const Models::BatchApplyAdviceByIdListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies optimization suggestions in batches.
       *
       * @description For the endpoint of this service, refer to [Service registration](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request BatchApplyAdviceByIdListRequest
       * @return BatchApplyAdviceByIdListResponse
       */
      Models::BatchApplyAdviceByIdListResponse batchApplyAdviceByIdList(const Models::BatchApplyAdviceByIdListRequest &request);

      /**
       * @summary Bind a Resource Access Management (RAM) user to a standard database account in a cluster.
       *
       * @description For the current service endpoint, see [service endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param tmpReq BindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAccountResponse
       */
      Models::BindAccountResponse bindAccountWithOptions(const Models::BindAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bind a Resource Access Management (RAM) user to a standard database account in a cluster.
       *
       * @description For the current service endpoint, see [service endpoints](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Cancels a Spark SQL execution.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 error when initiating requests from China North 1 (Qingdao), China South 1 (Shenzhen), China South 3 (Guangzhou), or Hong Kong (China), contact technical support.
       *
       * @param request CancelSparkWarehouseBatchSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSparkWarehouseBatchSQLResponse
       */
      Models::CancelSparkWarehouseBatchSQLResponse cancelSparkWarehouseBatchSQLWithOptions(const Models::CancelSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a Spark SQL execution.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 error when initiating requests from China North 1 (Qingdao), China South 1 (Shenzhen), China South 3 (Guangzhou), or Hong Kong (China), contact technical support.
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
       * @summary Checks whether a metadata discovery schema exists.
       *
       * @param request CheckFormationSchemaExistsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckFormationSchemaExistsResponse
       */
      Models::CheckFormationSchemaExistsResponse checkFormationSchemaExistsWithOptions(const Models::CheckFormationSchemaExistsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a metadata discovery schema exists.
       *
       * @param request CheckFormationSchemaExistsRequest
       * @return CheckFormationSchemaExistsResponse
       */
      Models::CheckFormationSchemaExistsResponse checkFormationSchemaExists(const Models::CheckFormationSchemaExistsRequest &request);

      /**
       * @description For the service endpoint, see [endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CheckSampleDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSampleDataSetResponse
       */
      Models::CheckSampleDataSetResponse checkSampleDataSetWithOptions(const Models::CheckSampleDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description For the service endpoint, see [endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CheckSampleDataSetRequest
       * @return CheckSampleDataSetResponse
       */
      Models::CheckSampleDataSetResponse checkSampleDataSet(const Models::CheckSampleDataSetRequest &request);

      /**
       * @summary Configures the export destination (SLS or OSS) at the instance level. The configuration is unique per instance and follows the "configure once, use multiple times" principle.
       *
       * @param tmpReq ConfigureResultExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureResultExportResponse
       */
      Models::ConfigureResultExportResponse configureResultExportWithOptions(const Models::ConfigureResultExportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the export destination (SLS or OSS) at the instance level. The configuration is unique per instance and follows the "configure once, use multiple times" principle.
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
       * @summary Creates a database account for a cluster.
       *
       * @description For information about the endpoint of this service, see [Service registration](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param tmpReq CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account for a cluster.
       *
       * @description For information about the endpoint of this service, see [Service registration](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates an APS replication task.
       *
       * @param request CreateApsCopyWorkloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsCopyWorkloadResponse
       */
      Models::CreateApsCopyWorkloadResponse createApsCopyWorkloadWithOptions(const Models::CreateApsCopyWorkloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an APS replication task.
       *
       * @param request CreateApsCopyWorkloadRequest
       * @return CreateApsCopyWorkloadResponse
       */
      Models::CreateApsCopyWorkloadResponse createApsCopyWorkload(const Models::CreateApsCopyWorkloadRequest &request);

      /**
       * @summary Creates an APS data source.
       *
       * @description For the service registration of this service, refer to [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param tmpReq CreateApsDatasoureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsDatasoureResponse
       */
      Models::CreateApsDatasoureResponse createApsDatasoureWithOptions(const Models::CreateApsDatasoureRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an APS data source.
       *
       * @description For the service registration of this service, refer to [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateApsDatasoureRequest
       * @return CreateApsDatasoureResponse
       */
      Models::CreateApsDatasoureResponse createApsDatasoure(const Models::CreateApsDatasoureRequest &request);

      /**
       * @summary Creates an APS Hive task.
       *
       * @description For information about the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateApsHiveJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsHiveJobResponse
       */
      Models::CreateApsHiveJobResponse createApsHiveJobWithOptions(const Models::CreateApsHiveJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an APS Hive task.
       *
       * @description For information about the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateApsHiveJobRequest
       * @return CreateApsHiveJobResponse
       */
      Models::CreateApsHiveJobResponse createApsHiveJob(const Models::CreateApsHiveJobRequest &request);

      /**
       * @summary Creates an APS Kafka to data lakehouse job.
       *
       * @param tmpReq CreateApsKafkaHudiJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsKafkaHudiJobResponse
       */
      Models::CreateApsKafkaHudiJobResponse createApsKafkaHudiJobWithOptions(const Models::CreateApsKafkaHudiJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an APS Kafka to data lakehouse job.
       *
       * @param request CreateApsKafkaHudiJobRequest
       * @return CreateApsKafkaHudiJobResponse
       */
      Models::CreateApsKafkaHudiJobResponse createApsKafkaHudiJob(const Models::CreateApsKafkaHudiJobRequest &request);

      /**
       * @summary Creates an APS link from Simple Log Service (SLS) to an AnalyticDB data warehouse.
       *
       * @param tmpReq CreateApsSlsADBJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsSlsADBJobResponse
       */
      Models::CreateApsSlsADBJobResponse createApsSlsADBJobWithOptions(const Models::CreateApsSlsADBJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an APS link from Simple Log Service (SLS) to an AnalyticDB data warehouse.
       *
       * @param request CreateApsSlsADBJobRequest
       * @return CreateApsSlsADBJobResponse
       */
      Models::CreateApsSlsADBJobResponse createApsSlsADBJob(const Models::CreateApsSlsADBJobRequest &request);

      /**
       * @summary Creates a webhook for a specified database cluster and task type.
       *
       * @param tmpReq CreateApsWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApsWebhookResponse
       */
      Models::CreateApsWebhookResponse createApsWebhookWithOptions(const Models::CreateApsWebhookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a webhook for a specified database cluster and task type.
       *
       * @param request CreateApsWebhookRequest
       * @return CreateApsWebhookResponse
       */
      Models::CreateApsWebhookResponse createApsWebhook(const Models::CreateApsWebhookRequest &request);

      /**
       * @summary Creates a backup set immediately.
       *
       * @description **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ads/detail/ads_pre) of AnalyticDB for MySQL.** Temporary backups and regular backups have the same pricing and backup set retention period.
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup set immediately.
       *
       * @description **Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ads/detail/ads_pre) of AnalyticDB for MySQL.** Temporary backups and regular backups have the same pricing and backup set retention period.
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates a Data Lakehouse Edition cluster.
       *
       * @description For the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBClusterWithOptions(const Models::CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Data Lakehouse Edition cluster.
       *
       * @description For the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request CreateDBClusterRequest
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBCluster(const Models::CreateDBClusterRequest &request);

      /**
       * @summary Creates a resource group for a specified Dedicated Edition, Basic Edition, or Data Lakehouse Edition cluster.
       *
       * @description For information about the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param tmpReq CreateDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBResourceGroupResponse
       */
      Models::CreateDBResourceGroupResponse createDBResourceGroupWithOptions(const Models::CreateDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group for a specified Dedicated Edition, Basic Edition, or Data Lakehouse Edition cluster.
       *
       * @description For information about the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Creates a Formation Crawler metadata discovery task in an AnalyticDB for MySQL (ADB) instance.
       *
       * @description ## Operation description
       * - This operation creates a Formation Crawler metadata discovery task in an AnalyticDB for MySQL instance.
       * - The created task configuration is not executed immediately. Call `StartFormationCrawler` to start the task.
       * - The `CrawlerInfo` field is a JSON string that contains the core configuration of the task, such as the target database name and data source type.
       * - Some parameters, such as `classifiers` and `frequency`, require double JSON encoding.
       * - The database name specified in `dbName` is automatically converted to lowercase by the server.
       * - `schemaChangePolicy` is required. You must specify both `updateRule` and `deleteRule`.
       * - Use the `RUN_ON_DEMAND` scheduling mode to avoid unnecessary repeated scans.
       * - Make sure the product name is `adb` and the endpoint format is `adb.{regionId}.aliyuncs.com`.
       * - After the task is created, manually call `StartFormationCrawler` to trigger the first metadata discovery.
       *
       * @param request CreateFormationCrawlerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFormationCrawlerResponse
       */
      Models::CreateFormationCrawlerResponse createFormationCrawlerWithOptions(const Models::CreateFormationCrawlerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Formation Crawler metadata discovery task in an AnalyticDB for MySQL (ADB) instance.
       *
       * @description ## Operation description
       * - This operation creates a Formation Crawler metadata discovery task in an AnalyticDB for MySQL instance.
       * - The created task configuration is not executed immediately. Call `StartFormationCrawler` to start the task.
       * - The `CrawlerInfo` field is a JSON string that contains the core configuration of the task, such as the target database name and data source type.
       * - Some parameters, such as `classifiers` and `frequency`, require double JSON encoding.
       * - The database name specified in `dbName` is automatically converted to lowercase by the server.
       * - `schemaChangePolicy` is required. You must specify both `updateRule` and `deleteRule`.
       * - Use the `RUN_ON_DEMAND` scheduling mode to avoid unnecessary repeated scans.
       * - Make sure the product name is `adb` and the endpoint format is `adb.{regionId}.aliyuncs.com`.
       * - After the task is created, manually call `StartFormationCrawler` to trigger the first metadata discovery.
       *
       * @param request CreateFormationCrawlerRequest
       * @return CreateFormationCrawlerResponse
       */
      Models::CreateFormationCrawlerResponse createFormationCrawler(const Models::CreateFormationCrawlerRequest &request);

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
       * @summary Creates an automatic materialized view recommendation task.
       *
       * @param request CreateMaterializedViewRecommendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMaterializedViewRecommendResponse
       */
      Models::CreateMaterializedViewRecommendResponse createMaterializedViewRecommendWithOptions(const Models::CreateMaterializedViewRecommendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic materialized view recommendation task.
       *
       * @param request CreateMaterializedViewRecommendRequest
       * @return CreateMaterializedViewRecommendResponse
       */
      Models::CreateMaterializedViewRecommendResponse createMaterializedViewRecommend(const Models::CreateMaterializedViewRecommendRequest &request);

      /**
       * @summary Creates a subdirectory in Object Storage Service (OSS).
       *
       * @description - Central public endpoint: `adb.aliyuncs.com`.
       * - Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - Regional VPC endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request CreateOssSubDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOssSubDirectoryResponse
       */
      Models::CreateOssSubDirectoryResponse createOssSubDirectoryWithOptions(const Models::CreateOssSubDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subdirectory in Object Storage Service (OSS).
       *
       * @description - Central public endpoint: `adb.aliyuncs.com`.
       * - Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - Regional VPC endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request CreateOssSubDirectoryRequest
       * @return CreateOssSubDirectoryResponse
       */
      Models::CreateOssSubDirectoryResponse createOssSubDirectory(const Models::CreateOssSubDirectoryRequest &request);

      /**
       * @summary Creates a custom monitoring dashboard.
       *
       * @param tmpReq CreatePerformanceViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePerformanceViewResponse
       */
      Models::CreatePerformanceViewResponse createPerformanceViewWithOptions(const Models::CreatePerformanceViewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom monitoring dashboard.
       *
       * @param request CreatePerformanceViewRequest
       * @return CreatePerformanceViewResponse
       */
      Models::CreatePerformanceViewResponse createPerformanceView(const Models::CreatePerformanceViewRequest &request);

      /**
       * @summary Creates a semantic view.
       *
       * @param request CreateSemanticViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSemanticViewResponse
       */
      Models::CreateSemanticViewResponse createSemanticViewWithOptions(const Models::CreateSemanticViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a semantic view.
       *
       * @param request CreateSemanticViewRequest
       * @return CreateSemanticViewResponse
       */
      Models::CreateSemanticViewResponse createSemanticView(const Models::CreateSemanticViewRequest &request);

      /**
       * @summary Creates a Spark application template.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 fault when sending requests from Hong Kong (China), contact technical support.
       *
       * @param request CreateSparkTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSparkTemplateResponse
       */
      Models::CreateSparkTemplateResponse createSparkTemplateWithOptions(const Models::CreateSparkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Spark application template.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 fault when sending requests from Hong Kong (China), contact technical support.
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
       * @summary Deletes a specific webhook in a specified cluster.
       *
       * @description This API allows users to delete an existing webhook configuration by providing `RegionId`, `DBClusterId`, and `WebhookId`. Make sure that the provided parameter values are accurate to avoid deleting important settings by mistake.
       *
       * @param request DeleteApsWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApsWebhookResponse
       */
      Models::DeleteApsWebhookResponse deleteApsWebhookWithOptions(const Models::DeleteApsWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specific webhook in a specified cluster.
       *
       * @description This API allows users to delete an existing webhook configuration by providing `RegionId`, `DBClusterId`, and `WebhookId`. Make sure that the provided parameter values are accurate to avoid deleting important settings by mistake.
       *
       * @param request DeleteApsWebhookRequest
       * @return DeleteApsWebhookResponse
       */
      Models::DeleteApsWebhookResponse deleteApsWebhook(const Models::DeleteApsWebhookRequest &request);

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
       * @summary Deletes a metadata discovery task.
       *
       * @param request DeleteFormationCrawlerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFormationCrawlerResponse
       */
      Models::DeleteFormationCrawlerResponse deleteFormationCrawlerWithOptions(const Models::DeleteFormationCrawlerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a metadata discovery task.
       *
       * @param request DeleteFormationCrawlerRequest
       * @return DeleteFormationCrawlerResponse
       */
      Models::DeleteFormationCrawlerResponse deleteFormationCrawler(const Models::DeleteFormationCrawlerRequest &request);

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
       * @summary Deletes a materialized view recommendation task.
       *
       * @param request DeleteMaterializedViewRecommendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaterializedViewRecommendResponse
       */
      Models::DeleteMaterializedViewRecommendResponse deleteMaterializedViewRecommendWithOptions(const Models::DeleteMaterializedViewRecommendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a materialized view recommendation task.
       *
       * @param request DeleteMaterializedViewRecommendRequest
       * @return DeleteMaterializedViewRecommendResponse
       */
      Models::DeleteMaterializedViewRecommendResponse deleteMaterializedViewRecommend(const Models::DeleteMaterializedViewRecommendRequest &request);

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
       * @summary Deletes the specified semantic view.
       *
       * @param request DeleteSemanticViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSemanticViewResponse
       */
      Models::DeleteSemanticViewResponse deleteSemanticViewWithOptions(const Models::DeleteSemanticViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified semantic view.
       *
       * @param request DeleteSemanticViewRequest
       * @return DeleteSemanticViewResponse
       */
      Models::DeleteSemanticViewResponse deleteSemanticView(const Models::DeleteSemanticViewRequest &request);

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
       * @summary Retrieves all permissions granted to a specified account, including permissions at the global, database, table, and column levels.
       *
       * @description For the endpoint of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountAllPrivilegesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountAllPrivilegesResponse
       */
      Models::DescribeAccountAllPrivilegesResponse describeAccountAllPrivilegesWithOptions(const Models::DescribeAccountAllPrivilegesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all permissions granted to a specified account, including permissions at the global, database, table, and column levels.
       *
       * @description For the endpoint of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Retrieves the permissions of a specified database account at a specific level.
       *
       * @description See [service endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountPrivilegesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountPrivilegesResponse
       */
      Models::DescribeAccountPrivilegesResponse describeAccountPrivilegesWithOptions(const Models::DescribeAccountPrivilegesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the permissions of a specified database account at a specific level.
       *
       * @description See [service endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountPrivilegesRequest
       * @return DescribeAccountPrivilegesResponse
       */
      Models::DescribeAccountPrivilegesResponse describeAccountPrivileges(const Models::DescribeAccountPrivilegesRequest &request);

      /**
       * @summary Queries the database accounts of a cluster.
       *
       * @description For the endpoint of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database accounts of a cluster.
       *
       * @description For the endpoint of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the column information of a specified table in a cluster.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request DescribeAdbMySqlColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdbMySqlColumnsResponse
       */
      Models::DescribeAdbMySqlColumnsResponse describeAdbMySqlColumnsWithOptions(const Models::DescribeAdbMySqlColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the column information of a specified table in a cluster.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
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
       * @summary Lists all databases in a specified cluster.
       *
       * @description - Public endpoint of the region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of the region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request DescribeAdbMySqlSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdbMySqlSchemasResponse
       */
      Models::DescribeAdbMySqlSchemasResponse describeAdbMySqlSchemasWithOptions(const Models::DescribeAdbMySqlSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all databases in a specified cluster.
       *
       * @description - Public endpoint of the region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of the region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
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
       * @summary Lists all tables in a specified database of a cluster.
       *
       * @description - Public endpoint of the region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of the region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request DescribeAdbMySqlTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdbMySqlTablesResponse
       */
      Models::DescribeAdbMySqlTablesResponse describeAdbMySqlTablesWithOptions(const Models::DescribeAdbMySqlTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all tables in a specified database of a cluster.
       *
       * @description - Public endpoint of the region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of the region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
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
       * @summary Shows applied recommendations.
       *
       * @param request DescribeAppliedAdvicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppliedAdvicesResponse
       */
      Models::DescribeAppliedAdvicesResponse describeAppliedAdvicesWithOptions(const Models::DescribeAppliedAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shows applied recommendations.
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
       * @summary Retrieves details about the resource groups used for data synchronization.
       *
       * @description - Public endpoint for a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * - VPC endpoint for a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeApsResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApsResourceGroupsResponse
       */
      Models::DescribeApsResourceGroupsResponse describeApsResourceGroupsWithOptions(const Models::DescribeApsResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details about the resource groups used for data synchronization.
       *
       * @description - Public endpoint for a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
       * - VPC endpoint for a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
       *
       * @param request DescribeApsResourceGroupsRequest
       * @return DescribeApsResourceGroupsResponse
       */
      Models::DescribeApsResourceGroupsResponse describeApsResourceGroups(const Models::DescribeApsResourceGroupsRequest &request);

      /**
       * @summary Queries the SQL Audit Log of a cluster.
       *
       * @description - SQL Audit Log entries can be queried only when SQL audit is enabled, and only entries from the last 30 days are supported. If SQL audit is shutdown and then re-enabled, only entries recorded after re-enabling are available. SQL Audit Log does not record **INSERT INTO VALUES**, **REPLACE INTO VALUES**, or **UPSERT INTO VALUES** operations.
       * - For the endpoints of this service, see [Service registration](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAuditLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogRecordsResponse
       */
      Models::DescribeAuditLogRecordsResponse describeAuditLogRecordsWithOptions(const Models::DescribeAuditLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SQL Audit Log of a cluster.
       *
       * @description - SQL Audit Log entries can be queried only when SQL audit is enabled, and only entries from the last 30 days are supported. If SQL audit is shutdown and then re-enabled, only entries recorded after re-enabling are available. SQL Audit Log does not record **INSERT INTO VALUES**, **REPLACE INTO VALUES**, or **UPSERT INTO VALUES** operations.
       * - For the endpoints of this service, see [Service registration](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeAuditLogRecordsRequest
       * @return DescribeAuditLogRecordsResponse
       */
      Models::DescribeAuditLogRecordsResponse describeAuditLogRecords(const Models::DescribeAuditLogRecordsRequest &request);

      /**
       * @summary Queries the auto-renewal status of a subscription cluster.
       *
       * @param tmpReq DescribeAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoRenewalAttributeResponse
       */
      Models::DescribeAutoRenewalAttributeResponse describeAutoRenewalAttributeWithOptions(const Models::DescribeAutoRenewalAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal status of a subscription cluster.
       *
       * @param request DescribeAutoRenewalAttributeRequest
       * @return DescribeAutoRenewalAttributeResponse
       */
      Models::DescribeAutoRenewalAttributeResponse describeAutoRenewalAttribute(const Models::DescribeAutoRenewalAttributeRequest &request);

      /**
       * @summary Use DescribeAvailableAdvices to list available optimization recommendations.
       *
       * @param request DescribeAvailableAdvicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableAdvicesResponse
       */
      Models::DescribeAvailableAdvicesResponse describeAvailableAdvicesWithOptions(const Models::DescribeAvailableAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use DescribeAvailableAdvices to list available optimization recommendations.
       *
       * @param request DescribeAvailableAdvicesRequest
       * @return DescribeAvailableAdvicesResponse
       */
      Models::DescribeAvailableAdvicesResponse describeAvailableAdvices(const Models::DescribeAvailableAdvicesRequest &request);

      /**
       * @summary Queries the backup settings of a cluster.
       *
       * @description For more information about endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup settings of a cluster.
       *
       * @description For more information about endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the backup sets for an instance.
       *
       * @description For information about the endpoints for this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup sets for an instance.
       *
       * @description For information about the endpoints for this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Queries the IP whitelist for a specified cluster.
       *
       * @description For information about endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterAccessWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAccessWhiteListResponse
       */
      Models::DescribeClusterAccessWhiteListResponse describeClusterAccessWhiteListWithOptions(const Models::DescribeClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP whitelist for a specified cluster.
       *
       * @description For information about endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterAccessWhiteListRequest
       * @return DescribeClusterAccessWhiteListResponse
       */
      Models::DescribeClusterAccessWhiteListResponse describeClusterAccessWhiteList(const Models::DescribeClusterAccessWhiteListRequest &request);

      /**
       * @summary Queries the network information of a specified cluster.
       *
       * @description For service endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeClusterNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNetInfoResponse
       */
      Models::DescribeClusterNetInfoResponse describeClusterNetInfoWithOptions(const Models::DescribeClusterNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information of a specified cluster.
       *
       * @description For service endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Returns the details of a specific cluster.
       *
       * @description To find the endpoints for this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(const Models::DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the details of a specific cluster.
       *
       * @description To find the endpoints for this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterAttributeRequest
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttribute(const Models::DescribeDBClusterAttributeRequest &request);

      /**
       * @summary View a cluster\\"s health status.
       *
       * @description For the service access address, see [service endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterHealthStatusResponse
       */
      Models::DescribeDBClusterHealthStatusResponse describeDBClusterHealthStatusWithOptions(const Models::DescribeDBClusterHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View a cluster\\"s health status.
       *
       * @description For the service access address, see [service endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterHealthStatusRequest
       * @return DescribeDBClusterHealthStatusResponse
       */
      Models::DescribeDBClusterHealthStatusResponse describeDBClusterHealthStatus(const Models::DescribeDBClusterHealthStatusRequest &request);

      /**
       * @summary View target cluster performance data.
       *
       * @description For the service endpoint address, see [service endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(const Models::DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View target cluster performance data.
       *
       * @description For the service endpoint address, see [service endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformance(const Models::DescribeDBClusterPerformanceRequest &request);

      /**
       * @summary Queries the SSL configurations of a cluster.
       *
       * @description >Warning: 目前该功能处于内测阶段，控制台界面展示及API调用接口尚未稳定，可能持续变化。
       *
       * @param request DescribeDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterSSLResponse
       */
      Models::DescribeDBClusterSSLResponse describeDBClusterSSLWithOptions(const Models::DescribeDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL configurations of a cluster.
       *
       * @description >Warning: 目前该功能处于内测阶段，控制台界面展示及API调用接口尚未稳定，可能持续变化。
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
       * @summary Queries the status list of a cluster.
       *
       * @description For the service registration information of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterStatusResponse
       */
      Models::DescribeDBClusterStatusResponse describeDBClusterStatusWithOptions(const Models::DescribeDBClusterStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status list of a cluster.
       *
       * @description For the service registration information of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClusterStatusRequest
       * @return DescribeDBClusterStatusResponse
       */
      Models::DescribeDBClusterStatusResponse describeDBClusterStatus(const Models::DescribeDBClusterStatusRequest &request);

      /**
       * @summary View the Data Lakehouse Edition clusters in the destination region.
       *
       * @description For a current list of service endpoints, see [Service Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClustersWithOptions(const Models::DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the Data Lakehouse Edition clusters in the destination region.
       *
       * @description For a current list of service endpoints, see [Service Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBClustersRequest
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClusters(const Models::DescribeDBClustersRequest &request);

      /**
       * @summary Queries the resource group information of a cluster.
       *
       * @description For information about the service registration of the current service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBResourceGroupResponse
       */
      Models::DescribeDBResourceGroupResponse describeDBResourceGroupWithOptions(const Models::DescribeDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource group information of a cluster.
       *
       * @description For information about the service registration of the current service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Queries the summary of SQL statements that meet specified conditions in an AnalyticDB for MySQL cluster.
       *
       * @description For information about service endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDiagnosisRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisRecordsResponse
       */
      Models::DescribeDiagnosisRecordsResponse describeDiagnosisRecordsWithOptions(const Models::DescribeDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary of SQL statements that meet specified conditions in an AnalyticDB for MySQL cluster.
       *
       * @description For information about service endpoints, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDiagnosisRecordsRequest
       * @return DescribeDiagnosisRecordsResponse
       */
      Models::DescribeDiagnosisRecordsResponse describeDiagnosisRecords(const Models::DescribeDiagnosisRecordsRequest &request);

      /**
       * @summary Queries the execution details of a specific SQL statement, including the execution plan, runtime information, resource usage, and self-diagnostics results.
       *
       * @description For the service registration addresses of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDiagnosisSQLInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisSQLInfoResponse
       */
      Models::DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfoWithOptions(const Models::DescribeDiagnosisSQLInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution details of a specific SQL statement, including the execution plan, runtime information, resource usage, and self-diagnostics results.
       *
       * @description For the service registration addresses of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDiagnosisSQLInfoRequest
       * @return DescribeDiagnosisSQLInfoResponse
       */
      Models::DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfo(const Models::DescribeDiagnosisSQLInfoRequest &request);

      /**
       * @summary Queries the five most recent download tasks for SQL query results in a specified AnalyticDB for MySQL Lakehouse Edition (3.0) cluster.
       *
       * @description For a list of service endpoints, see [Service Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeDownloadRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadRecordsResponse
       */
      Models::DescribeDownloadRecordsResponse describeDownloadRecordsWithOptions(const Models::DescribeDownloadRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the five most recent download tasks for SQL query results in a specified AnalyticDB for MySQL Lakehouse Edition (3.0) cluster.
       *
       * @description For a list of service endpoints, see [Service Endpoints](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Retrieves the supported permission levels and the list of permissions.
       *
       * @description - Central public endpoint: `adb.aliyuncs.com`.
       * - Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - Regional VPC endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request DescribeEnabledPrivilegesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnabledPrivilegesResponse
       */
      Models::DescribeEnabledPrivilegesResponse describeEnabledPrivilegesWithOptions(const Models::DescribeEnabledPrivilegesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the supported permission levels and the list of permissions.
       *
       * @description - Central public endpoint: `adb.aliyuncs.com`.
       * - Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - Regional VPC endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
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
       * @summary Retrieve historical task records.
       *
       * @description Only supports viewing tasks within the last 30 days.
       *
       * @param request DescribeHistoryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasksWithOptions(const Models::DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve historical task records.
       *
       * @description Only supports viewing tasks within the last 30 days.
       *
       * @param request DescribeHistoryTasksRequest
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasks(const Models::DescribeHistoryTasksRequest &request);

      /**
       * @summary Queries task statistics.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStatWithOptions(const Models::DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries task statistics.
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
       * @summary Retrieves resource usage statistics for jobs.
       *
       * @description For the service registration information of this service, see [Service registration](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeJobResourceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobResourceUsageResponse
       */
      Models::DescribeJobResourceUsageResponse describeJobResourceUsageWithOptions(const Models::DescribeJobResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves resource usage statistics for jobs.
       *
       * @description For the service registration information of this service, see [Service registration](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Queries the results of a materialized view recommendation task.
       *
       * @description For information about the endpoints of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeMVRecommendResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMVRecommendResultsResponse
       */
      Models::DescribeMVRecommendResultsResponse describeMVRecommendResultsWithOptions(const Models::DescribeMVRecommendResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of a materialized view recommendation task.
       *
       * @description For information about the endpoints of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeMVRecommendResultsRequest
       * @return DescribeMVRecommendResultsResponse
       */
      Models::DescribeMVRecommendResultsResponse describeMVRecommendResults(const Models::DescribeMVRecommendResultsRequest &request);

      /**
       * @summary View subtasks of a materialized view
       *
       * @param request DescribeMvRecommendSubTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMvRecommendSubTasksResponse
       */
      Models::DescribeMvRecommendSubTasksResponse describeMvRecommendSubTasksWithOptions(const Models::DescribeMvRecommendSubTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View subtasks of a materialized view
       *
       * @param request DescribeMvRecommendSubTasksRequest
       * @return DescribeMvRecommendSubTasksResponse
       */
      Models::DescribeMvRecommendSubTasksResponse describeMvRecommendSubTasks(const Models::DescribeMvRecommendSubTasksRequest &request);

      /**
       * @summary Views recommendation tasks for materialized views.
       *
       * @param request DescribeMvRecommendTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMvRecommendTasksResponse
       */
      Models::DescribeMvRecommendTasksResponse describeMvRecommendTasksWithOptions(const Models::DescribeMvRecommendTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views recommendation tasks for materialized views.
       *
       * @param request DescribeMvRecommendTasksRequest
       * @return DescribeMvRecommendTasksResponse
       */
      Models::DescribeMvRecommendTasksResponse describeMvRecommendTasks(const Models::DescribeMvRecommendTasksRequest &request);

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
       * @summary View metric details (such as query time and average memory consumption) for SQL patterns over a specified time range in a cluster.
       *
       * @description For the endpoint of this service, see [endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribePatternPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePatternPerformanceResponse
       */
      Models::DescribePatternPerformanceResponse describePatternPerformanceWithOptions(const Models::DescribePatternPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View metric details (such as query time and average memory consumption) for SQL patterns over a specified time range in a cluster.
       *
       * @description For the endpoint of this service, see [endpoint](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Call the DescribeProcessList operation to view the running queries of an instance.
       *
       * @param request DescribeProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessListWithOptions(const Models::DescribeProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeProcessList operation to view the running queries of an instance.
       *
       * @param request DescribeProcessListRequest
       * @return DescribeProcessListResponse
       */
      Models::DescribeProcessListResponse describeProcessList(const Models::DescribeProcessListRequest &request);

      /**
       * @summary Queries the regions and zones supported by AnalyticDB for MySQL Data Lakehouse Edition.
       *
       * @description For the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions and zones supported by AnalyticDB for MySQL Data Lakehouse Edition.
       *
       * @description For the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Queries the user-configured result set export settings.
       *
       * @param request DescribeResultExportConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResultExportConfigResponse
       */
      Models::DescribeResultExportConfigResponse describeResultExportConfigWithOptions(const Models::DescribeResultExportConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user-configured result set export settings.
       *
       * @param request DescribeResultExportConfigRequest
       * @return DescribeResultExportConfigResponse
       */
      Models::DescribeResultExportConfigResponse describeResultExportConfig(const Models::DescribeResultExportConfigRequest &request);

      /**
       * @summary View the list of SQL patterns for an AnalyticDB for MySQL Data Lakehouse Edition cluster for a specified date range.
       *
       * @description - Global public endpoint: `adb.aliyuncs.com`.
       * - Regional public endpoint: `adb.<region-id>.aliyuncs.com` (e.g., `adb.cn-hangzhou.aliyuncs.com`).
       * - Regional VPC endpoint: `adb-vpc.<region-id>.aliyuncs.com` (e.g., `adb-vpc.cn-hangzhou.aliyuncs.com`).
       *
       * @param request DescribeSQLPatternsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLPatternsResponse
       */
      Models::DescribeSQLPatternsResponse describeSQLPatternsWithOptions(const Models::DescribeSQLPatternsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the list of SQL patterns for an AnalyticDB for MySQL Data Lakehouse Edition cluster for a specified date range.
       *
       * @description - Global public endpoint: `adb.aliyuncs.com`.
       * - Regional public endpoint: `adb.<region-id>.aliyuncs.com` (e.g., `adb.cn-hangzhou.aliyuncs.com`).
       * - Regional VPC endpoint: `adb-vpc.<region-id>.aliyuncs.com` (e.g., `adb-vpc.cn-hangzhou.aliyuncs.com`).
       *
       * @param request DescribeSQLPatternsRequest
       * @return DescribeSQLPatternsResponse
       */
      Models::DescribeSQLPatternsResponse describeSQLPatterns(const Models::DescribeSQLPatternsRequest &request);

      /**
       * @summary Queries the registered WebSocket domain.
       *
       * @param request DescribeSQLWebSocketDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLWebSocketDomainResponse
       */
      Models::DescribeSQLWebSocketDomainResponse describeSQLWebSocketDomainWithOptions(const Models::DescribeSQLWebSocketDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the registered WebSocket domain.
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
       * @summary Queries the SQL audit logs for a Spark Interactive resource group.
       *
       * @description SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL auditing is turned off midway, when it is re-enabled, you can only query the SQL audit logs generated after it was turned back on.
       * >  You can query only SQL audit logs that are executed by using Spark Interactive Resource Group.
       *
       * @param request DescribeSparkAuditLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSparkAuditLogRecordsResponse
       */
      Models::DescribeSparkAuditLogRecordsResponse describeSparkAuditLogRecordsWithOptions(const Models::DescribeSparkAuditLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SQL audit logs for a Spark Interactive resource group.
       *
       * @description SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL auditing is turned off midway, when it is re-enabled, you can only query the SQL audit logs generated after it was turned back on.
       * >  You can query only SQL audit logs that are executed by using Spark Interactive Resource Group.
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
       * @summary Queries the number of times a specified table or all tables in a cluster are accessed within a specified date range.
       *
       * @description For the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DescribeTableAccessCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableAccessCountResponse
       */
      Models::DescribeTableAccessCountResponse describeTableAccessCountWithOptions(const Models::DescribeTableAccessCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of times a specified table or all tables in a cluster are accessed within a specified date range.
       *
       * @description For the service registration of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Retrieves view tasks.
       *
       * @param request DescribeViewJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeViewJobsResponse
       */
      Models::DescribeViewJobsResponse describeViewJobsWithOptions(const Models::DescribeViewJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves view tasks.
       *
       * @param request DescribeViewJobsRequest
       * @return DescribeViewJobsResponse
       */
      Models::DescribeViewJobsResponse describeViewJobs(const Models::DescribeViewJobsRequest &request);

      /**
       * @summary Queries the diagnostics results of the storage layer.
       *
       * @param request DescribeWorkerDetectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWorkerDetectionResponse
       */
      Models::DescribeWorkerDetectionResponse describeWorkerDetectionWithOptions(const Models::DescribeWorkerDetectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostics results of the storage layer.
       *
       * @param request DescribeWorkerDetectionRequest
       * @return DescribeWorkerDetectionResponse
       */
      Models::DescribeWorkerDetectionResponse describeWorkerDetection(const Models::DescribeWorkerDetectionRequest &request);

      /**
       * @summary Detaches an Elastic Network Interface (ENI).
       *
       * @description For the service endpoint, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request DetachUserENIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachUserENIResponse
       */
      Models::DetachUserENIResponse detachUserENIWithOptions(const Models::DetachUserENIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches an Elastic Network Interface (ENI).
       *
       * @description For the service endpoint, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Retrieves the OSS download path of a CA certificate for connecting to the wide table engine.
       *
       * @param request DownloadInstanceCACertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadInstanceCACertificateResponse
       */
      Models::DownloadInstanceCACertificateResponse downloadInstanceCACertificateWithOptions(const Models::DownloadInstanceCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS download path of a CA certificate for connecting to the wide table engine.
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
       * @description - 地域的公网接入地址：`adb.<region-id>.aliyuncs.com`。示例：`adb.cn-hangzhou.aliyuncs.com`。
       * - 地域的VPC接入地址：`adb-vpc.<region-id>.aliyuncs.com`。示例：`adb-vpc.cn-hangzhou.aliyuncs.com`。
       * > 如果华北1（青岛）、华南1（深圳）、华南3（广州）、中国香港发起请求时，遇到409错误，请联系技术支持。
       *
       * @param request ExecuteSparkWarehouseBatchSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteSparkWarehouseBatchSQLResponse
       */
      Models::ExecuteSparkWarehouseBatchSQLResponse executeSparkWarehouseBatchSQLWithOptions(const Models::ExecuteSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes Spark SQL statements in batches.
       *
       * @description - 地域的公网接入地址：`adb.<region-id>.aliyuncs.com`。示例：`adb.cn-hangzhou.aliyuncs.com`。
       * - 地域的VPC接入地址：`adb-vpc.<region-id>.aliyuncs.com`。示例：`adb-vpc.cn-hangzhou.aliyuncs.com`。
       * > 如果华北1（青岛）、华南1（深圳）、华南3（广州）、中国香港发起请求时，遇到409错误，请联系技术支持。
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
       * @summary Generates an executable SQL statement from a semantic SQL statement.
       *
       * @param request GenerateSqlBySemanticSqlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateSqlBySemanticSqlResponse
       */
      Models::GenerateSqlBySemanticSqlResponse generateSqlBySemanticSqlWithOptions(const Models::GenerateSqlBySemanticSqlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an executable SQL statement from a semantic SQL statement.
       *
       * @param request GenerateSqlBySemanticSqlRequest
       * @return GenerateSqlBySemanticSqlResponse
       */
      Models::GenerateSqlBySemanticSqlResponse generateSqlBySemanticSql(const Models::GenerateSqlBySemanticSqlRequest &request);

      /**
       * @summary Queries the basic permission diagnostic report of the current user for Spark.
       *
       * @description The API diagnostic report contains all the permissions required by the current user for ADB Spark-related features. The scope of the permission check may exceed the minimum requirements of your business. This API is used for quick initialization of the ADB Spark environment. To configure fine-grained permissions, [refer to the ADB Spark fine-grained permission configuration documentation.](https://www.alibabacloud.com/help/zh/analyticdb/analyticdb-for-mysql/user-guide/create-the-aliyunadbsparkprocessingdatarole-role-for-a-ram-user-and-grant-permissions-to-the-role?spm=a2c63.p38356.help-menu-92664.d_2_5_0.48362a487dMzm9#section-y2z-ucd-1ko)
       *
       * @param request GetADBSparkNecessaryRAMPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetADBSparkNecessaryRAMPermissionsResponse
       */
      Models::GetADBSparkNecessaryRAMPermissionsResponse getADBSparkNecessaryRAMPermissionsWithOptions(const Models::GetADBSparkNecessaryRAMPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic permission diagnostic report of the current user for Spark.
       *
       * @description The API diagnostic report contains all the permissions required by the current user for ADB Spark-related features. The scope of the permission check may exceed the minimum requirements of your business. This API is used for quick initialization of the ADB Spark environment. To configure fine-grained permissions, [refer to the ADB Spark fine-grained permission configuration documentation.](https://www.alibabacloud.com/help/zh/analyticdb/analyticdb-for-mysql/user-guide/create-the-aliyunadbsparkprocessingdatarole-role-for-a-ram-user-and-grant-permissions-to-the-role?spm=a2c63.p38356.help-menu-92664.d_2_5_0.48362a487dMzm9#section-y2z-ucd-1ko)
       *
       * @param request GetADBSparkNecessaryRAMPermissionsRequest
       * @return GetADBSparkNecessaryRAMPermissionsResponse
       */
      Models::GetADBSparkNecessaryRAMPermissionsResponse getADBSparkNecessaryRAMPermissions(const Models::GetADBSparkNecessaryRAMPermissionsRequest &request);

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
       * @summary Queries the details of a metadata discovery task.
       *
       * @param request GetFormationCrawlerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFormationCrawlerResponse
       */
      Models::GetFormationCrawlerResponse getFormationCrawlerWithOptions(const Models::GetFormationCrawlerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a metadata discovery task.
       *
       * @param request GetFormationCrawlerRequest
       * @return GetFormationCrawlerResponse
       */
      Models::GetFormationCrawlerResponse getFormationCrawler(const Models::GetFormationCrawlerRequest &request);

      /**
       * @summary Adds a knowledge base document.
       *
       * @param request GetKnowledgeRecallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeRecallResponse
       */
      Models::GetKnowledgeRecallResponse getKnowledgeRecallWithOptions(const Models::GetKnowledgeRecallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a knowledge base document.
       *
       * @param request GetKnowledgeRecallRequest
       * @return GetKnowledgeRecallResponse
       */
      Models::GetKnowledgeRecallResponse getKnowledgeRecall(const Models::GetKnowledgeRecallRequest &request);

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
       * @summary Retrieves the details of a semantic view.
       *
       * @param request GetSemanticViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSemanticViewResponse
       */
      Models::GetSemanticViewResponse getSemanticViewWithOptions(const Models::GetSemanticViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a semantic view.
       *
       * @param request GetSemanticViewRequest
       * @return GetSemanticViewResponse
       */
      Models::GetSemanticViewResponse getSemanticView(const Models::GetSemanticViewRequest &request);

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
       * @summary Retrieves the execution results of a Spark SQL statement.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 error when sending requests from China North 1 (Qingdao), China South 1 (Shenzhen), China South 3 (Guangzhou), or Hong Kong (China), contact technical support.
       *
       * @param request GetSparkWarehouseBatchSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSparkWarehouseBatchSQLResponse
       */
      Models::GetSparkWarehouseBatchSQLResponse getSparkWarehouseBatchSQLWithOptions(const Models::GetSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the execution results of a Spark SQL statement.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 error when sending requests from China North 1 (Qingdao), China South 1 (Shenzhen), China South 3 (Guangzhou), or Hong Kong (China), contact technical support.
       *
       * @param request GetSparkWarehouseBatchSQLRequest
       * @return GetSparkWarehouseBatchSQLResponse
       */
      Models::GetSparkWarehouseBatchSQLResponse getSparkWarehouseBatchSQL(const Models::GetSparkWarehouseBatchSQLRequest &request);

      /**
       * @summary Retrieves table information.
       *
       * @description - Public endpoint of the region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of the region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request GetTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableResponse
       */
      Models::GetTableResponse getTableWithOptions(const Models::GetTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves table information.
       *
       * @description - Public endpoint of the region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of the region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request GetTableRequest
       * @return GetTableResponse
       */
      Models::GetTableResponse getTable(const Models::GetTableRequest &request);

      /**
       * @summary Queries column information.
       *
       * @description - Public endpoint of the region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of the region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request GetTableColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnsResponse
       */
      Models::GetTableColumnsResponse getTableColumnsWithOptions(const Models::GetTableColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries column information.
       *
       * @description - Public endpoint of the region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of the region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
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
       * @summary Queries table information.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request GetTableObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableObjectsResponse
       */
      Models::GetTableObjectsResponse getTableObjectsWithOptions(const Models::GetTableObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries table information.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
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
       * @summary Queries view information.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       *
       * @param request GetViewObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetViewObjectsResponse
       */
      Models::GetViewObjectsResponse getViewObjectsWithOptions(const Models::GetViewObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries view information.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
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
       * @summary Queries the webhook configurations for a specified database cluster.
       *
       * @description Queries the list of configured webhooks for a specified database cluster based on RegionId, DBClusterId, and the optional JobType parameter. The JobType parameter specifies the task type, such as SLS or OSS export tasks. If JobType is specified, only webhooks associated with the specified task type are returned. If JobType is not specified, webhooks of all types are returned.
       * Note: Ensure that the RegionId and DBClusterId values you provide are correct. Otherwise, the webhook information may not be retrieved.
       *
       * @param request ListApsWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApsWebhookResponse
       */
      Models::ListApsWebhookResponse listApsWebhookWithOptions(const Models::ListApsWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the webhook configurations for a specified database cluster.
       *
       * @description Queries the list of configured webhooks for a specified database cluster based on RegionId, DBClusterId, and the optional JobType parameter. The JobType parameter specifies the task type, such as SLS or OSS export tasks. If JobType is specified, only webhooks associated with the specified task type are returned. If JobType is not specified, webhooks of all types are returned.
       * Note: Ensure that the RegionId and DBClusterId values you provide are correct. Otherwise, the webhook information may not be retrieved.
       *
       * @param request ListApsWebhookRequest
       * @return ListApsWebhookResponse
       */
      Models::ListApsWebhookResponse listApsWebhook(const Models::ListApsWebhookRequest &request);

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
       * @summary Query the list of semantic views
       *
       * @description For the endpoints of the service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ListSemanticViewNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSemanticViewNamesResponse
       */
      Models::ListSemanticViewNamesResponse listSemanticViewNamesWithOptions(const Models::ListSemanticViewNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of semantic views
       *
       * @description For the endpoints of the service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ListSemanticViewNamesRequest
       * @return ListSemanticViewNamesResponse
       */
      Models::ListSemanticViewNamesResponse listSemanticViewNames(const Models::ListSemanticViewNamesRequest &request);

      /**
       * @summary Queries the retry information of a specified Spark application.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 fault when initiating a request from Hong Kong (China), submit a ticket or contact technical support.
       *
       * @param request ListSparkAppAttemptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSparkAppAttemptsResponse
       */
      Models::ListSparkAppAttemptsResponse listSparkAppAttemptsWithOptions(const Models::ListSparkAppAttemptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the retry information of a specified Spark application.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 fault when initiating a request from Hong Kong (China), submit a ticket or contact technical support.
       *
       * @param request ListSparkAppAttemptsRequest
       * @return ListSparkAppAttemptsResponse
       */
      Models::ListSparkAppAttemptsResponse listSparkAppAttempts(const Models::ListSparkAppAttemptsRequest &request);

      /**
       * @summary Queries the list of Spark applications.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 fault when initiating a request from Hong Kong (China), contact technical support.
       *
       * @param request ListSparkAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSparkAppsResponse
       */
      Models::ListSparkAppsResponse listSparkAppsWithOptions(const Models::ListSparkAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Spark applications.
       *
       * @description - Public endpoint of a region: `adb.<region-id>.aliyuncs.com`. Example: `adb.ap-southeast-1.aliyuncs.com`.
       * - VPC endpoint of a region: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.ap-southeast-1.aliyuncs.com`.
       * > If you encounter a 409 fault when initiating a request from Hong Kong (China), contact technical support.
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
       * @description - 地域的公网接入地址：`adb.<region-id>.aliyuncs.com`。示例：`adb.cn-hangzhou.aliyuncs.com`。
       * - 地域的VPC接入地址：`adb-vpc.<region-id>.aliyuncs.com`。示例：`adb-vpc.cn-hangzhou.aliyuncs.com`。
       * > 如果华北1（青岛）、华南1（深圳）、华南3（广州）、中国香港发起请求时，遇到409错误，请联系技术支持。
       *
       * @param request ListSparkWarehouseBatchSQLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSparkWarehouseBatchSQLResponse
       */
      Models::ListSparkWarehouseBatchSQLResponse listSparkWarehouseBatchSQLWithOptions(const Models::ListSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Spark SQL statements.
       *
       * @description - 地域的公网接入地址：`adb.<region-id>.aliyuncs.com`。示例：`adb.cn-hangzhou.aliyuncs.com`。
       * - 地域的VPC接入地址：`adb-vpc.<region-id>.aliyuncs.com`。示例：`adb-vpc.cn-hangzhou.aliyuncs.com`。
       * > 如果华北1（青岛）、华南1（深圳）、华南3（广州）、中国香港发起请求时，遇到409错误，请联系技术支持。
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
       * @summary Configures auto-renewal for a subscription cluster.
       *
       * @param request ModifyAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoRenewalAttributeResponse
       */
      Models::ModifyAutoRenewalAttributeResponse modifyAutoRenewalAttributeWithOptions(const Models::ModifyAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures auto-renewal for a subscription cluster.
       *
       * @param request ModifyAutoRenewalAttributeRequest
       * @return ModifyAutoRenewalAttributeResponse
       */
      Models::ModifyAutoRenewalAttributeResponse modifyAutoRenewalAttribute(const Models::ModifyAutoRenewalAttributeRequest &request);

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
       * @summary Scales up or scales down a Data Lakehouse Edition cluster.
       *
       * @description ### Before you begin
       * - During scaling, `submit job` for submitting asynchronous tasks is disabled. If your business depends on this feature, schedule the scaling operation during an appropriate time window.
       * - Scaling operations redistribute and migrate data. The migration duration is proportional to the data volume, and the service is not interrupted during scaling. When you scale down a cluster from a large specification to a small specification, data migration typically takes several hours or even tens of hours. Exercise caution when you scale down a cluster with a large data volume.
       * - If the cluster has loaded a built-in dataset, make sure that the cluster has at least 24 ACUs of storage reserved resources during scale-down. Otherwise, the built-in dataset cannot be used.
       * - Transient connections may occur near the end of scaling. Scale during off-peak hours, or make sure that your application has an automatic reconnection mechanism.
       * - You cannot perform an Upgrade/Downgrade from Data Lakehouse Edition to Data Warehouse Edition. You can perform an Upgrade/Downgrade from Data Warehouse Edition to Data Lakehouse Edition. For details, refer to the documentation about changing Data Warehouse Edition to Data Lakehouse Edition.
       * - For the endpoint of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifyDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBClusterWithOptions(const Models::ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales up or scales down a Data Lakehouse Edition cluster.
       *
       * @description ### Before you begin
       * - During scaling, `submit job` for submitting asynchronous tasks is disabled. If your business depends on this feature, schedule the scaling operation during an appropriate time window.
       * - Scaling operations redistribute and migrate data. The migration duration is proportional to the data volume, and the service is not interrupted during scaling. When you scale down a cluster from a large specification to a small specification, data migration typically takes several hours or even tens of hours. Exercise caution when you scale down a cluster with a large data volume.
       * - If the cluster has loaded a built-in dataset, make sure that the cluster has at least 24 ACUs of storage reserved resources during scale-down. Otherwise, the built-in dataset cannot be used.
       * - Transient connections may occur near the end of scaling. Scale during off-peak hours, or make sure that your application has an automatic reconnection mechanism.
       * - You cannot perform an Upgrade/Downgrade from Data Lakehouse Edition to Data Warehouse Edition. You can perform an Upgrade/Downgrade from Data Warehouse Edition to Data Lakehouse Edition. For details, refer to the documentation about changing Data Warehouse Edition to Data Lakehouse Edition.
       * - For the endpoint of this service, see [Endpoint](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Modifies the SSL link configuration of a cluster.
       *
       * @param request ModifyDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterSSLResponse
       */
      Models::ModifyDBClusterSSLResponse modifyDBClusterSSLWithOptions(const Models::ModifyDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SSL link configuration of a cluster.
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
       * @summary Changes the resource group of a cluster.
       *
       * @description For service endpoints, see [endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param tmpReq ModifyDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBResourceGroupResponse
       */
      Models::ModifyDBResourceGroupResponse modifyDBResourceGroupWithOptions(const Models::ModifyDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group of a cluster.
       *
       * @description For service endpoints, see [endpoints](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Modifies materialized views.
       *
       * @param request ModifyMaterializedViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterializedViewResponse
       */
      Models::ModifyMaterializedViewResponse modifyMaterializedViewWithOptions(const Models::ModifyMaterializedViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies materialized views.
       *
       * @param request ModifyMaterializedViewRequest
       * @return ModifyMaterializedViewResponse
       */
      Models::ModifyMaterializedViewResponse modifyMaterializedView(const Models::ModifyMaterializedViewRequest &request);

      /**
       * @summary Modifies an automatic materialized view recommendation task.
       *
       * @param request ModifyMaterializedViewRecommendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaterializedViewRecommendResponse
       */
      Models::ModifyMaterializedViewRecommendResponse modifyMaterializedViewRecommendWithOptions(const Models::ModifyMaterializedViewRecommendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an automatic materialized view recommendation task.
       *
       * @param request ModifyMaterializedViewRecommendRequest
       * @return ModifyMaterializedViewRecommendResponse
       */
      Models::ModifyMaterializedViewRecommendResponse modifyMaterializedViewRecommend(const Models::ModifyMaterializedViewRecommendRequest &request);

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
       * @summary Modifies the directory location of SQL templates.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ModifySqlTemplatePositionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySqlTemplatePositionResponse
       */
      Models::ModifySqlTemplatePositionResponse modifySqlTemplatePositionWithOptions(const Models::ModifySqlTemplatePositionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the directory location of SQL templates.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
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
       * @summary Queries the list of metadata discovery task instances.
       *
       * @param request QueryFormationInstsByTaskIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFormationInstsByTaskIDResponse
       */
      Models::QueryFormationInstsByTaskIDResponse queryFormationInstsByTaskIDWithOptions(const Models::QueryFormationInstsByTaskIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of metadata discovery task instances.
       *
       * @param request QueryFormationInstsByTaskIDRequest
       * @return QueryFormationInstsByTaskIDResponse
       */
      Models::QueryFormationInstsByTaskIDResponse queryFormationInstsByTaskID(const Models::QueryFormationInstsByTaskIDRequest &request);

      /**
       * @summary Queries a metadata discovery task by ID.
       *
       * @param request QueryFormationTaskByIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFormationTaskByIDResponse
       */
      Models::QueryFormationTaskByIDResponse queryFormationTaskByIDWithOptions(const Models::QueryFormationTaskByIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a metadata discovery task by ID.
       *
       * @param request QueryFormationTaskByIDRequest
       * @return QueryFormationTaskByIDResponse
       */
      Models::QueryFormationTaskByIDResponse queryFormationTaskByID(const Models::QueryFormationTaskByIDRequest &request);

      /**
       * @summary Queries metadata discovery tasks by task type.
       *
       * @param request QueryFormationTasksByTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFormationTasksByTypeResponse
       */
      Models::QueryFormationTasksByTypeResponse queryFormationTasksByTypeWithOptions(const Models::QueryFormationTasksByTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metadata discovery tasks by task type.
       *
       * @param request QueryFormationTasksByTypeRequest
       * @return QueryFormationTasksByTypeResponse
       */
      Models::QueryFormationTasksByTypeResponse queryFormationTasksByType(const Models::QueryFormationTasksByTypeRequest &request);

      /**
       * @summary Releases the public endpoint of a specified cluster.
       *
       * @description For the endpoints of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnectionWithOptions(const Models::ReleaseClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of a specified cluster.
       *
       * @description For the endpoints of this service, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request ReleaseClusterPublicConnectionRequest
       * @return ReleaseClusterPublicConnectionResponse
       */
      Models::ReleaseClusterPublicConnectionResponse releaseClusterPublicConnection(const Models::ReleaseClusterPublicConnectionRequest &request);

      /**
       * @summary Modifies the name of a semantic view.
       *
       * @param request RenameSemanticViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameSemanticViewResponse
       */
      Models::RenameSemanticViewResponse renameSemanticViewWithOptions(const Models::RenameSemanticViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a semantic view.
       *
       * @param request RenameSemanticViewRequest
       * @return RenameSemanticViewResponse
       */
      Models::RenameSemanticViewResponse renameSemanticView(const Models::RenameSemanticViewRequest &request);

      /**
       * @summary Updates the definition of a semantic view.
       *
       * @param request ReplaceSemanticViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceSemanticViewResponse
       */
      Models::ReplaceSemanticViewResponse replaceSemanticViewWithOptions(const Models::ReplaceSemanticViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the definition of a semantic view.
       *
       * @param request ReplaceSemanticViewRequest
       * @return ReplaceSemanticViewResponse
       */
      Models::ReplaceSemanticViewResponse replaceSemanticView(const Models::ReplaceSemanticViewRequest &request);

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
       * @summary Runs an automated recommendation task for Materialized Views.
       *
       * @param request RunMaterializedViewRecommendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMaterializedViewRecommendResponse
       */
      Models::RunMaterializedViewRecommendResponse runMaterializedViewRecommendWithOptions(const Models::RunMaterializedViewRecommendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs an automated recommendation task for Materialized Views.
       *
       * @param request RunMaterializedViewRecommendRequest
       * @return RunMaterializedViewRecommendResponse
       */
      Models::RunMaterializedViewRecommendResponse runMaterializedViewRecommend(const Models::RunMaterializedViewRecommendRequest &request);

      /**
       * @summary Searches for semantic views.
       *
       * @param request SearchSemanticViewsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchSemanticViewsResponse
       */
      Models::SearchSemanticViewsResponse searchSemanticViewsWithOptions(const Models::SearchSemanticViewsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for semantic views.
       *
       * @param request SearchSemanticViewsRequest
       * @return SearchSemanticViewsResponse
       */
      Models::SearchSemanticViewsResponse searchSemanticViews(const Models::SearchSemanticViewsRequest &request);

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
       * @summary Manually triggers a metadata discovery task.
       *
       * @description ### Operation description
       * When you use a cloud-native data repository AnalyticDB for MySQL cluster and require Alibaba Cloud technical support, if the helpdesk needs to perform operations on your cluster during the support procedure, authorize the service account of the AnalyticDB for MySQL cluster so that the helpdesk can provide technical support through the service account. After the authorization expires, the permissions of the service account are automatically revoked.
       *
       * @param request StartFormationCrawlerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartFormationCrawlerResponse
       */
      Models::StartFormationCrawlerResponse startFormationCrawlerWithOptions(const Models::StartFormationCrawlerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually triggers a metadata discovery task.
       *
       * @description ### Operation description
       * When you use a cloud-native data repository AnalyticDB for MySQL cluster and require Alibaba Cloud technical support, if the helpdesk needs to perform operations on your cluster during the support procedure, authorize the service account of the AnalyticDB for MySQL cluster so that the helpdesk can provide technical support through the service account. After the authorization expires, the permissions of the service account are automatically revoked.
       *
       * @param request StartFormationCrawlerRequest
       * @return StartFormationCrawlerResponse
       */
      Models::StartFormationCrawlerResponse startFormationCrawler(const Models::StartFormationCrawlerRequest &request);

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
       * @summary Stops a metadata discovery task that is currently running.
       *
       * @description Stops only the currently running task without canceling subsequent cron-scheduled executions.
       *
       * @param request StopFormationCrawlerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopFormationCrawlerResponse
       */
      Models::StopFormationCrawlerResponse stopFormationCrawlerWithOptions(const Models::StopFormationCrawlerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a metadata discovery task that is currently running.
       *
       * @description Stops only the currently running task without canceling subsequent cron-scheduled executions.
       *
       * @param request StopFormationCrawlerRequest
       * @return StopFormationCrawlerResponse
       */
      Models::StopFormationCrawlerResponse stopFormationCrawler(const Models::StopFormationCrawlerRequest &request);

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
       * @summary Disassociates a database account from a resource group of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request UnbindDBResourceGroupWithUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDBResourceGroupWithUserResponse
       */
      Models::UnbindDBResourceGroupWithUserResponse unbindDBResourceGroupWithUserWithOptions(const Models::UnbindDBResourceGroupWithUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a database account from a resource group of an AnalyticDB for MySQL cluster.
       *
       * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
       *
       * @param request UnbindDBResourceGroupWithUserRequest
       * @return UnbindDBResourceGroupWithUserResponse
       */
      Models::UnbindDBResourceGroupWithUserResponse unbindDBResourceGroupWithUser(const Models::UnbindDBResourceGroupWithUserRequest &request);

      /**
       * @summary Updates the webhook configuration of a specified database cluster.
       *
       * @param tmpReq UpdateApsWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApsWebhookResponse
       */
      Models::UpdateApsWebhookResponse updateApsWebhookWithOptions(const Models::UpdateApsWebhookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the webhook configuration of a specified database cluster.
       *
       * @param request UpdateApsWebhookRequest
       * @return UpdateApsWebhookResponse
       */
      Models::UpdateApsWebhookResponse updateApsWebhook(const Models::UpdateApsWebhookRequest &request);

      /**
       * @summary Updates the information of a metadata discovery task.
       *
       * @param request UpdateFormationCrawlerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFormationCrawlerResponse
       */
      Models::UpdateFormationCrawlerResponse updateFormationCrawlerWithOptions(const Models::UpdateFormationCrawlerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a metadata discovery task.
       *
       * @param request UpdateFormationCrawlerRequest
       * @return UpdateFormationCrawlerResponse
       */
      Models::UpdateFormationCrawlerResponse updateFormationCrawler(const Models::UpdateFormationCrawlerRequest &request);

      /**
       * @summary Pauses or resumes the periodic scheduling of metadata discovery.
       *
       * @param request UpdateFormationCrawlerScheduleStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFormationCrawlerScheduleStateResponse
       */
      Models::UpdateFormationCrawlerScheduleStateResponse updateFormationCrawlerScheduleStateWithOptions(const Models::UpdateFormationCrawlerScheduleStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses or resumes the periodic scheduling of metadata discovery.
       *
       * @param request UpdateFormationCrawlerScheduleStateRequest
       * @return UpdateFormationCrawlerScheduleStateResponse
       */
      Models::UpdateFormationCrawlerScheduleStateResponse updateFormationCrawlerScheduleState(const Models::UpdateFormationCrawlerScheduleStateRequest &request);

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
