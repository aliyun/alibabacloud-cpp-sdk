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
       * @summary Adds a user to a specified workspace.
       *
       * @param request AddUserToDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToDataAgentWorkspaceResponse
       */
      Models::AddUserToDataAgentWorkspaceResponse addUserToDataAgentWorkspaceWithOptions(const Models::AddUserToDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user to a specified workspace.
       *
       * @param request AddUserToDataAgentWorkspaceRequest
       * @return AddUserToDataAgentWorkspaceResponse
       */
      Models::AddUserToDataAgentWorkspaceResponse addUserToDataAgentWorkspace(const Models::AddUserToDataAgentWorkspaceRequest &request);

      /**
       * @summary Creates partitions for a data lake table in a batch.
       *
       * @param tmpReq BatchCreateDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateDataLakePartitionsResponse
       */
      Models::BatchCreateDataLakePartitionsResponse batchCreateDataLakePartitionsWithOptions(const Models::BatchCreateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates partitions for a data lake table in a batch.
       *
       * @param request BatchCreateDataLakePartitionsRequest
       * @return BatchCreateDataLakePartitionsResponse
       */
      Models::BatchCreateDataLakePartitionsResponse batchCreateDataLakePartitions(const Models::BatchCreateDataLakePartitionsRequest &request);

      /**
       * @summary Batch deletes partitions from a data lake table.
       *
       * @param request BatchDeleteDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDataLakePartitionsResponse
       */
      Models::BatchDeleteDataLakePartitionsResponse batchDeleteDataLakePartitionsWithOptions(const Models::BatchDeleteDataLakePartitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch deletes partitions from a data lake table.
       *
       * @param request BatchDeleteDataLakePartitionsRequest
       * @return BatchDeleteDataLakePartitionsResponse
       */
      Models::BatchDeleteDataLakePartitionsResponse batchDeleteDataLakePartitions(const Models::BatchDeleteDataLakePartitionsRequest &request);

      /**
       * @summary Update partitions in a data lake table in batch.
       *
       * @param tmpReq BatchUpdateDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateDataLakePartitionsResponse
       */
      Models::BatchUpdateDataLakePartitionsResponse batchUpdateDataLakePartitionsWithOptions(const Models::BatchUpdateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update partitions in a data lake table in batch.
       *
       * @param request BatchUpdateDataLakePartitionsRequest
       * @return BatchUpdateDataLakePartitionsResponse
       */
      Models::BatchUpdateDataLakePartitionsResponse batchUpdateDataLakePartitions(const Models::BatchUpdateDataLakePartitionsRequest &request);

      /**
       * @summary Update an Airflow instance\\"s custom configuration
       *
       * @description Configure the airflow\\.cfg file for DMS Airflow.
       *
       * @param tmpReq ConfigAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigAirflowResponse
       */
      Models::ConfigAirflowResponse configAirflowWithOptions(const Models::ConfigAirflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update an Airflow instance\\"s custom configuration
       *
       * @description Configure the airflow\\.cfg file for DMS Airflow.
       *
       * @param request ConfigAirflowRequest
       * @return ConfigAirflowResponse
       */
      Models::ConfigAirflowResponse configAirflow(const Models::ConfigAirflowRequest &request);

      /**
       * @summary Creates an Airflow instance in a workspace.
       *
       * @description Creates an Airflow instance in a workspace.
       *
       * @param tmpReq CreateAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAirflowResponse
       */
      Models::CreateAirflowResponse createAirflowWithOptions(const Models::CreateAirflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Airflow instance in a workspace.
       *
       * @description Creates an Airflow instance in a workspace.
       *
       * @param request CreateAirflowRequest
       * @return CreateAirflowResponse
       */
      Models::CreateAirflowResponse createAirflow(const Models::CreateAirflowRequest &request);

      /**
       * @summary Obtains logon credentials for an Airflow instance hosted by Data Management Service (DMS). Use the returned token and host endpoint to construct a logon URL for the Airflow web UI.
       *
       * @param request CreateAirflowLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAirflowLoginTokenResponse
       */
      Models::CreateAirflowLoginTokenResponse createAirflowLoginTokenWithOptions(const Models::CreateAirflowLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains logon credentials for an Airflow instance hosted by Data Management Service (DMS). Use the returned token and host endpoint to construct a logon URL for the Airflow web UI.
       *
       * @param request CreateAirflowLoginTokenRequest
       * @return CreateAirflowLoginTokenResponse
       */
      Models::CreateAirflowLoginTokenResponse createAirflowLoginToken(const Models::CreateAirflowLoginTokenRequest &request);

      /**
       * @summary Create a custom agent in your personal space or a workspace.
       *
       * @param tmpReq CreateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgentWithOptions(const Models::CreateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a custom agent in your personal space or a workspace.
       *
       * @param request CreateCustomAgentRequest
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgent(const Models::CreateCustomAgentRequest &request);

      /**
       * @summary Creates a DataAgent knowledge base. The knowledge base creator has read and write permissions. Other workspace members have permission to use it.
       *
       * @param request CreateDataAgentKnowledgeBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataAgentKnowledgeBaseResponse
       */
      Models::CreateDataAgentKnowledgeBaseResponse createDataAgentKnowledgeBaseWithOptions(const Models::CreateDataAgentKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a DataAgent knowledge base. The knowledge base creator has read and write permissions. Other workspace members have permission to use it.
       *
       * @param request CreateDataAgentKnowledgeBaseRequest
       * @return CreateDataAgentKnowledgeBaseResponse
       */
      Models::CreateDataAgentKnowledgeBaseResponse createDataAgentKnowledgeBase(const Models::CreateDataAgentKnowledgeBaseRequest &request);

      /**
       * @summary Create a DataAgent session
       *
       * @param tmpReq CreateDataAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataAgentSessionResponse
       */
      Models::CreateDataAgentSessionResponse createDataAgentSessionWithOptions(const Models::CreateDataAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a DataAgent session
       *
       * @param request CreateDataAgentSessionRequest
       * @return CreateDataAgentSessionResponse
       */
      Models::CreateDataAgentSessionResponse createDataAgentSession(const Models::CreateDataAgentSessionRequest &request);

      /**
       * @summary Creates a DataAgent workspace.
       *
       * @param request CreateDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataAgentWorkspaceResponse
       */
      Models::CreateDataAgentWorkspaceResponse createDataAgentWorkspaceWithOptions(const Models::CreateDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a DataAgent workspace.
       *
       * @param request CreateDataAgentWorkspaceRequest
       * @return CreateDataAgentWorkspaceResponse
       */
      Models::CreateDataAgentWorkspaceResponse createDataAgentWorkspace(const Models::CreateDataAgentWorkspaceRequest &request);

      /**
       * @summary Creates a data lake database.
       *
       * @param tmpReq CreateDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeDatabaseResponse
       */
      Models::CreateDataLakeDatabaseResponse createDataLakeDatabaseWithOptions(const Models::CreateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data lake database.
       *
       * @param request CreateDataLakeDatabaseRequest
       * @return CreateDataLakeDatabaseResponse
       */
      Models::CreateDataLakeDatabaseResponse createDataLakeDatabase(const Models::CreateDataLakeDatabaseRequest &request);

      /**
       * @summary Creates a user-defined function (UDF) for a data lake.
       *
       * @param tmpReq CreateDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeFunctionResponse
       */
      Models::CreateDataLakeFunctionResponse createDataLakeFunctionWithOptions(const Models::CreateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user-defined function (UDF) for a data lake.
       *
       * @param request CreateDataLakeFunctionRequest
       * @return CreateDataLakeFunctionResponse
       */
      Models::CreateDataLakeFunctionResponse createDataLakeFunction(const Models::CreateDataLakeFunctionRequest &request);

      /**
       * @summary Creates a partition for a data lake table.
       *
       * @param tmpReq CreateDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakePartitionResponse
       */
      Models::CreateDataLakePartitionResponse createDataLakePartitionWithOptions(const Models::CreateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a partition for a data lake table.
       *
       * @param request CreateDataLakePartitionRequest
       * @return CreateDataLakePartitionResponse
       */
      Models::CreateDataLakePartitionResponse createDataLakePartition(const Models::CreateDataLakePartitionRequest &request);

      /**
       * @summary Creates a data lake table in Data Management (DMS).
       *
       * @param tmpReq CreateDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeTableResponse
       */
      Models::CreateDataLakeTableResponse createDataLakeTableWithOptions(const Models::CreateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data lake table in Data Management (DMS).
       *
       * @param request CreateDataLakeTableRequest
       * @return CreateDataLakeTableResponse
       */
      Models::CreateDataLakeTableResponse createDataLakeTable(const Models::CreateDataLakeTableRequest &request);

      /**
       * @summary Deletes an Airflow instance.
       *
       * @param request DeleteAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAirflowResponse
       */
      Models::DeleteAirflowResponse deleteAirflowWithOptions(const Models::DeleteAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Airflow instance.
       *
       * @param request DeleteAirflowRequest
       * @return DeleteAirflowResponse
       */
      Models::DeleteAirflowResponse deleteAirflow(const Models::DeleteAirflowRequest &request);

      /**
       * @summary Delete a custom agent in your personal workspace or a shared workspace. Note: Only custom agents that are newly created or offline can be deleted.
       *
       * @param request DeleteCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgentWithOptions(const Models::DeleteCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a custom agent in your personal workspace or a shared workspace. Note: Only custom agents that are newly created or offline can be deleted.
       *
       * @param request DeleteCustomAgentRequest
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgent(const Models::DeleteCustomAgentRequest &request);

      /**
       * @summary Deletes a DataAgent knowledge base.
       *
       * @param request DeleteDataAgentKnowledgeBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataAgentKnowledgeBaseResponse
       */
      Models::DeleteDataAgentKnowledgeBaseResponse deleteDataAgentKnowledgeBaseWithOptions(const Models::DeleteDataAgentKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DataAgent knowledge base.
       *
       * @param request DeleteDataAgentKnowledgeBaseRequest
       * @return DeleteDataAgentKnowledgeBaseResponse
       */
      Models::DeleteDataAgentKnowledgeBaseResponse deleteDataAgentKnowledgeBase(const Models::DeleteDataAgentKnowledgeBaseRequest &request);

      /**
       * @summary Deletes a DataAgent workspace.
       *
       * @param request DeleteDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataAgentWorkspaceResponse
       */
      Models::DeleteDataAgentWorkspaceResponse deleteDataAgentWorkspaceWithOptions(const Models::DeleteDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DataAgent workspace.
       *
       * @param request DeleteDataAgentWorkspaceRequest
       * @return DeleteDataAgentWorkspaceResponse
       */
      Models::DeleteDataAgentWorkspaceResponse deleteDataAgentWorkspace(const Models::DeleteDataAgentWorkspaceRequest &request);

      /**
       * @summary Deletes a data lake database.
       *
       * @param request DeleteDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeDatabaseResponse
       */
      Models::DeleteDataLakeDatabaseResponse deleteDataLakeDatabaseWithOptions(const Models::DeleteDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data lake database.
       *
       * @param request DeleteDataLakeDatabaseRequest
       * @return DeleteDataLakeDatabaseResponse
       */
      Models::DeleteDataLakeDatabaseResponse deleteDataLakeDatabase(const Models::DeleteDataLakeDatabaseRequest &request);

      /**
       * @summary Deletes a user-defined function in a data lake.
       *
       * @param request DeleteDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeFunctionResponse
       */
      Models::DeleteDataLakeFunctionResponse deleteDataLakeFunctionWithOptions(const Models::DeleteDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user-defined function in a data lake.
       *
       * @param request DeleteDataLakeFunctionRequest
       * @return DeleteDataLakeFunctionResponse
       */
      Models::DeleteDataLakeFunctionResponse deleteDataLakeFunction(const Models::DeleteDataLakeFunctionRequest &request);

      /**
       * @summary Deletes a partition from a data lake table.
       *
       * @param tmpReq DeleteDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakePartitionResponse
       */
      Models::DeleteDataLakePartitionResponse deleteDataLakePartitionWithOptions(const Models::DeleteDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a partition from a data lake table.
       *
       * @param request DeleteDataLakePartitionRequest
       * @return DeleteDataLakePartitionResponse
       */
      Models::DeleteDataLakePartitionResponse deleteDataLakePartition(const Models::DeleteDataLakePartitionRequest &request);

      /**
       * @summary Deletes a data lake table.
       *
       * @param request DeleteDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeTableResponse
       */
      Models::DeleteDataLakeTableResponse deleteDataLakeTableWithOptions(const Models::DeleteDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data lake table.
       *
       * @param request DeleteDataLakeTableRequest
       * @return DeleteDataLakeTableResponse
       */
      Models::DeleteDataLakeTableResponse deleteDataLakeTable(const Models::DeleteDataLakeTableRequest &request);

      /**
       * @summary Deletes a document from a specified knowledge base.
       *
       * @param request DeleteDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocumentWithOptions(const Models::DeleteDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a document from a specified knowledge base.
       *
       * @param request DeleteDocumentRequest
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocument(const Models::DeleteDocumentRequest &request);

      /**
       * @summary Deletes chunks from a document in a knowledge base.
       *
       * @param tmpReq DeleteDocumentChunksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentChunksResponse
       */
      Models::DeleteDocumentChunksResponse deleteDocumentChunksWithOptions(const Models::DeleteDocumentChunksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes chunks from a document in a knowledge base.
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
       * @summary Deletes a code file or directory from a workspace.
       *
       * @description This operation permanently removes a specified code file or directory.
       *
       * @param request DeleteWorkspaceCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceCodeResponse
       */
      Models::DeleteWorkspaceCodeResponse deleteWorkspaceCodeWithOptions(const Models::DeleteWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a code file or directory from a workspace.
       *
       * @description This operation permanently removes a specified code file or directory.
       *
       * @param request DeleteWorkspaceCodeRequest
       * @return DeleteWorkspaceCodeResponse
       */
      Models::DeleteWorkspaceCodeResponse deleteWorkspaceCode(const Models::DeleteWorkspaceCodeRequest &request);

      /**
       * @summary `DescribeCustomAgent` retrieves the details of a custom agent by its agent ID.
       *
       * @param request DescribeCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomAgentResponse
       */
      Models::DescribeCustomAgentResponse describeCustomAgentWithOptions(const Models::DescribeCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary `DescribeCustomAgent` retrieves the details of a custom agent by its agent ID.
       *
       * @param request DescribeCustomAgentRequest
       * @return DescribeCustomAgentResponse
       */
      Models::DescribeCustomAgentResponse describeCustomAgent(const Models::DescribeCustomAgentRequest &request);

      /**
       * @summary Gets the details of a DataAgent session.
       *
       * @param request DescribeDataAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataAgentSessionResponse
       */
      Models::DescribeDataAgentSessionResponse describeDataAgentSessionWithOptions(const Models::DescribeDataAgentSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a DataAgent session.
       *
       * @param request DescribeDataAgentSessionRequest
       * @return DescribeDataAgentSessionResponse
       */
      Models::DescribeDataAgentSessionResponse describeDataAgentSession(const Models::DescribeDataAgentSessionRequest &request);

      /**
       * @summary Retrieves the details of a specific document.
       *
       * @param request DescribeDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocumentResponse
       */
      Models::DescribeDocumentResponse describeDocumentWithOptions(const Models::DescribeDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific document.
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
       * @summary Retrieves the statistics of a knowledge base.
       *
       * @param request DescribeKnowledgeBaseStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKnowledgeBaseStatsResponse
       */
      Models::DescribeKnowledgeBaseStatsResponse describeKnowledgeBaseStatsWithOptions(const Models::DescribeKnowledgeBaseStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the statistics of a knowledge base.
       *
       * @param request DescribeKnowledgeBaseStatsRequest
       * @return DescribeKnowledgeBaseStatsResponse
       */
      Models::DescribeKnowledgeBaseStatsResponse describeKnowledgeBaseStats(const Models::DescribeKnowledgeBaseStatsRequest &request);

      /**
       * @summary Generates a signature to upload a document to a knowledge base.
       *
       * @param request DescribeKnowledgeBaseUploadSignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKnowledgeBaseUploadSignatureResponse
       */
      Models::DescribeKnowledgeBaseUploadSignatureResponse describeKnowledgeBaseUploadSignatureWithOptions(const Models::DescribeKnowledgeBaseUploadSignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a signature to upload a document to a knowledge base.
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
       * @summary Queries the configuration and status of an Airflow instance.
       *
       * @param request GetAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAirflowResponse
       */
      Models::GetAirflowResponse getAirflowWithOptions(const Models::GetAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration and status of an Airflow instance.
       *
       * @param request GetAirflowRequest
       * @return GetAirflowResponse
       */
      Models::GetAirflowResponse getAirflow(const Models::GetAirflowRequest &request);

      /**
       * @summary Retrieves chat content from a specific checkpoint by specifying a session ID and an agent ID.
       *
       * @description ## Request
       * - The response is an SSE stream. Each event follows the`SSEEvent` schema and includes metadata, such as the message level.
       * - The `content` field contains either message text or a JSON object, as determined by the `content_type` field.
       *
       * @param request GetChatContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatContentResponse
       */
      FutureGenerator<Models::GetChatContentResponse> getChatContentWithSSE(const Models::GetChatContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves chat content from a specific checkpoint by specifying a session ID and an agent ID.
       *
       * @description ## Request
       * - The response is an SSE stream. Each event follows the`SSEEvent` schema and includes metadata, such as the message level.
       * - The `content` field contains either message text or a JSON object, as determined by the `content_type` field.
       *
       * @param request GetChatContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatContentResponse
       */
      Models::GetChatContentResponse getChatContentWithOptions(const Models::GetChatContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves chat content from a specific checkpoint by specifying a session ID and an agent ID.
       *
       * @description ## Request
       * - The response is an SSE stream. Each event follows the`SSEEvent` schema and includes metadata, such as the message level.
       * - The `content` field contains either message text or a JSON object, as determined by the `content_type` field.
       *
       * @param request GetChatContentRequest
       * @return GetChatContentResponse
       */
      Models::GetChatContentResponse getChatContent(const Models::GetChatContentRequest &request);

      /**
       * @summary Retrieves information about a RAM user that belongs to an Alibaba Cloud account.
       *
       * @param request GetDataAgentSubAccountInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataAgentSubAccountInfoResponse
       */
      Models::GetDataAgentSubAccountInfoResponse getDataAgentSubAccountInfoWithOptions(const Models::GetDataAgentSubAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a RAM user that belongs to an Alibaba Cloud account.
       *
       * @param request GetDataAgentSubAccountInfoRequest
       * @return GetDataAgentSubAccountInfoResponse
       */
      Models::GetDataAgentSubAccountInfoResponse getDataAgentSubAccountInfo(const Models::GetDataAgentSubAccountInfoRequest &request);

      /**
       * @summary Retrieves workspace details.
       *
       * @param request GetDataAgentWorkspaceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataAgentWorkspaceInfoResponse
       */
      Models::GetDataAgentWorkspaceInfoResponse getDataAgentWorkspaceInfoWithOptions(const Models::GetDataAgentWorkspaceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves workspace details.
       *
       * @param request GetDataAgentWorkspaceInfoRequest
       * @return GetDataAgentWorkspaceInfoResponse
       */
      Models::GetDataAgentWorkspaceInfoResponse getDataAgentWorkspaceInfo(const Models::GetDataAgentWorkspaceInfoRequest &request);

      /**
       * @summary Retrieves the data catalog of a data lake.
       *
       * @param request GetDataLakeCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeCatalogResponse
       */
      Models::GetDataLakeCatalogResponse getDataLakeCatalogWithOptions(const Models::GetDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the data catalog of a data lake.
       *
       * @param request GetDataLakeCatalogRequest
       * @return GetDataLakeCatalogResponse
       */
      Models::GetDataLakeCatalogResponse getDataLakeCatalog(const Models::GetDataLakeCatalogRequest &request);

      /**
       * @summary Retrieves information about a database in a data lake.
       *
       * @param request GetDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeDatabaseResponse
       */
      Models::GetDataLakeDatabaseResponse getDataLakeDatabaseWithOptions(const Models::GetDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a database in a data lake.
       *
       * @param request GetDataLakeDatabaseRequest
       * @return GetDataLakeDatabaseResponse
       */
      Models::GetDataLakeDatabaseResponse getDataLakeDatabase(const Models::GetDataLakeDatabaseRequest &request);

      /**
       * @summary Retrieves the details of a user-defined function in a data lake.
       *
       * @param request GetDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeFunctionResponse
       */
      Models::GetDataLakeFunctionResponse getDataLakeFunctionWithOptions(const Models::GetDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a user-defined function in a data lake.
       *
       * @param request GetDataLakeFunctionRequest
       * @return GetDataLakeFunctionResponse
       */
      Models::GetDataLakeFunctionResponse getDataLakeFunction(const Models::GetDataLakeFunctionRequest &request);

      /**
       * @summary Retrieves the details of a data lakehouse table partition.
       *
       * @param tmpReq GetDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakePartitionResponse
       */
      Models::GetDataLakePartitionResponse getDataLakePartitionWithOptions(const Models::GetDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data lakehouse table partition.
       *
       * @param request GetDataLakePartitionRequest
       * @return GetDataLakePartitionResponse
       */
      Models::GetDataLakePartitionResponse getDataLakePartition(const Models::GetDataLakePartitionRequest &request);

      /**
       * @summary Retrieves information about a table in a data lake.
       *
       * @param request GetDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeTableResponse
       */
      Models::GetDataLakeTableResponse getDataLakeTableWithOptions(const Models::GetDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a table in a data lake.
       *
       * @param request GetDataLakeTableRequest
       * @return GetDataLakeTableResponse
       */
      Models::GetDataLakeTableResponse getDataLakeTable(const Models::GetDataLakeTableRequest &request);

      /**
       * @summary Submits a task to schedule and run a Notebook file.
       *
       * @param request GetNotebookAndSubmitTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotebookAndSubmitTaskResponse
       */
      Models::GetNotebookAndSubmitTaskResponse getNotebookAndSubmitTaskWithOptions(const Models::GetNotebookAndSubmitTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a task to schedule and run a Notebook file.
       *
       * @param request GetNotebookAndSubmitTaskRequest
       * @return GetNotebookAndSubmitTaskResponse
       */
      Models::GetNotebookAndSubmitTaskResponse getNotebookAndSubmitTask(const Models::GetNotebookAndSubmitTaskRequest &request);

      /**
       * @summary Retrieves the execution status of a Notebook task.
       *
       * @param request GetNotebookTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNotebookTaskStatusResponse
       */
      Models::GetNotebookTaskStatusResponse getNotebookTaskStatusWithOptions(const Models::GetNotebookTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the execution status of a Notebook task.
       *
       * @param request GetNotebookTaskStatusRequest
       * @return GetNotebookTaskStatusResponse
       */
      Models::GetNotebookTaskStatusResponse getNotebookTaskStatus(const Models::GetNotebookTaskStatusRequest &request);

      /**
       * @summary Reads the content of a code file in the workspace and returns the file content along with mtime (in the header).
       *
       * @description Obtains the resource configuration limit information and the instance purchase status of the workspace.
       *
       * @param request GetWorkspaceCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceCodeResponse
       */
      Models::GetWorkspaceCodeResponse getWorkspaceCodeWithOptions(const Models::GetWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reads the content of a code file in the workspace and returns the file content along with mtime (in the header).
       *
       * @description Obtains the resource configuration limit information and the instance purchase status of the workspace.
       *
       * @param request GetWorkspaceCodeRequest
       * @return GetWorkspaceCodeResponse
       */
      Models::GetWorkspaceCodeResponse getWorkspaceCode(const Models::GetWorkspaceCodeRequest &request);

      /**
       * @summary Retrieves the deployment configuration of a workspace.
       *
       * @description This operation retrieves the deployment configuration of a workspace. The configuration includes details such as repository and branch information, and directories to exclude.
       *
       * @param request GetWorkspaceCodePublishSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceCodePublishSettingResponse
       */
      Models::GetWorkspaceCodePublishSettingResponse getWorkspaceCodePublishSettingWithOptions(const Models::GetWorkspaceCodePublishSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the deployment configuration of a workspace.
       *
       * @description This operation retrieves the deployment configuration of a workspace. The configuration includes details such as repository and branch information, and directories to exclude.
       *
       * @param request GetWorkspaceCodePublishSettingRequest
       * @return GetWorkspaceCodePublishSettingResponse
       */
      Models::GetWorkspaceCodePublishSettingResponse getWorkspaceCodePublishSetting(const Models::GetWorkspaceCodePublishSettingRequest &request);

      /**
       * @summary Returns the quota for a workspace.
       *
       * @description Retrieves the resource quotas and instance status for a workspace.
       *
       * @param request GetWorkspaceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceQuotaResponse
       */
      Models::GetWorkspaceQuotaResponse getWorkspaceQuotaWithOptions(const Models::GetWorkspaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the quota for a workspace.
       *
       * @description Retrieves the resource quotas and instance status for a workspace.
       *
       * @param request GetWorkspaceQuotaRequest
       * @return GetWorkspaceQuotaResponse
       */
      Models::GetWorkspaceQuotaResponse getWorkspaceQuota(const Models::GetWorkspaceQuotaRequest &request);

      /**
       * @summary Lists the available Airflow versions.
       *
       * @description Lists the available Airflow versions.
       *
       * @param request ListAirflowVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAirflowVersionsResponse
       */
      Models::ListAirflowVersionsResponse listAirflowVersionsWithOptions(const Models::ListAirflowVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available Airflow versions.
       *
       * @description Lists the available Airflow versions.
       *
       * @param request ListAirflowVersionsRequest
       * @return ListAirflowVersionsResponse
       */
      Models::ListAirflowVersionsResponse listAirflowVersions(const Models::ListAirflowVersionsRequest &request);

      /**
       * @summary Retrieves a list of Airflow instances in a workspace.
       *
       * @param request ListAirflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAirflowsResponse
       */
      Models::ListAirflowsResponse listAirflowsWithOptions(const Models::ListAirflowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of Airflow instances in a workspace.
       *
       * @param request ListAirflowsRequest
       * @return ListAirflowsResponse
       */
      Models::ListAirflowsResponse listAirflows(const Models::ListAirflowsRequest &request);

      /**
       * @summary ListCustomAgent returns a list of all custom agents from the personal space and workspaces.
       *
       * @param request ListCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgentWithOptions(const Models::ListCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListCustomAgent returns a list of all custom agents from the personal space and workspaces.
       *
       * @param request ListCustomAgentRequest
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgent(const Models::ListCustomAgentRequest &request);

      /**
       * @summary Retrieve a list of Data Agent session descriptions.
       *
       * @param request ListDataAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAgentSessionResponse
       */
      Models::ListDataAgentSessionResponse listDataAgentSessionWithOptions(const Models::ListDataAgentSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a list of Data Agent session descriptions.
       *
       * @param request ListDataAgentSessionRequest
       * @return ListDataAgentSessionResponse
       */
      Models::ListDataAgentSessionResponse listDataAgentSession(const Models::ListDataAgentSessionRequest &request);

      /**
       * @summary Retrieves paginated collaboration workspaces for an Alibaba Cloud account.
       *
       * @param request ListDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAgentWorkspaceResponse
       */
      Models::ListDataAgentWorkspaceResponse listDataAgentWorkspaceWithOptions(const Models::ListDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves paginated collaboration workspaces for an Alibaba Cloud account.
       *
       * @param request ListDataAgentWorkspaceRequest
       * @return ListDataAgentWorkspaceResponse
       */
      Models::ListDataAgentWorkspaceResponse listDataAgentWorkspace(const Models::ListDataAgentWorkspaceRequest &request);

      /**
       * @summary Lists all members in a workspace.
       *
       * @param request ListDataAgentWorkspaceMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAgentWorkspaceMemberResponse
       */
      Models::ListDataAgentWorkspaceMemberResponse listDataAgentWorkspaceMemberWithOptions(const Models::ListDataAgentWorkspaceMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all members in a workspace.
       *
       * @param request ListDataAgentWorkspaceMemberRequest
       * @return ListDataAgentWorkspaceMemberResponse
       */
      Models::ListDataAgentWorkspaceMemberResponse listDataAgentWorkspaceMember(const Models::ListDataAgentWorkspaceMemberRequest &request);

      /**
       * @summary Lists user-uploaded files in a data center, excluding databases.
       *
       * @param request ListDataCenterDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataCenterDatabaseResponse
       */
      Models::ListDataCenterDatabaseResponse listDataCenterDatabaseWithOptions(const Models::ListDataCenterDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists user-uploaded files in a data center, excluding databases.
       *
       * @param request ListDataCenterDatabaseRequest
       * @return ListDataCenterDatabaseResponse
       */
      Models::ListDataCenterDatabaseResponse listDataCenterDatabase(const Models::ListDataCenterDatabaseRequest &request);

      /**
       * @summary Retrieves a list of user-uploaded tables from the data center, for file types only.
       *
       * @param request ListDataCenterTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataCenterTableResponse
       */
      Models::ListDataCenterTableResponse listDataCenterTableWithOptions(const Models::ListDataCenterTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of user-uploaded tables from the data center, for file types only.
       *
       * @param request ListDataCenterTableRequest
       * @return ListDataCenterTableResponse
       */
      Models::ListDataCenterTableResponse listDataCenterTable(const Models::ListDataCenterTableRequest &request);

      /**
       * @summary Retrieves a list of data lake catalogs.
       *
       * @param request ListDataLakeCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeCatalogResponse
       */
      Models::ListDataLakeCatalogResponse listDataLakeCatalogWithOptions(const Models::ListDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data lake catalogs.
       *
       * @param request ListDataLakeCatalogRequest
       * @return ListDataLakeCatalogResponse
       */
      Models::ListDataLakeCatalogResponse listDataLakeCatalog(const Models::ListDataLakeCatalogRequest &request);

      /**
       * @summary Retrieves a list of databases in a data lake.
       *
       * @param request ListDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeDatabaseResponse
       */
      Models::ListDataLakeDatabaseResponse listDataLakeDatabaseWithOptions(const Models::ListDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of databases in a data lake.
       *
       * @param request ListDataLakeDatabaseRequest
       * @return ListDataLakeDatabaseResponse
       */
      Models::ListDataLakeDatabaseResponse listDataLakeDatabase(const Models::ListDataLakeDatabaseRequest &request);

      /**
       * @summary Retrieves a list of data lake functions.
       *
       * @param request ListDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeFunctionResponse
       */
      Models::ListDataLakeFunctionResponse listDataLakeFunctionWithOptions(const Models::ListDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data lake functions.
       *
       * @param request ListDataLakeFunctionRequest
       * @return ListDataLakeFunctionResponse
       */
      Models::ListDataLakeFunctionResponse listDataLakeFunction(const Models::ListDataLakeFunctionRequest &request);

      /**
       * @summary Retrieves a list of data lake function names.
       *
       * @param request ListDataLakeFunctionNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeFunctionNameResponse
       */
      Models::ListDataLakeFunctionNameResponse listDataLakeFunctionNameWithOptions(const Models::ListDataLakeFunctionNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data lake function names.
       *
       * @param request ListDataLakeFunctionNameRequest
       * @return ListDataLakeFunctionNameResponse
       */
      Models::ListDataLakeFunctionNameResponse listDataLakeFunctionName(const Models::ListDataLakeFunctionNameRequest &request);

      /**
       * @summary Retrieves the list of partitions of a data lake table.
       *
       * @param tmpReq ListDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionResponse
       */
      Models::ListDataLakePartitionResponse listDataLakePartitionWithOptions(const Models::ListDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of partitions of a data lake table.
       *
       * @param request ListDataLakePartitionRequest
       * @return ListDataLakePartitionResponse
       */
      Models::ListDataLakePartitionResponse listDataLakePartition(const Models::ListDataLakePartitionRequest &request);

      /**
       * @summary Retrieves a list of partitions for a data lake table based on filter conditions.
       *
       * @param request ListDataLakePartitionByFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionByFilterResponse
       */
      Models::ListDataLakePartitionByFilterResponse listDataLakePartitionByFilterWithOptions(const Models::ListDataLakePartitionByFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of partitions for a data lake table based on filter conditions.
       *
       * @param request ListDataLakePartitionByFilterRequest
       * @return ListDataLakePartitionByFilterResponse
       */
      Models::ListDataLakePartitionByFilterResponse listDataLakePartitionByFilter(const Models::ListDataLakePartitionByFilterRequest &request);

      /**
       * @summary Retrieves a list of partition names for a data lake table.
       *
       * @param request ListDataLakePartitionNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionNameResponse
       */
      Models::ListDataLakePartitionNameResponse listDataLakePartitionNameWithOptions(const Models::ListDataLakePartitionNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of partition names for a data lake table.
       *
       * @param request ListDataLakePartitionNameRequest
       * @return ListDataLakePartitionNameResponse
       */
      Models::ListDataLakePartitionNameResponse listDataLakePartitionName(const Models::ListDataLakePartitionNameRequest &request);

      /**
       * @summary Retrieves a list of data lake tables.
       *
       * @param request ListDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTableResponse
       */
      Models::ListDataLakeTableResponse listDataLakeTableWithOptions(const Models::ListDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data lake tables.
       *
       * @param request ListDataLakeTableRequest
       * @return ListDataLakeTableResponse
       */
      Models::ListDataLakeTableResponse listDataLakeTable(const Models::ListDataLakeTableRequest &request);

      /**
       * @summary Retrieves a list of data lake table names.
       *
       * @param request ListDataLakeTableNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTableNameResponse
       */
      Models::ListDataLakeTableNameResponse listDataLakeTableNameWithOptions(const Models::ListDataLakeTableNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data lake table names.
       *
       * @param request ListDataLakeTableNameRequest
       * @return ListDataLakeTableNameResponse
       */
      Models::ListDataLakeTableNameResponse listDataLakeTableName(const Models::ListDataLakeTableNameRequest &request);

      /**
       * @summary Retrieves the basic information about tables in a data lake.
       *
       * @param request ListDataLakeTablebaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTablebaseInfoResponse
       */
      Models::ListDataLakeTablebaseInfoResponse listDataLakeTablebaseInfoWithOptions(const Models::ListDataLakeTablebaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information about tables in a data lake.
       *
       * @param request ListDataLakeTablebaseInfoRequest
       * @return ListDataLakeTablebaseInfoResponse
       */
      Models::ListDataLakeTablebaseInfoResponse listDataLakeTablebaseInfo(const Models::ListDataLakeTablebaseInfoRequest &request);

      /**
       * @summary Queries a list of chunks.
       *
       * @param request ListDocumentChunksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocumentChunksResponse
       */
      Models::ListDocumentChunksResponse listDocumentChunksWithOptions(const Models::ListDocumentChunksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of chunks.
       *
       * @param request ListDocumentChunksRequest
       * @return ListDocumentChunksResponse
       */
      Models::ListDocumentChunksResponse listDocumentChunks(const Models::ListDocumentChunksRequest &request);

      /**
       * @summary Lists the documents in a knowledge base.
       *
       * @param request ListDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocumentsResponse
       */
      Models::ListDocumentsResponse listDocumentsWithOptions(const Models::ListDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the documents in a knowledge base.
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
       * @summary Returns a paginated list of knowledge bases.
       *
       * @param request ListKnowledgeBasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBasesWithOptions(const Models::ListKnowledgeBasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a paginated list of knowledge bases.
       *
       * @param request ListKnowledgeBasesRequest
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBases(const Models::ListKnowledgeBasesRequest &request);

      /**
       * @summary Lists code files and directories at a specified path in a workspace.
       *
       * @description This operation lists the code files and directories at a specified path in a workspace.
       *
       * @param request ListWorkspaceCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspaceCodeResponse
       */
      Models::ListWorkspaceCodeResponse listWorkspaceCodeWithOptions(const Models::ListWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists code files and directories at a specified path in a workspace.
       *
       * @description This operation lists the code files and directories at a specified path in a workspace.
       *
       * @param request ListWorkspaceCodeRequest
       * @return ListWorkspaceCodeResponse
       */
      Models::ListWorkspaceCodeResponse listWorkspaceCode(const Models::ListWorkspaceCodeRequest &request);

      /**
       * @summary Modify a custom agent in a personal space or workspace
       *
       * @param tmpReq ModifyCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomAgentResponse
       */
      Models::ModifyCustomAgentResponse modifyCustomAgentWithOptions(const Models::ModifyCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify a custom agent in a personal space or workspace
       *
       * @param request ModifyCustomAgentRequest
       * @return ModifyCustomAgentResponse
       */
      Models::ModifyCustomAgentResponse modifyCustomAgent(const Models::ModifyCustomAgentRequest &request);

      /**
       * @summary Operate custom agents in personal spaces and workspaces.
       *
       * @param request OperateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateCustomAgentResponse
       */
      Models::OperateCustomAgentResponse operateCustomAgentWithOptions(const Models::OperateCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Operate custom agents in personal spaces and workspaces.
       *
       * @param request OperateCustomAgentRequest
       * @return OperateCustomAgentResponse
       */
      Models::OperateCustomAgentResponse operateCustomAgent(const Models::OperateCustomAgentRequest &request);

      /**
       * @summary Redeploy an Airflow instance
       *
       * @description Redeploys an Airflow instance.
       *
       * @param request RedeployAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployAirflowResponse
       */
      Models::RedeployAirflowResponse redeployAirflowWithOptions(const Models::RedeployAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Redeploy an Airflow instance
       *
       * @description Redeploys an Airflow instance.
       *
       * @param request RedeployAirflowRequest
       * @return RedeployAirflowResponse
       */
      Models::RedeployAirflowResponse redeployAirflow(const Models::RedeployAirflowRequest &request);

      /**
       * @summary Removes a user from a workspace.
       *
       * @param request RemoveUserToDataAgentWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserToDataAgentWorkspaceResponse
       */
      Models::RemoveUserToDataAgentWorkspaceResponse removeUserToDataAgentWorkspaceWithOptions(const Models::RemoveUserToDataAgentWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a user from a workspace.
       *
       * @param request RemoveUserToDataAgentWorkspaceRequest
       * @return RemoveUserToDataAgentWorkspaceResponse
       */
      Models::RemoveUserToDataAgentWorkspaceResponse removeUserToDataAgentWorkspace(const Models::RemoveUserToDataAgentWorkspaceRequest &request);

      /**
       * @summary Query a knowledge base
       *
       * @param request RetrieveKnowledgeBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveKnowledgeBaseResponse
       */
      Models::RetrieveKnowledgeBaseResponse retrieveKnowledgeBaseWithOptions(const Models::RetrieveKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a knowledge base
       *
       * @param request RetrieveKnowledgeBaseRequest
       * @return RetrieveKnowledgeBaseResponse
       */
      Models::RetrieveKnowledgeBaseResponse retrieveKnowledgeBase(const Models::RetrieveKnowledgeBaseRequest &request);

      /**
       * @summary Saves workspace code. If the file does not exist, a new file is automatically created.
       *
       * @description 发布工作空间的代码
       *
       * @param request SaveWorkspaceCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveWorkspaceCodeResponse
       */
      Models::SaveWorkspaceCodeResponse saveWorkspaceCodeWithOptions(const Models::SaveWorkspaceCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves workspace code. If the file does not exist, a new file is automatically created.
       *
       * @description 发布工作空间的代码
       *
       * @param request SaveWorkspaceCodeRequest
       * @return SaveWorkspaceCodeResponse
       */
      Models::SaveWorkspaceCodeResponse saveWorkspaceCode(const Models::SaveWorkspaceCodeRequest &request);

      /**
       * @summary Sends a user message to a specified session or ends the session.
       *
       * @description ## Request
       * - The `agent_id` and `session_id` fields are required.
       * - The `message_type` field defaults to `primary`. Set it to `additional` to append information or to `cancel` to end the session.
       * - The `reply_to` field specifies which agent message the current message is a response to. It defaults to `0`.
       * - When `message_type` is `additional`, the `question` field is required.
       * - Use the `quoted_message` field to reference a previous user message.
       * - The optional fields `data_source`, `dms_user`, `db_metadata`, and `session_config` provide more detailed context.
       *
       * @param tmpReq SendChatMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendChatMessageResponse
       */
      Models::SendChatMessageResponse sendChatMessageWithOptions(const Models::SendChatMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a user message to a specified session or ends the session.
       *
       * @description ## Request
       * - The `agent_id` and `session_id` fields are required.
       * - The `message_type` field defaults to `primary`. Set it to `additional` to append information or to `cancel` to end the session.
       * - The `reply_to` field specifies which agent message the current message is a response to. It defaults to `0`.
       * - When `message_type` is `additional`, the `question` field is required.
       * - Use the `quoted_message` field to reference a previous user message.
       * - The optional fields `data_source`, `dms_user`, `db_metadata`, and `session_config` provide more detailed context.
       *
       * @param request SendChatMessageRequest
       * @return SendChatMessageResponse
       */
      Models::SendChatMessageResponse sendChatMessage(const Models::SendChatMessageRequest &request);

      /**
       * @summary Sets the code deployment configuration for a workspace. This is an asynchronous operation that returns a key. Use this key to query the operation\\"s status by calling the WorkspaceActionStatus operation.
       *
       * @description Sets the default code deployment configuration for a workspace. This configuration includes the Git repository branch and the directories to exclude from deployment.
       *
       * @param request SetWorkspaceCodePublishSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWorkspaceCodePublishSettingResponse
       */
      Models::SetWorkspaceCodePublishSettingResponse setWorkspaceCodePublishSettingWithOptions(const Models::SetWorkspaceCodePublishSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the code deployment configuration for a workspace. This is an asynchronous operation that returns a key. Use this key to query the operation\\"s status by calling the WorkspaceActionStatus operation.
       *
       * @description Sets the default code deployment configuration for a workspace. This configuration includes the Git repository branch and the directories to exclude from deployment.
       *
       * @param request SetWorkspaceCodePublishSettingRequest
       * @return SetWorkspaceCodePublishSettingResponse
       */
      Models::SetWorkspaceCodePublishSettingResponse setWorkspaceCodePublishSetting(const Models::SetWorkspaceCodePublishSettingRequest &request);

      /**
       * @summary Sets the quota for a workspace.
       *
       * @description Sets the quota for a specific workspace.
       *
       * @param request SetWorkspaceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWorkspaceQuotaResponse
       */
      Models::SetWorkspaceQuotaResponse setWorkspaceQuotaWithOptions(const Models::SetWorkspaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the quota for a workspace.
       *
       * @description Sets the quota for a specific workspace.
       *
       * @param request SetWorkspaceQuotaRequest
       * @return SetWorkspaceQuotaResponse
       */
      Models::SetWorkspaceQuotaResponse setWorkspaceQuota(const Models::SetWorkspaceQuotaRequest &request);

      /**
       * @summary Updates the properties of an Airflow instance.
       *
       * @param tmpReq UpdateAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAirflowResponse
       */
      Models::UpdateAirflowResponse updateAirflowWithOptions(const Models::UpdateAirflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the properties of an Airflow instance.
       *
       * @param request UpdateAirflowRequest
       * @return UpdateAirflowResponse
       */
      Models::UpdateAirflowResponse updateAirflow(const Models::UpdateAirflowRequest &request);

      /**
       * @summary Updates workspace information.
       *
       * @param request UpdateDataAgentSpaceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataAgentSpaceInfoResponse
       */
      Models::UpdateDataAgentSpaceInfoResponse updateDataAgentSpaceInfoWithOptions(const Models::UpdateDataAgentSpaceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates workspace information.
       *
       * @param request UpdateDataAgentSpaceInfoRequest
       * @return UpdateDataAgentSpaceInfoResponse
       */
      Models::UpdateDataAgentSpaceInfoResponse updateDataAgentSpaceInfo(const Models::UpdateDataAgentSpaceInfoRequest &request);

      /**
       * @summary Changes the role of a workspace member.
       *
       * @param request UpdateDataAgentWorkspaceMemberRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataAgentWorkspaceMemberRoleResponse
       */
      Models::UpdateDataAgentWorkspaceMemberRoleResponse updateDataAgentWorkspaceMemberRoleWithOptions(const Models::UpdateDataAgentWorkspaceMemberRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the role of a workspace member.
       *
       * @param request UpdateDataAgentWorkspaceMemberRoleRequest
       * @return UpdateDataAgentWorkspaceMemberRoleResponse
       */
      Models::UpdateDataAgentWorkspaceMemberRoleResponse updateDataAgentWorkspaceMemberRole(const Models::UpdateDataAgentWorkspaceMemberRoleRequest &request);

      /**
       * @summary Updates the information of a data lakehouse database.
       *
       * @param tmpReq UpdateDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeDatabaseResponse
       */
      Models::UpdateDataLakeDatabaseResponse updateDataLakeDatabaseWithOptions(const Models::UpdateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a data lakehouse database.
       *
       * @param request UpdateDataLakeDatabaseRequest
       * @return UpdateDataLakeDatabaseResponse
       */
      Models::UpdateDataLakeDatabaseResponse updateDataLakeDatabase(const Models::UpdateDataLakeDatabaseRequest &request);

      /**
       * @summary Update a user-defined function in a data lake.
       *
       * @param tmpReq UpdateDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeFunctionResponse
       */
      Models::UpdateDataLakeFunctionResponse updateDataLakeFunctionWithOptions(const Models::UpdateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a user-defined function in a data lake.
       *
       * @param request UpdateDataLakeFunctionRequest
       * @return UpdateDataLakeFunctionResponse
       */
      Models::UpdateDataLakeFunctionResponse updateDataLakeFunction(const Models::UpdateDataLakeFunctionRequest &request);

      /**
       * @summary Updates the partition information of a data lake table.
       *
       * @param tmpReq UpdateDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakePartitionResponse
       */
      Models::UpdateDataLakePartitionResponse updateDataLakePartitionWithOptions(const Models::UpdateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the partition information of a data lake table.
       *
       * @param request UpdateDataLakePartitionRequest
       * @return UpdateDataLakePartitionResponse
       */
      Models::UpdateDataLakePartitionResponse updateDataLakePartition(const Models::UpdateDataLakePartitionRequest &request);

      /**
       * @summary Updates the information of a data lake table.
       *
       * @param tmpReq UpdateDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeTableResponse
       */
      Models::UpdateDataLakeTableResponse updateDataLakeTableWithOptions(const Models::UpdateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a data lake table.
       *
       * @param request UpdateDataLakeTableRequest
       * @return UpdateDataLakeTableResponse
       */
      Models::UpdateDataLakeTableResponse updateDataLakeTable(const Models::UpdateDataLakeTableRequest &request);

      /**
       * @summary Updates the description of a document.
       *
       * @param request UpdateDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDocumentResponse
       */
      Models::UpdateDocumentResponse updateDocumentWithOptions(const Models::UpdateDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a document.
       *
       * @param request UpdateDocumentRequest
       * @return UpdateDocumentResponse
       */
      Models::UpdateDocumentResponse updateDocument(const Models::UpdateDocumentRequest &request);

      /**
       * @summary Updates a knowledge base.
       *
       * @param request UpdateKnowledgeBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBaseWithOptions(const Models::UpdateKnowledgeBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a knowledge base.
       *
       * @param request UpdateKnowledgeBaseRequest
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBase(const Models::UpdateKnowledgeBaseRequest &request);

      /**
       * @summary Uploads a document to a knowledge base.
       *
       * @param tmpReq UploadDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDocumentResponse
       */
      Models::UploadDocumentResponse uploadDocumentWithOptions(const Models::UploadDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a document to a knowledge base.
       *
       * @param request UploadDocumentRequest
       * @return UploadDocumentResponse
       */
      Models::UploadDocumentResponse uploadDocument(const Models::UploadDocumentRequest &request);

      /**
       * @summary Upserts document chunks into a knowledge base.
       *
       * @param request UpsertDocumentChunksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertDocumentChunksResponse
       */
      Models::UpsertDocumentChunksResponse upsertDocumentChunksWithOptions(const Models::UpsertDocumentChunksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upserts document chunks into a knowledge base.
       *
       * @param request UpsertDocumentChunksRequest
       * @return UpsertDocumentChunksResponse
       */
      Models::UpsertDocumentChunksResponse upsertDocumentChunks(const Models::UpsertDocumentChunksRequest &request);

      /**
       * @summary Queries the log of an asynchronous task in a workspace.
       *
       * @description Pass the `key` to view the execution log of the corresponding asynchronous task. Use this API for troubleshooting.
       *
       * @param request WorkspaceActionLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WorkspaceActionLogResponse
       */
      Models::WorkspaceActionLogResponse workspaceActionLogWithOptions(const Models::WorkspaceActionLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log of an asynchronous task in a workspace.
       *
       * @description Pass the `key` to view the execution log of the corresponding asynchronous task. Use this API for troubleshooting.
       *
       * @param request WorkspaceActionLogRequest
       * @return WorkspaceActionLogResponse
       */
      Models::WorkspaceActionLogResponse workspaceActionLog(const Models::WorkspaceActionLogRequest &request);

      /**
       * @summary Queries the status of an asynchronous task in a workspace. Operations such as a deployment return a key. Call this operation with the key to retrieve the task\\"s status.
       *
       * @description Provide the key returned by an asynchronous action, such as a deployment, to retrieve the task\\"s status.
       *
       * @param request WorkspaceActionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WorkspaceActionStatusResponse
       */
      Models::WorkspaceActionStatusResponse workspaceActionStatusWithOptions(const Models::WorkspaceActionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an asynchronous task in a workspace. Operations such as a deployment return a key. Call this operation with the key to retrieve the task\\"s status.
       *
       * @description Provide the key returned by an asynchronous action, such as a deployment, to retrieve the task\\"s status.
       *
       * @param request WorkspaceActionStatusRequest
       * @return WorkspaceActionStatusResponse
       */
      Models::WorkspaceActionStatusResponse workspaceActionStatus(const Models::WorkspaceActionStatusRequest &request);

      /**
       * @summary This asynchronous API returns a key. Use this key to query the WorkspaceActionStatus API for the code deployment status.
       *
       * @description Deploys the code in a workspace.
       *
       * @param request WorkspaceCodePublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WorkspaceCodePublishResponse
       */
      Models::WorkspaceCodePublishResponse workspaceCodePublishWithOptions(const Models::WorkspaceCodePublishRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This asynchronous API returns a key. Use this key to query the WorkspaceActionStatus API for the code deployment status.
       *
       * @description Deploys the code in a workspace.
       *
       * @param request WorkspaceCodePublishRequest
       * @return WorkspaceCodePublishResponse
       */
      Models::WorkspaceCodePublishResponse workspaceCodePublish(const Models::WorkspaceCodePublishRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
