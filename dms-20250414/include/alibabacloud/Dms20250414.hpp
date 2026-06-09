// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DMS20250414_HPP_
#define ALIBABACLOUD_DMS20250414_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dms20250414Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dms20250414.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 为空间添加用户
       *
       * @param request AddUserToDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToDataAgentWorkspaceResponse
       */
      Models::AddUserToDataAgentWorkspaceResponse addUserToDataAgentWorkspaceWithOptions(const Models::AddUserToDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为空间添加用户
       *
       * @param request AddUserToDataAgentWorkspaceRequest
       * @return AddUserToDataAgentWorkspaceResponse
       */
      Models::AddUserToDataAgentWorkspaceResponse addUserToDataAgentWorkspace(const Models::AddUserToDataAgentWorkspaceRequest &request);

      /**
       * @summary 批量新建湖仓表分区
       *
       * @param tmpReq BatchCreateDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateDataLakePartitionsResponse
       */
      Models::BatchCreateDataLakePartitionsResponse batchCreateDataLakePartitionsWithOptions(const Models::BatchCreateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量新建湖仓表分区
       *
       * @param request BatchCreateDataLakePartitionsRequest
       * @return BatchCreateDataLakePartitionsResponse
       */
      Models::BatchCreateDataLakePartitionsResponse batchCreateDataLakePartitions(const Models::BatchCreateDataLakePartitionsRequest &request);

      /**
       * @summary 批量删除湖仓表分区
       *
       * @param request BatchDeleteDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDataLakePartitionsResponse
       */
      Models::BatchDeleteDataLakePartitionsResponse batchDeleteDataLakePartitionsWithOptions(const Models::BatchDeleteDataLakePartitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除湖仓表分区
       *
       * @param request BatchDeleteDataLakePartitionsRequest
       * @return BatchDeleteDataLakePartitionsResponse
       */
      Models::BatchDeleteDataLakePartitionsResponse batchDeleteDataLakePartitions(const Models::BatchDeleteDataLakePartitionsRequest &request);

      /**
       * @summary 批量更新湖仓表分区
       *
       * @param tmpReq BatchUpdateDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateDataLakePartitionsResponse
       */
      Models::BatchUpdateDataLakePartitionsResponse batchUpdateDataLakePartitionsWithOptions(const Models::BatchUpdateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量更新湖仓表分区
       *
       * @param request BatchUpdateDataLakePartitionsRequest
       * @return BatchUpdateDataLakePartitionsResponse
       */
      Models::BatchUpdateDataLakePartitionsResponse batchUpdateDataLakePartitions(const Models::BatchUpdateDataLakePartitionsRequest &request);

      /**
       * @summary 更新Airflow实例的自定义配置
       *
       * @param tmpReq ConfigAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigAirflowResponse
       */
      Models::ConfigAirflowResponse configAirflowWithOptions(const Models::ConfigAirflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Airflow实例的自定义配置
       *
       * @param request ConfigAirflowRequest
       * @return ConfigAirflowResponse
       */
      Models::ConfigAirflowResponse configAirflow(const Models::ConfigAirflowRequest &request);

      /**
       * @summary 创建Airflow
       *
       * @param tmpReq CreateAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAirflowResponse
       */
      Models::CreateAirflowResponse createAirflowWithOptions(const Models::CreateAirflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Airflow
       *
       * @param request CreateAirflowRequest
       * @return CreateAirflowResponse
       */
      Models::CreateAirflowResponse createAirflow(const Models::CreateAirflowRequest &request);

      /**
       * @summary Queries the Airflow logon credential. You can use this credential to log on to the DMS-managed Airflow instance.
       *
       * @param request CreateAirflowLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAirflowLoginTokenResponse
       */
      Models::CreateAirflowLoginTokenResponse createAirflowLoginTokenWithOptions(const Models::CreateAirflowLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Airflow logon credential. You can use this credential to log on to the DMS-managed Airflow instance.
       *
       * @param request CreateAirflowLoginTokenRequest
       * @return CreateAirflowLoginTokenResponse
       */
      Models::CreateAirflowLoginTokenResponse createAirflowLoginToken(const Models::CreateAirflowLoginTokenRequest &request);

      /**
       * @summary CreateCustomAgent
       *
       * @param tmpReq CreateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgentWithOptions(const Models::CreateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateCustomAgent
       *
       * @param request CreateCustomAgentRequest
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgent(const Models::CreateCustomAgentRequest &request);

      /**
       * @summary CreateDataAgentKnowledgeBase
       *
       * @param request CreateDataAgentKnowledgeBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataAgentKnowledgeBaseResponse
       */
      Models::CreateDataAgentKnowledgeBaseResponse createDataAgentKnowledgeBaseWithOptions(const Models::CreateDataAgentKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateDataAgentKnowledgeBase
       *
       * @param request CreateDataAgentKnowledgeBaseRequest
       * @return CreateDataAgentKnowledgeBaseResponse
       */
      Models::CreateDataAgentKnowledgeBaseResponse createDataAgentKnowledgeBase(const Models::CreateDataAgentKnowledgeBaseRequest &request);

      /**
       * @summary CreateDataAgentSession
       *
       * @param tmpReq CreateDataAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataAgentSessionResponse
       */
      Models::CreateDataAgentSessionResponse createDataAgentSessionWithOptions(const Models::CreateDataAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateDataAgentSession
       *
       * @param request CreateDataAgentSessionRequest
       * @return CreateDataAgentSessionResponse
       */
      Models::CreateDataAgentSessionResponse createDataAgentSession(const Models::CreateDataAgentSessionRequest &request);

      /**
       * @summary 创建DataAgent工作空间
       *
       * @param request CreateDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataAgentWorkspaceResponse
       */
      Models::CreateDataAgentWorkspaceResponse createDataAgentWorkspaceWithOptions(const Models::CreateDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建DataAgent工作空间
       *
       * @param request CreateDataAgentWorkspaceRequest
       * @return CreateDataAgentWorkspaceResponse
       */
      Models::CreateDataAgentWorkspaceResponse createDataAgentWorkspace(const Models::CreateDataAgentWorkspaceRequest &request);

      /**
       * @summary 新建湖仓数据库
       *
       * @param tmpReq CreateDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeDatabaseResponse
       */
      Models::CreateDataLakeDatabaseResponse createDataLakeDatabaseWithOptions(const Models::CreateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建湖仓数据库
       *
       * @param request CreateDataLakeDatabaseRequest
       * @return CreateDataLakeDatabaseResponse
       */
      Models::CreateDataLakeDatabaseResponse createDataLakeDatabase(const Models::CreateDataLakeDatabaseRequest &request);

      /**
       * @summary 新建湖仓自定义函数
       *
       * @param tmpReq CreateDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeFunctionResponse
       */
      Models::CreateDataLakeFunctionResponse createDataLakeFunctionWithOptions(const Models::CreateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建湖仓自定义函数
       *
       * @param request CreateDataLakeFunctionRequest
       * @return CreateDataLakeFunctionResponse
       */
      Models::CreateDataLakeFunctionResponse createDataLakeFunction(const Models::CreateDataLakeFunctionRequest &request);

      /**
       * @summary 新建湖仓表分区
       *
       * @param tmpReq CreateDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakePartitionResponse
       */
      Models::CreateDataLakePartitionResponse createDataLakePartitionWithOptions(const Models::CreateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建湖仓表分区
       *
       * @param request CreateDataLakePartitionRequest
       * @return CreateDataLakePartitionResponse
       */
      Models::CreateDataLakePartitionResponse createDataLakePartition(const Models::CreateDataLakePartitionRequest &request);

      /**
       * @summary 新建湖仓表
       *
       * @param tmpReq CreateDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeTableResponse
       */
      Models::CreateDataLakeTableResponse createDataLakeTableWithOptions(const Models::CreateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建湖仓表
       *
       * @param request CreateDataLakeTableRequest
       * @return CreateDataLakeTableResponse
       */
      Models::CreateDataLakeTableResponse createDataLakeTable(const Models::CreateDataLakeTableRequest &request);

      /**
       * @summary 删除Airflow
       *
       * @param request DeleteAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAirflowResponse
       */
      Models::DeleteAirflowResponse deleteAirflowWithOptions(const Models::DeleteAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Airflow
       *
       * @param request DeleteAirflowRequest
       * @return DeleteAirflowResponse
       */
      Models::DeleteAirflowResponse deleteAirflow(const Models::DeleteAirflowRequest &request);

      /**
       * @summary DeleteCustomAgent
       *
       * @param request DeleteCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgentWithOptions(const Models::DeleteCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteCustomAgent
       *
       * @param request DeleteCustomAgentRequest
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgent(const Models::DeleteCustomAgentRequest &request);

      /**
       * @summary DeleteDataAgentKnowledgeBase
       *
       * @param request DeleteDataAgentKnowledgeBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataAgentKnowledgeBaseResponse
       */
      Models::DeleteDataAgentKnowledgeBaseResponse deleteDataAgentKnowledgeBaseWithOptions(const Models::DeleteDataAgentKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteDataAgentKnowledgeBase
       *
       * @param request DeleteDataAgentKnowledgeBaseRequest
       * @return DeleteDataAgentKnowledgeBaseResponse
       */
      Models::DeleteDataAgentKnowledgeBaseResponse deleteDataAgentKnowledgeBase(const Models::DeleteDataAgentKnowledgeBaseRequest &request);

      /**
       * @summary 删除DataAgent工作空间
       *
       * @param request DeleteDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataAgentWorkspaceResponse
       */
      Models::DeleteDataAgentWorkspaceResponse deleteDataAgentWorkspaceWithOptions(const Models::DeleteDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除DataAgent工作空间
       *
       * @param request DeleteDataAgentWorkspaceRequest
       * @return DeleteDataAgentWorkspaceResponse
       */
      Models::DeleteDataAgentWorkspaceResponse deleteDataAgentWorkspace(const Models::DeleteDataAgentWorkspaceRequest &request);

      /**
       * @summary 删除湖仓数据库
       *
       * @param request DeleteDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeDatabaseResponse
       */
      Models::DeleteDataLakeDatabaseResponse deleteDataLakeDatabaseWithOptions(const Models::DeleteDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除湖仓数据库
       *
       * @param request DeleteDataLakeDatabaseRequest
       * @return DeleteDataLakeDatabaseResponse
       */
      Models::DeleteDataLakeDatabaseResponse deleteDataLakeDatabase(const Models::DeleteDataLakeDatabaseRequest &request);

      /**
       * @summary 删除湖仓自定义函数
       *
       * @param request DeleteDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeFunctionResponse
       */
      Models::DeleteDataLakeFunctionResponse deleteDataLakeFunctionWithOptions(const Models::DeleteDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除湖仓自定义函数
       *
       * @param request DeleteDataLakeFunctionRequest
       * @return DeleteDataLakeFunctionResponse
       */
      Models::DeleteDataLakeFunctionResponse deleteDataLakeFunction(const Models::DeleteDataLakeFunctionRequest &request);

      /**
       * @summary 删除湖仓表分区
       *
       * @param tmpReq DeleteDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakePartitionResponse
       */
      Models::DeleteDataLakePartitionResponse deleteDataLakePartitionWithOptions(const Models::DeleteDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除湖仓表分区
       *
       * @param request DeleteDataLakePartitionRequest
       * @return DeleteDataLakePartitionResponse
       */
      Models::DeleteDataLakePartitionResponse deleteDataLakePartition(const Models::DeleteDataLakePartitionRequest &request);

      /**
       * @summary 删除湖仓表
       *
       * @param request DeleteDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeTableResponse
       */
      Models::DeleteDataLakeTableResponse deleteDataLakeTableWithOptions(const Models::DeleteDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除湖仓表
       *
       * @param request DeleteDataLakeTableRequest
       * @return DeleteDataLakeTableResponse
       */
      Models::DeleteDataLakeTableResponse deleteDataLakeTable(const Models::DeleteDataLakeTableRequest &request);

      /**
       * @summary 删除文档
       *
       * @param request DeleteDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocumentWithOptions(const Models::DeleteDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文档
       *
       * @param request DeleteDocumentRequest
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocument(const Models::DeleteDocumentRequest &request);

      /**
       * @summary 删除onemeta3.0的知识库chunks
       *
       * @param tmpReq DeleteDocumentChunksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentChunksResponse
       */
      Models::DeleteDocumentChunksResponse deleteDocumentChunksWithOptions(const Models::DeleteDocumentChunksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除onemeta3.0的知识库chunks
       *
       * @param request DeleteDocumentChunksRequest
       * @return DeleteDocumentChunksResponse
       */
      Models::DeleteDocumentChunksResponse deleteDocumentChunks(const Models::DeleteDocumentChunksRequest &request);

      /**
       * @summary DeleteFileUpload
       *
       * @param request DeleteFileUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileUploadResponse
       */
      Models::DeleteFileUploadResponse deleteFileUploadWithOptions(const Models::DeleteFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteFileUpload
       *
       * @param request DeleteFileUploadRequest
       * @return DeleteFileUploadResponse
       */
      Models::DeleteFileUploadResponse deleteFileUpload(const Models::DeleteFileUploadRequest &request);

      /**
       * @summary 删除工作空间代码以及目录
       *
       * @param request DeleteWorkspaceCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceCodeResponse
       */
      Models::DeleteWorkspaceCodeResponse deleteWorkspaceCodeWithOptions(const Models::DeleteWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作空间代码以及目录
       *
       * @param request DeleteWorkspaceCodeRequest
       * @return DeleteWorkspaceCodeResponse
       */
      Models::DeleteWorkspaceCodeResponse deleteWorkspaceCode(const Models::DeleteWorkspaceCodeRequest &request);

      /**
       * @summary DescribeCustomAgent
       *
       * @param request DescribeCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomAgentResponse
       */
      Models::DescribeCustomAgentResponse describeCustomAgentWithOptions(const Models::DescribeCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeCustomAgent
       *
       * @param request DescribeCustomAgentRequest
       * @return DescribeCustomAgentResponse
       */
      Models::DescribeCustomAgentResponse describeCustomAgent(const Models::DescribeCustomAgentRequest &request);

      /**
       * @summary DescribeDataAgentSession
       *
       * @param request DescribeDataAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataAgentSessionResponse
       */
      Models::DescribeDataAgentSessionResponse describeDataAgentSessionWithOptions(const Models::DescribeDataAgentSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeDataAgentSession
       *
       * @param request DescribeDataAgentSessionRequest
       * @return DescribeDataAgentSessionResponse
       */
      Models::DescribeDataAgentSessionResponse describeDataAgentSession(const Models::DescribeDataAgentSessionRequest &request);

      /**
       * @summary 获取文档详情
       *
       * @param request DescribeDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocumentResponse
       */
      Models::DescribeDocumentResponse describeDocumentWithOptions(const Models::DescribeDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文档详情
       *
       * @param request DescribeDocumentRequest
       * @return DescribeDocumentResponse
       */
      Models::DescribeDocumentResponse describeDocument(const Models::DescribeDocumentRequest &request);

      /**
       * @summary DescribeFileUploadSignature
       *
       * @param request DescribeFileUploadSignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileUploadSignatureResponse
       */
      Models::DescribeFileUploadSignatureResponse describeFileUploadSignatureWithOptions(const Models::DescribeFileUploadSignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeFileUploadSignature
       *
       * @param request DescribeFileUploadSignatureRequest
       * @return DescribeFileUploadSignatureResponse
       */
      Models::DescribeFileUploadSignatureResponse describeFileUploadSignature(const Models::DescribeFileUploadSignatureRequest &request);

      /**
       * @summary 获取onemeta3.0的知识库统计信息
       *
       * @param request DescribeKnowledgeBaseStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKnowledgeBaseStatsResponse
       */
      Models::DescribeKnowledgeBaseStatsResponse describeKnowledgeBaseStatsWithOptions(const Models::DescribeKnowledgeBaseStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取onemeta3.0的知识库统计信息
       *
       * @param request DescribeKnowledgeBaseStatsRequest
       * @return DescribeKnowledgeBaseStatsResponse
       */
      Models::DescribeKnowledgeBaseStatsResponse describeKnowledgeBaseStats(const Models::DescribeKnowledgeBaseStatsRequest &request);

      /**
       * @summary 获取知识库中的上传签名
       *
       * @param request DescribeKnowledgeBaseUploadSignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKnowledgeBaseUploadSignatureResponse
       */
      Models::DescribeKnowledgeBaseUploadSignatureResponse describeKnowledgeBaseUploadSignatureWithOptions(const Models::DescribeKnowledgeBaseUploadSignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取知识库中的上传签名
       *
       * @param request DescribeKnowledgeBaseUploadSignatureRequest
       * @return DescribeKnowledgeBaseUploadSignatureResponse
       */
      Models::DescribeKnowledgeBaseUploadSignatureResponse describeKnowledgeBaseUploadSignature(const Models::DescribeKnowledgeBaseUploadSignatureRequest &request);

      /**
       * @summary FileUploadCallback
       *
       * @param request FileUploadCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FileUploadCallbackResponse
       */
      Models::FileUploadCallbackResponse fileUploadCallbackWithOptions(const Models::FileUploadCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary FileUploadCallback
       *
       * @param request FileUploadCallbackRequest
       * @return FileUploadCallbackResponse
       */
      Models::FileUploadCallbackResponse fileUploadCallback(const Models::FileUploadCallbackRequest &request);

      /**
       * @summary 查询 Airflow
       *
       * @param request GetAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAirflowResponse
       */
      Models::GetAirflowResponse getAirflowWithOptions(const Models::GetAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 Airflow
       *
       * @param request GetAirflowRequest
       * @return GetAirflowResponse
       */
      Models::GetAirflowResponse getAirflow(const Models::GetAirflowRequest &request);

      /**
       * @summary GetChatContent
       *
       * @param request GetChatContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatContentResponse
       */
      FutureGenerator<Models::GetChatContentResponse> getChatContentWithSSE(const Models::GetChatContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetChatContent
       *
       * @param request GetChatContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatContentResponse
       */
      Models::GetChatContentResponse getChatContentWithOptions(const Models::GetChatContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetChatContent
       *
       * @param request GetChatContentRequest
       * @return GetChatContentResponse
       */
      Models::GetChatContentResponse getChatContent(const Models::GetChatContentRequest &request);

      /**
       * @summary 获取主账号下的子账号信息
       *
       * @param request GetDataAgentSubAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataAgentSubAccountInfoResponse
       */
      Models::GetDataAgentSubAccountInfoResponse getDataAgentSubAccountInfoWithOptions(const Models::GetDataAgentSubAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主账号下的子账号信息
       *
       * @param request GetDataAgentSubAccountInfoRequest
       * @return GetDataAgentSubAccountInfoResponse
       */
      Models::GetDataAgentSubAccountInfoResponse getDataAgentSubAccountInfo(const Models::GetDataAgentSubAccountInfoRequest &request);

      /**
       * @summary 获取空间信息
       *
       * @param request GetDataAgentWorkspaceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataAgentWorkspaceInfoResponse
       */
      Models::GetDataAgentWorkspaceInfoResponse getDataAgentWorkspaceInfoWithOptions(const Models::GetDataAgentWorkspaceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取空间信息
       *
       * @param request GetDataAgentWorkspaceInfoRequest
       * @return GetDataAgentWorkspaceInfoResponse
       */
      Models::GetDataAgentWorkspaceInfoResponse getDataAgentWorkspaceInfo(const Models::GetDataAgentWorkspaceInfoRequest &request);

      /**
       * @summary 获取uc的数据库目录
       *
       * @param request GetDataLakeCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeCatalogResponse
       */
      Models::GetDataLakeCatalogResponse getDataLakeCatalogWithOptions(const Models::GetDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取uc的数据库目录
       *
       * @param request GetDataLakeCatalogRequest
       * @return GetDataLakeCatalogResponse
       */
      Models::GetDataLakeCatalogResponse getDataLakeCatalog(const Models::GetDataLakeCatalogRequest &request);

      /**
       * @summary 获取UC的数据库
       *
       * @param request GetDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeDatabaseResponse
       */
      Models::GetDataLakeDatabaseResponse getDataLakeDatabaseWithOptions(const Models::GetDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取UC的数据库
       *
       * @param request GetDataLakeDatabaseRequest
       * @return GetDataLakeDatabaseResponse
       */
      Models::GetDataLakeDatabaseResponse getDataLakeDatabase(const Models::GetDataLakeDatabaseRequest &request);

      /**
       * @summary 获取湖仓自定义函数详细信息
       *
       * @param request GetDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeFunctionResponse
       */
      Models::GetDataLakeFunctionResponse getDataLakeFunctionWithOptions(const Models::GetDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取湖仓自定义函数详细信息
       *
       * @param request GetDataLakeFunctionRequest
       * @return GetDataLakeFunctionResponse
       */
      Models::GetDataLakeFunctionResponse getDataLakeFunction(const Models::GetDataLakeFunctionRequest &request);

      /**
       * @summary 获取湖仓表分区详情
       *
       * @param tmpReq GetDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakePartitionResponse
       */
      Models::GetDataLakePartitionResponse getDataLakePartitionWithOptions(const Models::GetDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取湖仓表分区详情
       *
       * @param request GetDataLakePartitionRequest
       * @return GetDataLakePartitionResponse
       */
      Models::GetDataLakePartitionResponse getDataLakePartition(const Models::GetDataLakePartitionRequest &request);

      /**
       * @summary 获取表信息
       *
       * @param request GetDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeTableResponse
       */
      Models::GetDataLakeTableResponse getDataLakeTableWithOptions(const Models::GetDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取表信息
       *
       * @param request GetDataLakeTableRequest
       * @return GetDataLakeTableResponse
       */
      Models::GetDataLakeTableResponse getDataLakeTable(const Models::GetDataLakeTableRequest &request);

      /**
       * @summary 调度运行Notebook文件
       *
       * @param request GetNotebookAndSubmitTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotebookAndSubmitTaskResponse
       */
      Models::GetNotebookAndSubmitTaskResponse getNotebookAndSubmitTaskWithOptions(const Models::GetNotebookAndSubmitTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调度运行Notebook文件
       *
       * @param request GetNotebookAndSubmitTaskRequest
       * @return GetNotebookAndSubmitTaskResponse
       */
      Models::GetNotebookAndSubmitTaskResponse getNotebookAndSubmitTask(const Models::GetNotebookAndSubmitTaskRequest &request);

      /**
       * @summary 查看Notebook任务运行结果
       *
       * @param request GetNotebookTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotebookTaskStatusResponse
       */
      Models::GetNotebookTaskStatusResponse getNotebookTaskStatusWithOptions(const Models::GetNotebookTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看Notebook任务运行结果
       *
       * @param request GetNotebookTaskStatusRequest
       * @return GetNotebookTaskStatusResponse
       */
      Models::GetNotebookTaskStatusResponse getNotebookTaskStatus(const Models::GetNotebookTaskStatusRequest &request);

      /**
       * @summary 读取工作空间的代码文件内容
       *
       * @param request GetWorkspaceCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceCodeResponse
       */
      Models::GetWorkspaceCodeResponse getWorkspaceCodeWithOptions(const Models::GetWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 读取工作空间的代码文件内容
       *
       * @param request GetWorkspaceCodeRequest
       * @return GetWorkspaceCodeResponse
       */
      Models::GetWorkspaceCodeResponse getWorkspaceCode(const Models::GetWorkspaceCodeRequest &request);

      /**
       * @summary 获取工作空间发布配置
       *
       * @param request GetWorkspaceCodePublishSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceCodePublishSettingResponse
       */
      Models::GetWorkspaceCodePublishSettingResponse getWorkspaceCodePublishSettingWithOptions(const Models::GetWorkspaceCodePublishSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间发布配置
       *
       * @param request GetWorkspaceCodePublishSettingRequest
       * @return GetWorkspaceCodePublishSettingResponse
       */
      Models::GetWorkspaceCodePublishSettingResponse getWorkspaceCodePublishSetting(const Models::GetWorkspaceCodePublishSettingRequest &request);

      /**
       * @summary 获取工作空间配额
       *
       * @param request GetWorkspaceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceQuotaResponse
       */
      Models::GetWorkspaceQuotaResponse getWorkspaceQuotaWithOptions(const Models::GetWorkspaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间配额
       *
       * @param request GetWorkspaceQuotaRequest
       * @return GetWorkspaceQuotaResponse
       */
      Models::GetWorkspaceQuotaResponse getWorkspaceQuota(const Models::GetWorkspaceQuotaRequest &request);

      /**
       * @summary 获取可用的Airflow版本列表
       *
       * @param request ListAirflowVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAirflowVersionsResponse
       */
      Models::ListAirflowVersionsResponse listAirflowVersionsWithOptions(const Models::ListAirflowVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取可用的Airflow版本列表
       *
       * @param request ListAirflowVersionsRequest
       * @return ListAirflowVersionsResponse
       */
      Models::ListAirflowVersionsResponse listAirflowVersions(const Models::ListAirflowVersionsRequest &request);

      /**
       * @summary 列出资源Airflow
       *
       * @param request ListAirflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAirflowsResponse
       */
      Models::ListAirflowsResponse listAirflowsWithOptions(const Models::ListAirflowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出资源Airflow
       *
       * @param request ListAirflowsRequest
       * @return ListAirflowsResponse
       */
      Models::ListAirflowsResponse listAirflows(const Models::ListAirflowsRequest &request);

      /**
       * @summary ListCustomAgent
       *
       * @param request ListCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgentWithOptions(const Models::ListCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListCustomAgent
       *
       * @param request ListCustomAgentRequest
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgent(const Models::ListCustomAgentRequest &request);

      /**
       * @summary ListDataAgentSession
       *
       * @param request ListDataAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAgentSessionResponse
       */
      Models::ListDataAgentSessionResponse listDataAgentSessionWithOptions(const Models::ListDataAgentSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListDataAgentSession
       *
       * @param request ListDataAgentSessionRequest
       * @return ListDataAgentSessionResponse
       */
      Models::ListDataAgentSessionResponse listDataAgentSession(const Models::ListDataAgentSessionRequest &request);

      /**
       * @summary 获取主账号下的空间（分页）
       *
       * @param request ListDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAgentWorkspaceResponse
       */
      Models::ListDataAgentWorkspaceResponse listDataAgentWorkspaceWithOptions(const Models::ListDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主账号下的空间（分页）
       *
       * @param request ListDataAgentWorkspaceRequest
       * @return ListDataAgentWorkspaceResponse
       */
      Models::ListDataAgentWorkspaceResponse listDataAgentWorkspace(const Models::ListDataAgentWorkspaceRequest &request);

      /**
       * @summary 获取空间所有成员
       *
       * @param request ListDataAgentWorkspaceMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAgentWorkspaceMemberResponse
       */
      Models::ListDataAgentWorkspaceMemberResponse listDataAgentWorkspaceMemberWithOptions(const Models::ListDataAgentWorkspaceMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取空间所有成员
       *
       * @param request ListDataAgentWorkspaceMemberRequest
       * @return ListDataAgentWorkspaceMemberResponse
       */
      Models::ListDataAgentWorkspaceMemberResponse listDataAgentWorkspaceMember(const Models::ListDataAgentWorkspaceMemberRequest &request);

      /**
       * @summary ListDataCenterDatabase
       *
       * @param request ListDataCenterDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataCenterDatabaseResponse
       */
      Models::ListDataCenterDatabaseResponse listDataCenterDatabaseWithOptions(const Models::ListDataCenterDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListDataCenterDatabase
       *
       * @param request ListDataCenterDatabaseRequest
       * @return ListDataCenterDatabaseResponse
       */
      Models::ListDataCenterDatabaseResponse listDataCenterDatabase(const Models::ListDataCenterDatabaseRequest &request);

      /**
       * @summary ListDataCenterTable
       *
       * @param request ListDataCenterTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataCenterTableResponse
       */
      Models::ListDataCenterTableResponse listDataCenterTableWithOptions(const Models::ListDataCenterTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListDataCenterTable
       *
       * @param request ListDataCenterTableRequest
       * @return ListDataCenterTableResponse
       */
      Models::ListDataCenterTableResponse listDataCenterTable(const Models::ListDataCenterTableRequest &request);

      /**
       * @summary 获取uc的数据库目录列表
       *
       * @param request ListDataLakeCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeCatalogResponse
       */
      Models::ListDataLakeCatalogResponse listDataLakeCatalogWithOptions(const Models::ListDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取uc的数据库目录列表
       *
       * @param request ListDataLakeCatalogRequest
       * @return ListDataLakeCatalogResponse
       */
      Models::ListDataLakeCatalogResponse listDataLakeCatalog(const Models::ListDataLakeCatalogRequest &request);

      /**
       * @summary 获取数据库列表
       *
       * @param request ListDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeDatabaseResponse
       */
      Models::ListDataLakeDatabaseResponse listDataLakeDatabaseWithOptions(const Models::ListDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据库列表
       *
       * @param request ListDataLakeDatabaseRequest
       * @return ListDataLakeDatabaseResponse
       */
      Models::ListDataLakeDatabaseResponse listDataLakeDatabase(const Models::ListDataLakeDatabaseRequest &request);

      /**
       * @summary 获取数据湖函数列表
       *
       * @param request ListDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeFunctionResponse
       */
      Models::ListDataLakeFunctionResponse listDataLakeFunctionWithOptions(const Models::ListDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖函数列表
       *
       * @param request ListDataLakeFunctionRequest
       * @return ListDataLakeFunctionResponse
       */
      Models::ListDataLakeFunctionResponse listDataLakeFunction(const Models::ListDataLakeFunctionRequest &request);

      /**
       * @summary 获取数据湖函数名列表
       *
       * @param request ListDataLakeFunctionNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeFunctionNameResponse
       */
      Models::ListDataLakeFunctionNameResponse listDataLakeFunctionNameWithOptions(const Models::ListDataLakeFunctionNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖函数名列表
       *
       * @param request ListDataLakeFunctionNameRequest
       * @return ListDataLakeFunctionNameResponse
       */
      Models::ListDataLakeFunctionNameResponse listDataLakeFunctionName(const Models::ListDataLakeFunctionNameRequest &request);

      /**
       * @summary 获取数据湖表分区列表
       *
       * @param tmpReq ListDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionResponse
       */
      Models::ListDataLakePartitionResponse listDataLakePartitionWithOptions(const Models::ListDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖表分区列表
       *
       * @param request ListDataLakePartitionRequest
       * @return ListDataLakePartitionResponse
       */
      Models::ListDataLakePartitionResponse listDataLakePartition(const Models::ListDataLakePartitionRequest &request);

      /**
       * @summary 根据筛选条件获取数据湖表分区列表
       *
       * @param request ListDataLakePartitionByFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionByFilterResponse
       */
      Models::ListDataLakePartitionByFilterResponse listDataLakePartitionByFilterWithOptions(const Models::ListDataLakePartitionByFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据筛选条件获取数据湖表分区列表
       *
       * @param request ListDataLakePartitionByFilterRequest
       * @return ListDataLakePartitionByFilterResponse
       */
      Models::ListDataLakePartitionByFilterResponse listDataLakePartitionByFilter(const Models::ListDataLakePartitionByFilterRequest &request);

      /**
       * @summary 获取数据湖表分区名列表
       *
       * @param request ListDataLakePartitionNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionNameResponse
       */
      Models::ListDataLakePartitionNameResponse listDataLakePartitionNameWithOptions(const Models::ListDataLakePartitionNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖表分区名列表
       *
       * @param request ListDataLakePartitionNameRequest
       * @return ListDataLakePartitionNameResponse
       */
      Models::ListDataLakePartitionNameResponse listDataLakePartitionName(const Models::ListDataLakePartitionNameRequest &request);

      /**
       * @summary 获取数据湖表列表
       *
       * @param request ListDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTableResponse
       */
      Models::ListDataLakeTableResponse listDataLakeTableWithOptions(const Models::ListDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖表列表
       *
       * @param request ListDataLakeTableRequest
       * @return ListDataLakeTableResponse
       */
      Models::ListDataLakeTableResponse listDataLakeTable(const Models::ListDataLakeTableRequest &request);

      /**
       * @summary 获取数据湖表名列表
       *
       * @param request ListDataLakeTableNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTableNameResponse
       */
      Models::ListDataLakeTableNameResponse listDataLakeTableNameWithOptions(const Models::ListDataLakeTableNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖表名列表
       *
       * @param request ListDataLakeTableNameRequest
       * @return ListDataLakeTableNameResponse
       */
      Models::ListDataLakeTableNameResponse listDataLakeTableName(const Models::ListDataLakeTableNameRequest &request);

      /**
       * @summary 获取表信息
       *
       * @param request ListDataLakeTablebaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTablebaseInfoResponse
       */
      Models::ListDataLakeTablebaseInfoResponse listDataLakeTablebaseInfoWithOptions(const Models::ListDataLakeTablebaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取表信息
       *
       * @param request ListDataLakeTablebaseInfoRequest
       * @return ListDataLakeTablebaseInfoResponse
       */
      Models::ListDataLakeTablebaseInfoResponse listDataLakeTablebaseInfo(const Models::ListDataLakeTablebaseInfoRequest &request);

      /**
       * @summary 分页查询onemeta3.0的知识库chunks
       *
       * @param request ListDocumentChunksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocumentChunksResponse
       */
      Models::ListDocumentChunksResponse listDocumentChunksWithOptions(const Models::ListDocumentChunksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询onemeta3.0的知识库chunks
       *
       * @param request ListDocumentChunksRequest
       * @return ListDocumentChunksResponse
       */
      Models::ListDocumentChunksResponse listDocumentChunks(const Models::ListDocumentChunksRequest &request);

      /**
       * @summary 获取文档列表
       *
       * @param request ListDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocumentsResponse
       */
      Models::ListDocumentsResponse listDocumentsWithOptions(const Models::ListDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文档列表
       *
       * @param request ListDocumentsRequest
       * @return ListDocumentsResponse
       */
      Models::ListDocumentsResponse listDocuments(const Models::ListDocumentsRequest &request);

      /**
       * @summary ListFileUpload
       *
       * @param request ListFileUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileUploadResponse
       */
      Models::ListFileUploadResponse listFileUploadWithOptions(const Models::ListFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListFileUpload
       *
       * @param request ListFileUploadRequest
       * @return ListFileUploadResponse
       */
      Models::ListFileUploadResponse listFileUpload(const Models::ListFileUploadRequest &request);

      /**
       * @summary 分页查询onemeta3.0的知识库
       *
       * @param request ListKnowledgeBasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBasesWithOptions(const Models::ListKnowledgeBasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询onemeta3.0的知识库
       *
       * @param request ListKnowledgeBasesRequest
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBases(const Models::ListKnowledgeBasesRequest &request);

      /**
       * @summary 列出工作空间目录下的code文件
       *
       * @param request ListWorkspaceCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspaceCodeResponse
       */
      Models::ListWorkspaceCodeResponse listWorkspaceCodeWithOptions(const Models::ListWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出工作空间目录下的code文件
       *
       * @param request ListWorkspaceCodeRequest
       * @return ListWorkspaceCodeResponse
       */
      Models::ListWorkspaceCodeResponse listWorkspaceCode(const Models::ListWorkspaceCodeRequest &request);

      /**
       * @summary ModifyCustomAgent
       *
       * @param tmpReq ModifyCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomAgentResponse
       */
      Models::ModifyCustomAgentResponse modifyCustomAgentWithOptions(const Models::ModifyCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyCustomAgent
       *
       * @param request ModifyCustomAgentRequest
       * @return ModifyCustomAgentResponse
       */
      Models::ModifyCustomAgentResponse modifyCustomAgent(const Models::ModifyCustomAgentRequest &request);

      /**
       * @summary OperateCustomAgent
       *
       * @param request OperateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateCustomAgentResponse
       */
      Models::OperateCustomAgentResponse operateCustomAgentWithOptions(const Models::OperateCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OperateCustomAgent
       *
       * @param request OperateCustomAgentRequest
       * @return OperateCustomAgentResponse
       */
      Models::OperateCustomAgentResponse operateCustomAgent(const Models::OperateCustomAgentRequest &request);

      /**
       * @summary 重新部署Airflow实例
       *
       * @param request RedeployAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployAirflowResponse
       */
      Models::RedeployAirflowResponse redeployAirflowWithOptions(const Models::RedeployAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新部署Airflow实例
       *
       * @param request RedeployAirflowRequest
       * @return RedeployAirflowResponse
       */
      Models::RedeployAirflowResponse redeployAirflow(const Models::RedeployAirflowRequest &request);

      /**
       * @summary 从空间中移除用户
       *
       * @param request RemoveUserToDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserToDataAgentWorkspaceResponse
       */
      Models::RemoveUserToDataAgentWorkspaceResponse removeUserToDataAgentWorkspaceWithOptions(const Models::RemoveUserToDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从空间中移除用户
       *
       * @param request RemoveUserToDataAgentWorkspaceRequest
       * @return RemoveUserToDataAgentWorkspaceResponse
       */
      Models::RemoveUserToDataAgentWorkspaceResponse removeUserToDataAgentWorkspace(const Models::RemoveUserToDataAgentWorkspaceRequest &request);

      /**
       * @summary 检索知识库
       *
       * @param request RetrieveKnowledgeBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveKnowledgeBaseResponse
       */
      Models::RetrieveKnowledgeBaseResponse retrieveKnowledgeBaseWithOptions(const Models::RetrieveKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检索知识库
       *
       * @param request RetrieveKnowledgeBaseRequest
       * @return RetrieveKnowledgeBaseResponse
       */
      Models::RetrieveKnowledgeBaseResponse retrieveKnowledgeBase(const Models::RetrieveKnowledgeBaseRequest &request);

      /**
       * @summary 保存工作空间代码，如果文件不存在则自动新建
       *
       * @param request SaveWorkspaceCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveWorkspaceCodeResponse
       */
      Models::SaveWorkspaceCodeResponse saveWorkspaceCodeWithOptions(const Models::SaveWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存工作空间代码，如果文件不存在则自动新建
       *
       * @param request SaveWorkspaceCodeRequest
       * @return SaveWorkspaceCodeResponse
       */
      Models::SaveWorkspaceCodeResponse saveWorkspaceCode(const Models::SaveWorkspaceCodeRequest &request);

      /**
       * @summary SendChatMessage
       *
       * @param tmpReq SendChatMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatMessageResponse
       */
      Models::SendChatMessageResponse sendChatMessageWithOptions(const Models::SendChatMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SendChatMessage
       *
       * @param request SendChatMessageRequest
       * @return SendChatMessageResponse
       */
      Models::SendChatMessageResponse sendChatMessage(const Models::SendChatMessageRequest &request);

      /**
       * @summary 设置工作空间代码发布配置
       *
       * @param request SetWorkspaceCodePublishSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWorkspaceCodePublishSettingResponse
       */
      Models::SetWorkspaceCodePublishSettingResponse setWorkspaceCodePublishSettingWithOptions(const Models::SetWorkspaceCodePublishSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置工作空间代码发布配置
       *
       * @param request SetWorkspaceCodePublishSettingRequest
       * @return SetWorkspaceCodePublishSettingResponse
       */
      Models::SetWorkspaceCodePublishSettingResponse setWorkspaceCodePublishSetting(const Models::SetWorkspaceCodePublishSettingRequest &request);

      /**
       * @summary 设置工作空间配额
       *
       * @param request SetWorkspaceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWorkspaceQuotaResponse
       */
      Models::SetWorkspaceQuotaResponse setWorkspaceQuotaWithOptions(const Models::SetWorkspaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置工作空间配额
       *
       * @param request SetWorkspaceQuotaRequest
       * @return SetWorkspaceQuotaResponse
       */
      Models::SetWorkspaceQuotaResponse setWorkspaceQuota(const Models::SetWorkspaceQuotaRequest &request);

      /**
       * @summary 更新UpdateAirflow
       *
       * @param tmpReq UpdateAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAirflowResponse
       */
      Models::UpdateAirflowResponse updateAirflowWithOptions(const Models::UpdateAirflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新UpdateAirflow
       *
       * @param request UpdateAirflowRequest
       * @return UpdateAirflowResponse
       */
      Models::UpdateAirflowResponse updateAirflow(const Models::UpdateAirflowRequest &request);

      /**
       * @summary 更新空间的信息
       *
       * @param request UpdateDataAgentSpaceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataAgentSpaceInfoResponse
       */
      Models::UpdateDataAgentSpaceInfoResponse updateDataAgentSpaceInfoWithOptions(const Models::UpdateDataAgentSpaceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新空间的信息
       *
       * @param request UpdateDataAgentSpaceInfoRequest
       * @return UpdateDataAgentSpaceInfoResponse
       */
      Models::UpdateDataAgentSpaceInfoResponse updateDataAgentSpaceInfo(const Models::UpdateDataAgentSpaceInfoRequest &request);

      /**
       * @summary 调整空间成员的角色
       *
       * @param request UpdateDataAgentWorkspaceMemberRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataAgentWorkspaceMemberRoleResponse
       */
      Models::UpdateDataAgentWorkspaceMemberRoleResponse updateDataAgentWorkspaceMemberRoleWithOptions(const Models::UpdateDataAgentWorkspaceMemberRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调整空间成员的角色
       *
       * @param request UpdateDataAgentWorkspaceMemberRoleRequest
       * @return UpdateDataAgentWorkspaceMemberRoleResponse
       */
      Models::UpdateDataAgentWorkspaceMemberRoleResponse updateDataAgentWorkspaceMemberRole(const Models::UpdateDataAgentWorkspaceMemberRoleRequest &request);

      /**
       * @summary 更新湖仓数据库
       *
       * @param tmpReq UpdateDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeDatabaseResponse
       */
      Models::UpdateDataLakeDatabaseResponse updateDataLakeDatabaseWithOptions(const Models::UpdateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新湖仓数据库
       *
       * @param request UpdateDataLakeDatabaseRequest
       * @return UpdateDataLakeDatabaseResponse
       */
      Models::UpdateDataLakeDatabaseResponse updateDataLakeDatabase(const Models::UpdateDataLakeDatabaseRequest &request);

      /**
       * @summary 更新湖仓自定义函数
       *
       * @param tmpReq UpdateDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeFunctionResponse
       */
      Models::UpdateDataLakeFunctionResponse updateDataLakeFunctionWithOptions(const Models::UpdateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新湖仓自定义函数
       *
       * @param request UpdateDataLakeFunctionRequest
       * @return UpdateDataLakeFunctionResponse
       */
      Models::UpdateDataLakeFunctionResponse updateDataLakeFunction(const Models::UpdateDataLakeFunctionRequest &request);

      /**
       * @summary 更新湖仓表分区
       *
       * @param tmpReq UpdateDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakePartitionResponse
       */
      Models::UpdateDataLakePartitionResponse updateDataLakePartitionWithOptions(const Models::UpdateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新湖仓表分区
       *
       * @param request UpdateDataLakePartitionRequest
       * @return UpdateDataLakePartitionResponse
       */
      Models::UpdateDataLakePartitionResponse updateDataLakePartition(const Models::UpdateDataLakePartitionRequest &request);

      /**
       * @summary 更新湖仓表信息
       *
       * @param tmpReq UpdateDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeTableResponse
       */
      Models::UpdateDataLakeTableResponse updateDataLakeTableWithOptions(const Models::UpdateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新湖仓表信息
       *
       * @param request UpdateDataLakeTableRequest
       * @return UpdateDataLakeTableResponse
       */
      Models::UpdateDataLakeTableResponse updateDataLakeTable(const Models::UpdateDataLakeTableRequest &request);

      /**
       * @summary 更新文档
       *
       * @param request UpdateDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDocumentResponse
       */
      Models::UpdateDocumentResponse updateDocumentWithOptions(const Models::UpdateDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新文档
       *
       * @param request UpdateDocumentRequest
       * @return UpdateDocumentResponse
       */
      Models::UpdateDocumentResponse updateDocument(const Models::UpdateDocumentRequest &request);

      /**
       * @summary 更新onemeta3.0的知识库
       *
       * @param request UpdateKnowledgeBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBaseWithOptions(const Models::UpdateKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新onemeta3.0的知识库
       *
       * @param request UpdateKnowledgeBaseRequest
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBase(const Models::UpdateKnowledgeBaseRequest &request);

      /**
       * @summary 上传文档
       *
       * @param tmpReq UploadDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDocumentResponse
       */
      Models::UploadDocumentResponse uploadDocumentWithOptions(const Models::UploadDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传文档
       *
       * @param request UploadDocumentRequest
       * @return UploadDocumentResponse
       */
      Models::UploadDocumentResponse uploadDocument(const Models::UploadDocumentRequest &request);

      /**
       * @summary 更新或插入onemeta3.0的知识库chunks
       *
       * @param request UpsertDocumentChunksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertDocumentChunksResponse
       */
      Models::UpsertDocumentChunksResponse upsertDocumentChunksWithOptions(const Models::UpsertDocumentChunksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新或插入onemeta3.0的知识库chunks
       *
       * @param request UpsertDocumentChunksRequest
       * @return UpsertDocumentChunksResponse
       */
      Models::UpsertDocumentChunksResponse upsertDocumentChunks(const Models::UpsertDocumentChunksRequest &request);

      /**
       * @summary 工作空间异步操作日志查询接口
       *
       * @param request WorkspaceActionLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WorkspaceActionLogResponse
       */
      Models::WorkspaceActionLogResponse workspaceActionLogWithOptions(const Models::WorkspaceActionLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工作空间异步操作日志查询接口
       *
       * @param request WorkspaceActionLogRequest
       * @return WorkspaceActionLogResponse
       */
      Models::WorkspaceActionLogResponse workspaceActionLog(const Models::WorkspaceActionLogRequest &request);

      /**
       * @summary 工作空间异步操作状态查询接口
       *
       * @param request WorkspaceActionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WorkspaceActionStatusResponse
       */
      Models::WorkspaceActionStatusResponse workspaceActionStatusWithOptions(const Models::WorkspaceActionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工作空间异步操作状态查询接口
       *
       * @param request WorkspaceActionStatusRequest
       * @return WorkspaceActionStatusResponse
       */
      Models::WorkspaceActionStatusResponse workspaceActionStatus(const Models::WorkspaceActionStatusRequest &request);

      /**
       * @summary 工作空间代码发布。这是个异步接口，请求返回一个key，请根据key查询 WorkspaceActionStatus接口获取状态
       *
       * @param request WorkspaceCodePublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WorkspaceCodePublishResponse
       */
      Models::WorkspaceCodePublishResponse workspaceCodePublishWithOptions(const Models::WorkspaceCodePublishRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工作空间代码发布。这是个异步接口，请求返回一个key，请根据key查询 WorkspaceActionStatus接口获取状态
       *
       * @param request WorkspaceCodePublishRequest
       * @return WorkspaceCodePublishResponse
       */
      Models::WorkspaceCodePublishResponse workspaceCodePublish(const Models::WorkspaceCodePublishRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
