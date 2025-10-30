// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_GPDB20160503_HPP_
#define ALIBABACLOUD_GPDB20160503_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Gpdb20160503Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Gpdb20160503.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加AI节点
       *
       * @param request AddAINodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAINodeResponse
       */
      Models::AddAINodeResponse addAINodeWithOptions(const Models::AddAINodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加AI节点
       *
       * @param request AddAINodeRequest
       * @return AddAINodeResponse
       */
      Models::AddAINodeResponse addAINode(const Models::AddAINodeRequest &request);

      /**
       * @summary Allocates a public endpoint for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to apply for a public endpoint for an AnalyticDB for PostgreSQL instance. Both the primary and instance endpoints of an AnalyticDB for PostgreSQL instance can be public endpoints. For more information, see [Endpoints of an instance and its primary coordinator node](https://help.aliyun.com/document_detail/204879.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(const Models::AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allocates a public endpoint for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to apply for a public endpoint for an AnalyticDB for PostgreSQL instance. Both the primary and instance endpoints of an AnalyticDB for PostgreSQL instance can be public endpoints. For more information, see [Endpoints of an instance and its primary coordinator node](https://help.aliyun.com/document_detail/204879.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(const Models::AllocateInstancePublicConnectionRequest &request);

      /**
       * @summary Binds a resource group to a database role.
       *
       * @param tmpReq BindDBResourceGroupWithRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindDBResourceGroupWithRoleResponse
       */
      Models::BindDBResourceGroupWithRoleResponse bindDBResourceGroupWithRoleWithOptions(const Models::BindDBResourceGroupWithRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a resource group to a database role.
       *
       * @param request BindDBResourceGroupWithRoleRequest
       * @return BindDBResourceGroupWithRoleResponse
       */
      Models::BindDBResourceGroupWithRoleResponse bindDBResourceGroupWithRole(const Models::BindDBResourceGroupWithRoleRequest &request);

      /**
       * @summary 取消创建索引任务
       *
       * @param request CancelCreateIndexJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCreateIndexJobResponse
       */
      Models::CancelCreateIndexJobResponse cancelCreateIndexJobWithOptions(const Models::CancelCreateIndexJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消创建索引任务
       *
       * @param request CancelCreateIndexJobRequest
       * @return CancelCreateIndexJobResponse
       */
      Models::CancelCreateIndexJobResponse cancelCreateIndexJob(const Models::CancelCreateIndexJobRequest &request);

      /**
       * @summary Cancels an asynchronous document upload job based on the job ID.
       *
       * @description This operation is related to the UploadDocumentAsync operation. You can call this operation to cancel a document upload job.
       * >  If the canceling operation is complete, failed, or is canceled, you cannot call the operation again. The canceling operation only interrupts the document upload job. To remove the uploaded data, you must manually remove it or call the DeleteCollectionData operation. You can also call the document upload operation to overwrite the data by using the same FileName parameter.
       *
       * @param request CancelUploadDocumentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelUploadDocumentJobResponse
       */
      Models::CancelUploadDocumentJobResponse cancelUploadDocumentJobWithOptions(const Models::CancelUploadDocumentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an asynchronous document upload job based on the job ID.
       *
       * @description This operation is related to the UploadDocumentAsync operation. You can call this operation to cancel a document upload job.
       * >  If the canceling operation is complete, failed, or is canceled, you cannot call the operation again. The canceling operation only interrupts the document upload job. To remove the uploaded data, you must manually remove it or call the DeleteCollectionData operation. You can also call the document upload operation to overwrite the data by using the same FileName parameter.
       *
       * @param request CancelUploadDocumentJobRequest
       * @return CancelUploadDocumentJobResponse
       */
      Models::CancelUploadDocumentJobResponse cancelUploadDocumentJob(const Models::CancelUploadDocumentJobRequest &request);

      /**
       * @summary Cancels an asynchronous vector data upload job by using a job ID.
       *
       * @description This operation is related to the `UpsertCollectionDataAsync` operation. You can call this operation to cancel an upload job.
       * >  If the canceling operation is complete, failed, or is canceled, you cannot call the operation again. The canceling operation only interrupts the upload job. To remove the uploaded data, you must manually remove it or call the DeleteCollectionData operation.
       *
       * @param request CancelUpsertCollectionDataJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelUpsertCollectionDataJobResponse
       */
      Models::CancelUpsertCollectionDataJobResponse cancelUpsertCollectionDataJobWithOptions(const Models::CancelUpsertCollectionDataJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an asynchronous vector data upload job by using a job ID.
       *
       * @description This operation is related to the `UpsertCollectionDataAsync` operation. You can call this operation to cancel an upload job.
       * >  If the canceling operation is complete, failed, or is canceled, you cannot call the operation again. The canceling operation only interrupts the upload job. To remove the uploaded data, you must manually remove it or call the DeleteCollectionData operation.
       *
       * @param request CancelUpsertCollectionDataJobRequest
       * @return CancelUpsertCollectionDataJobResponse
       */
      Models::CancelUpsertCollectionDataJobResponse cancelUpsertCollectionDataJob(const Models::CancelUpsertCollectionDataJobRequest &request);

      /**
       * @summary 通过结合知识库和大模型，提供智能问答服务。
       *
       * @description 通过结合知识库和大模型，提供智能问答服务。
       *
       * @param tmpReq ChatWithKnowledgeBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatWithKnowledgeBaseResponse
       */
      Models::ChatWithKnowledgeBaseResponse chatWithKnowledgeBaseWithOptions(const Models::ChatWithKnowledgeBaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过结合知识库和大模型，提供智能问答服务。
       *
       * @description 通过结合知识库和大模型，提供智能问答服务。
       *
       * @param request ChatWithKnowledgeBaseRequest
       * @return ChatWithKnowledgeBaseResponse
       */
      Models::ChatWithKnowledgeBaseResponse chatWithKnowledgeBase(const Models::ChatWithKnowledgeBaseRequest &request);

      /**
       * @summary 通过结合知识库和大模型，提供智能问答服务。
       *
       * @description 通过结合知识库和大模型，提供智能问答服务。
       *
       * @param tmpReq ChatWithKnowledgeBaseStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatWithKnowledgeBaseStreamResponse
       */
      FutrueGenerator<Models::ChatWithKnowledgeBaseStreamResponse> chatWithKnowledgeBaseStreamWithSSE(const Models::ChatWithKnowledgeBaseStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过结合知识库和大模型，提供智能问答服务。
       *
       * @description 通过结合知识库和大模型，提供智能问答服务。
       *
       * @param tmpReq ChatWithKnowledgeBaseStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatWithKnowledgeBaseStreamResponse
       */
      Models::ChatWithKnowledgeBaseStreamResponse chatWithKnowledgeBaseStreamWithOptions(const Models::ChatWithKnowledgeBaseStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过结合知识库和大模型，提供智能问答服务。
       *
       * @description 通过结合知识库和大模型，提供智能问答服务。
       *
       * @param request ChatWithKnowledgeBaseStreamRequest
       * @return ChatWithKnowledgeBaseStreamResponse
       */
      Models::ChatWithKnowledgeBaseStreamResponse chatWithKnowledgeBaseStream(const Models::ChatWithKnowledgeBaseStreamRequest &request);

      /**
       * @summary Checks the configurations of a Hadoop data source.
       *
       * @param request CheckHadoopDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckHadoopDataSourceResponse
       */
      Models::CheckHadoopDataSourceResponse checkHadoopDataSourceWithOptions(const Models::CheckHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the configurations of a Hadoop data source.
       *
       * @param request CheckHadoopDataSourceRequest
       * @return CheckHadoopDataSourceResponse
       */
      Models::CheckHadoopDataSourceResponse checkHadoopDataSource(const Models::CheckHadoopDataSourceRequest &request);

      /**
       * @summary Check Hadoop Cluster Network Connectivity
       *
       * @param request CheckHadoopNetConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckHadoopNetConnectionResponse
       */
      Models::CheckHadoopNetConnectionResponse checkHadoopNetConnectionWithOptions(const Models::CheckHadoopNetConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check Hadoop Cluster Network Connectivity
       *
       * @param request CheckHadoopNetConnectionRequest
       * @return CheckHadoopNetConnectionResponse
       */
      Models::CheckHadoopNetConnectionResponse checkHadoopNetConnection(const Models::CheckHadoopNetConnectionRequest &request);

      /**
       * @summary Check the network connectivity of the JDBC connection string
       *
       * @param request CheckJDBCSourceNetConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckJDBCSourceNetConnectionResponse
       */
      Models::CheckJDBCSourceNetConnectionResponse checkJDBCSourceNetConnectionWithOptions(const Models::CheckJDBCSourceNetConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check the network connectivity of the JDBC connection string
       *
       * @param request CheckJDBCSourceNetConnectionRequest
       * @return CheckJDBCSourceNetConnectionResponse
       */
      Models::CheckJDBCSourceNetConnectionResponse checkJDBCSourceNetConnection(const Models::CheckJDBCSourceNetConnectionRequest &request);

      /**
       * @summary Queries whether a service-linked role is created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a service-linked role is created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary 恢复数据至指定实例
       *
       * @param request CloneDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneDBInstanceResponse
       */
      Models::CloneDBInstanceResponse cloneDBInstanceWithOptions(const Models::CloneDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复数据至指定实例
       *
       * @param request CloneDBInstanceRequest
       * @return CloneDBInstanceResponse
       */
      Models::CloneDBInstanceResponse cloneDBInstance(const Models::CloneDBInstanceRequest &request);

      /**
       * @summary Creates an initial account for an AnalyticDB for PostgreSQL instance.
       *
       * @description *   Before you can use an AnalyticDB for PostgreSQL instance, you must create an initial account for the instance.
       * *   You can call this operation to create only initial accounts. For information about how to create other types of accounts, see [Create a database account](https://help.aliyun.com/document_detail/50206.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an initial account for an AnalyticDB for PostgreSQL instance.
       *
       * @description *   Before you can use an AnalyticDB for PostgreSQL instance, you must create an initial account for the instance.
       * *   You can call this operation to create only initial accounts. For information about how to create other types of accounts, see [Create a database account](https://help.aliyun.com/document_detail/50206.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary 创建备份
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建备份
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates a vector collection.
       *
       * @param tmpReq CreateCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCollectionResponse
       */
      Models::CreateCollectionResponse createCollectionWithOptions(const Models::CreateCollectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a vector collection.
       *
       * @param request CreateCollectionRequest
       * @return CreateCollectionResponse
       */
      Models::CreateCollectionResponse createCollection(const Models::CreateCollectionRequest &request);

      /**
       * @summary Create Instance
       *
       * @description Before using this interface, please make sure you have fully understood the [billing method](https://help.aliyun.com/document_detail/35406.html) and <props="china">[pricing](https://www.aliyun.com/price/product#/gpdb/detail/GreenplumPost)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing) of the AnalyticDB for PostgreSQL product.
       *
       * @param request CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Instance
       *
       * @description Before using this interface, please make sure you have fully understood the [billing method](https://help.aliyun.com/document_detail/35406.html) and <props="china">[pricing](https://www.aliyun.com/price/product#/gpdb/detail/GreenplumPost)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing) of the AnalyticDB for PostgreSQL product.
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Creates a plan for an AnalyticDB for PostgreSQL instance.
       *
       * @description *   The plan management feature is supported only for pay-as-you-go instances.
       * *   When you change the compute node specifications or change the number of compute nodes, transient connections may occur. We recommend that you perform these operations during off-peak hours.
       * Before you call this operation, make sure that you are familiar with the billing of AnalyticDB for PostgreSQL. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       *
       * @param request CreateDBInstancePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstancePlanResponse
       */
      Models::CreateDBInstancePlanResponse createDBInstancePlanWithOptions(const Models::CreateDBInstancePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a plan for an AnalyticDB for PostgreSQL instance.
       *
       * @description *   The plan management feature is supported only for pay-as-you-go instances.
       * *   When you change the compute node specifications or change the number of compute nodes, transient connections may occur. We recommend that you perform these operations during off-peak hours.
       * Before you call this operation, make sure that you are familiar with the billing of AnalyticDB for PostgreSQL. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       *
       * @param request CreateDBInstancePlanRequest
       * @return CreateDBInstancePlanResponse
       */
      Models::CreateDBInstancePlanResponse createDBInstancePlan(const Models::CreateDBInstancePlanRequest &request);

      /**
       * @summary Creates a resource group.
       *
       * @param request CreateDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBResourceGroupResponse
       */
      Models::CreateDBResourceGroupResponse createDBResourceGroupWithOptions(const Models::CreateDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group.
       *
       * @param request CreateDBResourceGroupRequest
       * @return CreateDBResourceGroupResponse
       */
      Models::CreateDBResourceGroupResponse createDBResourceGroup(const Models::CreateDBResourceGroupRequest &request);

      /**
       * @summary Creates a document collection.
       *
       * @param tmpReq CreateDocumentCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocumentCollectionResponse
       */
      Models::CreateDocumentCollectionResponse createDocumentCollectionWithOptions(const Models::CreateDocumentCollectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a document collection.
       *
       * @param request CreateDocumentCollectionRequest
       * @return CreateDocumentCollectionResponse
       */
      Models::CreateDocumentCollectionResponse createDocumentCollection(const Models::CreateDocumentCollectionRequest &request);

      /**
       * @summary Install extensions.
       *
       * @param request CreateExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExtensionsResponse
       */
      Models::CreateExtensionsResponse createExtensionsWithOptions(const Models::CreateExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Install extensions.
       *
       * @param request CreateExtensionsRequest
       * @return CreateExtensionsResponse
       */
      Models::CreateExtensionsResponse createExtensions(const Models::CreateExtensionsRequest &request);

      /**
       * @summary Create External Data Service
       *
       * @param request CreateExternalDataServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExternalDataServiceResponse
       */
      Models::CreateExternalDataServiceResponse createExternalDataServiceWithOptions(const Models::CreateExternalDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create External Data Service
       *
       * @param request CreateExternalDataServiceRequest
       * @return CreateExternalDataServiceResponse
       */
      Models::CreateExternalDataServiceResponse createExternalDataService(const Models::CreateExternalDataServiceRequest &request);

      /**
       * @summary Create Hadoop data source configuration
       *
       * @param request CreateHadoopDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHadoopDataSourceResponse
       */
      Models::CreateHadoopDataSourceResponse createHadoopDataSourceWithOptions(const Models::CreateHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Hadoop data source configuration
       *
       * @param request CreateHadoopDataSourceRequest
       * @return CreateHadoopDataSourceResponse
       */
      Models::CreateHadoopDataSourceResponse createHadoopDataSource(const Models::CreateHadoopDataSourceRequest &request);

      /**
       * @summary 创建索引
       *
       * @param request CreateIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndexWithOptions(const Models::CreateIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建索引
       *
       * @param request CreateIndexRequest
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndex(const Models::CreateIndexRequest &request);

      /**
       * @summary Creates a JDBC data source.
       *
       * @param request CreateJDBCDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJDBCDataSourceResponse
       */
      Models::CreateJDBCDataSourceResponse createJDBCDataSourceWithOptions(const Models::CreateJDBCDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a JDBC data source.
       *
       * @param request CreateJDBCDataSourceRequest
       * @return CreateJDBCDataSourceResponse
       */
      Models::CreateJDBCDataSourceResponse createJDBCDataSource(const Models::CreateJDBCDataSourceRequest &request);

      /**
       * @summary 创建模型服务
       *
       * @param tmpReq CreateModelServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelServiceResponse
       */
      Models::CreateModelServiceResponse createModelServiceWithOptions(const Models::CreateModelServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型服务
       *
       * @param request CreateModelServiceRequest
       * @return CreateModelServiceResponse
       */
      Models::CreateModelServiceResponse createModelService(const Models::CreateModelServiceRequest &request);

      /**
       * @summary Creates a vector namespace.
       *
       * @param request CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a vector namespace.
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary Create Homogeneous Data Source
       *
       * @param request CreateRemoteADBDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRemoteADBDataSourceResponse
       */
      Models::CreateRemoteADBDataSourceResponse createRemoteADBDataSourceWithOptions(const Models::CreateRemoteADBDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Homogeneous Data Source
       *
       * @param request CreateRemoteADBDataSourceRequest
       * @return CreateRemoteADBDataSourceResponse
       */
      Models::CreateRemoteADBDataSourceResponse createRemoteADBDataSource(const Models::CreateRemoteADBDataSourceRequest &request);

      /**
       * @summary Creates a sample dataset for an AnalyticDB for PostgreSQL instance.
       *
       * @description *   You can call this operation to create a sample dataset for an AnalyticDB for PostgreSQL instance. Then, you can execute query statements on the sample dataset to experience or test your instance. For more information about query statements, see [Dataset information and query examples](https://help.aliyun.com/document_detail/452277.html).
       * *   This operation is supported only for AnalyticDB for PostgreSQL V6.3.8.8 to 6.3.8.x, V6.3.10.3, and later.
       * *   Versions from V6.3.9.0 to V6.3.10.2 are not supported.
       *
       * @param request CreateSampleDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSampleDataResponse
       */
      Models::CreateSampleDataResponse createSampleDataWithOptions(const Models::CreateSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a sample dataset for an AnalyticDB for PostgreSQL instance.
       *
       * @description *   You can call this operation to create a sample dataset for an AnalyticDB for PostgreSQL instance. Then, you can execute query statements on the sample dataset to experience or test your instance. For more information about query statements, see [Dataset information and query examples](https://help.aliyun.com/document_detail/452277.html).
       * *   This operation is supported only for AnalyticDB for PostgreSQL V6.3.8.8 to 6.3.8.x, V6.3.10.3, and later.
       * *   Versions from V6.3.9.0 to V6.3.10.2 are not supported.
       *
       * @param request CreateSampleDataRequest
       * @return CreateSampleDataResponse
       */
      Models::CreateSampleDataResponse createSampleData(const Models::CreateSampleDataRequest &request);

      /**
       * @summary Creates an access credential for an AnalyticDB for PostgreSQL instance by using the name and password of a database account.
       *
       * @param request CreateSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecretWithOptions(const Models::CreateSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access credential for an AnalyticDB for PostgreSQL instance by using the name and password of a database account.
       *
       * @param request CreateSecretRequest
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecret(const Models::CreateSecretRequest &request);

      /**
       * @summary Creates a service-linked role.
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role.
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param request CreateStreamingDataServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamingDataServiceResponse
       */
      Models::CreateStreamingDataServiceResponse createStreamingDataServiceWithOptions(const Models::CreateStreamingDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param request CreateStreamingDataServiceRequest
       * @return CreateStreamingDataServiceResponse
       */
      Models::CreateStreamingDataServiceResponse createStreamingDataService(const Models::CreateStreamingDataServiceRequest &request);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param request CreateStreamingDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamingDataSourceResponse
       */
      Models::CreateStreamingDataSourceResponse createStreamingDataSourceWithOptions(const Models::CreateStreamingDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param request CreateStreamingDataSourceRequest
       * @return CreateStreamingDataSourceResponse
       */
      Models::CreateStreamingDataSourceResponse createStreamingDataSource(const Models::CreateStreamingDataSourceRequest &request);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param tmpReq CreateStreamingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamingJobResponse
       */
      Models::CreateStreamingJobResponse createStreamingJobWithOptions(const Models::CreateStreamingJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param request CreateStreamingJobRequest
       * @return CreateStreamingJobResponse
       */
      Models::CreateStreamingJobResponse createStreamingJob(const Models::CreateStreamingJobRequest &request);

      /**
       * @summary 创建supabase project
       *
       * @param request CreateSupabaseProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSupabaseProjectResponse
       */
      Models::CreateSupabaseProjectResponse createSupabaseProjectWithOptions(const Models::CreateSupabaseProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建supabase project
       *
       * @param request CreateSupabaseProjectRequest
       * @return CreateSupabaseProjectResponse
       */
      Models::CreateSupabaseProjectResponse createSupabaseProject(const Models::CreateSupabaseProjectRequest &request);

      /**
       * @summary Create Vector Index
       *
       * @param request CreateVectorIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVectorIndexResponse
       */
      Models::CreateVectorIndexResponse createVectorIndexWithOptions(const Models::CreateVectorIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Vector Index
       *
       * @param request CreateVectorIndexRequest
       * @return CreateVectorIndexResponse
       */
      Models::CreateVectorIndexResponse createVectorIndex(const Models::CreateVectorIndexRequest &request);

      /**
       * @summary 删除AI节点
       *
       * @param request DeleteAINodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAINodeResponse
       */
      Models::DeleteAINodeResponse deleteAINodeWithOptions(const Models::DeleteAINodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除AI节点
       *
       * @param request DeleteAINodeRequest
       * @return DeleteAINodeResponse
       */
      Models::DeleteAINodeResponse deleteAINode(const Models::DeleteAINodeRequest &request);

      /**
       * @summary 删除数据库账号
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据库账号
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary 删除备份
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除备份
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Deletes a vector collection.
       *
       * @param request DeleteCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCollectionResponse
       */
      Models::DeleteCollectionResponse deleteCollectionWithOptions(const Models::DeleteCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a vector collection.
       *
       * @param request DeleteCollectionRequest
       * @return DeleteCollectionResponse
       */
      Models::DeleteCollectionResponse deleteCollection(const Models::DeleteCollectionRequest &request);

      /**
       * @summary Deletes vector data.
       *
       * @param request DeleteCollectionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCollectionDataResponse
       */
      Models::DeleteCollectionDataResponse deleteCollectionDataWithOptions(const Models::DeleteCollectionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes vector data.
       *
       * @param request DeleteCollectionDataRequest
       * @return DeleteCollectionDataResponse
       */
      Models::DeleteCollectionDataResponse deleteCollectionData(const Models::DeleteCollectionDataRequest &request);

      /**
       * @summary Releases a pay-as-you-go AnalyticDB for PostgreSQL instance.
       *
       * @description *   Subscription instances cannot be manually released. They are automatically released when they expire.
       * *   You can call this operation to release pay-as-you-go instances only when they are in the **Running** state.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go AnalyticDB for PostgreSQL instance.
       *
       * @description *   Subscription instances cannot be manually released. They are automatically released when they expire.
       * *   You can call this operation to release pay-as-you-go instances only when they are in the **Running** state.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary Deletes a plan from an AnalyticDB for PostgreSQL instance.
       *
       * @description If you no longer need a plan, you can call this operation to delete the plan. The plan management feature is supported only for AnalyticDB for PostgreSQL instances in Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteDBInstancePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstancePlanResponse
       */
      Models::DeleteDBInstancePlanResponse deleteDBInstancePlanWithOptions(const Models::DeleteDBInstancePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a plan from an AnalyticDB for PostgreSQL instance.
       *
       * @description If you no longer need a plan, you can call this operation to delete the plan. The plan management feature is supported only for AnalyticDB for PostgreSQL instances in Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteDBInstancePlanRequest
       * @return DeleteDBInstancePlanResponse
       */
      Models::DeleteDBInstancePlanResponse deleteDBInstancePlan(const Models::DeleteDBInstancePlanRequest &request);

      /**
       * @summary Deletes a resource group.
       *
       * @param request DeleteDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBResourceGroupResponse
       */
      Models::DeleteDBResourceGroupResponse deleteDBResourceGroupWithOptions(const Models::DeleteDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group.
       *
       * @param request DeleteDBResourceGroupRequest
       * @return DeleteDBResourceGroupResponse
       */
      Models::DeleteDBResourceGroupResponse deleteDBResourceGroup(const Models::DeleteDBResourceGroupRequest &request);

      /**
       * @summary Delete Document
       *
       * @param request DeleteDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocumentWithOptions(const Models::DeleteDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Document
       *
       * @param request DeleteDocumentRequest
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocument(const Models::DeleteDocumentRequest &request);

      /**
       * @summary Delete Knowledge Base
       *
       * @param request DeleteDocumentCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentCollectionResponse
       */
      Models::DeleteDocumentCollectionResponse deleteDocumentCollectionWithOptions(const Models::DeleteDocumentCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Knowledge Base
       *
       * @param request DeleteDocumentCollectionRequest
       * @return DeleteDocumentCollectionResponse
       */
      Models::DeleteDocumentCollectionResponse deleteDocumentCollection(const Models::DeleteDocumentCollectionRequest &request);

      /**
       * @summary Uninstall an extension.
       *
       * @param request DeleteExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExtensionResponse
       */
      Models::DeleteExtensionResponse deleteExtensionWithOptions(const Models::DeleteExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstall an extension.
       *
       * @param request DeleteExtensionRequest
       * @return DeleteExtensionResponse
       */
      Models::DeleteExtensionResponse deleteExtension(const Models::DeleteExtensionRequest &request);

      /**
       * @summary Delete External Data Service
       *
       * @param request DeleteExternalDataServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExternalDataServiceResponse
       */
      Models::DeleteExternalDataServiceResponse deleteExternalDataServiceWithOptions(const Models::DeleteExternalDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete External Data Service
       *
       * @param request DeleteExternalDataServiceRequest
       * @return DeleteExternalDataServiceResponse
       */
      Models::DeleteExternalDataServiceResponse deleteExternalDataService(const Models::DeleteExternalDataServiceRequest &request);

      /**
       * @summary 删除hadoop数据源
       *
       * @param request DeleteHadoopDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHadoopDataSourceResponse
       */
      Models::DeleteHadoopDataSourceResponse deleteHadoopDataSourceWithOptions(const Models::DeleteHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除hadoop数据源
       *
       * @param request DeleteHadoopDataSourceRequest
       * @return DeleteHadoopDataSourceResponse
       */
      Models::DeleteHadoopDataSourceResponse deleteHadoopDataSource(const Models::DeleteHadoopDataSourceRequest &request);

      /**
       * @summary 删除索引
       *
       * @param request DeleteIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndexResponse
       */
      Models::DeleteIndexResponse deleteIndexWithOptions(const Models::DeleteIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除索引
       *
       * @param request DeleteIndexRequest
       * @return DeleteIndexResponse
       */
      Models::DeleteIndexResponse deleteIndex(const Models::DeleteIndexRequest &request);

      /**
       * @summary Delete JDBC data source
       *
       * @param request DeleteJDBCDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJDBCDataSourceResponse
       */
      Models::DeleteJDBCDataSourceResponse deleteJDBCDataSourceWithOptions(const Models::DeleteJDBCDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete JDBC data source
       *
       * @param request DeleteJDBCDataSourceRequest
       * @return DeleteJDBCDataSourceResponse
       */
      Models::DeleteJDBCDataSourceResponse deleteJDBCDataSource(const Models::DeleteJDBCDataSourceRequest &request);

      /**
       * @summary 删除模型服务
       *
       * @param request DeleteModelServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelServiceWithOptions(const Models::DeleteModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模型服务
       *
       * @param request DeleteModelServiceRequest
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelService(const Models::DeleteModelServiceRequest &request);

      /**
       * @summary Deletes a namespace.
       *
       * @param request DeleteNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace.
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary Deletes a remote AnalyticDB data source.
       *
       * @param request DeleteRemoteADBDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRemoteADBDataSourceResponse
       */
      Models::DeleteRemoteADBDataSourceResponse deleteRemoteADBDataSourceWithOptions(const Models::DeleteRemoteADBDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a remote AnalyticDB data source.
       *
       * @param request DeleteRemoteADBDataSourceRequest
       * @return DeleteRemoteADBDataSourceResponse
       */
      Models::DeleteRemoteADBDataSourceResponse deleteRemoteADBDataSource(const Models::DeleteRemoteADBDataSourceRequest &request);

      /**
       * @summary Deletes the access credentials of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DeleteSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecretWithOptions(const Models::DeleteSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the access credentials of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DeleteSecretRequest
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecret(const Models::DeleteSecretRequest &request);

      /**
       * @summary Deletes a real-time data service.
       *
       * @param request DeleteStreamingDataServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStreamingDataServiceResponse
       */
      Models::DeleteStreamingDataServiceResponse deleteStreamingDataServiceWithOptions(const Models::DeleteStreamingDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a real-time data service.
       *
       * @param request DeleteStreamingDataServiceRequest
       * @return DeleteStreamingDataServiceResponse
       */
      Models::DeleteStreamingDataServiceResponse deleteStreamingDataService(const Models::DeleteStreamingDataServiceRequest &request);

      /**
       * @summary Deletes a real-time data source.
       *
       * @param request DeleteStreamingDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStreamingDataSourceResponse
       */
      Models::DeleteStreamingDataSourceResponse deleteStreamingDataSourceWithOptions(const Models::DeleteStreamingDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a real-time data source.
       *
       * @param request DeleteStreamingDataSourceRequest
       * @return DeleteStreamingDataSourceResponse
       */
      Models::DeleteStreamingDataSourceResponse deleteStreamingDataSource(const Models::DeleteStreamingDataSourceRequest &request);

      /**
       * @summary Deletes a real-time data service job.
       *
       * @param request DeleteStreamingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStreamingJobResponse
       */
      Models::DeleteStreamingJobResponse deleteStreamingJobWithOptions(const Models::DeleteStreamingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a real-time data service job.
       *
       * @param request DeleteStreamingJobRequest
       * @return DeleteStreamingJobResponse
       */
      Models::DeleteStreamingJobResponse deleteStreamingJob(const Models::DeleteStreamingJobRequest &request);

      /**
       * @summary 删除Supabase实例
       *
       * @param request DeleteSupabaseProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSupabaseProjectResponse
       */
      Models::DeleteSupabaseProjectResponse deleteSupabaseProjectWithOptions(const Models::DeleteSupabaseProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Supabase实例
       *
       * @param request DeleteSupabaseProjectRequest
       * @return DeleteSupabaseProjectResponse
       */
      Models::DeleteSupabaseProjectResponse deleteSupabaseProject(const Models::DeleteSupabaseProjectRequest &request);

      /**
       * @summary Deletes a vector index.
       *
       * @param request DeleteVectorIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVectorIndexResponse
       */
      Models::DeleteVectorIndexResponse deleteVectorIndexWithOptions(const Models::DeleteVectorIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a vector index.
       *
       * @param request DeleteVectorIndexRequest
       * @return DeleteVectorIndexResponse
       */
      Models::DeleteVectorIndexResponse deleteVectorIndex(const Models::DeleteVectorIndexRequest &request);

      /**
       * @summary Queries the information about database accounts for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is called to query the information of the privileged account in an AnalyticDB for PostgreSQL instance, such as its state, description, and the instance.
       * ## Limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about database accounts for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is called to query the information of the privileged account in an AnalyticDB for PostgreSQL instance, such as its state, description, and the instance.
       * ## Limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries active SQL records.
       *
       * @param request DescribeActiveSQLRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveSQLRecordsResponse
       */
      Models::DescribeActiveSQLRecordsResponse describeActiveSQLRecordsWithOptions(const Models::DescribeActiveSQLRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries active SQL records.
       *
       * @param request DescribeActiveSQLRecordsRequest
       * @return DescribeActiveSQLRecordsResponse
       */
      Models::DescribeActiveSQLRecordsResponse describeActiveSQLRecords(const Models::DescribeActiveSQLRecordsRequest &request);

      /**
       * @summary Queries the information about available resources of AnalyticDB for PostgreSQL.
       *
       * @description When you create an AnalyticDB for PostgreSQL instance, you can call this operation to query the available resources within a zone.
       *
       * @param request DescribeAvailableResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourcesResponse
       */
      Models::DescribeAvailableResourcesResponse describeAvailableResourcesWithOptions(const Models::DescribeAvailableResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about available resources of AnalyticDB for PostgreSQL.
       *
       * @description When you create an AnalyticDB for PostgreSQL instance, you can call this operation to query the available resources within a zone.
       *
       * @param request DescribeAvailableResourcesRequest
       * @return DescribeAvailableResourcesResponse
       */
      Models::DescribeAvailableResourcesResponse describeAvailableResources(const Models::DescribeAvailableResourcesRequest &request);

      /**
       * @summary 获取备份任务详情
       *
       * @param request DescribeBackupJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupJobResponse
       */
      Models::DescribeBackupJobResponse describeBackupJobWithOptions(const Models::DescribeBackupJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取备份任务详情
       *
       * @param request DescribeBackupJobRequest
       * @return DescribeBackupJobResponse
       */
      Models::DescribeBackupJobResponse describeBackupJob(const Models::DescribeBackupJobRequest &request);

      /**
       * @summary Queries the backup policy of an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the backup settings of an AnalyticDB for PostgreSQL instance in elastic storage mode. Periodically backing data can prevent data loss. For more information about how to modify backup policies, see [ModifyBackupPolicy](https://help.aliyun.com/document_detail/210095.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup policy of an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the backup settings of an AnalyticDB for PostgreSQL instance in elastic storage mode. Periodically backing data can prevent data loss. For more information about how to modify backup policies, see [ModifyBackupPolicy](https://help.aliyun.com/document_detail/210095.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the information about a vector collection.
       *
       * @param request DescribeCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCollectionResponse
       */
      Models::DescribeCollectionResponse describeCollectionWithOptions(const Models::DescribeCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a vector collection.
       *
       * @param request DescribeCollectionRequest
       * @return DescribeCollectionResponse
       */
      Models::DescribeCollectionResponse describeCollection(const Models::DescribeCollectionRequest &request);

      /**
       * @summary 获取创建索引任务
       *
       * @param request DescribeCreateIndexJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreateIndexJobResponse
       */
      Models::DescribeCreateIndexJobResponse describeCreateIndexJobWithOptions(const Models::DescribeCreateIndexJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取创建索引任务
       *
       * @param request DescribeCreateIndexJobRequest
       * @return DescribeCreateIndexJobResponse
       */
      Models::DescribeCreateIndexJobResponse describeCreateIndexJob(const Models::DescribeCreateIndexJobRequest &request);

      /**
       * @summary Queries a list of nodes in an AnalyticDB for PostgreSQL instance.
       *
       * @description ##
       * You can call this operation to query the information about coordinator and compute nodes in an AnalyticDB for PostgreSQL instance in elastic storage mode or Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBClusterNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterNodeResponse
       */
      Models::DescribeDBClusterNodeResponse describeDBClusterNodeWithOptions(const Models::DescribeDBClusterNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of nodes in an AnalyticDB for PostgreSQL instance.
       *
       * @description ##
       * You can call this operation to query the information about coordinator and compute nodes in an AnalyticDB for PostgreSQL instance in elastic storage mode or Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBClusterNodeRequest
       * @return DescribeDBClusterNodeResponse
       */
      Models::DescribeDBClusterNodeResponse describeDBClusterNode(const Models::DescribeDBClusterNodeRequest &request);

      /**
       * @summary Queries the information about performance metrics of an AnalyticDB for PostgreSQL instance within a time range.
       *
       * @description You can query monitoring information only within the last 30 days.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(const Models::DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about performance metrics of an AnalyticDB for PostgreSQL instance within a time range.
       *
       * @description You can query monitoring information only within the last 30 days.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformance(const Models::DescribeDBClusterPerformanceRequest &request);

      /**
       * @summary Query detailed information about the instance.
       *
       * @description ## Usage Instructions
       * This interface is generally used to view information such as the specifications, network type, and instance status of AnalyticDB for PostgreSQL instances.
       * ## QPS Limitation
       * The default single-user QPS limit for this interface is 1000 times/second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please use it reasonably.
       * <props="china">The QPS in this document is only a default reference value. For accurate information, please refer to the [API Rate Quota List](https://quotas.console.aliyun.com/flow-control-products/gpdb/quotas).
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query detailed information about the instance.
       *
       * @description ## Usage Instructions
       * This interface is generally used to view information such as the specifications, network type, and instance status of AnalyticDB for PostgreSQL instances.
       * ## QPS Limitation
       * The default single-user QPS limit for this interface is 1000 times/second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please use it reasonably.
       * <props="china">The QPS in this document is only a default reference value. For accurate information, please refer to the [API Rate Quota List](https://quotas.console.aliyun.com/flow-control-products/gpdb/quotas).
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary Queries the information about data bloat for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of data bloat on an AnalyticDB for PostgreSQL instance in elastic storage mode. The minor version of the instance must be V6.3.10.1 or later. For more information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstanceDataBloatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceDataBloatResponse
       */
      Models::DescribeDBInstanceDataBloatResponse describeDBInstanceDataBloatWithOptions(const Models::DescribeDBInstanceDataBloatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about data bloat for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of data bloat on an AnalyticDB for PostgreSQL instance in elastic storage mode. The minor version of the instance must be V6.3.10.1 or later. For more information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstanceDataBloatRequest
       * @return DescribeDBInstanceDataBloatResponse
       */
      Models::DescribeDBInstanceDataBloatResponse describeDBInstanceDataBloat(const Models::DescribeDBInstanceDataBloatRequest &request);

      /**
       * @summary Queries the information about data skew for an AnalyticDB for PostgreSQL instance.
       *
       * @description To prevent data skew from affecting your database service, you can call this operation to query the details about data skew on an AnalyticDB for PostgreSQL instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstanceDataSkewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceDataSkewResponse
       */
      Models::DescribeDBInstanceDataSkewResponse describeDBInstanceDataSkewWithOptions(const Models::DescribeDBInstanceDataSkewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about data skew for an AnalyticDB for PostgreSQL instance.
       *
       * @description To prevent data skew from affecting your database service, you can call this operation to query the details about data skew on an AnalyticDB for PostgreSQL instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstanceDataSkewRequest
       * @return DescribeDBInstanceDataSkewResponse
       */
      Models::DescribeDBInstanceDataSkewResponse describeDBInstanceDataSkew(const Models::DescribeDBInstanceDataSkewRequest &request);

      /**
       * @summary Queries the information about nodes in an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the distribution and states of coordinator and compute nodes in an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeDBInstanceDiagnosisSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceDiagnosisSummaryResponse
       */
      Models::DescribeDBInstanceDiagnosisSummaryResponse describeDBInstanceDiagnosisSummaryWithOptions(const Models::DescribeDBInstanceDiagnosisSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about nodes in an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the distribution and states of coordinator and compute nodes in an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeDBInstanceDiagnosisSummaryRequest
       * @return DescribeDBInstanceDiagnosisSummaryResponse
       */
      Models::DescribeDBInstanceDiagnosisSummaryResponse describeDBInstanceDiagnosisSummary(const Models::DescribeDBInstanceDiagnosisSummaryRequest &request);

      /**
       * @summary Queries the error logs of an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the error logs of an AnalyticDB for PostgreSQL instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstanceErrorLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceErrorLogResponse
       */
      Models::DescribeDBInstanceErrorLogResponse describeDBInstanceErrorLogWithOptions(const Models::DescribeDBInstanceErrorLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the error logs of an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the error logs of an AnalyticDB for PostgreSQL instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstanceErrorLogRequest
       * @return DescribeDBInstanceErrorLogResponse
       */
      Models::DescribeDBInstanceErrorLogResponse describeDBInstanceErrorLog(const Models::DescribeDBInstanceErrorLogRequest &request);

      /**
       * @summary Queries the whitelists of IP addresses that are allowed to access an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the whitelists of IP addresses that are allowed to access an AnalyticDB for PostgreSQL instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstanceIPArrayListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceIPArrayListResponse
       */
      Models::DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayListWithOptions(const Models::DescribeDBInstanceIPArrayListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelists of IP addresses that are allowed to access an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the whitelists of IP addresses that are allowed to access an AnalyticDB for PostgreSQL instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstanceIPArrayListRequest
       * @return DescribeDBInstanceIPArrayListResponse
       */
      Models::DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayList(const Models::DescribeDBInstanceIPArrayListRequest &request);

      /**
       * @summary Queries the index usage of an AnalyticDB for PostgreSQL instance.
       *
       * @description Appropriate indexes can accelerate database queries. You can call this operation to query the index usage of an AnalyticDB for PostgreSQL instance.
       * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       *
       * @param request DescribeDBInstanceIndexUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceIndexUsageResponse
       */
      Models::DescribeDBInstanceIndexUsageResponse describeDBInstanceIndexUsageWithOptions(const Models::DescribeDBInstanceIndexUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the index usage of an AnalyticDB for PostgreSQL instance.
       *
       * @description Appropriate indexes can accelerate database queries. You can call this operation to query the index usage of an AnalyticDB for PostgreSQL instance.
       * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       *
       * @param request DescribeDBInstanceIndexUsageRequest
       * @return DescribeDBInstanceIndexUsageResponse
       */
      Models::DescribeDBInstanceIndexUsageResponse describeDBInstanceIndexUsage(const Models::DescribeDBInstanceIndexUsageRequest &request);

      /**
       * @summary Queries the connection information of an instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(const Models::DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connection information of an instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(const Models::DescribeDBInstanceNetInfoRequest &request);

      /**
       * @summary Queries the information about performance metrics of an AnalyticDB for PostgreSQL instance within a time range.
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformanceWithOptions(const Models::DescribeDBInstancePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about performance metrics of an AnalyticDB for PostgreSQL instance within a time range.
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformance(const Models::DescribeDBInstancePerformanceRequest &request);

      /**
       * @summary Queries the information about plans for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of plans for an AnalyticDB for PostgreSQL instance in Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstancePlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePlansResponse
       */
      Models::DescribeDBInstancePlansResponse describeDBInstancePlansWithOptions(const Models::DescribeDBInstancePlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about plans for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of plans for an AnalyticDB for PostgreSQL instance in Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstancePlansRequest
       * @return DescribeDBInstancePlansResponse
       */
      Models::DescribeDBInstancePlansResponse describeDBInstancePlans(const Models::DescribeDBInstancePlansRequest &request);

      /**
       * @summary Queries the SSL information about an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(const Models::DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL information about an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeDBInstanceSSLRequest
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSL(const Models::DescribeDBInstanceSSLRequest &request);

      /**
       * @summary Queries the maximum performance of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeDBInstanceSupportMaxPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSupportMaxPerformanceResponse
       */
      Models::DescribeDBInstanceSupportMaxPerformanceResponse describeDBInstanceSupportMaxPerformanceWithOptions(const Models::DescribeDBInstanceSupportMaxPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum performance of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeDBInstanceSupportMaxPerformanceRequest
       * @return DescribeDBInstanceSupportMaxPerformanceResponse
       */
      Models::DescribeDBInstanceSupportMaxPerformanceResponse describeDBInstanceSupportMaxPerformance(const Models::DescribeDBInstanceSupportMaxPerformanceRequest &request);

      /**
       * @summary Queries a list of AnalyticDB for PostgreSQL instances.
       *
       * @description ##
       * You can call this operation to query the instance types, network types, and states of AnalyticDB for PostgreSQL instances within a region.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AnalyticDB for PostgreSQL instances.
       *
       * @description ##
       * You can call this operation to query the instance types, network types, and states of AnalyticDB for PostgreSQL instances within a region.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @summary Queries the information about resource groups.
       *
       * @param request DescribeDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBResourceGroupResponse
       */
      Models::DescribeDBResourceGroupResponse describeDBResourceGroupWithOptions(const Models::DescribeDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about resource groups.
       *
       * @param request DescribeDBResourceGroupRequest
       * @return DescribeDBResourceGroupResponse
       */
      Models::DescribeDBResourceGroupResponse describeDBResourceGroup(const Models::DescribeDBResourceGroupRequest &request);

      /**
       * @summary Queries the resource management mode of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeDBResourceManagementModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBResourceManagementModeResponse
       */
      Models::DescribeDBResourceManagementModeResponse describeDBResourceManagementModeWithOptions(const Models::DescribeDBResourceManagementModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource management mode of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeDBResourceManagementModeRequest
       * @return DescribeDBResourceManagementModeResponse
       */
      Models::DescribeDBResourceManagementModeResponse describeDBResourceManagementMode(const Models::DescribeDBResourceManagementModeRequest &request);

      /**
       * @summary Queries the information about minor versions of AnalyticDB for PostgreSQL instances.
       *
       * @param request DescribeDBVersionInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBVersionInfosResponse
       */
      Models::DescribeDBVersionInfosResponse describeDBVersionInfosWithOptions(const Models::DescribeDBVersionInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about minor versions of AnalyticDB for PostgreSQL instances.
       *
       * @param request DescribeDBVersionInfosRequest
       * @return DescribeDBVersionInfosResponse
       */
      Models::DescribeDBVersionInfosResponse describeDBVersionInfos(const Models::DescribeDBVersionInfosRequest &request);

      /**
       * @summary Queries a list of backup sets of full backup or point-in-time backup for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query a list of backup sets and backup details only for instances in elastic storage mode.
       *
       * @param request DescribeDataBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataBackupsResponse
       */
      Models::DescribeDataBackupsResponse describeDataBackupsWithOptions(const Models::DescribeDataBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backup sets of full backup or point-in-time backup for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query a list of backup sets and backup details only for instances in elastic storage mode.
       *
       * @param request DescribeDataBackupsRequest
       * @return DescribeDataBackupsResponse
       */
      Models::DescribeDataBackupsResponse describeDataBackups(const Models::DescribeDataBackupsRequest &request);

      /**
       * @summary Queries the data redistribution information about an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode.
       *
       * @param request DescribeDataReDistributeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataReDistributeInfoResponse
       */
      Models::DescribeDataReDistributeInfoResponse describeDataReDistributeInfoWithOptions(const Models::DescribeDataReDistributeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data redistribution information about an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode.
       *
       * @param request DescribeDataReDistributeInfoRequest
       * @return DescribeDataReDistributeInfoResponse
       */
      Models::DescribeDataReDistributeInfoResponse describeDataReDistributeInfo(const Models::DescribeDataReDistributeInfoRequest &request);

      /**
       * @summary Queries the state of data sharing for AnalyticDB for PostgreSQL instances.
       *
       * @description Data sharing is supported only for instances in Serverless mode.
       *
       * @param request DescribeDataShareInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataShareInstancesResponse
       */
      Models::DescribeDataShareInstancesResponse describeDataShareInstancesWithOptions(const Models::DescribeDataShareInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the state of data sharing for AnalyticDB for PostgreSQL instances.
       *
       * @description Data sharing is supported only for instances in Serverless mode.
       *
       * @param request DescribeDataShareInstancesRequest
       * @return DescribeDataShareInstancesResponse
       */
      Models::DescribeDataShareInstancesResponse describeDataShareInstances(const Models::DescribeDataShareInstancesRequest &request);

      /**
       * @summary Queries the information about data sharing performance metrics.
       *
       * @description You can call this operation to query the details of data sharing performance metrics for an AnalyticDB for PostgreSQL instance in Serverless mode, such as the number of shared topics and the amount of data shared.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDataSharePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataSharePerformanceResponse
       */
      Models::DescribeDataSharePerformanceResponse describeDataSharePerformanceWithOptions(const Models::DescribeDataSharePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about data sharing performance metrics.
       *
       * @description You can call this operation to query the details of data sharing performance metrics for an AnalyticDB for PostgreSQL instance in Serverless mode, such as the number of shared topics and the amount of data shared.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDataSharePerformanceRequest
       * @return DescribeDataSharePerformanceResponse
       */
      Models::DescribeDataSharePerformanceResponse describeDataSharePerformance(const Models::DescribeDataSharePerformanceRequest &request);

      /**
       * @summary Queries all databases and database accounts for an AnalyticDB for PostgreSQL instance.
       *
       * @description To facilitate management, you can call this operation to query all databases and database accounts on an AnalyticDB for PostgreSQL instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDiagnosisDimensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisDimensionsResponse
       */
      Models::DescribeDiagnosisDimensionsResponse describeDiagnosisDimensionsWithOptions(const Models::DescribeDiagnosisDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all databases and database accounts for an AnalyticDB for PostgreSQL instance.
       *
       * @description To facilitate management, you can call this operation to query all databases and database accounts on an AnalyticDB for PostgreSQL instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDiagnosisDimensionsRequest
       * @return DescribeDiagnosisDimensionsResponse
       */
      Models::DescribeDiagnosisDimensionsResponse describeDiagnosisDimensions(const Models::DescribeDiagnosisDimensionsRequest &request);

      /**
       * @summary Queries the details of query execution on an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of query execution on an AnalyticDB for PostgreSQL instance in elastic storage mode within a specified time range.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDiagnosisMonitorPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisMonitorPerformanceResponse
       */
      Models::DescribeDiagnosisMonitorPerformanceResponse describeDiagnosisMonitorPerformanceWithOptions(const Models::DescribeDiagnosisMonitorPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of query execution on an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of query execution on an AnalyticDB for PostgreSQL instance in elastic storage mode within a specified time range.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDiagnosisMonitorPerformanceRequest
       * @return DescribeDiagnosisMonitorPerformanceResponse
       */
      Models::DescribeDiagnosisMonitorPerformanceResponse describeDiagnosisMonitorPerformance(const Models::DescribeDiagnosisMonitorPerformanceRequest &request);

      /**
       * @summary Queries the information about SQL queries for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of SQL queries on an AnalyticDB for PostgreSQL instance within a specified time range.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDiagnosisRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisRecordsResponse
       */
      Models::DescribeDiagnosisRecordsResponse describeDiagnosisRecordsWithOptions(const Models::DescribeDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about SQL queries for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of SQL queries on an AnalyticDB for PostgreSQL instance within a specified time range.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeDiagnosisRecordsRequest
       * @return DescribeDiagnosisRecordsResponse
       */
      Models::DescribeDiagnosisRecordsResponse describeDiagnosisRecords(const Models::DescribeDiagnosisRecordsRequest &request);

      /**
       * @summary Queries the information about a query for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the information about a query for an AnalyticDB for PostgreSQL instance, including the SQL statement, execution plan text, and execution plan tree.
       * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       *
       * @param request DescribeDiagnosisSQLInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiagnosisSQLInfoResponse
       */
      Models::DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfoWithOptions(const Models::DescribeDiagnosisSQLInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a query for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the information about a query for an AnalyticDB for PostgreSQL instance, including the SQL statement, execution plan text, and execution plan tree.
       * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       *
       * @param request DescribeDiagnosisSQLInfoRequest
       * @return DescribeDiagnosisSQLInfoResponse
       */
      Models::DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfo(const Models::DescribeDiagnosisSQLInfoRequest &request);

      /**
       * @summary Get Document Details
       *
       * @param request DescribeDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocumentResponse
       */
      Models::DescribeDocumentResponse describeDocumentWithOptions(const Models::DescribeDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Document Details
       *
       * @param request DescribeDocumentRequest
       * @return DescribeDocumentResponse
       */
      Models::DescribeDocumentResponse describeDocument(const Models::DescribeDocumentRequest &request);

      /**
       * @summary Queries the download records of query diagnostic information for an AnalyticDB for PostgreSQL instance.
       *
       * @description You must call the [DownloadDiagnosisRecords](https://help.aliyun.com/document_detail/447700.html) operation to download the query diagnostic information before you can call this operation to query the download records and download URLs.
       * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       *
       * @param request DescribeDownloadRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadRecordsResponse
       */
      Models::DescribeDownloadRecordsResponse describeDownloadRecordsWithOptions(const Models::DescribeDownloadRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download records of query diagnostic information for an AnalyticDB for PostgreSQL instance.
       *
       * @description You must call the [DownloadDiagnosisRecords](https://help.aliyun.com/document_detail/447700.html) operation to download the query diagnostic information before you can call this operation to query the download records and download URLs.
       * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       *
       * @param request DescribeDownloadRecordsRequest
       * @return DescribeDownloadRecordsResponse
       */
      Models::DescribeDownloadRecordsResponse describeDownloadRecords(const Models::DescribeDownloadRecordsRequest &request);

      /**
       * @summary Get download records
       *
       * @param request DescribeDownloadSQLLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadSQLLogsResponse
       */
      Models::DescribeDownloadSQLLogsResponse describeDownloadSQLLogsWithOptions(const Models::DescribeDownloadSQLLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get download records
       *
       * @param request DescribeDownloadSQLLogsRequest
       * @return DescribeDownloadSQLLogsResponse
       */
      Models::DescribeDownloadSQLLogsResponse describeDownloadSQLLogs(const Models::DescribeDownloadSQLLogsRequest &request);

      /**
       * @summary Queries the information about an external data service.
       *
       * @param request DescribeExternalDataServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExternalDataServiceResponse
       */
      Models::DescribeExternalDataServiceResponse describeExternalDataServiceWithOptions(const Models::DescribeExternalDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an external data service.
       *
       * @param request DescribeExternalDataServiceRequest
       * @return DescribeExternalDataServiceResponse
       */
      Models::DescribeExternalDataServiceResponse describeExternalDataService(const Models::DescribeExternalDataServiceRequest &request);

      /**
       * @summary Queries E-MapReduce (EMR) Hadoop clusters in a specific virtual private cloud (VPC).
       *
       * @param request DescribeHadoopClustersInSameNetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHadoopClustersInSameNetResponse
       */
      Models::DescribeHadoopClustersInSameNetResponse describeHadoopClustersInSameNetWithOptions(const Models::DescribeHadoopClustersInSameNetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries E-MapReduce (EMR) Hadoop clusters in a specific virtual private cloud (VPC).
       *
       * @param request DescribeHadoopClustersInSameNetRequest
       * @return DescribeHadoopClustersInSameNetResponse
       */
      Models::DescribeHadoopClustersInSameNetResponse describeHadoopClustersInSameNet(const Models::DescribeHadoopClustersInSameNetRequest &request);

      /**
       * @summary Queries the configuration information about a Hadoop cluster.
       *
       * @param request DescribeHadoopConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHadoopConfigsResponse
       */
      Models::DescribeHadoopConfigsResponse describeHadoopConfigsWithOptions(const Models::DescribeHadoopConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information about a Hadoop cluster.
       *
       * @param request DescribeHadoopConfigsRequest
       * @return DescribeHadoopConfigsResponse
       */
      Models::DescribeHadoopConfigsResponse describeHadoopConfigs(const Models::DescribeHadoopConfigsRequest &request);

      /**
       * @summary Obtains the configurations of a Hadoop data source.
       *
       * @param request DescribeHadoopDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHadoopDataSourceResponse
       */
      Models::DescribeHadoopDataSourceResponse describeHadoopDataSourceWithOptions(const Models::DescribeHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the configurations of a Hadoop data source.
       *
       * @param request DescribeHadoopDataSourceRequest
       * @return DescribeHadoopDataSourceResponse
       */
      Models::DescribeHadoopDataSourceResponse describeHadoopDataSource(const Models::DescribeHadoopDataSourceRequest &request);

      /**
       * @summary Queries the health status of an AnalyticDB for PostgreSQL instance and its nodes.
       *
       * @description This operation is called to query the health status of an AnalyticDB for PostgreSQL instance in elastic storage mode or Serverless mode and its coordinator and compute nodes.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHealthStatusResponse
       */
      Models::DescribeHealthStatusResponse describeHealthStatusWithOptions(const Models::DescribeHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health status of an AnalyticDB for PostgreSQL instance and its nodes.
       *
       * @description This operation is called to query the health status of an AnalyticDB for PostgreSQL instance in elastic storage mode or Serverless mode and its coordinator and compute nodes.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeHealthStatusRequest
       * @return DescribeHealthStatusResponse
       */
      Models::DescribeHealthStatusResponse describeHealthStatus(const Models::DescribeHealthStatusRequest &request);

      /**
       * @summary Queries the information about real-time materialized views of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeIMVInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIMVInfosResponse
       */
      Models::DescribeIMVInfosResponse describeIMVInfosWithOptions(const Models::DescribeIMVInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about real-time materialized views of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeIMVInfosRequest
       * @return DescribeIMVInfosResponse
       */
      Models::DescribeIMVInfosResponse describeIMVInfos(const Models::DescribeIMVInfosRequest &request);

      /**
       * @summary 获取索引详情
       *
       * @param request DescribeIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIndexResponse
       */
      Models::DescribeIndexResponse describeIndexWithOptions(const Models::DescribeIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取索引详情
       *
       * @param request DescribeIndexRequest
       * @return DescribeIndexResponse
       */
      Models::DescribeIndexResponse describeIndex(const Models::DescribeIndexRequest &request);

      /**
       * @summary Queries the configurations of a Java Database Connectivity (JDBC) data source.
       *
       * @param request DescribeJDBCDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJDBCDataSourceResponse
       */
      Models::DescribeJDBCDataSourceResponse describeJDBCDataSourceWithOptions(const Models::DescribeJDBCDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a Java Database Connectivity (JDBC) data source.
       *
       * @param request DescribeJDBCDataSourceRequest
       * @return DescribeJDBCDataSourceResponse
       */
      Models::DescribeJDBCDataSourceResponse describeJDBCDataSource(const Models::DescribeJDBCDataSourceRequest &request);

      /**
       * @summary Queries a list of log backups.
       *
       * @param request DescribeLogBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogBackupsResponse
       */
      Models::DescribeLogBackupsResponse describeLogBackupsWithOptions(const Models::DescribeLogBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of log backups.
       *
       * @param request DescribeLogBackupsRequest
       * @return DescribeLogBackupsResponse
       */
      Models::DescribeLogBackupsResponse describeLogBackups(const Models::DescribeLogBackupsRequest &request);

      /**
       * @summary 查询模型服务
       *
       * @param request DescribeModelServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelServiceResponse
       */
      Models::DescribeModelServiceResponse describeModelServiceWithOptions(const Models::DescribeModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型服务
       *
       * @param request DescribeModelServiceRequest
       * @return DescribeModelServiceResponse
       */
      Models::DescribeModelServiceResponse describeModelService(const Models::DescribeModelServiceRequest &request);

      /**
       * @summary Queries the parameter modification logs of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeModifyParameterLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLogWithOptions(const Models::DescribeModifyParameterLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter modification logs of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeModifyParameterLogRequest
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLog(const Models::DescribeModifyParameterLogRequest &request);

      /**
       * @summary Queries the information about a namespace.
       *
       * @param request DescribeNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespaceResponse
       */
      Models::DescribeNamespaceResponse describeNamespaceWithOptions(const Models::DescribeNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a namespace.
       *
       * @param request DescribeNamespaceRequest
       * @return DescribeNamespaceResponse
       */
      Models::DescribeNamespaceResponse describeNamespace(const Models::DescribeNamespaceRequest &request);

      /**
       * @summary Queries the information about configuration parameters for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation can be called to query the details of parameters in an AnalyticDB for PostgreSQL instance in elastic storage mode or Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParametersWithOptions(const Models::DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about configuration parameters for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation can be called to query the details of parameters in an AnalyticDB for PostgreSQL instance in elastic storage mode or Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeParametersRequest
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParameters(const Models::DescribeParametersRequest &request);

      /**
       * @summary Queries a list of vSwitches.
       *
       * @description When you create AnalyticDB for PostgreSQL instances, you can call this operation to query the details of vSwitches within a specified region or zone.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeRdsVSwitchsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVSwitchsResponse
       */
      Models::DescribeRdsVSwitchsResponse describeRdsVSwitchsWithOptions(const Models::DescribeRdsVSwitchsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of vSwitches.
       *
       * @description When you create AnalyticDB for PostgreSQL instances, you can call this operation to query the details of vSwitches within a specified region or zone.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeRdsVSwitchsRequest
       * @return DescribeRdsVSwitchsResponse
       */
      Models::DescribeRdsVSwitchsResponse describeRdsVSwitchs(const Models::DescribeRdsVSwitchsRequest &request);

      /**
       * @summary Queries a list of VPCs.
       *
       * @description When you create an AnalyticDB for PostgreSQL instance, you can call this operation to query the available VPCs within a specified region or zone.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeRdsVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcsWithOptions(const Models::DescribeRdsVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of VPCs.
       *
       * @description When you create an AnalyticDB for PostgreSQL instance, you can call this operation to query the available VPCs within a specified region or zone.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeRdsVpcsRequest
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcs(const Models::DescribeRdsVpcsRequest &request);

      /**
       * @summary Queries a list of regions and zones where AnalyticDB for PostgreSQL is available.
       *
       * @description Before you create an AnalyticDB for PostgreSQL instance, you must call this operation to query available regions and zones.
       * ## Limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of regions and zones where AnalyticDB for PostgreSQL is available.
       *
       * @description Before you create an AnalyticDB for PostgreSQL instance, you must call this operation to query available regions and zones.
       * ## Limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries a list of roles.
       *
       * @param request DescribeRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRolesResponse
       */
      Models::DescribeRolesResponse describeRolesWithOptions(const Models::DescribeRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of roles.
       *
       * @param request DescribeRolesRequest
       * @return DescribeRolesResponse
       */
      Models::DescribeRolesResponse describeRoles(const Models::DescribeRolesRequest &request);

      /**
       * @summary Queries the number of audit logs for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is not available for instances in reserved storage mode.
       *
       * @param request DescribeSQLLogCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogCountResponse
       */
      Models::DescribeSQLLogCountResponse describeSQLLogCountWithOptions(const Models::DescribeSQLLogCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of audit logs for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is not available for instances in reserved storage mode.
       *
       * @param request DescribeSQLLogCountRequest
       * @return DescribeSQLLogCountResponse
       */
      Models::DescribeSQLLogCountResponse describeSQLLogCount(const Models::DescribeSQLLogCountRequest &request);

      /**
       * @summary Queries the SQL execution logs of an AnalyticDB for PostgreSQL instance.
       *
       * @description > This operation is no longer used. To query SQL execution logs, call the [DescribeSQLLogsV2](https://help.aliyun.com/document_detail/453722.html) operation.
       *
       * @param request DescribeSQLLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogsResponse
       */
      Models::DescribeSQLLogsResponse describeSQLLogsWithOptions(const Models::DescribeSQLLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SQL execution logs of an AnalyticDB for PostgreSQL instance.
       *
       * @description > This operation is no longer used. To query SQL execution logs, call the [DescribeSQLLogsV2](https://help.aliyun.com/document_detail/453722.html) operation.
       *
       * @param request DescribeSQLLogsRequest
       * @return DescribeSQLLogsResponse
       */
      Models::DescribeSQLLogsResponse describeSQLLogs(const Models::DescribeSQLLogsRequest &request);

      /**
       * @summary Queries SQL logs within a specific time range.
       *
       * @description You can call this operation to query SQL logs of an AnalyticDB for PostgreSQL instance within a specific time range.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSQLLogsV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogsV2Response
       */
      Models::DescribeSQLLogsV2Response describeSQLLogsV2WithOptions(const Models::DescribeSQLLogsV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries SQL logs within a specific time range.
       *
       * @description You can call this operation to query SQL logs of an AnalyticDB for PostgreSQL instance within a specific time range.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSQLLogsV2Request
       * @return DescribeSQLLogsV2Response
       */
      Models::DescribeSQLLogsV2Response describeSQLLogsV2(const Models::DescribeSQLLogsV2Request &request);

      /**
       * @summary Queries whether a sample dataset is loaded to an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSampleDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleDataResponse
       */
      Models::DescribeSampleDataResponse describeSampleDataWithOptions(const Models::DescribeSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a sample dataset is loaded to an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeSampleDataRequest
       * @return DescribeSampleDataResponse
       */
      Models::DescribeSampleDataResponse describeSampleData(const Models::DescribeSampleDataRequest &request);

      /**
       * @summary Queries a real-time data service.
       *
       * @param request DescribeStreamingDataServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamingDataServiceResponse
       */
      Models::DescribeStreamingDataServiceResponse describeStreamingDataServiceWithOptions(const Models::DescribeStreamingDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a real-time data service.
       *
       * @param request DescribeStreamingDataServiceRequest
       * @return DescribeStreamingDataServiceResponse
       */
      Models::DescribeStreamingDataServiceResponse describeStreamingDataService(const Models::DescribeStreamingDataServiceRequest &request);

      /**
       * @summary Get external data source configuration information
       *
       * @param request DescribeStreamingDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamingDataSourceResponse
       */
      Models::DescribeStreamingDataSourceResponse describeStreamingDataSourceWithOptions(const Models::DescribeStreamingDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get external data source configuration information
       *
       * @param request DescribeStreamingDataSourceRequest
       * @return DescribeStreamingDataSourceResponse
       */
      Models::DescribeStreamingDataSourceResponse describeStreamingDataSource(const Models::DescribeStreamingDataSourceRequest &request);

      /**
       * @summary Delete External Data Source Configuration
       *
       * @param request DescribeStreamingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamingJobResponse
       */
      Models::DescribeStreamingJobResponse describeStreamingJobWithOptions(const Models::DescribeStreamingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete External Data Source Configuration
       *
       * @param request DescribeStreamingJobRequest
       * @return DescribeStreamingJobResponse
       */
      Models::DescribeStreamingJobResponse describeStreamingJob(const Models::DescribeStreamingJobRequest &request);

      /**
       * @summary Queries the features that are supported by an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeSupportFeaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportFeaturesResponse
       */
      Models::DescribeSupportFeaturesResponse describeSupportFeaturesWithOptions(const Models::DescribeSupportFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the features that are supported by an AnalyticDB for PostgreSQL instance.
       *
       * @param request DescribeSupportFeaturesRequest
       * @return DescribeSupportFeaturesResponse
       */
      Models::DescribeSupportFeaturesResponse describeSupportFeatures(const Models::DescribeSupportFeaturesRequest &request);

      /**
       * @summary Queries the information about a table.
       *
       * @param request DescribeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableResponse
       */
      Models::DescribeTableResponse describeTableWithOptions(const Models::DescribeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a table.
       *
       * @param request DescribeTableRequest
       * @return DescribeTableResponse
       */
      Models::DescribeTableResponse describeTable(const Models::DescribeTableRequest &request);

      /**
       * @summary Queries a list of tags for AnalyticDB for PostgreSQL instances.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags for AnalyticDB for PostgreSQL instances.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries a list of Key Management Service (KMS) keys.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(const Models::DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Key Management Service (KMS) keys.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(const Models::DescribeUserEncryptionKeyListRequest &request);

      /**
       * @summary Queries the information about a lock-waiting query for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of a lock-waiting query only for an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeWaitingSQLInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWaitingSQLInfoResponse
       */
      Models::DescribeWaitingSQLInfoResponse describeWaitingSQLInfoWithOptions(const Models::DescribeWaitingSQLInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a lock-waiting query for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the details of a lock-waiting query only for an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeWaitingSQLInfoRequest
       * @return DescribeWaitingSQLInfoResponse
       */
      Models::DescribeWaitingSQLInfoResponse describeWaitingSQLInfo(const Models::DescribeWaitingSQLInfoRequest &request);

      /**
       * @summary Queries the lock diagnostic records of an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the lock diagnostics records only for an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeWaitingSQLRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWaitingSQLRecordsResponse
       */
      Models::DescribeWaitingSQLRecordsResponse describeWaitingSQLRecordsWithOptions(const Models::DescribeWaitingSQLRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the lock diagnostic records of an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to query the lock diagnostics records only for an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeWaitingSQLRecordsRequest
       * @return DescribeWaitingSQLRecordsResponse
       */
      Models::DescribeWaitingSQLRecordsResponse describeWaitingSQLRecords(const Models::DescribeWaitingSQLRecordsRequest &request);

      /**
       * @summary Disables resource group management for an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode. After you disable resource group management, the resource management method of the instance switches from resource group management to resource queue management.
       *
       * @description *   You can call this operation only for AnalyticDB for PostgreSQL V6.0 instances in elastic storage mode whose minor version is V6.6.1.0 or later.
       * *   You can call this operation to disable resource group management only for AnalyticDB for PostgreSQL instances that are in the **Running** state.
       * *   **Note: When the resource management method is switched, your AnalyticDB for PostgreSQL instance restarts and becomes unavailable for approximately 5 minutes. To prevent your business from being affected, call this operation during off-peak hours.
       *
       * @param request DisableDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDBResourceGroupResponse
       */
      Models::DisableDBResourceGroupResponse disableDBResourceGroupWithOptions(const Models::DisableDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables resource group management for an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode. After you disable resource group management, the resource management method of the instance switches from resource group management to resource queue management.
       *
       * @description *   You can call this operation only for AnalyticDB for PostgreSQL V6.0 instances in elastic storage mode whose minor version is V6.6.1.0 or later.
       * *   You can call this operation to disable resource group management only for AnalyticDB for PostgreSQL instances that are in the **Running** state.
       * *   **Note: When the resource management method is switched, your AnalyticDB for PostgreSQL instance restarts and becomes unavailable for approximately 5 minutes. To prevent your business from being affected, call this operation during off-peak hours.
       *
       * @param request DisableDBResourceGroupRequest
       * @return DisableDBResourceGroupResponse
       */
      Models::DisableDBResourceGroupResponse disableDBResourceGroup(const Models::DisableDBResourceGroupRequest &request);

      /**
       * @summary Downloads the query diagnostic information of an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to download the query diagnostic information of an AnalyticDB for PostgreSQL instance. After the download is complete, you can call the [DescribeDownloadRecords](https://help.aliyun.com/document_detail/447712.html) operation to query download records and download URLs.
       * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For more information about how to view and update the minor engine version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DownloadDiagnosisRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadDiagnosisRecordsResponse
       */
      Models::DownloadDiagnosisRecordsResponse downloadDiagnosisRecordsWithOptions(const Models::DownloadDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads the query diagnostic information of an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to download the query diagnostic information of an AnalyticDB for PostgreSQL instance. After the download is complete, you can call the [DescribeDownloadRecords](https://help.aliyun.com/document_detail/447712.html) operation to query download records and download URLs.
       * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For more information about how to view and update the minor engine version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DownloadDiagnosisRecordsRequest
       * @return DownloadDiagnosisRecordsResponse
       */
      Models::DownloadDiagnosisRecordsResponse downloadDiagnosisRecords(const Models::DownloadDiagnosisRecordsRequest &request);

      /**
       * @summary Download the slow query logs of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DownloadSQLLogsRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadSQLLogsRecordsResponse
       */
      Models::DownloadSQLLogsRecordsResponse downloadSQLLogsRecordsWithOptions(const Models::DownloadSQLLogsRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Download the slow query logs of an AnalyticDB for PostgreSQL instance.
       *
       * @param request DownloadSQLLogsRecordsRequest
       * @return DownloadSQLLogsRecordsResponse
       */
      Models::DownloadSQLLogsRecordsResponse downloadSQLLogsRecords(const Models::DownloadSQLLogsRecordsRequest &request);

      /**
       * @summary 知识库开启构建知识图谱
       *
       * @param tmpReq EnableCollectionGraphRAGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCollectionGraphRAGResponse
       */
      Models::EnableCollectionGraphRAGResponse enableCollectionGraphRAGWithOptions(const Models::EnableCollectionGraphRAGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 知识库开启构建知识图谱
       *
       * @param request EnableCollectionGraphRAGRequest
       * @return EnableCollectionGraphRAGResponse
       */
      Models::EnableCollectionGraphRAGResponse enableCollectionGraphRAG(const Models::EnableCollectionGraphRAGRequest &request);

      /**
       * @summary Enables resource group management for an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode. After resource group management is enabled, the resource management mode of the instance is changed from resource queue to resource group.
       *
       * @description *   You can call this operation only for AnalyticDB for PostgreSQL V6.0 instances in elastic storage mode whose minor version is V6.6.1.0 or later.
       * *   You can call this operation to enable resource group management only for AnalyticDB for PostgreSQL instances that are in the **Running** state.
       * *   **Note: When the resource management mode is changed, your AnalyticDB for PostgreSQL instance is restarted and remains unavailable within 5 minutes. To prevent your business from being affected, call this operation during off-peak hours.
       *
       * @param request EnableDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDBResourceGroupResponse
       */
      Models::EnableDBResourceGroupResponse enableDBResourceGroupWithOptions(const Models::EnableDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables resource group management for an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode. After resource group management is enabled, the resource management mode of the instance is changed from resource queue to resource group.
       *
       * @description *   You can call this operation only for AnalyticDB for PostgreSQL V6.0 instances in elastic storage mode whose minor version is V6.6.1.0 or later.
       * *   You can call this operation to enable resource group management only for AnalyticDB for PostgreSQL instances that are in the **Running** state.
       * *   **Note: When the resource management mode is changed, your AnalyticDB for PostgreSQL instance is restarted and remains unavailable within 5 minutes. To prevent your business from being affected, call this operation during off-peak hours.
       *
       * @param request EnableDBResourceGroupRequest
       * @return EnableDBResourceGroupResponse
       */
      Models::EnableDBResourceGroupResponse enableDBResourceGroup(const Models::EnableDBResourceGroupRequest &request);

      /**
       * @summary Executes SQL statements.
       *
       * @param tmpReq ExecuteStatementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteStatementResponse
       */
      Models::ExecuteStatementResponse executeStatementWithOptions(const Models::ExecuteStatementRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes SQL statements.
       *
       * @param request ExecuteStatementRequest
       * @return ExecuteStatementResponse
       */
      Models::ExecuteStatementResponse executeStatement(const Models::ExecuteStatementRequest &request);

      /**
       * @summary 获取特定的账号信息
       *
       * @param request GetAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountResponse
       */
      Models::GetAccountResponse getAccountWithOptions(const Models::GetAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特定的账号信息
       *
       * @param request GetAccountRequest
       * @return GetAccountResponse
       */
      Models::GetAccountResponse getAccount(const Models::GetAccountRequest &request);

      /**
       * @summary 获取构建知识图谱任务
       *
       * @param request GetGraphRAGJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGraphRAGJobResponse
       */
      Models::GetGraphRAGJobResponse getGraphRAGJobWithOptions(const Models::GetGraphRAGJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取构建知识图谱任务
       *
       * @param request GetGraphRAGJobRequest
       * @return GetGraphRAGJobResponse
       */
      Models::GetGraphRAGJobResponse getGraphRAGJob(const Models::GetGraphRAGJobRequest &request);

      /**
       * @summary Queries the information about an access credential.
       *
       * @param request GetSecretValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretValueResponse
       */
      Models::GetSecretValueResponse getSecretValueWithOptions(const Models::GetSecretValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an access credential.
       *
       * @param request GetSecretValueRequest
       * @return GetSecretValueResponse
       */
      Models::GetSecretValueResponse getSecretValue(const Models::GetSecretValueRequest &request);

      /**
       * @summary Get Asynchronous SQL Execution Result
       *
       * @param request GetStatementResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStatementResultResponse
       */
      Models::GetStatementResultResponse getStatementResultWithOptions(const Models::GetStatementResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Asynchronous SQL Execution Result
       *
       * @param request GetStatementResultRequest
       * @return GetStatementResultResponse
       */
      Models::GetStatementResultResponse getStatementResult(const Models::GetStatementResultRequest &request);

      /**
       * @summary 查询Supabase实例详情
       *
       * @param request GetSupabaseProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupabaseProjectResponse
       */
      Models::GetSupabaseProjectResponse getSupabaseProjectWithOptions(const Models::GetSupabaseProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Supabase实例详情
       *
       * @param request GetSupabaseProjectRequest
       * @return GetSupabaseProjectResponse
       */
      Models::GetSupabaseProjectResponse getSupabaseProject(const Models::GetSupabaseProjectRequest &request);

      /**
       * @summary 查询Supabase实例 API Keys
       *
       * @param request GetSupabaseProjectApiKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupabaseProjectApiKeysResponse
       */
      Models::GetSupabaseProjectApiKeysResponse getSupabaseProjectApiKeysWithOptions(const Models::GetSupabaseProjectApiKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Supabase实例 API Keys
       *
       * @param request GetSupabaseProjectApiKeysRequest
       * @return GetSupabaseProjectApiKeysResponse
       */
      Models::GetSupabaseProjectApiKeysResponse getSupabaseProjectApiKeys(const Models::GetSupabaseProjectApiKeysRequest &request);

      /**
       * @summary 查询Supabase项目dashboard账号信息
       *
       * @param request GetSupabaseProjectDashboardAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSupabaseProjectDashboardAccountResponse
       */
      Models::GetSupabaseProjectDashboardAccountResponse getSupabaseProjectDashboardAccountWithOptions(const Models::GetSupabaseProjectDashboardAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Supabase项目dashboard账号信息
       *
       * @param request GetSupabaseProjectDashboardAccountRequest
       * @return GetSupabaseProjectDashboardAccountResponse
       */
      Models::GetSupabaseProjectDashboardAccountResponse getSupabaseProjectDashboardAccount(const Models::GetSupabaseProjectDashboardAccountRequest &request);

      /**
       * @summary Queries the progress and result of an asynchronous document upload job based on the job ID.
       *
       * @description This operation is related to the UploadDocumentAsync operation. You can call the UploadDocumentAsync operation to create an upload job and obtain the job ID, and then call the GetUploadDocumentJob operation to query the execution information of the job.
       * >  Suggestions:
       * *   Determine whether the document upload job times out based on the document complexity and the number of tokens after chunking. In most cases, a job that lasts more than 2 hours is considered timeout.
       *
       * @param request GetUploadDocumentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadDocumentJobResponse
       */
      Models::GetUploadDocumentJobResponse getUploadDocumentJobWithOptions(const Models::GetUploadDocumentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress and result of an asynchronous document upload job based on the job ID.
       *
       * @description This operation is related to the UploadDocumentAsync operation. You can call the UploadDocumentAsync operation to create an upload job and obtain the job ID, and then call the GetUploadDocumentJob operation to query the execution information of the job.
       * >  Suggestions:
       * *   Determine whether the document upload job times out based on the document complexity and the number of tokens after chunking. In most cases, a job that lasts more than 2 hours is considered timeout.
       *
       * @param request GetUploadDocumentJobRequest
       * @return GetUploadDocumentJobResponse
       */
      Models::GetUploadDocumentJobResponse getUploadDocumentJob(const Models::GetUploadDocumentJobRequest &request);

      /**
       * @summary Queries the progress and result of an asynchronous vector data upload job by using a job ID.
       *
       * @description This operation is related to the `UpsertCollectionDataAsync` operation. You can call the `UpsertCollectionDataAsync` operation to create an upload job and obtain a job ID, and then call the GetUpsertCollectionDataJob operation to query the execution information of the job.
       * >  We recommend that you evaluate the amount of time required for the upload job based on 1,000 data entries every second, and then query the job progress every 5 seconds. The timeout period can be set to 30 minutes after the evaluated amount of time.
       *
       * @param request GetUpsertCollectionDataJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUpsertCollectionDataJobResponse
       */
      Models::GetUpsertCollectionDataJobResponse getUpsertCollectionDataJobWithOptions(const Models::GetUpsertCollectionDataJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress and result of an asynchronous vector data upload job by using a job ID.
       *
       * @description This operation is related to the `UpsertCollectionDataAsync` operation. You can call the `UpsertCollectionDataAsync` operation to create an upload job and obtain a job ID, and then call the GetUpsertCollectionDataJob operation to query the execution information of the job.
       * >  We recommend that you evaluate the amount of time required for the upload job based on 1,000 data entries every second, and then query the job progress every 5 seconds. The timeout period can be set to 30 minutes after the evaluated amount of time.
       *
       * @param request GetUpsertCollectionDataJobRequest
       * @return GetUpsertCollectionDataJobResponse
       */
      Models::GetUpsertCollectionDataJobResponse getUpsertCollectionDataJob(const Models::GetUpsertCollectionDataJobRequest &request);

      /**
       * @summary Grants vector collection permissions to a namespace.
       *
       * @param request GrantCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantCollectionResponse
       */
      Models::GrantCollectionResponse grantCollectionWithOptions(const Models::GrantCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants vector collection permissions to a namespace.
       *
       * @param request GrantCollectionRequest
       * @return GrantCollectionResponse
       */
      Models::GrantCollectionResponse grantCollection(const Models::GrantCollectionRequest &request);

      /**
       * @summary Processes active queries.
       *
       * @param request HandleActiveSQLRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleActiveSQLRecordResponse
       */
      Models::HandleActiveSQLRecordResponse handleActiveSQLRecordWithOptions(const Models::HandleActiveSQLRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Processes active queries.
       *
       * @param request HandleActiveSQLRecordRequest
       * @return HandleActiveSQLRecordResponse
       */
      Models::HandleActiveSQLRecordResponse handleActiveSQLRecord(const Models::HandleActiveSQLRecordRequest &request);

      /**
       * @summary Initializes vector databases.
       *
       * @param request InitVectorDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitVectorDatabaseResponse
       */
      Models::InitVectorDatabaseResponse initVectorDatabaseWithOptions(const Models::InitVectorDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes vector databases.
       *
       * @param request InitVectorDatabaseRequest
       * @return InitVectorDatabaseResponse
       */
      Models::InitVectorDatabaseResponse initVectorDatabase(const Models::InitVectorDatabaseRequest &request);

      /**
       * @summary 列举AI节点池
       *
       * @param request ListAINodePoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAINodePoolsResponse
       */
      Models::ListAINodePoolsResponse listAINodePoolsWithOptions(const Models::ListAINodePoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举AI节点池
       *
       * @param request ListAINodePoolsRequest
       * @return ListAINodePoolsResponse
       */
      Models::ListAINodePoolsResponse listAINodePools(const Models::ListAINodePoolsRequest &request);

      /**
       * @summary 获取备份任务列表
       *
       * @param request ListBackupJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackupJobsResponse
       */
      Models::ListBackupJobsResponse listBackupJobsWithOptions(const Models::ListBackupJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取备份任务列表
       *
       * @param request ListBackupJobsRequest
       * @return ListBackupJobsResponse
       */
      Models::ListBackupJobsResponse listBackupJobs(const Models::ListBackupJobsRequest &request);

      /**
       * @summary Queries a list of vector collections.
       *
       * @param request ListCollectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCollectionsResponse
       */
      Models::ListCollectionsResponse listCollectionsWithOptions(const Models::ListCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of vector collections.
       *
       * @param request ListCollectionsRequest
       * @return ListCollectionsResponse
       */
      Models::ListCollectionsResponse listCollections(const Models::ListCollectionsRequest &request);

      /**
       * @summary Queries a list of databases.
       *
       * @param request ListDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const Models::ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases.
       *
       * @param request ListDatabasesRequest
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const Models::ListDatabasesRequest &request);

      /**
       * @summary Queries a list of document collections.
       *
       * @param request ListDocumentCollectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocumentCollectionsResponse
       */
      Models::ListDocumentCollectionsResponse listDocumentCollectionsWithOptions(const Models::ListDocumentCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of document collections.
       *
       * @param request ListDocumentCollectionsRequest
       * @return ListDocumentCollectionsResponse
       */
      Models::ListDocumentCollectionsResponse listDocumentCollections(const Models::ListDocumentCollectionsRequest &request);

      /**
       * @summary Queries a list of documents in a collection.
       *
       * @param request ListDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocumentsResponse
       */
      Models::ListDocumentsResponse listDocumentsWithOptions(const Models::ListDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of documents in a collection.
       *
       * @param request ListDocumentsRequest
       * @return ListDocumentsResponse
       */
      Models::ListDocumentsResponse listDocuments(const Models::ListDocumentsRequest &request);

      /**
       * @summary Queries a list of external data services.
       *
       * @param request ListExternalDataServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExternalDataServicesResponse
       */
      Models::ListExternalDataServicesResponse listExternalDataServicesWithOptions(const Models::ListExternalDataServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of external data services.
       *
       * @param request ListExternalDataServicesRequest
       * @return ListExternalDataServicesResponse
       */
      Models::ListExternalDataServicesResponse listExternalDataServices(const Models::ListExternalDataServicesRequest &request);

      /**
       * @summary 获取实例外表配置列表
       *
       * @param request ListExternalDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExternalDataSourcesResponse
       */
      Models::ListExternalDataSourcesResponse listExternalDataSourcesWithOptions(const Models::ListExternalDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例外表配置列表
       *
       * @param request ListExternalDataSourcesRequest
       * @return ListExternalDataSourcesResponse
       */
      Models::ListExternalDataSourcesResponse listExternalDataSources(const Models::ListExternalDataSourcesRequest &request);

      /**
       * @summary 获取索引列表
       *
       * @param request ListIndicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndicesResponse
       */
      Models::ListIndicesResponse listIndicesWithOptions(const Models::ListIndicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取索引列表
       *
       * @param request ListIndicesRequest
       * @return ListIndicesResponse
       */
      Models::ListIndicesResponse listIndices(const Models::ListIndicesRequest &request);

      /**
       * @summary Queries a list of extensions.
       *
       * @param request ListInstanceExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceExtensionsResponse
       */
      Models::ListInstanceExtensionsResponse listInstanceExtensionsWithOptions(const Models::ListInstanceExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of extensions.
       *
       * @param request ListInstanceExtensionsRequest
       * @return ListInstanceExtensionsResponse
       */
      Models::ListInstanceExtensionsResponse listInstanceExtensions(const Models::ListInstanceExtensionsRequest &request);

      /**
       * @summary 查询模型服务
       *
       * @param request ListModelServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelServicesResponse
       */
      Models::ListModelServicesResponse listModelServicesWithOptions(const Models::ListModelServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型服务
       *
       * @param request ListModelServicesRequest
       * @return ListModelServicesResponse
       */
      Models::ListModelServicesResponse listModelServices(const Models::ListModelServicesRequest &request);

      /**
       * @summary Queries a list of namespaces.
       *
       * @param request ListNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespacesWithOptions(const Models::ListNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of namespaces.
       *
       * @param request ListNamespacesRequest
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespaces(const Models::ListNamespacesRequest &request);

      /**
       * @summary Get Homogeneous Data Source
       *
       * @param request ListRemoteADBDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemoteADBDataSourcesResponse
       */
      Models::ListRemoteADBDataSourcesResponse listRemoteADBDataSourcesWithOptions(const Models::ListRemoteADBDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Homogeneous Data Source
       *
       * @param request ListRemoteADBDataSourcesRequest
       * @return ListRemoteADBDataSourcesResponse
       */
      Models::ListRemoteADBDataSourcesResponse listRemoteADBDataSources(const Models::ListRemoteADBDataSourcesRequest &request);

      /**
       * @summary Queries a list of schemas.
       *
       * @param request ListSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemasWithOptions(const Models::ListSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of schemas.
       *
       * @param request ListSchemasRequest
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemas(const Models::ListSchemasRequest &request);

      /**
       * @summary Queries a list of access credentials.
       *
       * @param request ListSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecretsWithOptions(const Models::ListSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of access credentials.
       *
       * @param request ListSecretsRequest
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecrets(const Models::ListSecretsRequest &request);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param request ListStreamingDataServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStreamingDataServicesResponse
       */
      Models::ListStreamingDataServicesResponse listStreamingDataServicesWithOptions(const Models::ListStreamingDataServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param request ListStreamingDataServicesRequest
       * @return ListStreamingDataServicesResponse
       */
      Models::ListStreamingDataServicesResponse listStreamingDataServices(const Models::ListStreamingDataServicesRequest &request);

      /**
       * @summary Queries real-time service data sources.
       *
       * @param request ListStreamingDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStreamingDataSourcesResponse
       */
      Models::ListStreamingDataSourcesResponse listStreamingDataSourcesWithOptions(const Models::ListStreamingDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries real-time service data sources.
       *
       * @param request ListStreamingDataSourcesRequest
       * @return ListStreamingDataSourcesResponse
       */
      Models::ListStreamingDataSourcesResponse listStreamingDataSources(const Models::ListStreamingDataSourcesRequest &request);

      /**
       * @summary Queries real-time data synchronization jobs.
       *
       * @param request ListStreamingJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStreamingJobsResponse
       */
      Models::ListStreamingJobsResponse listStreamingJobsWithOptions(const Models::ListStreamingJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries real-time data synchronization jobs.
       *
       * @param request ListStreamingJobsRequest
       * @return ListStreamingJobsResponse
       */
      Models::ListStreamingJobsResponse listStreamingJobs(const Models::ListStreamingJobsRequest &request);

      /**
       * @summary 查询Supabase实例列表
       *
       * @param request ListSupabaseProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupabaseProjectsResponse
       */
      Models::ListSupabaseProjectsResponse listSupabaseProjectsWithOptions(const Models::ListSupabaseProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Supabase实例列表
       *
       * @param request ListSupabaseProjectsRequest
       * @return ListSupabaseProjectsResponse
       */
      Models::ListSupabaseProjectsResponse listSupabaseProjects(const Models::ListSupabaseProjectsRequest &request);

      /**
       * @summary 获取支持的模型列表
       *
       * @param request ListSupportModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupportModelsResponse
       */
      Models::ListSupportModelsResponse listSupportModelsWithOptions(const Models::ListSupportModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取支持的模型列表
       *
       * @param request ListSupportModelsRequest
       * @return ListSupportModelsResponse
       */
      Models::ListSupportModelsResponse listSupportModels(const Models::ListSupportModelsRequest &request);

      /**
       * @summary Queries a list of tables in a database.
       *
       * @param request ListTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const Models::ListTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tables in a database.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const Models::ListTablesRequest &request);

      /**
       * @summary Queries a list of tags that are added to AnalyticDB for PostgreSQL instances.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags that are added to AnalyticDB for PostgreSQL instances.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the description of a database account for an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account for an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Configures the backup policy of an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the backup policy of an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary 更新Collection
       *
       * @param request ModifyCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCollectionResponse
       */
      Models::ModifyCollectionResponse modifyCollectionWithOptions(const Models::ModifyCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Collection
       *
       * @param request ModifyCollectionRequest
       * @return ModifyCollectionResponse
       */
      Models::ModifyCollectionResponse modifyCollection(const Models::ModifyCollectionRequest &request);

      /**
       * @summary Changes the threshold of computing resources and the wait period of idle resources for an AnalyticDB for PostgreSQL instance in Serverless automatic scheduling mode.
       *
       * @param request ModifyDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(const Models::ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the threshold of computing resources and the wait period of idle resources for an AnalyticDB for PostgreSQL instance in Serverless automatic scheduling mode.
       *
       * @param request ModifyDBInstanceConfigRequest
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfig(const Models::ModifyDBInstanceConfigRequest &request);

      /**
       * @summary Changes the endpoint of an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the endpoint of an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary 修改实例部署模式
       *
       * @param request ModifyDBInstanceDeploymentModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDeploymentModeResponse
       */
      Models::ModifyDBInstanceDeploymentModeResponse modifyDBInstanceDeploymentModeWithOptions(const Models::ModifyDBInstanceDeploymentModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例部署模式
       *
       * @param request ModifyDBInstanceDeploymentModeRequest
       * @return ModifyDBInstanceDeploymentModeResponse
       */
      Models::ModifyDBInstanceDeploymentModeResponse modifyDBInstanceDeploymentMode(const Models::ModifyDBInstanceDeploymentModeRequest &request);

      /**
       * @summary Changes the description of an AnalyticDB for PostgreSQL instance.
       *
       * @description To make it easy to identify AnalyticDB for PostgreSQL instances, you can call this operation to modify the description of instances.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(const Models::ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the description of an AnalyticDB for PostgreSQL instance.
       *
       * @description To make it easy to identify AnalyticDB for PostgreSQL instances, you can call this operation to modify the description of instances.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(const Models::ModifyDBInstanceDescriptionRequest &request);

      /**
       * @summary Modifies the maintenance window of an AnalyticDB for PostgreSQL instance.
       *
       * @description The system maintains AnalyticDB for PostgreSQL instances during the maintenance window that you specify. We recommend that you set the maintenance window to off-peak hours to minimize the impact on your business.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(const Models::ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of an AnalyticDB for PostgreSQL instance.
       *
       * @description The system maintains AnalyticDB for PostgreSQL instances during the maintenance window that you specify. We recommend that you set the maintenance window to off-peak hours to minimize the impact on your business.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(const Models::ModifyDBInstanceMaintainTimeRequest &request);

      /**
       * @summary Changes the network type of an AnalyticDB for PostgreSQL instance.
       *
       * @description ##
       * This operation is available only for AnalyticDB for PostgreSQL instances in reserved storage mode.
       * ## QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkTypeWithOptions(const Models::ModifyDBInstanceNetworkTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the network type of an AnalyticDB for PostgreSQL instance.
       *
       * @description ##
       * This operation is available only for AnalyticDB for PostgreSQL instances in reserved storage mode.
       * ## QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkType(const Models::ModifyDBInstanceNetworkTypeRequest &request);

      /**
       * @summary 包年包月/按量付费转换改造
       *
       * @param request ModifyDBInstancePayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstancePayTypeResponse
       */
      Models::ModifyDBInstancePayTypeResponse modifyDBInstancePayTypeWithOptions(const Models::ModifyDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 包年包月/按量付费转换改造
       *
       * @param request ModifyDBInstancePayTypeRequest
       * @return ModifyDBInstancePayTypeResponse
       */
      Models::ModifyDBInstancePayTypeResponse modifyDBInstancePayType(const Models::ModifyDBInstancePayTypeRequest &request);

      /**
       * @summary Moves an AnalyticDB for PostgreSQL instance to a resource group.
       *
       * @description Resource Management allows you to build an organizational structure for resources based on your business requirements. You can use resource directories, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
       *
       * @param request ModifyDBInstanceResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceResourceGroupResponse
       */
      Models::ModifyDBInstanceResourceGroupResponse modifyDBInstanceResourceGroupWithOptions(const Models::ModifyDBInstanceResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves an AnalyticDB for PostgreSQL instance to a resource group.
       *
       * @description Resource Management allows you to build an organizational structure for resources based on your business requirements. You can use resource directories, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
       *
       * @param request ModifyDBInstanceResourceGroupRequest
       * @return ModifyDBInstanceResourceGroupResponse
       */
      Models::ModifyDBInstanceResourceGroupResponse modifyDBInstanceResourceGroup(const Models::ModifyDBInstanceResourceGroupRequest &request);

      /**
       * @summary Enables, disables, or updates SSL encryption for an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSLWithOptions(const Models::ModifyDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables, disables, or updates SSL encryption for an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyDBInstanceSSLRequest
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSL(const Models::ModifyDBInstanceSSLRequest &request);

      /**
       * @summary Modifies the configurations of a resource group.
       *
       * @param tmpReq ModifyDBResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBResourceGroupResponse
       */
      Models::ModifyDBResourceGroupResponse modifyDBResourceGroupWithOptions(const Models::ModifyDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a resource group.
       *
       * @param request ModifyDBResourceGroupRequest
       * @return ModifyDBResourceGroupResponse
       */
      Models::ModifyDBResourceGroupResponse modifyDBResourceGroup(const Models::ModifyDBResourceGroupRequest &request);

      /**
       * @summary Modify External Data Service
       *
       * @param request ModifyExternalDataServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExternalDataServiceResponse
       */
      Models::ModifyExternalDataServiceResponse modifyExternalDataServiceWithOptions(const Models::ModifyExternalDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify External Data Service
       *
       * @param request ModifyExternalDataServiceRequest
       * @return ModifyExternalDataServiceResponse
       */
      Models::ModifyExternalDataServiceResponse modifyExternalDataService(const Models::ModifyExternalDataServiceRequest &request);

      /**
       * @summary Modifies the configurations of a Hadoop data source.
       *
       * @param request ModifyHadoopDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHadoopDataSourceResponse
       */
      Models::ModifyHadoopDataSourceResponse modifyHadoopDataSourceWithOptions(const Models::ModifyHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a Hadoop data source.
       *
       * @param request ModifyHadoopDataSourceRequest
       * @return ModifyHadoopDataSourceResponse
       */
      Models::ModifyHadoopDataSourceResponse modifyHadoopDataSource(const Models::ModifyHadoopDataSourceRequest &request);

      /**
       * @summary Modifies the configurations of a Java Database Connectivity (JDBC) data source.
       *
       * @param request ModifyJDBCDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyJDBCDataSourceResponse
       */
      Models::ModifyJDBCDataSourceResponse modifyJDBCDataSourceWithOptions(const Models::ModifyJDBCDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a Java Database Connectivity (JDBC) data source.
       *
       * @param request ModifyJDBCDataSourceRequest
       * @return ModifyJDBCDataSourceResponse
       */
      Models::ModifyJDBCDataSourceResponse modifyJDBCDataSource(const Models::ModifyJDBCDataSourceRequest &request);

      /**
       * @summary Changes the specifications of coordinator node resources for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is not available for instances in reserved storage mode.
       * Before you call this operation, make sure that you are familiar with the billing of AnalyticDB for PostgreSQL. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       *
       * @param request ModifyMasterSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMasterSpecResponse
       */
      Models::ModifyMasterSpecResponse modifyMasterSpecWithOptions(const Models::ModifyMasterSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the specifications of coordinator node resources for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is not available for instances in reserved storage mode.
       * Before you call this operation, make sure that you are familiar with the billing of AnalyticDB for PostgreSQL. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       *
       * @param request ModifyMasterSpecRequest
       * @return ModifyMasterSpecResponse
       */
      Models::ModifyMasterSpecResponse modifyMasterSpec(const Models::ModifyMasterSpecRequest &request);

      /**
       * @summary Modifies the configuration parameters of an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation can be called to modify parameters of an AnalyticDB for PostgreSQL instance in elastic storage mode or Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParametersResponse
       */
      Models::ModifyParametersResponse modifyParametersWithOptions(const Models::ModifyParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration parameters of an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation can be called to modify parameters of an AnalyticDB for PostgreSQL instance in elastic storage mode or Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyParametersRequest
       * @return ModifyParametersResponse
       */
      Models::ModifyParametersResponse modifyParameters(const Models::ModifyParametersRequest &request);

      /**
       * @summary Modify Homogeneous Data Source
       *
       * @param request ModifyRemoteADBDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRemoteADBDataSourceResponse
       */
      Models::ModifyRemoteADBDataSourceResponse modifyRemoteADBDataSourceWithOptions(const Models::ModifyRemoteADBDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Homogeneous Data Source
       *
       * @param request ModifyRemoteADBDataSourceRequest
       * @return ModifyRemoteADBDataSourceResponse
       */
      Models::ModifyRemoteADBDataSourceResponse modifyRemoteADBDataSource(const Models::ModifyRemoteADBDataSourceRequest &request);

      /**
       * @summary Enables or disables the SQL Explorer feature for an AnalyticDB for PostgreSQL instance.
       *
       * @description *   You can call this operation only for AnalyticDB for PostgreSQL instances in reserved storage mode.
       * *   You can call this operation only for AnalyticDB for PostgreSQL instances in Serverless automatic scheduling mode.
       *
       * @param request ModifySQLCollectorPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySQLCollectorPolicyResponse
       */
      Models::ModifySQLCollectorPolicyResponse modifySQLCollectorPolicyWithOptions(const Models::ModifySQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the SQL Explorer feature for an AnalyticDB for PostgreSQL instance.
       *
       * @description *   You can call this operation only for AnalyticDB for PostgreSQL instances in reserved storage mode.
       * *   You can call this operation only for AnalyticDB for PostgreSQL instances in Serverless automatic scheduling mode.
       *
       * @param request ModifySQLCollectorPolicyRequest
       * @return ModifySQLCollectorPolicyResponse
       */
      Models::ModifySQLCollectorPolicyResponse modifySQLCollectorPolicy(const Models::ModifySQLCollectorPolicyRequest &request);

      /**
       * @summary Modifies the IP address whitelist of an AnalyticDB for PostgreSQL instance.
       *
       * @description To ensure the security and stability of AnalyticDB for PostgreSQL instances, the system denies all external IP addresses to access AnalyticDB for PostgreSQL instances by default. Before you can use an AnalyticDB for PostgreSQL instance, you must add the IP address or CIDR block of your client to the IP address whitelist of the instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifySecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIpsWithOptions(const Models::ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist of an AnalyticDB for PostgreSQL instance.
       *
       * @description To ensure the security and stability of AnalyticDB for PostgreSQL instances, the system denies all external IP addresses to access AnalyticDB for PostgreSQL instances by default. Before you can use an AnalyticDB for PostgreSQL instance, you must add the IP address or CIDR block of your client to the IP address whitelist of the instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifySecurityIpsRequest
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIps(const Models::ModifySecurityIpsRequest &request);

      /**
       * @summary Modifies a real-time data service.
       *
       * @param request ModifyStreamingDataServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStreamingDataServiceResponse
       */
      Models::ModifyStreamingDataServiceResponse modifyStreamingDataServiceWithOptions(const Models::ModifyStreamingDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a real-time data service.
       *
       * @param request ModifyStreamingDataServiceRequest
       * @return ModifyStreamingDataServiceResponse
       */
      Models::ModifyStreamingDataServiceResponse modifyStreamingDataService(const Models::ModifyStreamingDataServiceRequest &request);

      /**
       * @summary Modifies a real-time service data source.
       *
       * @param request ModifyStreamingDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStreamingDataSourceResponse
       */
      Models::ModifyStreamingDataSourceResponse modifyStreamingDataSourceWithOptions(const Models::ModifyStreamingDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a real-time service data source.
       *
       * @param request ModifyStreamingDataSourceRequest
       * @return ModifyStreamingDataSourceResponse
       */
      Models::ModifyStreamingDataSourceResponse modifyStreamingDataSource(const Models::ModifyStreamingDataSourceRequest &request);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param tmpReq ModifyStreamingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStreamingJobResponse
       */
      Models::ModifyStreamingJobResponse modifyStreamingJobWithOptions(const Models::ModifyStreamingJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create External Data Source Configuration
       *
       * @param request ModifyStreamingJobRequest
       * @return ModifyStreamingJobResponse
       */
      Models::ModifyStreamingJobResponse modifyStreamingJob(const Models::ModifyStreamingJobRequest &request);

      /**
       * @summary 修改supabase项目白名单
       *
       * @param request ModifySupabaseProjectSecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySupabaseProjectSecurityIpsResponse
       */
      Models::ModifySupabaseProjectSecurityIpsResponse modifySupabaseProjectSecurityIpsWithOptions(const Models::ModifySupabaseProjectSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改supabase项目白名单
       *
       * @param request ModifySupabaseProjectSecurityIpsRequest
       * @return ModifySupabaseProjectSecurityIpsResponse
       */
      Models::ModifySupabaseProjectSecurityIpsResponse modifySupabaseProjectSecurityIps(const Models::ModifySupabaseProjectSecurityIpsRequest &request);

      /**
       * @summary Modifies the vector engine optimization configuration of an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyVectorConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVectorConfigurationResponse
       */
      Models::ModifyVectorConfigurationResponse modifyVectorConfigurationWithOptions(const Models::ModifyVectorConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the vector engine optimization configuration of an AnalyticDB for PostgreSQL instance.
       *
       * @param request ModifyVectorConfigurationRequest
       * @return ModifyVectorConfigurationResponse
       */
      Models::ModifyVectorConfigurationResponse modifyVectorConfiguration(const Models::ModifyVectorConfigurationRequest &request);

      /**
       * @summary Pauses data redistribution.
       *
       * @param request PauseDataRedistributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseDataRedistributeResponse
       */
      Models::PauseDataRedistributeResponse pauseDataRedistributeWithOptions(const Models::PauseDataRedistributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses data redistribution.
       *
       * @param request PauseDataRedistributeRequest
       * @return PauseDataRedistributeResponse
       */
      Models::PauseDataRedistributeResponse pauseDataRedistribute(const Models::PauseDataRedistributeRequest &request);

      /**
       * @summary Pauses an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to pause an AnalyticDB for PostgreSQL instance that is in the **Running** state.
       * This operation is available only for AnalyticDB for PostgreSQL instances in Serverless mode that run V1.0.2.1 or later. For more information about how to view and update the minor engine version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       * >  Before you call this operation, make sure that you are familiar with the billing methods and pricing of AnalyticDB for PostgreSQL instances. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PauseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseInstanceResponse
       */
      Models::PauseInstanceResponse pauseInstanceWithOptions(const Models::PauseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to pause an AnalyticDB for PostgreSQL instance that is in the **Running** state.
       * This operation is available only for AnalyticDB for PostgreSQL instances in Serverless mode that run V1.0.2.1 or later. For more information about how to view and update the minor engine version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       * >  Before you call this operation, make sure that you are familiar with the billing methods and pricing of AnalyticDB for PostgreSQL instances. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PauseInstanceRequest
       * @return PauseInstanceResponse
       */
      Models::PauseInstanceResponse pauseInstance(const Models::PauseInstanceRequest &request);

      /**
       * @summary Query Vector Data
       *
       * @param tmpReq QueryCollectionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCollectionDataResponse
       */
      Models::QueryCollectionDataResponse queryCollectionDataWithOptions(const Models::QueryCollectionDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Vector Data
       *
       * @param request QueryCollectionDataRequest
       * @return QueryCollectionDataResponse
       */
      Models::QueryCollectionDataResponse queryCollectionData(const Models::QueryCollectionDataRequest &request);

      /**
       * @summary Query
       *
       * @param tmpReq QueryContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryContentResponse
       */
      Models::QueryContentResponse queryContentWithOptions(const Models::QueryContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query
       *
       * @param request QueryContentRequest
       * @return QueryContentResponse
       */
      Models::QueryContentResponse queryContent(const Models::QueryContentRequest &request);

      Models::QueryContentResponse queryContentAdvance(const Models::QueryContentAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多知识库查询
       *
       * @param tmpReq QueryKnowledgeBasesContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryKnowledgeBasesContentResponse
       */
      Models::QueryKnowledgeBasesContentResponse queryKnowledgeBasesContentWithOptions(const Models::QueryKnowledgeBasesContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多知识库查询
       *
       * @param request QueryKnowledgeBasesContentRequest
       * @return QueryKnowledgeBasesContentResponse
       */
      Models::QueryKnowledgeBasesContentResponse queryKnowledgeBasesContent(const Models::QueryKnowledgeBasesContentRequest &request);

      /**
       * @summary Rebalances an AnalyticDB for PostgreSQL instance.
       *
       * @param request RebalanceDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebalanceDBInstanceResponse
       */
      Models::RebalanceDBInstanceResponse rebalanceDBInstanceWithOptions(const Models::RebalanceDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebalances an AnalyticDB for PostgreSQL instance.
       *
       * @param request RebalanceDBInstanceRequest
       * @return RebalanceDBInstanceResponse
       */
      Models::RebalanceDBInstanceResponse rebalanceDBInstance(const Models::RebalanceDBInstanceRequest &request);

      /**
       * @summary Releases the public endpoint of an AnalyticDB for PostgreSQL instance.
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(const Models::ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an AnalyticDB for PostgreSQL instance.
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(const Models::ReleaseInstancePublicConnectionRequest &request);

      /**
       * @summary Score and re-order documents using a model
       *
       * @param tmpReq RerankRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RerankResponse
       */
      Models::RerankResponse rerankWithOptions(const Models::RerankRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Score and re-order documents using a model
       *
       * @param request RerankRequest
       * @return RerankResponse
       */
      Models::RerankResponse rerank(const Models::RerankRequest &request);

      /**
       * @summary Resets the password of a database account for an AnalyticDB for PostgreSQL instance.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a database account for an AnalyticDB for PostgreSQL instance.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Resets the IMV statistics.
       *
       * @param request ResetIMVMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetIMVMonitorDataResponse
       */
      Models::ResetIMVMonitorDataResponse resetIMVMonitorDataWithOptions(const Models::ResetIMVMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the IMV statistics.
       *
       * @param request ResetIMVMonitorDataRequest
       * @return ResetIMVMonitorDataResponse
       */
      Models::ResetIMVMonitorDataResponse resetIMVMonitorData(const Models::ResetIMVMonitorDataRequest &request);

      /**
       * @summary 重置supabase数据库密码
       *
       * @param request ResetSupabaseProjectPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetSupabaseProjectPasswordResponse
       */
      Models::ResetSupabaseProjectPasswordResponse resetSupabaseProjectPasswordWithOptions(const Models::ResetSupabaseProjectPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置supabase数据库密码
       *
       * @param request ResetSupabaseProjectPasswordRequest
       * @return ResetSupabaseProjectPasswordResponse
       */
      Models::ResetSupabaseProjectPasswordResponse resetSupabaseProjectPassword(const Models::ResetSupabaseProjectPasswordRequest &request);

      /**
       * @summary Restarts an AnalyticDB for PostgreSQL instance.
       *
       * @description A restart takes about 3 to 30 minutes. During the restart, services are unavailable. We recommend that you restart the instance during off-peak hours. After the instance is restarted and enters the running state, you can access the instance.
       * ## Limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request RestartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstanceWithOptions(const Models::RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an AnalyticDB for PostgreSQL instance.
       *
       * @description A restart takes about 3 to 30 minutes. During the restart, services are unavailable. We recommend that you restart the instance during off-peak hours. After the instance is restarted and enters the running state, you can access the instance.
       * ## Limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered and may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request RestartDBInstanceRequest
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstance(const Models::RestartDBInstanceRequest &request);

      /**
       * @summary Resumes data redistribution.
       *
       * @param request ResumeDataRedistributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeDataRedistributeResponse
       */
      Models::ResumeDataRedistributeResponse resumeDataRedistributeWithOptions(const Models::ResumeDataRedistributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes data redistribution.
       *
       * @param request ResumeDataRedistributeRequest
       * @return ResumeDataRedistributeResponse
       */
      Models::ResumeDataRedistributeResponse resumeDataRedistribute(const Models::ResumeDataRedistributeRequest &request);

      /**
       * @summary Resumes an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to resume an AnalyticDB for PostgreSQL instance that is in the **Paused** state.
       * This operation is available only for AnalyticDB for PostgreSQL instances in Serverless mode that run V1.0.2.1 or later. For more information about how to view and update the minor engine version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       * >  Before you call this operation, make sure that you are familiar with the billing methods and pricing of AnalyticDB for PostgreSQL instances. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ResumeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstanceWithOptions(const Models::ResumeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to resume an AnalyticDB for PostgreSQL instance that is in the **Paused** state.
       * This operation is available only for AnalyticDB for PostgreSQL instances in Serverless mode that run V1.0.2.1 or later. For more information about how to view and update the minor engine version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
       * >  Before you call this operation, make sure that you are familiar with the billing methods and pricing of AnalyticDB for PostgreSQL instances. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ResumeInstanceRequest
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstance(const Models::ResumeInstanceRequest &request);

      /**
       * @summary Enables or disables a plan for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to enable or disable a specified plan. The plan management feature is supported only for AnalyticDB for PostgreSQL instances in Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request SetDBInstancePlanStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDBInstancePlanStatusResponse
       */
      Models::SetDBInstancePlanStatusResponse setDBInstancePlanStatusWithOptions(const Models::SetDBInstancePlanStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a plan for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to enable or disable a specified plan. The plan management feature is supported only for AnalyticDB for PostgreSQL instances in Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request SetDBInstancePlanStatusRequest
       * @return SetDBInstancePlanStatusResponse
       */
      Models::SetDBInstancePlanStatusResponse setDBInstancePlanStatus(const Models::SetDBInstancePlanStatusRequest &request);

      /**
       * @summary Enables or disables data sharing for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is called to enable or disable data sharing for an AnalyticDB for PostgreSQL instance in Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq SetDataShareInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDataShareInstanceResponse
       */
      Models::SetDataShareInstanceResponse setDataShareInstanceWithOptions(const Models::SetDataShareInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables data sharing for an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is called to enable or disable data sharing for an AnalyticDB for PostgreSQL instance in Serverless mode.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetDataShareInstanceRequest
       * @return SetDataShareInstanceResponse
       */
      Models::SetDataShareInstanceResponse setDataShareInstance(const Models::SetDataShareInstanceRequest &request);

      /**
       * @summary Switches between the internal and public endpoints of an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is not supported for AnalyticDB for PostgreSQL instances in elastic storage mode or Serverless mode.
       *
       * @param request SwitchDBInstanceNetTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceNetTypeResponse
       */
      Models::SwitchDBInstanceNetTypeResponse switchDBInstanceNetTypeWithOptions(const Models::SwitchDBInstanceNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches between the internal and public endpoints of an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is not supported for AnalyticDB for PostgreSQL instances in elastic storage mode or Serverless mode.
       *
       * @param request SwitchDBInstanceNetTypeRequest
       * @return SwitchDBInstanceNetTypeResponse
       */
      Models::SwitchDBInstanceNetTypeResponse switchDBInstanceNetType(const Models::SwitchDBInstanceNetTypeRequest &request);

      /**
       * @summary Creates and adds tags to AnalyticDB for PostgreSQL instances.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and adds tags to AnalyticDB for PostgreSQL instances.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 通过模型对文本文档进行向量化
       *
       * @param tmpReq TextEmbeddingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TextEmbeddingResponse
       */
      Models::TextEmbeddingResponse textEmbeddingWithOptions(const Models::TextEmbeddingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过模型对文本文档进行向量化
       *
       * @param request TextEmbeddingRequest
       * @return TextEmbeddingResponse
       */
      Models::TextEmbeddingResponse textEmbedding(const Models::TextEmbeddingRequest &request);

      /**
       * @summary Unbinds database roles from a resource group.
       *
       * @param tmpReq UnbindDBResourceGroupWithRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDBResourceGroupWithRoleResponse
       */
      Models::UnbindDBResourceGroupWithRoleResponse unbindDBResourceGroupWithRoleWithOptions(const Models::UnbindDBResourceGroupWithRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds database roles from a resource group.
       *
       * @param request UnbindDBResourceGroupWithRoleRequest
       * @return UnbindDBResourceGroupWithRoleResponse
       */
      Models::UnbindDBResourceGroupWithRoleResponse unbindDBResourceGroupWithRole(const Models::UnbindDBResourceGroupWithRoleRequest &request);

      /**
       * @summary Releases a sample dataset from an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to release a sample dataset from an AnalyticDB for PostgreSQL instance. You must have already loaded the sample dataset.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UnloadSampleDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnloadSampleDataResponse
       */
      Models::UnloadSampleDataResponse unloadSampleDataWithOptions(const Models::UnloadSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a sample dataset from an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to release a sample dataset from an AnalyticDB for PostgreSQL instance. You must have already loaded the sample dataset.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UnloadSampleDataRequest
       * @return UnloadSampleDataResponse
       */
      Models::UnloadSampleDataResponse unloadSampleData(const Models::UnloadSampleDataRequest &request);

      /**
       * @summary Remove resource tags
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove resource tags
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Update Metadata of Collection Data
       *
       * @param tmpReq UpdateCollectionDataMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCollectionDataMetadataResponse
       */
      Models::UpdateCollectionDataMetadataResponse updateCollectionDataMetadataWithOptions(const Models::UpdateCollectionDataMetadataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Metadata of Collection Data
       *
       * @param request UpdateCollectionDataMetadataRequest
       * @return UpdateCollectionDataMetadataResponse
       */
      Models::UpdateCollectionDataMetadataResponse updateCollectionDataMetadata(const Models::UpdateCollectionDataMetadataRequest &request);

      /**
       * @summary Modifies a plan for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to modify a plan for an AnalyticDB for PostgreSQL instance in Serverless mode. For example, you can modify a plan for periodically pausing and resuming an instance or scaling an instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UpdateDBInstancePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDBInstancePlanResponse
       */
      Models::UpdateDBInstancePlanResponse updateDBInstancePlanWithOptions(const Models::UpdateDBInstancePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a plan for an AnalyticDB for PostgreSQL instance.
       *
       * @description You can call this operation to modify a plan for an AnalyticDB for PostgreSQL instance in Serverless mode. For example, you can modify a plan for periodically pausing and resuming an instance or scaling an instance.
       * ## Limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UpdateDBInstancePlanRequest
       * @return UpdateDBInstancePlanResponse
       */
      Models::UpdateDBInstancePlanResponse updateDBInstancePlan(const Models::UpdateDBInstancePlanRequest &request);

      /**
       * @summary Changes the configurations of an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is not available for instances in reserved storage mode.
       * Before you call this operation, make sure that you are familiar with the billing of AnalyticDB for PostgreSQL. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       *
       * @param request UpgradeDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceResponse
       */
      Models::UpgradeDBInstanceResponse upgradeDBInstanceWithOptions(const Models::UpgradeDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the configurations of an AnalyticDB for PostgreSQL instance.
       *
       * @description This operation is not available for instances in reserved storage mode.
       * Before you call this operation, make sure that you are familiar with the billing of AnalyticDB for PostgreSQL. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
       *
       * @param request UpgradeDBInstanceRequest
       * @return UpgradeDBInstanceResponse
       */
      Models::UpgradeDBInstanceResponse upgradeDBInstance(const Models::UpgradeDBInstanceRequest &request);

      /**
       * @summary Upgrades the minor version of an AnalyticDB for PostgreSQL instance.
       *
       * @param request UpgradeDBVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBVersionResponse
       */
      Models::UpgradeDBVersionResponse upgradeDBVersionWithOptions(const Models::UpgradeDBVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the minor version of an AnalyticDB for PostgreSQL instance.
       *
       * @param request UpgradeDBVersionRequest
       * @return UpgradeDBVersionResponse
       */
      Models::UpgradeDBVersionResponse upgradeDBVersion(const Models::UpgradeDBVersionRequest &request);

      /**
       * @summary Updates extensions.
       *
       * @param request UpgradeExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeExtensionsResponse
       */
      Models::UpgradeExtensionsResponse upgradeExtensionsWithOptions(const Models::UpgradeExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates extensions.
       *
       * @param request UpgradeExtensionsRequest
       * @return UpgradeExtensionsResponse
       */
      Models::UpgradeExtensionsResponse upgradeExtensions(const Models::UpgradeExtensionsRequest &request);

      /**
       * @summary Asynchronous Document Upload
       *
       * @description The server loads and chunks a document based on the file extension, performs vectorization by using the embedding model that is specified when you call the CreateDocumentCollection operation, and then writes the document to the specified document collection. This operation supports multi-modal embedding for various formats of text and images.
       * Related operations:
       * *   You can call the GetUploadDocumentJob operation to query the progress and result of a document upload job.
       * *   You can call the CancelUploadDocumentJob operation to cancel a document upload job.
       * > 
       * *   After a document upload request is submitted, the request is queued for processing. Up to 20 documents in the Pending and Running states can be processed within a Resource Access Management (RAM) user or Alibaba Cloud account.
       * *   A text document can be split into up to 100,000 chunks.
       * *   If a document collection uses the OnePeace model, each RAM user or Alibaba Cloud account can upload and query up to 10,000 images.
       *
       * @param tmpReq UploadDocumentAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDocumentAsyncResponse
       */
      Models::UploadDocumentAsyncResponse uploadDocumentAsyncWithOptions(const Models::UploadDocumentAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronous Document Upload
       *
       * @description The server loads and chunks a document based on the file extension, performs vectorization by using the embedding model that is specified when you call the CreateDocumentCollection operation, and then writes the document to the specified document collection. This operation supports multi-modal embedding for various formats of text and images.
       * Related operations:
       * *   You can call the GetUploadDocumentJob operation to query the progress and result of a document upload job.
       * *   You can call the CancelUploadDocumentJob operation to cancel a document upload job.
       * > 
       * *   After a document upload request is submitted, the request is queued for processing. Up to 20 documents in the Pending and Running states can be processed within a Resource Access Management (RAM) user or Alibaba Cloud account.
       * *   A text document can be split into up to 100,000 chunks.
       * *   If a document collection uses the OnePeace model, each RAM user or Alibaba Cloud account can upload and query up to 10,000 images.
       *
       * @param request UploadDocumentAsyncRequest
       * @return UploadDocumentAsyncResponse
       */
      Models::UploadDocumentAsyncResponse uploadDocumentAsync(const Models::UploadDocumentAsyncRequest &request);

      Models::UploadDocumentAsyncResponse uploadDocumentAsyncAdvance(const Models::UploadDocumentAsyncAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload split text
       *
       * @description The vectorization algorithm for the document is specified by the CreateDocumentCollection API.
       *
       * @param tmpReq UpsertChunksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertChunksResponse
       */
      Models::UpsertChunksResponse upsertChunksWithOptions(const Models::UpsertChunksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload split text
       *
       * @description The vectorization algorithm for the document is specified by the CreateDocumentCollection API.
       *
       * @param request UpsertChunksRequest
       * @return UpsertChunksResponse
       */
      Models::UpsertChunksResponse upsertChunks(const Models::UpsertChunksRequest &request);

      /**
       * @summary Uploads vector data to a vector collection.
       *
       * @param tmpReq UpsertCollectionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertCollectionDataResponse
       */
      Models::UpsertCollectionDataResponse upsertCollectionDataWithOptions(const Models::UpsertCollectionDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads vector data to a vector collection.
       *
       * @param request UpsertCollectionDataRequest
       * @return UpsertCollectionDataResponse
       */
      Models::UpsertCollectionDataResponse upsertCollectionData(const Models::UpsertCollectionDataRequest &request);

      /**
       * @summary Uploads vector data in an asynchronous manner by using an on-premises file or a password-free Internet-accessible file URL. The vector data can be up to 200 MB in size.
       *
       * @description This operation is the asynchronous operation of `UpsertCollectionData`. The `UpsertCollectionData` operation supports up to 10 MB of data, and this operation supports up to 200 MB of data.
       * >  Related operations:
       * *   You can call the GetUpsertCollectionDataJob operation to query the progress and result of an upload job.
       * *   You can call the CancelUpsertCollectionDataJob operation to cancel an upload job.
       * > You can upload data for the same collection only in a serial manner.
       *
       * @param request UpsertCollectionDataAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertCollectionDataAsyncResponse
       */
      Models::UpsertCollectionDataAsyncResponse upsertCollectionDataAsyncWithOptions(const Models::UpsertCollectionDataAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads vector data in an asynchronous manner by using an on-premises file or a password-free Internet-accessible file URL. The vector data can be up to 200 MB in size.
       *
       * @description This operation is the asynchronous operation of `UpsertCollectionData`. The `UpsertCollectionData` operation supports up to 10 MB of data, and this operation supports up to 200 MB of data.
       * >  Related operations:
       * *   You can call the GetUpsertCollectionDataJob operation to query the progress and result of an upload job.
       * *   You can call the CancelUpsertCollectionDataJob operation to cancel an upload job.
       * > You can upload data for the same collection only in a serial manner.
       *
       * @param request UpsertCollectionDataAsyncRequest
       * @return UpsertCollectionDataAsyncResponse
       */
      Models::UpsertCollectionDataAsyncResponse upsertCollectionDataAsync(const Models::UpsertCollectionDataAsyncRequest &request);

      Models::UpsertCollectionDataAsyncResponse upsertCollectionDataAsyncAdvance(const Models::UpsertCollectionDataAsyncAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
