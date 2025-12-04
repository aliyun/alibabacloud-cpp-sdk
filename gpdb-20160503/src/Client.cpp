#include <darabonba/Core.hpp>
#include <alibabacloud/Gpdb20160503.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <alibabacloud/credential/Credential.hpp>
#include <darabonba/http/FileField.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::Credential::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::Gpdb20160503::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Gpdb20160503
{

AlibabaCloud::Gpdb20160503::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "gpdb.aliyuncs.com"},
    {"cn-hangzhou" , "gpdb.aliyuncs.com"},
    {"cn-shanghai" , "gpdb.aliyuncs.com"},
    {"cn-shenzhen" , "gpdb.aliyuncs.com"},
    {"cn-hongkong" , "gpdb.aliyuncs.com"},
    {"ap-southeast-1" , "gpdb.aliyuncs.com"},
    {"us-west-1" , "gpdb.aliyuncs.com"},
    {"us-east-1" , "gpdb.aliyuncs.com"},
    {"cn-hangzhou-finance" , "gpdb.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "gpdb.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "gpdb.aliyuncs.com"},
    {"cn-qingdao" , "gpdb.aliyuncs.com"},
    {"cn-north-2-gov-1" , "gpdb.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("gpdb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}



string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Adds AI nodes to the cluster.
 *
 * @description ## [](#)Usage notes
 * This operation is used to add an AINode node.
 * ## [](#qps-)QPS limit
 * You can call this operation up to 1,000 times per second per account. Exceeding the limit will trigger API rate limiting, which may impact your business. Please call the API responsibly.
 *
 * @param request AddAINodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAINodeResponse
 */
AddAINodeResponse Client::addAINodeWithOptions(const AddAINodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAINodePoolId()) {
    query["AINodePoolId"] = request.AINodePoolId();
  }

  if (!!request.hasAINodeSpecInfos()) {
    query["AINodeSpecInfos"] = request.AINodeSpecInfos();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAINode"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAINodeResponse>();
}

/**
 * @summary Adds AI nodes to the cluster.
 *
 * @description ## [](#)Usage notes
 * This operation is used to add an AINode node.
 * ## [](#qps-)QPS limit
 * You can call this operation up to 1,000 times per second per account. Exceeding the limit will trigger API rate limiting, which may impact your business. Please call the API responsibly.
 *
 * @param request AddAINodeRequest
 * @return AddAINodeResponse
 */
AddAINodeResponse Client::addAINode(const AddAINodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAINodeWithOptions(request, runtime);
}

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
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnectionWithOptions(const AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateInstancePublicConnection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateInstancePublicConnectionResponse>();
}

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
AllocateInstancePublicConnectionResponse Client::allocateInstancePublicConnection(const AllocateInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Binds a resource group to a database role.
 *
 * @param tmpReq BindDBResourceGroupWithRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindDBResourceGroupWithRoleResponse
 */
BindDBResourceGroupWithRoleResponse Client::bindDBResourceGroupWithRoleWithOptions(const BindDBResourceGroupWithRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BindDBResourceGroupWithRoleShrinkRequest request = BindDBResourceGroupWithRoleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleList()) {
    request.setRoleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roleList(), "RoleList", "simple"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasRoleListShrink()) {
    query["RoleList"] = request.roleListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindDBResourceGroupWithRole"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindDBResourceGroupWithRoleResponse>();
}

/**
 * @summary Binds a resource group to a database role.
 *
 * @param request BindDBResourceGroupWithRoleRequest
 * @return BindDBResourceGroupWithRoleResponse
 */
BindDBResourceGroupWithRoleResponse Client::bindDBResourceGroupWithRole(const BindDBResourceGroupWithRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindDBResourceGroupWithRoleWithOptions(request, runtime);
}

/**
 * @summary Cancels an index creation job.
 *
 * @param request CancelCreateIndexJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCreateIndexJobResponse
 */
CancelCreateIndexJobResponse Client::cancelCreateIndexJobWithOptions(const CancelCreateIndexJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCreateIndexJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCreateIndexJobResponse>();
}

/**
 * @summary Cancels an index creation job.
 *
 * @param request CancelCreateIndexJobRequest
 * @return CancelCreateIndexJobResponse
 */
CancelCreateIndexJobResponse Client::cancelCreateIndexJob(const CancelCreateIndexJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCreateIndexJobWithOptions(request, runtime);
}

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
CancelUploadDocumentJobResponse Client::cancelUploadDocumentJobWithOptions(const CancelUploadDocumentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasCollection()) {
    body["Collection"] = request.collection();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    body["NamespacePassword"] = request.namespacePassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelUploadDocumentJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelUploadDocumentJobResponse>();
}

/**
 * @summary Cancels an asynchronous document upload job based on the job ID.
 *
 * @description This operation is related to the UploadDocumentAsync operation. You can call this operation to cancel a document upload job.
 * >  If the canceling operation is complete, failed, or is canceled, you cannot call the operation again. The canceling operation only interrupts the document upload job. To remove the uploaded data, you must manually remove it or call the DeleteCollectionData operation. You can also call the document upload operation to overwrite the data by using the same FileName parameter.
 *
 * @param request CancelUploadDocumentJobRequest
 * @return CancelUploadDocumentJobResponse
 */
CancelUploadDocumentJobResponse Client::cancelUploadDocumentJob(const CancelUploadDocumentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelUploadDocumentJobWithOptions(request, runtime);
}

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
CancelUpsertCollectionDataJobResponse Client::cancelUpsertCollectionDataJobWithOptions(const CancelUpsertCollectionDataJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasCollection()) {
    body["Collection"] = request.collection();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    body["NamespacePassword"] = request.namespacePassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelUpsertCollectionDataJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelUpsertCollectionDataJobResponse>();
}

/**
 * @summary Cancels an asynchronous vector data upload job by using a job ID.
 *
 * @description This operation is related to the `UpsertCollectionDataAsync` operation. You can call this operation to cancel an upload job.
 * >  If the canceling operation is complete, failed, or is canceled, you cannot call the operation again. The canceling operation only interrupts the upload job. To remove the uploaded data, you must manually remove it or call the DeleteCollectionData operation.
 *
 * @param request CancelUpsertCollectionDataJobRequest
 * @return CancelUpsertCollectionDataJobResponse
 */
CancelUpsertCollectionDataJobResponse Client::cancelUpsertCollectionDataJob(const CancelUpsertCollectionDataJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelUpsertCollectionDataJobWithOptions(request, runtime);
}

/**
 * @summary Provides intelligent question-and-answer services by combining a knowledge base with a large language model.
 *
 * @description This API enables users to query a large language model with answers grounded in a specified knowledge base collection. You can configure multiple parameters to customize requests, including but not limited to database instance IDs, knowledge retrieval parameters, and model inference parameters. In addition, a default system prompt template is provided and users are allowed to customize the system prompt.
 * *   **DBInstanceId**: Required. This parameter specifies the ID of the database instance.
 * *   **KnowledgeParams**: optional. It contains parameters related to knowledge retrieval, such as retrieval content and merge policy.
 * *   **ModelParams**: required. It contains parameters related to model inference, such as the message list and the name of the model.
 * *   **PromptTemplate**: optional. It is used to customize the system prompt template.
 *
 * @param tmpReq ChatWithKnowledgeBaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatWithKnowledgeBaseResponse
 */
ChatWithKnowledgeBaseResponse Client::chatWithKnowledgeBaseWithOptions(const ChatWithKnowledgeBaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatWithKnowledgeBaseShrinkRequest request = ChatWithKnowledgeBaseShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKnowledgeParams()) {
    request.setKnowledgeParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.knowledgeParams(), "KnowledgeParams", "json"));
  }

  if (!!tmpReq.hasModelParams()) {
    request.setModelParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.modelParams(), "ModelParams", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasIncludeKnowledgeBaseResults()) {
    query["IncludeKnowledgeBaseResults"] = request.includeKnowledgeBaseResults();
  }

  if (!!request.hasKnowledgeParamsShrink()) {
    query["KnowledgeParams"] = request.knowledgeParamsShrink();
  }

  if (!!request.hasModelParamsShrink()) {
    query["ModelParams"] = request.modelParamsShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPromptParams()) {
    query["PromptParams"] = request.promptParams();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatWithKnowledgeBase"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatWithKnowledgeBaseResponse>();
}

/**
 * @summary Provides intelligent question-and-answer services by combining a knowledge base with a large language model.
 *
 * @description This API enables users to query a large language model with answers grounded in a specified knowledge base collection. You can configure multiple parameters to customize requests, including but not limited to database instance IDs, knowledge retrieval parameters, and model inference parameters. In addition, a default system prompt template is provided and users are allowed to customize the system prompt.
 * *   **DBInstanceId**: Required. This parameter specifies the ID of the database instance.
 * *   **KnowledgeParams**: optional. It contains parameters related to knowledge retrieval, such as retrieval content and merge policy.
 * *   **ModelParams**: required. It contains parameters related to model inference, such as the message list and the name of the model.
 * *   **PromptTemplate**: optional. It is used to customize the system prompt template.
 *
 * @param request ChatWithKnowledgeBaseRequest
 * @return ChatWithKnowledgeBaseResponse
 */
ChatWithKnowledgeBaseResponse Client::chatWithKnowledgeBase(const ChatWithKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatWithKnowledgeBaseWithOptions(request, runtime);
}

/**
 * @summary Provides intelligent question-and-answer services by combining a knowledge base with a large language model. A streaming API, which is called by using the SSE or the Java asynchronous SDK.
 *
 * @description This API enables users to query a large language model with answers grounded in a specified knowledge base collection. You can configure multiple parameters to customize requests, including but not limited to database instance IDs, knowledge retrieval parameters, and model inference parameters. In addition, a default system prompt template is provided and users are allowed to customize the system prompt.
 * *   DBInstanceId: required. This parameter specifies the ID of the database instance.
 * *   KnowledgeParams: optional. It contains parameters related to knowledge retrieval, such as retrieval content and merge policy.
 * *   ModelParams: required. It contains parameters related to model inference, such as the message list and the name of the model.
 * *   PromptTemplate: optional. It is used to customize a system prompt template.
 *
 * @param tmpReq ChatWithKnowledgeBaseStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatWithKnowledgeBaseStreamResponse
 */
FutrueGenerator<ChatWithKnowledgeBaseStreamResponse> Client::chatWithKnowledgeBaseStreamWithSSE(const ChatWithKnowledgeBaseStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatWithKnowledgeBaseStreamShrinkRequest request = ChatWithKnowledgeBaseStreamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKnowledgeParams()) {
    request.setKnowledgeParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.knowledgeParams(), "KnowledgeParams", "json"));
  }

  if (!!tmpReq.hasModelParams()) {
    request.setModelParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.modelParams(), "ModelParams", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasIncludeKnowledgeBaseResults()) {
    query["IncludeKnowledgeBaseResults"] = request.includeKnowledgeBaseResults();
  }

  if (!!request.hasKnowledgeParamsShrink()) {
    query["KnowledgeParams"] = request.knowledgeParamsShrink();
  }

  if (!!request.hasModelParamsShrink()) {
    query["ModelParams"] = request.modelParamsShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPromptParams()) {
    query["PromptParams"] = request.promptParams();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatWithKnowledgeBaseStream"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<ChatWithKnowledgeBaseStreamResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary Provides intelligent question-and-answer services by combining a knowledge base with a large language model. A streaming API, which is called by using the SSE or the Java asynchronous SDK.
 *
 * @description This API enables users to query a large language model with answers grounded in a specified knowledge base collection. You can configure multiple parameters to customize requests, including but not limited to database instance IDs, knowledge retrieval parameters, and model inference parameters. In addition, a default system prompt template is provided and users are allowed to customize the system prompt.
 * *   DBInstanceId: required. This parameter specifies the ID of the database instance.
 * *   KnowledgeParams: optional. It contains parameters related to knowledge retrieval, such as retrieval content and merge policy.
 * *   ModelParams: required. It contains parameters related to model inference, such as the message list and the name of the model.
 * *   PromptTemplate: optional. It is used to customize a system prompt template.
 *
 * @param tmpReq ChatWithKnowledgeBaseStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatWithKnowledgeBaseStreamResponse
 */
ChatWithKnowledgeBaseStreamResponse Client::chatWithKnowledgeBaseStreamWithOptions(const ChatWithKnowledgeBaseStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatWithKnowledgeBaseStreamShrinkRequest request = ChatWithKnowledgeBaseStreamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKnowledgeParams()) {
    request.setKnowledgeParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.knowledgeParams(), "KnowledgeParams", "json"));
  }

  if (!!tmpReq.hasModelParams()) {
    request.setModelParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.modelParams(), "ModelParams", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasIncludeKnowledgeBaseResults()) {
    query["IncludeKnowledgeBaseResults"] = request.includeKnowledgeBaseResults();
  }

  if (!!request.hasKnowledgeParamsShrink()) {
    query["KnowledgeParams"] = request.knowledgeParamsShrink();
  }

  if (!!request.hasModelParamsShrink()) {
    query["ModelParams"] = request.modelParamsShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPromptParams()) {
    query["PromptParams"] = request.promptParams();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatWithKnowledgeBaseStream"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatWithKnowledgeBaseStreamResponse>();
}

/**
 * @summary Provides intelligent question-and-answer services by combining a knowledge base with a large language model. A streaming API, which is called by using the SSE or the Java asynchronous SDK.
 *
 * @description This API enables users to query a large language model with answers grounded in a specified knowledge base collection. You can configure multiple parameters to customize requests, including but not limited to database instance IDs, knowledge retrieval parameters, and model inference parameters. In addition, a default system prompt template is provided and users are allowed to customize the system prompt.
 * *   DBInstanceId: required. This parameter specifies the ID of the database instance.
 * *   KnowledgeParams: optional. It contains parameters related to knowledge retrieval, such as retrieval content and merge policy.
 * *   ModelParams: required. It contains parameters related to model inference, such as the message list and the name of the model.
 * *   PromptTemplate: optional. It is used to customize a system prompt template.
 *
 * @param request ChatWithKnowledgeBaseStreamRequest
 * @return ChatWithKnowledgeBaseStreamResponse
 */
ChatWithKnowledgeBaseStreamResponse Client::chatWithKnowledgeBaseStream(const ChatWithKnowledgeBaseStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatWithKnowledgeBaseStreamWithOptions(request, runtime);
}

/**
 * @summary Checks the configurations of a Hadoop data source.
 *
 * @param request CheckHadoopDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckHadoopDataSourceResponse
 */
CheckHadoopDataSourceResponse Client::checkHadoopDataSourceWithOptions(const CheckHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckDir()) {
    query["CheckDir"] = request.checkDir();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckHadoopDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckHadoopDataSourceResponse>();
}

/**
 * @summary Checks the configurations of a Hadoop data source.
 *
 * @param request CheckHadoopDataSourceRequest
 * @return CheckHadoopDataSourceResponse
 */
CheckHadoopDataSourceResponse Client::checkHadoopDataSource(const CheckHadoopDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkHadoopDataSourceWithOptions(request, runtime);
}

/**
 * @summary Check Hadoop Cluster Network Connectivity
 *
 * @param request CheckHadoopNetConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckHadoopNetConnectionResponse
 */
CheckHadoopNetConnectionResponse Client::checkHadoopNetConnectionWithOptions(const CheckHadoopNetConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasEmrInstanceId()) {
    query["EmrInstanceId"] = request.emrInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckHadoopNetConnection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckHadoopNetConnectionResponse>();
}

/**
 * @summary Check Hadoop Cluster Network Connectivity
 *
 * @param request CheckHadoopNetConnectionRequest
 * @return CheckHadoopNetConnectionResponse
 */
CheckHadoopNetConnectionResponse Client::checkHadoopNetConnection(const CheckHadoopNetConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkHadoopNetConnectionWithOptions(request, runtime);
}

/**
 * @summary Check the network connectivity of the JDBC connection string
 *
 * @param request CheckJDBCSourceNetConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckJDBCSourceNetConnectionResponse
 */
CheckJDBCSourceNetConnectionResponse Client::checkJDBCSourceNetConnectionWithOptions(const CheckJDBCSourceNetConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasJdbcConnectionString()) {
    query["JdbcConnectionString"] = request.jdbcConnectionString();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckJDBCSourceNetConnection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckJDBCSourceNetConnectionResponse>();
}

/**
 * @summary Check the network connectivity of the JDBC connection string
 *
 * @param request CheckJDBCSourceNetConnectionRequest
 * @return CheckJDBCSourceNetConnectionResponse
 */
CheckJDBCSourceNetConnectionResponse Client::checkJDBCSourceNetConnection(const CheckJDBCSourceNetConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkJDBCSourceNetConnectionWithOptions(request, runtime);
}

/**
 * @summary Queries whether a service-linked role is created.
 *
 * @param request CheckServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRoleWithOptions(const CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRole"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckServiceLinkedRoleResponse>();
}

/**
 * @summary Queries whether a service-linked role is created.
 *
 * @param request CheckServiceLinkedRoleRequest
 * @return CheckServiceLinkedRoleResponse
 */
CheckServiceLinkedRoleResponse Client::checkServiceLinkedRole(const CheckServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Restores data to a new AnalyticDB for PostgreSQL instance.
 *
 * @param request CloneDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneDBInstanceResponse
 */
CloneDBInstanceResponse Client::cloneDBInstanceWithOptions(const CloneDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasSrcDbInstanceName()) {
    query["SrcDbInstanceName"] = request.srcDbInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloneDBInstance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneDBInstanceResponse>();
}

/**
 * @summary Restores data to a new AnalyticDB for PostgreSQL instance.
 *
 * @param request CloneDBInstanceRequest
 * @return CloneDBInstanceResponse
 */
CloneDBInstanceResponse Client::cloneDBInstance(const CloneDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloneDBInstanceWithOptions(request, runtime);
}

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
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccountResponse>();
}

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
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a backup set.
 *
 * @param request CreateBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackupWithOptions(const CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackup"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackupResponse>();
}

/**
 * @summary Creates a backup set.
 *
 * @param request CreateBackupRequest
 * @return CreateBackupResponse
 */
CreateBackupResponse Client::createBackup(const CreateBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupWithOptions(request, runtime);
}

/**
 * @summary Creates a vector collection.
 *
 * @param tmpReq CreateCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCollectionResponse
 */
CreateCollectionResponse Client::createCollectionWithOptions(const CreateCollectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCollectionShrinkRequest request = CreateCollectionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSparseVectorIndexConfig()) {
    request.setSparseVectorIndexConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sparseVectorIndexConfig(), "SparseVectorIndexConfig", "json"));
  }

  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.dimension();
  }

  if (!!request.hasExternalStorage()) {
    query["ExternalStorage"] = request.externalStorage();
  }

  if (!!request.hasFullTextRetrievalFields()) {
    query["FullTextRetrievalFields"] = request.fullTextRetrievalFields();
  }

  if (!!request.hasHnswEfConstruction()) {
    query["HnswEfConstruction"] = request.hnswEfConstruction();
  }

  if (!!request.hasHnswM()) {
    query["HnswM"] = request.hnswM();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasMetadata()) {
    query["Metadata"] = request.metadata();
  }

  if (!!request.hasMetadataIndices()) {
    query["MetadataIndices"] = request.metadataIndices();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParser()) {
    query["Parser"] = request.parser();
  }

  if (!!request.hasPqEnable()) {
    query["PqEnable"] = request.pqEnable();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSparseVectorIndexConfigShrink()) {
    query["SparseVectorIndexConfig"] = request.sparseVectorIndexConfigShrink();
  }

  if (!!request.hasSupportSparse()) {
    query["SupportSparse"] = request.supportSparse();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCollection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCollectionResponse>();
}

/**
 * @summary Creates a vector collection.
 *
 * @param request CreateCollectionRequest
 * @return CreateCollectionResponse
 */
CreateCollectionResponse Client::createCollection(const CreateCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCollectionWithOptions(request, runtime);
}

/**
 * @summary Create Instance
 *
 * @description Before using this interface, please make sure you have fully understood the [billing method](https://help.aliyun.com/document_detail/35406.html) and <props="china">[pricing](https://www.aliyun.com/price/product#/gpdb/detail/GreenplumPost)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing) of the AnalyticDB for PostgreSQL product.
 *
 * @param request CreateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstanceWithOptions(const CreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAINodeSpecInfos()) {
    query["AINodeSpecInfos"] = request.AINodeSpecInfos();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasCacheStorageSize()) {
    query["CacheStorageSize"] = request.cacheStorageSize();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCreateSampleData()) {
    query["CreateSampleData"] = request.createSampleData();
  }

  if (!!request.hasDBInstanceCategory()) {
    query["DBInstanceCategory"] = request.DBInstanceCategory();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.DBInstanceClass();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.DBInstanceDescription();
  }

  if (!!request.hasDBInstanceGroupCount()) {
    query["DBInstanceGroupCount"] = request.DBInstanceGroupCount();
  }

  if (!!request.hasDBInstanceMode()) {
    query["DBInstanceMode"] = request.DBInstanceMode();
  }

  if (!!request.hasDeployMode()) {
    query["DeployMode"] = request.deployMode();
  }

  if (!!request.hasEnableSSL()) {
    query["EnableSSL"] = request.enableSSL();
  }

  if (!!request.hasEncryptionKey()) {
    query["EncryptionKey"] = request.encryptionKey();
  }

  if (!!request.hasEncryptionType()) {
    query["EncryptionType"] = request.encryptionType();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.engineVersion();
  }

  if (!!request.hasIdleTime()) {
    query["IdleTime"] = request.idleTime();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.instanceNetworkType();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.instanceSpec();
  }

  if (!!request.hasMasterAISpec()) {
    query["MasterAISpec"] = request.masterAISpec();
  }

  if (!!request.hasMasterCU()) {
    query["MasterCU"] = request.masterCU();
  }

  if (!!request.hasMasterNodeNum()) {
    query["MasterNodeNum"] = request.masterNodeNum();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.privateIpAddress();
  }

  if (!!request.hasProdType()) {
    query["ProdType"] = request.prodType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.securityIPList();
  }

  if (!!request.hasSegDiskPerformanceLevel()) {
    query["SegDiskPerformanceLevel"] = request.segDiskPerformanceLevel();
  }

  if (!!request.hasSegNodeNum()) {
    query["SegNodeNum"] = request.segNodeNum();
  }

  if (!!request.hasSegStorageType()) {
    query["SegStorageType"] = request.segStorageType();
  }

  if (!!request.hasServerlessMode()) {
    query["ServerlessMode"] = request.serverlessMode();
  }

  if (!!request.hasServerlessResource()) {
    query["ServerlessResource"] = request.serverlessResource();
  }

  if (!!request.hasSrcDbInstanceName()) {
    query["SrcDbInstanceName"] = request.srcDbInstanceName();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.standbyVSwitchId();
  }

  if (!!request.hasStandbyZoneId()) {
    query["StandbyZoneId"] = request.standbyZoneId();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.storageSize();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.VPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVectorConfigurationStatus()) {
    query["VectorConfigurationStatus"] = request.vectorConfigurationStatus();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceResponse>();
}

/**
 * @summary Create Instance
 *
 * @description Before using this interface, please make sure you have fully understood the [billing method](https://help.aliyun.com/document_detail/35406.html) and <props="china">[pricing](https://www.aliyun.com/price/product#/gpdb/detail/GreenplumPost)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing) of the AnalyticDB for PostgreSQL product.
 *
 * @param request CreateDBInstanceRequest
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstance(const CreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Adds an IP whitelist group.
 *
 * @param tmpReq CreateDBInstanceIPArrayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceIPArrayResponse
 */
CreateDBInstanceIPArrayResponse Client::createDBInstanceIPArrayWithOptions(const CreateDBInstanceIPArrayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBInstanceIPArrayShrinkRequest request = CreateDBInstanceIPArrayShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSecurityIPList()) {
    request.setSecurityIPListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.securityIPList(), "SecurityIPList", "simple"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasIPArrayAttribute()) {
    query["IPArrayAttribute"] = request.IPArrayAttribute();
  }

  if (!!request.hasIPArrayName()) {
    query["IPArrayName"] = request.IPArrayName();
  }

  if (!!request.hasSecurityIPListShrink()) {
    query["SecurityIPList"] = request.securityIPListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstanceIPArray"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceIPArrayResponse>();
}

/**
 * @summary Adds an IP whitelist group.
 *
 * @param request CreateDBInstanceIPArrayRequest
 * @return CreateDBInstanceIPArrayResponse
 */
CreateDBInstanceIPArrayResponse Client::createDBInstanceIPArray(const CreateDBInstanceIPArrayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceIPArrayWithOptions(request, runtime);
}

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
CreateDBInstancePlanResponse Client::createDBInstancePlanWithOptions(const CreateDBInstancePlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlanConfig()) {
    query["PlanConfig"] = request.planConfig();
  }

  if (!!request.hasPlanDesc()) {
    query["PlanDesc"] = request.planDesc();
  }

  if (!!request.hasPlanEndDate()) {
    query["PlanEndDate"] = request.planEndDate();
  }

  if (!!request.hasPlanName()) {
    query["PlanName"] = request.planName();
  }

  if (!!request.hasPlanScheduleType()) {
    query["PlanScheduleType"] = request.planScheduleType();
  }

  if (!!request.hasPlanStartDate()) {
    query["PlanStartDate"] = request.planStartDate();
  }

  if (!!request.hasPlanType()) {
    query["PlanType"] = request.planType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstancePlan"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstancePlanResponse>();
}

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
CreateDBInstancePlanResponse Client::createDBInstancePlan(const CreateDBInstancePlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstancePlanWithOptions(request, runtime);
}

/**
 * @summary Creates a resource group.
 *
 * @param request CreateDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBResourceGroupResponse
 */
CreateDBResourceGroupResponse Client::createDBResourceGroupWithOptions(const CreateDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupConfig()) {
    query["ResourceGroupConfig"] = request.resourceGroupConfig();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBResourceGroup"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBResourceGroupResponse>();
}

/**
 * @summary Creates a resource group.
 *
 * @param request CreateDBResourceGroupRequest
 * @return CreateDBResourceGroupResponse
 */
CreateDBResourceGroupResponse Client::createDBResourceGroup(const CreateDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a database.
 *
 * @param request CreateDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabaseWithOptions(const CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCharacterSetName()) {
    query["CharacterSetName"] = request.characterSetName();
  }

  if (!!request.hasCollate()) {
    query["Collate"] = request.collate();
  }

  if (!!request.hasCtype()) {
    query["Ctype"] = request.ctype();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatabase"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseResponse>();
}

/**
 * @summary Creates a database.
 *
 * @param request CreateDatabaseRequest
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabase(const CreateDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseWithOptions(request, runtime);
}

/**
 * @summary Creates a document collection.
 *
 * @param tmpReq CreateDocumentCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDocumentCollectionResponse
 */
CreateDocumentCollectionResponse Client::createDocumentCollectionWithOptions(const CreateDocumentCollectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDocumentCollectionShrinkRequest request = CreateDocumentCollectionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntityTypes()) {
    request.setEntityTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entityTypes(), "EntityTypes", "json"));
  }

  if (!!tmpReq.hasRelationshipTypes()) {
    request.setRelationshipTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.relationshipTypes(), "RelationshipTypes", "json"));
  }

  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.dimension();
  }

  if (!!request.hasEmbeddingModel()) {
    query["EmbeddingModel"] = request.embeddingModel();
  }

  if (!!request.hasEnableGraph()) {
    query["EnableGraph"] = request.enableGraph();
  }

  if (!!request.hasEntityTypesShrink()) {
    query["EntityTypes"] = request.entityTypesShrink();
  }

  if (!!request.hasExternalStorage()) {
    query["ExternalStorage"] = request.externalStorage();
  }

  if (!!request.hasFullTextRetrievalFields()) {
    query["FullTextRetrievalFields"] = request.fullTextRetrievalFields();
  }

  if (!!request.hasHnswEfConstruction()) {
    query["HnswEfConstruction"] = request.hnswEfConstruction();
  }

  if (!!request.hasHnswM()) {
    query["HnswM"] = request.hnswM();
  }

  if (!!request.hasLLMModel()) {
    query["LLMModel"] = request.LLMModel();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasMetadata()) {
    query["Metadata"] = request.metadata();
  }

  if (!!request.hasMetadataIndices()) {
    query["MetadataIndices"] = request.metadataIndices();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParser()) {
    query["Parser"] = request.parser();
  }

  if (!!request.hasPqEnable()) {
    query["PqEnable"] = request.pqEnable();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRelationshipTypesShrink()) {
    query["RelationshipTypes"] = request.relationshipTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDocumentCollection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDocumentCollectionResponse>();
}

/**
 * @summary Creates a document collection.
 *
 * @param request CreateDocumentCollectionRequest
 * @return CreateDocumentCollectionResponse
 */
CreateDocumentCollectionResponse Client::createDocumentCollection(const CreateDocumentCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDocumentCollectionWithOptions(request, runtime);
}

/**
 * @summary Install extensions.
 *
 * @param request CreateExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExtensionsResponse
 */
CreateExtensionsResponse Client::createExtensionsWithOptions(const CreateExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBNames()) {
    query["DBNames"] = request.DBNames();
  }

  if (!!request.hasExtensions()) {
    query["Extensions"] = request.extensions();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExtensions"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExtensionsResponse>();
}

/**
 * @summary Install extensions.
 *
 * @param request CreateExtensionsRequest
 * @return CreateExtensionsResponse
 */
CreateExtensionsResponse Client::createExtensions(const CreateExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExtensionsWithOptions(request, runtime);
}

/**
 * @summary Create External Data Service
 *
 * @param request CreateExternalDataServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExternalDataServiceResponse
 */
CreateExternalDataServiceResponse Client::createExternalDataServiceWithOptions(const CreateExternalDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceDescription()) {
    query["ServiceDescription"] = request.serviceDescription();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceSpec()) {
    query["ServiceSpec"] = request.serviceSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExternalDataService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExternalDataServiceResponse>();
}

/**
 * @summary Create External Data Service
 *
 * @param request CreateExternalDataServiceRequest
 * @return CreateExternalDataServiceResponse
 */
CreateExternalDataServiceResponse Client::createExternalDataService(const CreateExternalDataServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExternalDataServiceWithOptions(request, runtime);
}

/**
 * @summary Create Hadoop data source configuration
 *
 * @param request CreateHadoopDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHadoopDataSourceResponse
 */
CreateHadoopDataSourceResponse Client::createHadoopDataSourceWithOptions(const CreateHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceDescription()) {
    query["DataSourceDescription"] = request.dataSourceDescription();
  }

  if (!!request.hasDataSourceName()) {
    query["DataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasEmrInstanceId()) {
    query["EmrInstanceId"] = request.emrInstanceId();
  }

  if (!!request.hasHDFSConf()) {
    query["HDFSConf"] = request.HDFSConf();
  }

  if (!!request.hasHadoopCoreConf()) {
    query["HadoopCoreConf"] = request.hadoopCoreConf();
  }

  if (!!request.hasHadoopCreateType()) {
    query["HadoopCreateType"] = request.hadoopCreateType();
  }

  if (!!request.hasHadoopHostsAddress()) {
    query["HadoopHostsAddress"] = request.hadoopHostsAddress();
  }

  if (!!request.hasHiveConf()) {
    query["HiveConf"] = request.hiveConf();
  }

  if (!!request.hasMapReduceConf()) {
    query["MapReduceConf"] = request.mapReduceConf();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasYarnConf()) {
    query["YarnConf"] = request.yarnConf();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHadoopDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHadoopDataSourceResponse>();
}

/**
 * @summary Create Hadoop data source configuration
 *
 * @param request CreateHadoopDataSourceRequest
 * @return CreateHadoopDataSourceResponse
 */
CreateHadoopDataSourceResponse Client::createHadoopDataSource(const CreateHadoopDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHadoopDataSourceWithOptions(request, runtime);
}

/**
 * @summary Creates an index. Note: 1. Only scalar indexes are supported. 2. The table is write-locked during index creation. 3. When creating an index on a table with a large volume of data, the process consumes significant CPU and I/O resources of the instance. If this impacts instance availability, call CancelCreateIndexJob to cancel the index creation.
 *
 * @param request CreateIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIndexResponse
 */
CreateIndexResponse Client::createIndexWithOptions(const CreateIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasIndexConfig()) {
    query["IndexConfig"] = request.indexConfig();
  }

  if (!!request.hasIndexField()) {
    query["IndexField"] = request.indexField();
  }

  if (!!request.hasIndexName()) {
    query["IndexName"] = request.indexName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIndex"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIndexResponse>();
}

/**
 * @summary Creates an index. Note: 1. Only scalar indexes are supported. 2. The table is write-locked during index creation. 3. When creating an index on a table with a large volume of data, the process consumes significant CPU and I/O resources of the instance. If this impacts instance availability, call CancelCreateIndexJob to cancel the index creation.
 *
 * @param request CreateIndexRequest
 * @return CreateIndexResponse
 */
CreateIndexResponse Client::createIndex(const CreateIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIndexWithOptions(request, runtime);
}

/**
 * @summary Creates a JDBC data source.
 *
 * @param request CreateJDBCDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJDBCDataSourceResponse
 */
CreateJDBCDataSourceResponse Client::createJDBCDataSourceWithOptions(const CreateJDBCDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceDescription()) {
    query["DataSourceDescription"] = request.dataSourceDescription();
  }

  if (!!request.hasDataSourceName()) {
    query["DataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasJDBCConnectionString()) {
    query["JDBCConnectionString"] = request.JDBCConnectionString();
  }

  if (!!request.hasJDBCPassword()) {
    query["JDBCPassword"] = request.JDBCPassword();
  }

  if (!!request.hasJDBCUserName()) {
    query["JDBCUserName"] = request.JDBCUserName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateJDBCDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJDBCDataSourceResponse>();
}

/**
 * @summary Creates a JDBC data source.
 *
 * @param request CreateJDBCDataSourceRequest
 * @return CreateJDBCDataSourceResponse
 */
CreateJDBCDataSourceResponse Client::createJDBCDataSource(const CreateJDBCDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJDBCDataSourceWithOptions(request, runtime);
}

/**
 * @summary Creates a model service.
 *
 * @description Before you call this operation, make sure that you fully understand the [billing methods](https://help.aliyun.com/document_detail/35406.html) and [pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing) of AnalyticDB for PostgreSQL.
 *
 * @param tmpReq CreateModelServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelServiceResponse
 */
CreateModelServiceResponse Client::createModelServiceWithOptions(const CreateModelServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateModelServiceShrinkRequest request = CreateModelServiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAiNodes()) {
    request.setAiNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.aiNodes(), "AiNodes", "json"));
  }

  if (!!tmpReq.hasModelParams()) {
    request.setModelParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.modelParams(), "ModelParams", "json"));
  }

  json query = {};
  if (!!request.hasAiNodesShrink()) {
    query["AiNodes"] = request.aiNodesShrink();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnablePublicConnection()) {
    query["EnablePublicConnection"] = request.enablePublicConnection();
  }

  if (!!request.hasInferenceEngine()) {
    query["InferenceEngine"] = request.inferenceEngine();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.modelName();
  }

  if (!!request.hasModelParamsShrink()) {
    query["ModelParams"] = request.modelParamsShrink();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.securityIPList();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModelService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelServiceResponse>();
}

/**
 * @summary Creates a model service.
 *
 * @description Before you call this operation, make sure that you fully understand the [billing methods](https://help.aliyun.com/document_detail/35406.html) and [pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing) of AnalyticDB for PostgreSQL.
 *
 * @param request CreateModelServiceRequest
 * @return CreateModelServiceResponse
 */
CreateModelServiceResponse Client::createModelService(const CreateModelServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelServiceWithOptions(request, runtime);
}

/**
 * @summary Creates a vector namespace.
 *
 * @param request CreateNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespaceWithOptions(const CreateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNamespace"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNamespaceResponse>();
}

/**
 * @summary Creates a vector namespace.
 *
 * @param request CreateNamespaceRequest
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespace(const CreateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNamespaceWithOptions(request, runtime);
}

/**
 * @summary Create Homogeneous Data Source
 *
 * @param request CreateRemoteADBDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRemoteADBDataSourceResponse
 */
CreateRemoteADBDataSourceResponse Client::createRemoteADBDataSourceWithOptions(const CreateRemoteADBDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceName()) {
    query["DataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasLocalDBInstanceId()) {
    query["LocalDBInstanceId"] = request.localDBInstanceId();
  }

  if (!!request.hasLocalDatabase()) {
    query["LocalDatabase"] = request.localDatabase();
  }

  if (!!request.hasManagerUserName()) {
    query["ManagerUserName"] = request.managerUserName();
  }

  if (!!request.hasManagerUserPassword()) {
    query["ManagerUserPassword"] = request.managerUserPassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemoteDBInstanceId()) {
    query["RemoteDBInstanceId"] = request.remoteDBInstanceId();
  }

  if (!!request.hasRemoteDatabase()) {
    query["RemoteDatabase"] = request.remoteDatabase();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasUserPassword()) {
    query["UserPassword"] = request.userPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRemoteADBDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRemoteADBDataSourceResponse>();
}

/**
 * @summary Create Homogeneous Data Source
 *
 * @param request CreateRemoteADBDataSourceRequest
 * @return CreateRemoteADBDataSourceResponse
 */
CreateRemoteADBDataSourceResponse Client::createRemoteADBDataSource(const CreateRemoteADBDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRemoteADBDataSourceWithOptions(request, runtime);
}

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
CreateSampleDataResponse Client::createSampleDataWithOptions(const CreateSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSampleData"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleDataResponse>();
}

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
CreateSampleDataResponse Client::createSampleData(const CreateSampleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSampleDataWithOptions(request, runtime);
}

/**
 * @summary Creates an access credential for an AnalyticDB for PostgreSQL instance by using the name and password of a database account.
 *
 * @param request CreateSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecretResponse
 */
CreateSecretResponse Client::createSecretWithOptions(const CreateSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecretName()) {
    query["SecretName"] = request.secretName();
  }

  if (!!request.hasTestConnection()) {
    query["TestConnection"] = request.testConnection();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecret"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecretResponse>();
}

/**
 * @summary Creates an access credential for an AnalyticDB for PostgreSQL instance by using the name and password of a database account.
 *
 * @param request CreateSecretRequest
 * @return CreateSecretResponse
 */
CreateSecretResponse Client::createSecret(const CreateSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecretWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role.
 *
 * @param request CreateServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRoleWithOptions(const CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRole"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceLinkedRoleResponse>();
}

/**
 * @summary Creates a service-linked role.
 *
 * @param request CreateServiceLinkedRoleRequest
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param request CreateStreamingDataServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStreamingDataServiceResponse
 */
CreateStreamingDataServiceResponse Client::createStreamingDataServiceWithOptions(const CreateStreamingDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceDescription()) {
    query["ServiceDescription"] = request.serviceDescription();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceSpec()) {
    query["ServiceSpec"] = request.serviceSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStreamingDataService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStreamingDataServiceResponse>();
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param request CreateStreamingDataServiceRequest
 * @return CreateStreamingDataServiceResponse
 */
CreateStreamingDataServiceResponse Client::createStreamingDataService(const CreateStreamingDataServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamingDataServiceWithOptions(request, runtime);
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param request CreateStreamingDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStreamingDataSourceResponse
 */
CreateStreamingDataSourceResponse Client::createStreamingDataSourceWithOptions(const CreateStreamingDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceConfig()) {
    query["DataSourceConfig"] = request.dataSourceConfig();
  }

  if (!!request.hasDataSourceDescription()) {
    query["DataSourceDescription"] = request.dataSourceDescription();
  }

  if (!!request.hasDataSourceName()) {
    query["DataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStreamingDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStreamingDataSourceResponse>();
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param request CreateStreamingDataSourceRequest
 * @return CreateStreamingDataSourceResponse
 */
CreateStreamingDataSourceResponse Client::createStreamingDataSource(const CreateStreamingDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamingDataSourceWithOptions(request, runtime);
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param tmpReq CreateStreamingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStreamingJobResponse
 */
CreateStreamingJobResponse Client::createStreamingJobWithOptions(const CreateStreamingJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStreamingJobShrinkRequest request = CreateStreamingJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestColumns()) {
    request.setDestColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.destColumns(), "DestColumns", "json"));
  }

  if (!!tmpReq.hasMatchColumns()) {
    request.setMatchColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.matchColumns(), "MatchColumns", "json"));
  }

  if (!!tmpReq.hasSrcColumns()) {
    request.setSrcColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.srcColumns(), "SrcColumns", "json"));
  }

  if (!!tmpReq.hasUpdateColumns()) {
    request.setUpdateColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.updateColumns(), "UpdateColumns", "json"));
  }

  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasConsistency()) {
    query["Consistency"] = request.consistency();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasDestColumnsShrink()) {
    query["DestColumns"] = request.destColumnsShrink();
  }

  if (!!request.hasDestDatabase()) {
    query["DestDatabase"] = request.destDatabase();
  }

  if (!!request.hasDestSchema()) {
    query["DestSchema"] = request.destSchema();
  }

  if (!!request.hasDestTable()) {
    query["DestTable"] = request.destTable();
  }

  if (!!request.hasErrorLimitCount()) {
    query["ErrorLimitCount"] = request.errorLimitCount();
  }

  if (!!request.hasFallbackOffset()) {
    query["FallbackOffset"] = request.fallbackOffset();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasJobConfig()) {
    query["JobConfig"] = request.jobConfig();
  }

  if (!!request.hasJobDescription()) {
    query["JobDescription"] = request.jobDescription();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.jobName();
  }

  if (!!request.hasMatchColumnsShrink()) {
    query["MatchColumns"] = request.matchColumnsShrink();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSrcColumnsShrink()) {
    query["SrcColumns"] = request.srcColumnsShrink();
  }

  if (!!request.hasTryRun()) {
    query["TryRun"] = request.tryRun();
  }

  if (!!request.hasUpdateColumnsShrink()) {
    query["UpdateColumns"] = request.updateColumnsShrink();
  }

  if (!!request.hasWriteMode()) {
    query["WriteMode"] = request.writeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStreamingJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStreamingJobResponse>();
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param request CreateStreamingJobRequest
 * @return CreateStreamingJobResponse
 */
CreateStreamingJobResponse Client::createStreamingJob(const CreateStreamingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamingJobWithOptions(request, runtime);
}

/**
 * @summary Creates a Supabase project.
 *
 * @description *   You can call this operation to create a Supabase project.
 *
 * @param request CreateSupabaseProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSupabaseProjectResponse
 */
CreateSupabaseProjectResponse Client::createSupabaseProjectWithOptions(const CreateSupabaseProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDiskPerformanceLevel()) {
    query["DiskPerformanceLevel"] = request.diskPerformanceLevel();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasProjectSpec()) {
    query["ProjectSpec"] = request.projectSpec();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.securityIPList();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.storageSize();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSupabaseProject"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSupabaseProjectResponse>();
}

/**
 * @summary Creates a Supabase project.
 *
 * @description *   You can call this operation to create a Supabase project.
 *
 * @param request CreateSupabaseProjectRequest
 * @return CreateSupabaseProjectResponse
 */
CreateSupabaseProjectResponse Client::createSupabaseProject(const CreateSupabaseProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSupabaseProjectWithOptions(request, runtime);
}

/**
 * @summary Create Vector Index
 *
 * @param request CreateVectorIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVectorIndexResponse
 */
CreateVectorIndexResponse Client::createVectorIndexWithOptions(const CreateVectorIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.dimension();
  }

  if (!!request.hasExternalStorage()) {
    query["ExternalStorage"] = request.externalStorage();
  }

  if (!!request.hasHnswEfConstruction()) {
    query["HnswEfConstruction"] = request.hnswEfConstruction();
  }

  if (!!request.hasHnswM()) {
    query["HnswM"] = request.hnswM();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPqEnable()) {
    query["PqEnable"] = request.pqEnable();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVectorIndex"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVectorIndexResponse>();
}

/**
 * @summary Create Vector Index
 *
 * @param request CreateVectorIndexRequest
 * @return CreateVectorIndexResponse
 */
CreateVectorIndexResponse Client::createVectorIndex(const CreateVectorIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVectorIndexWithOptions(request, runtime);
}

/**
 * @summary Delete AI Node
 *
 * @description *   Subscription instances cannot be manually released. They are automatically released when they expire.
 * *   You can call this operation to release pay-as-you-go instances only when they are in the **Running** state.
 *
 * @param request DeleteAINodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAINodeResponse
 */
DeleteAINodeResponse Client::deleteAINodeWithOptions(const DeleteAINodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAINodeNum()) {
    query["AINodeNum"] = request.AINodeNum();
  }

  if (!!request.hasAINodePoolId()) {
    query["AINodePoolId"] = request.AINodePoolId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNodeNames()) {
    query["NodeNames"] = request.nodeNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAINode"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAINodeResponse>();
}

/**
 * @summary Delete AI Node
 *
 * @description *   Subscription instances cannot be manually released. They are automatically released when they expire.
 * *   You can call this operation to release pay-as-you-go instances only when they are in the **Running** state.
 *
 * @param request DeleteAINodeRequest
 * @return DeleteAINodeResponse
 */
DeleteAINodeResponse Client::deleteAINode(const DeleteAINodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAINodeWithOptions(request, runtime);
}

/**
 * @summary 删除数据库账号
 *
 * @param request DeleteAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccountWithOptions(const DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccountResponse>();
}

/**
 * @summary 删除数据库账号
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a backup set. You can call this operation to delete only physical backup sets that are manually backed up.
 *
 * @param request DeleteBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackupWithOptions(const DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackup"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupResponse>();
}

/**
 * @summary Deletes a backup set. You can call this operation to delete only physical backup sets that are manually backed up.
 *
 * @param request DeleteBackupRequest
 * @return DeleteBackupResponse
 */
DeleteBackupResponse Client::deleteBackup(const DeleteBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupWithOptions(request, runtime);
}

/**
 * @summary Deletes a vector collection.
 *
 * @param request DeleteCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCollectionResponse
 */
DeleteCollectionResponse Client::deleteCollectionWithOptions(const DeleteCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCollection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCollectionResponse>();
}

/**
 * @summary Deletes a vector collection.
 *
 * @param request DeleteCollectionRequest
 * @return DeleteCollectionResponse
 */
DeleteCollectionResponse Client::deleteCollection(const DeleteCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCollectionWithOptions(request, runtime);
}

/**
 * @summary Deletes vector data.
 *
 * @param request DeleteCollectionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCollectionDataResponse
 */
DeleteCollectionDataResponse Client::deleteCollectionDataWithOptions(const DeleteCollectionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasCollectionData()) {
    query["CollectionData"] = request.collectionData();
  }

  if (!!request.hasCollectionDataFilter()) {
    query["CollectionDataFilter"] = request.collectionDataFilter();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCollectionData"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCollectionDataResponse>();
}

/**
 * @summary Deletes vector data.
 *
 * @param request DeleteCollectionDataRequest
 * @return DeleteCollectionDataResponse
 */
DeleteCollectionDataResponse Client::deleteCollectionData(const DeleteCollectionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCollectionDataWithOptions(request, runtime);
}

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
DeleteDBInstanceResponse Client::deleteDBInstanceWithOptions(const DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstanceResponse>();
}

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
DeleteDBInstanceResponse Client::deleteDBInstance(const DeleteDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除IP分组
 *
 * @param request DeleteDBInstanceIPArrayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceIPArrayResponse
 */
DeleteDBInstanceIPArrayResponse Client::deleteDBInstanceIPArrayWithOptions(const DeleteDBInstanceIPArrayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasIPArrayName()) {
    query["IPArrayName"] = request.IPArrayName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstanceIPArray"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstanceIPArrayResponse>();
}

/**
 * @summary 删除IP分组
 *
 * @param request DeleteDBInstanceIPArrayRequest
 * @return DeleteDBInstanceIPArrayResponse
 */
DeleteDBInstanceIPArrayResponse Client::deleteDBInstanceIPArray(const DeleteDBInstanceIPArrayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceIPArrayWithOptions(request, runtime);
}

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
DeleteDBInstancePlanResponse Client::deleteDBInstancePlanWithOptions(const DeleteDBInstancePlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstancePlan"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstancePlanResponse>();
}

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
DeleteDBInstancePlanResponse Client::deleteDBInstancePlan(const DeleteDBInstancePlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstancePlanWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource group.
 *
 * @param request DeleteDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBResourceGroupResponse
 */
DeleteDBResourceGroupResponse Client::deleteDBResourceGroupWithOptions(const DeleteDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBResourceGroup"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBResourceGroupResponse>();
}

/**
 * @summary Deletes a resource group.
 *
 * @param request DeleteDBResourceGroupRequest
 * @return DeleteDBResourceGroupResponse
 */
DeleteDBResourceGroupResponse Client::deleteDBResourceGroup(const DeleteDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 删除数据库
 *
 * @param request DeleteDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabaseWithOptions(const DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatabase"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatabaseResponse>();
}

/**
 * @summary 删除数据库
 *
 * @param request DeleteDatabaseRequest
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabase(const DeleteDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatabaseWithOptions(request, runtime);
}

/**
 * @summary Delete Document
 *
 * @param request DeleteDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocumentWithOptions(const DeleteDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDocument"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocumentResponse>();
}

/**
 * @summary Delete Document
 *
 * @param request DeleteDocumentRequest
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocument(const DeleteDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocumentWithOptions(request, runtime);
}

/**
 * @summary Delete Knowledge Base
 *
 * @param request DeleteDocumentCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocumentCollectionResponse
 */
DeleteDocumentCollectionResponse Client::deleteDocumentCollectionWithOptions(const DeleteDocumentCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDocumentCollection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocumentCollectionResponse>();
}

/**
 * @summary Delete Knowledge Base
 *
 * @param request DeleteDocumentCollectionRequest
 * @return DeleteDocumentCollectionResponse
 */
DeleteDocumentCollectionResponse Client::deleteDocumentCollection(const DeleteDocumentCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocumentCollectionWithOptions(request, runtime);
}

/**
 * @summary Uninstall an extension.
 *
 * @param request DeleteExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExtensionResponse
 */
DeleteExtensionResponse Client::deleteExtensionWithOptions(const DeleteExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBNames()) {
    query["DBNames"] = request.DBNames();
  }

  if (!!request.hasExtension()) {
    query["Extension"] = request.extension();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExtension"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExtensionResponse>();
}

/**
 * @summary Uninstall an extension.
 *
 * @param request DeleteExtensionRequest
 * @return DeleteExtensionResponse
 */
DeleteExtensionResponse Client::deleteExtension(const DeleteExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExtensionWithOptions(request, runtime);
}

/**
 * @summary Delete External Data Service
 *
 * @param request DeleteExternalDataServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExternalDataServiceResponse
 */
DeleteExternalDataServiceResponse Client::deleteExternalDataServiceWithOptions(const DeleteExternalDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExternalDataService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExternalDataServiceResponse>();
}

/**
 * @summary Delete External Data Service
 *
 * @param request DeleteExternalDataServiceRequest
 * @return DeleteExternalDataServiceResponse
 */
DeleteExternalDataServiceResponse Client::deleteExternalDataService(const DeleteExternalDataServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExternalDataServiceWithOptions(request, runtime);
}

/**
 * @summary 删除hadoop数据源
 *
 * @param request DeleteHadoopDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHadoopDataSourceResponse
 */
DeleteHadoopDataSourceResponse Client::deleteHadoopDataSourceWithOptions(const DeleteHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHadoopDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHadoopDataSourceResponse>();
}

/**
 * @summary 删除hadoop数据源
 *
 * @param request DeleteHadoopDataSourceRequest
 * @return DeleteHadoopDataSourceResponse
 */
DeleteHadoopDataSourceResponse Client::deleteHadoopDataSource(const DeleteHadoopDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHadoopDataSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes an index.
 *
 * @param request DeleteIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIndexResponse
 */
DeleteIndexResponse Client::deleteIndexWithOptions(const DeleteIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasIndexName()) {
    query["IndexName"] = request.indexName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIndex"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIndexResponse>();
}

/**
 * @summary Deletes an index.
 *
 * @param request DeleteIndexRequest
 * @return DeleteIndexResponse
 */
DeleteIndexResponse Client::deleteIndex(const DeleteIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIndexWithOptions(request, runtime);
}

/**
 * @summary Delete JDBC data source
 *
 * @param request DeleteJDBCDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJDBCDataSourceResponse
 */
DeleteJDBCDataSourceResponse Client::deleteJDBCDataSourceWithOptions(const DeleteJDBCDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJDBCDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJDBCDataSourceResponse>();
}

/**
 * @summary Delete JDBC data source
 *
 * @param request DeleteJDBCDataSourceRequest
 * @return DeleteJDBCDataSourceResponse
 */
DeleteJDBCDataSourceResponse Client::deleteJDBCDataSource(const DeleteJDBCDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteJDBCDataSourceWithOptions(request, runtime);
}

/**
 * @summary Delete Model Service
 *
 * @description Deletes a model service.
 *
 * @param request DeleteModelServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelServiceResponse
 */
DeleteModelServiceResponse Client::deleteModelServiceWithOptions(const DeleteModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasModelServiceId()) {
    query["ModelServiceId"] = request.modelServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelServiceResponse>();
}

/**
 * @summary Delete Model Service
 *
 * @description Deletes a model service.
 *
 * @param request DeleteModelServiceRequest
 * @return DeleteModelServiceResponse
 */
DeleteModelServiceResponse Client::deleteModelService(const DeleteModelServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a namespace.
 *
 * @param request DeleteNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespaceWithOptions(const DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNamespace"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNamespaceResponse>();
}

/**
 * @summary Deletes a namespace.
 *
 * @param request DeleteNamespaceRequest
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespace(const DeleteNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNamespaceWithOptions(request, runtime);
}

/**
 * @summary 关闭私有RAG服务
 *
 * @param request DeletePrivateRAGServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateRAGServiceResponse
 */
DeletePrivateRAGServiceResponse Client::deletePrivateRAGServiceWithOptions(const DeletePrivateRAGServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrivateRAGService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivateRAGServiceResponse>();
}

/**
 * @summary 关闭私有RAG服务
 *
 * @param request DeletePrivateRAGServiceRequest
 * @return DeletePrivateRAGServiceResponse
 */
DeletePrivateRAGServiceResponse Client::deletePrivateRAGService(const DeletePrivateRAGServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateRAGServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a remote AnalyticDB data source.
 *
 * @param request DeleteRemoteADBDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRemoteADBDataSourceResponse
 */
DeleteRemoteADBDataSourceResponse Client::deleteRemoteADBDataSourceWithOptions(const DeleteRemoteADBDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasLocalDBInstanceId()) {
    query["LocalDBInstanceId"] = request.localDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRemoteADBDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRemoteADBDataSourceResponse>();
}

/**
 * @summary Deletes a remote AnalyticDB data source.
 *
 * @param request DeleteRemoteADBDataSourceRequest
 * @return DeleteRemoteADBDataSourceResponse
 */
DeleteRemoteADBDataSourceResponse Client::deleteRemoteADBDataSource(const DeleteRemoteADBDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRemoteADBDataSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes the access credentials of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DeleteSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecretResponse
 */
DeleteSecretResponse Client::deleteSecretWithOptions(const DeleteSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecretArn()) {
    query["SecretArn"] = request.secretArn();
  }

  if (!!request.hasSecretName()) {
    query["SecretName"] = request.secretName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecret"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecretResponse>();
}

/**
 * @summary Deletes the access credentials of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DeleteSecretRequest
 * @return DeleteSecretResponse
 */
DeleteSecretResponse Client::deleteSecret(const DeleteSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecretWithOptions(request, runtime);
}

/**
 * @summary Deletes a real-time data service.
 *
 * @param request DeleteStreamingDataServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStreamingDataServiceResponse
 */
DeleteStreamingDataServiceResponse Client::deleteStreamingDataServiceWithOptions(const DeleteStreamingDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStreamingDataService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStreamingDataServiceResponse>();
}

/**
 * @summary Deletes a real-time data service.
 *
 * @param request DeleteStreamingDataServiceRequest
 * @return DeleteStreamingDataServiceResponse
 */
DeleteStreamingDataServiceResponse Client::deleteStreamingDataService(const DeleteStreamingDataServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStreamingDataServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a real-time data source.
 *
 * @param request DeleteStreamingDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStreamingDataSourceResponse
 */
DeleteStreamingDataSourceResponse Client::deleteStreamingDataSourceWithOptions(const DeleteStreamingDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStreamingDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStreamingDataSourceResponse>();
}

/**
 * @summary Deletes a real-time data source.
 *
 * @param request DeleteStreamingDataSourceRequest
 * @return DeleteStreamingDataSourceResponse
 */
DeleteStreamingDataSourceResponse Client::deleteStreamingDataSource(const DeleteStreamingDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStreamingDataSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a real-time data service job.
 *
 * @param request DeleteStreamingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStreamingJobResponse
 */
DeleteStreamingJobResponse Client::deleteStreamingJobWithOptions(const DeleteStreamingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStreamingJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStreamingJobResponse>();
}

/**
 * @summary Deletes a real-time data service job.
 *
 * @param request DeleteStreamingJobRequest
 * @return DeleteStreamingJobResponse
 */
DeleteStreamingJobResponse Client::deleteStreamingJob(const DeleteStreamingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStreamingJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a Supabase project.
 *
 * @description *   You can call this operation to delete a Supabase project.
 *
 * @param request DeleteSupabaseProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSupabaseProjectResponse
 */
DeleteSupabaseProjectResponse Client::deleteSupabaseProjectWithOptions(const DeleteSupabaseProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSupabaseProject"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSupabaseProjectResponse>();
}

/**
 * @summary Deletes a Supabase project.
 *
 * @description *   You can call this operation to delete a Supabase project.
 *
 * @param request DeleteSupabaseProjectRequest
 * @return DeleteSupabaseProjectResponse
 */
DeleteSupabaseProjectResponse Client::deleteSupabaseProject(const DeleteSupabaseProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSupabaseProjectWithOptions(request, runtime);
}

/**
 * @summary Deletes a vector index.
 *
 * @param request DeleteVectorIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVectorIndexResponse
 */
DeleteVectorIndexResponse Client::deleteVectorIndexWithOptions(const DeleteVectorIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVectorIndex"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVectorIndexResponse>();
}

/**
 * @summary Deletes a vector index.
 *
 * @param request DeleteVectorIndexRequest
 * @return DeleteVectorIndexResponse
 */
DeleteVectorIndexResponse Client::deleteVectorIndex(const DeleteVectorIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVectorIndexWithOptions(request, runtime);
}

/**
 * @summary 部署私有RAG服务
 *
 * @param request DeployPrivateRAGServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployPrivateRAGServiceResponse
 */
DeployPrivateRAGServiceResponse Client::deployPrivateRAGServiceWithOptions(const DeployPrivateRAGServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployPrivateRAGService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployPrivateRAGServiceResponse>();
}

/**
 * @summary 部署私有RAG服务
 *
 * @param request DeployPrivateRAGServiceRequest
 * @return DeployPrivateRAGServiceResponse
 */
DeployPrivateRAGServiceResponse Client::deployPrivateRAGService(const DeployPrivateRAGServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployPrivateRAGServiceWithOptions(request, runtime);
}

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
DescribeAccountsResponse Client::describeAccountsWithOptions(const DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountsResponse>();
}

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
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries active SQL records.
 *
 * @param request DescribeActiveSQLRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveSQLRecordsResponse
 */
DescribeActiveSQLRecordsResponse Client::describeActiveSQLRecordsWithOptions(const DescribeActiveSQLRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxDuration()) {
    query["MaxDuration"] = request.maxDuration();
  }

  if (!!request.hasMinDuration()) {
    query["MinDuration"] = request.minDuration();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveSQLRecords"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveSQLRecordsResponse>();
}

/**
 * @summary Queries active SQL records.
 *
 * @param request DescribeActiveSQLRecordsRequest
 * @return DescribeActiveSQLRecordsResponse
 */
DescribeActiveSQLRecordsResponse Client::describeActiveSQLRecords(const DescribeActiveSQLRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveSQLRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about available resources of AnalyticDB for PostgreSQL.
 *
 * @description When you create an AnalyticDB for PostgreSQL instance, you can call this operation to query the available resources within a zone.
 *
 * @param request DescribeAvailableResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableResourcesResponse
 */
DescribeAvailableResourcesResponse Client::describeAvailableResourcesWithOptions(const DescribeAvailableResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableResources"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableResourcesResponse>();
}

/**
 * @summary Queries the information about available resources of AnalyticDB for PostgreSQL.
 *
 * @description When you create an AnalyticDB for PostgreSQL instance, you can call this operation to query the available resources within a zone.
 *
 * @param request DescribeAvailableResourcesRequest
 * @return DescribeAvailableResourcesResponse
 */
DescribeAvailableResourcesResponse Client::describeAvailableResources(const DescribeAvailableResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a backup job.
 *
 * @param request DescribeBackupJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupJobResponse
 */
DescribeBackupJobResponse Client::describeBackupJobWithOptions(const DescribeBackupJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupJobId()) {
    query["BackupJobId"] = request.backupJobId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupJobResponse>();
}

/**
 * @summary Queries the information about a backup job.
 *
 * @param request DescribeBackupJobRequest
 * @return DescribeBackupJobResponse
 */
DescribeBackupJobResponse Client::describeBackupJob(const DescribeBackupJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupJobWithOptions(request, runtime);
}

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
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupPolicyResponse>();
}

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
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a vector collection.
 *
 * @param request DescribeCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCollectionResponse
 */
DescribeCollectionResponse Client::describeCollectionWithOptions(const DescribeCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCollection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCollectionResponse>();
}

/**
 * @summary Queries the information about a vector collection.
 *
 * @param request DescribeCollectionRequest
 * @return DescribeCollectionResponse
 */
DescribeCollectionResponse Client::describeCollection(const DescribeCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCollectionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an index creation job.
 *
 * @param request DescribeCreateIndexJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCreateIndexJobResponse
 */
DescribeCreateIndexJobResponse Client::describeCreateIndexJobWithOptions(const DescribeCreateIndexJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCreateIndexJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCreateIndexJobResponse>();
}

/**
 * @summary Queries the information about an index creation job.
 *
 * @param request DescribeCreateIndexJobRequest
 * @return DescribeCreateIndexJobResponse
 */
DescribeCreateIndexJobResponse Client::describeCreateIndexJob(const DescribeCreateIndexJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCreateIndexJobWithOptions(request, runtime);
}

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
DescribeDBClusterNodeResponse Client::describeDBClusterNodeWithOptions(const DescribeDBClusterNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.nodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterNode"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterNodeResponse>();
}

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
DescribeDBClusterNodeResponse Client::describeDBClusterNode(const DescribeDBClusterNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterNodeWithOptions(request, runtime);
}

/**
 * @summary Queries the information about performance metrics of an AnalyticDB for PostgreSQL instance within a time range.
 *
 * @description You can query monitoring information only within the last 30 days.
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformanceWithOptions(const DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.nodeType();
  }

  if (!!request.hasNodes()) {
    query["Nodes"] = request.nodes();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterPerformance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterPerformanceResponse>();
}

/**
 * @summary Queries the information about performance metrics of an AnalyticDB for PostgreSQL instance within a time range.
 *
 * @description You can query monitoring information only within the last 30 days.
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterPerformanceWithOptions(request, runtime);
}

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
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttributeWithOptions(const DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceAttribute"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceAttributeResponse>();
}

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
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

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
DescribeDBInstanceDataBloatResponse Client::describeDBInstanceDataBloatWithOptions(const DescribeDBInstanceDataBloatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceDataBloat"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceDataBloatResponse>();
}

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
DescribeDBInstanceDataBloatResponse Client::describeDBInstanceDataBloat(const DescribeDBInstanceDataBloatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceDataBloatWithOptions(request, runtime);
}

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
DescribeDBInstanceDataSkewResponse Client::describeDBInstanceDataSkewWithOptions(const DescribeDBInstanceDataSkewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceDataSkew"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceDataSkewResponse>();
}

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
DescribeDBInstanceDataSkewResponse Client::describeDBInstanceDataSkew(const DescribeDBInstanceDataSkewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceDataSkewWithOptions(request, runtime);
}

/**
 * @summary Queries the information about nodes in an AnalyticDB for PostgreSQL instance.
 *
 * @description You can call this operation to query the distribution and states of coordinator and compute nodes in an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeDBInstanceDiagnosisSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceDiagnosisSummaryResponse
 */
DescribeDBInstanceDiagnosisSummaryResponse Client::describeDBInstanceDiagnosisSummaryWithOptions(const DescribeDBInstanceDiagnosisSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRolePreferd()) {
    query["RolePreferd"] = request.rolePreferd();
  }

  if (!!request.hasStartStatus()) {
    query["StartStatus"] = request.startStatus();
  }

  if (!!request.hasSyncMode()) {
    query["SyncMode"] = request.syncMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceDiagnosisSummary"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceDiagnosisSummaryResponse>();
}

/**
 * @summary Queries the information about nodes in an AnalyticDB for PostgreSQL instance.
 *
 * @description You can call this operation to query the distribution and states of coordinator and compute nodes in an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeDBInstanceDiagnosisSummaryRequest
 * @return DescribeDBInstanceDiagnosisSummaryResponse
 */
DescribeDBInstanceDiagnosisSummaryResponse Client::describeDBInstanceDiagnosisSummary(const DescribeDBInstanceDiagnosisSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceDiagnosisSummaryWithOptions(request, runtime);
}

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
DescribeDBInstanceErrorLogResponse Client::describeDBInstanceErrorLogWithOptions(const DescribeDBInstanceErrorLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasHost()) {
    query["Host"] = request.host();
  }

  if (!!request.hasKeywords()) {
    query["Keywords"] = request.keywords();
  }

  if (!!request.hasLogLevel()) {
    query["LogLevel"] = request.logLevel();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceErrorLog"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceErrorLogResponse>();
}

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
DescribeDBInstanceErrorLogResponse Client::describeDBInstanceErrorLog(const DescribeDBInstanceErrorLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceErrorLogWithOptions(request, runtime);
}

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
DescribeDBInstanceIPArrayListResponse Client::describeDBInstanceIPArrayListWithOptions(const DescribeDBInstanceIPArrayListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceIPArrayName()) {
    query["DBInstanceIPArrayName"] = request.DBInstanceIPArrayName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceIPArrayList"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceIPArrayListResponse>();
}

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
DescribeDBInstanceIPArrayListResponse Client::describeDBInstanceIPArrayList(const DescribeDBInstanceIPArrayListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceIPArrayListWithOptions(request, runtime);
}

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
DescribeDBInstanceIndexUsageResponse Client::describeDBInstanceIndexUsageWithOptions(const DescribeDBInstanceIndexUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceIndexUsage"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceIndexUsageResponse>();
}

/**
 * @summary Queries the index usage of an AnalyticDB for PostgreSQL instance.
 *
 * @description Appropriate indexes can accelerate database queries. You can call this operation to query the index usage of an AnalyticDB for PostgreSQL instance.
 * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
 *
 * @param request DescribeDBInstanceIndexUsageRequest
 * @return DescribeDBInstanceIndexUsageResponse
 */
DescribeDBInstanceIndexUsageResponse Client::describeDBInstanceIndexUsage(const DescribeDBInstanceIndexUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceIndexUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the connection information of an instance.
 *
 * @param request DescribeDBInstanceNetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceNetInfoResponse
 */
DescribeDBInstanceNetInfoResponse Client::describeDBInstanceNetInfoWithOptions(const DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.connectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceNetInfo"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceNetInfoResponse>();
}

/**
 * @summary Queries the connection information of an instance.
 *
 * @param request DescribeDBInstanceNetInfoRequest
 * @return DescribeDBInstanceNetInfoResponse
 */
DescribeDBInstanceNetInfoResponse Client::describeDBInstanceNetInfo(const DescribeDBInstanceNetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceNetInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information about performance metrics of an AnalyticDB for PostgreSQL instance within a time range.
 *
 * @param request DescribeDBInstancePerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancePerformanceResponse
 */
DescribeDBInstancePerformanceResponse Client::describeDBInstancePerformanceWithOptions(const DescribeDBInstancePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancePerformance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancePerformanceResponse>();
}

/**
 * @summary Queries the information about performance metrics of an AnalyticDB for PostgreSQL instance within a time range.
 *
 * @param request DescribeDBInstancePerformanceRequest
 * @return DescribeDBInstancePerformanceResponse
 */
DescribeDBInstancePerformanceResponse Client::describeDBInstancePerformance(const DescribeDBInstancePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancePerformanceWithOptions(request, runtime);
}

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
DescribeDBInstancePlansResponse Client::describeDBInstancePlansWithOptions(const DescribeDBInstancePlansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlanCreateDate()) {
    query["PlanCreateDate"] = request.planCreateDate();
  }

  if (!!request.hasPlanDesc()) {
    query["PlanDesc"] = request.planDesc();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasPlanScheduleType()) {
    query["PlanScheduleType"] = request.planScheduleType();
  }

  if (!!request.hasPlanType()) {
    query["PlanType"] = request.planType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstancePlans"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancePlansResponse>();
}

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
DescribeDBInstancePlansResponse Client::describeDBInstancePlans(const DescribeDBInstancePlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancePlansWithOptions(request, runtime);
}

/**
 * @summary Queries the SSL information about an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSLWithOptions(const DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceSSL"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceSSLResponse>();
}

/**
 * @summary Queries the SSL information about an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeDBInstanceSSLRequest
 * @return DescribeDBInstanceSSLResponse
 */
DescribeDBInstanceSSLResponse Client::describeDBInstanceSSL(const DescribeDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum performance of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeDBInstanceSupportMaxPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceSupportMaxPerformanceResponse
 */
DescribeDBInstanceSupportMaxPerformanceResponse Client::describeDBInstanceSupportMaxPerformanceWithOptions(const DescribeDBInstanceSupportMaxPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceSupportMaxPerformance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceSupportMaxPerformanceResponse>();
}

/**
 * @summary Queries the maximum performance of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeDBInstanceSupportMaxPerformanceRequest
 * @return DescribeDBInstanceSupportMaxPerformanceResponse
 */
DescribeDBInstanceSupportMaxPerformanceResponse Client::describeDBInstanceSupportMaxPerformance(const DescribeDBInstanceSupportMaxPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceSupportMaxPerformanceWithOptions(request, runtime);
}

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
DescribeDBInstancesResponse Client::describeDBInstancesWithOptions(const DescribeDBInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeDBInstancesShrinkRequest request = DescribeDBInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBInstanceCategories()) {
    request.setDBInstanceCategoriesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.DBInstanceCategories(), "DBInstanceCategories", "simple"));
  }

  if (!!tmpReq.hasDBInstanceModes()) {
    request.setDBInstanceModesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.DBInstanceModes(), "DBInstanceModes", "simple"));
  }

  if (!!tmpReq.hasDBInstanceStatuses()) {
    request.setDBInstanceStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.DBInstanceStatuses(), "DBInstanceStatuses", "simple"));
  }

  if (!!tmpReq.hasInstanceDeployTypes()) {
    request.setInstanceDeployTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceDeployTypes(), "InstanceDeployTypes", "simple"));
  }

  json query = {};
  if (!!request.hasDBInstanceCategoriesShrink()) {
    query["DBInstanceCategories"] = request.DBInstanceCategoriesShrink();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.DBInstanceDescription();
  }

  if (!!request.hasDBInstanceIds()) {
    query["DBInstanceIds"] = request.DBInstanceIds();
  }

  if (!!request.hasDBInstanceModesShrink()) {
    query["DBInstanceModes"] = request.DBInstanceModesShrink();
  }

  if (!!request.hasDBInstanceStatusesShrink()) {
    query["DBInstanceStatuses"] = request.DBInstanceStatusesShrink();
  }

  if (!!request.hasInstanceDeployTypesShrink()) {
    query["InstanceDeployTypes"] = request.instanceDeployTypesShrink();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.instanceNetworkType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstances"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancesResponse>();
}

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
DescribeDBInstancesResponse Client::describeDBInstances(const DescribeDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about resource groups.
 *
 * @param request DescribeDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBResourceGroupResponse
 */
DescribeDBResourceGroupResponse Client::describeDBResourceGroupWithOptions(const DescribeDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBResourceGroup"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBResourceGroupResponse>();
}

/**
 * @summary Queries the information about resource groups.
 *
 * @param request DescribeDBResourceGroupRequest
 * @return DescribeDBResourceGroupResponse
 */
DescribeDBResourceGroupResponse Client::describeDBResourceGroup(const DescribeDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the resource management mode of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeDBResourceManagementModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBResourceManagementModeResponse
 */
DescribeDBResourceManagementModeResponse Client::describeDBResourceManagementModeWithOptions(const DescribeDBResourceManagementModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBResourceManagementMode"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBResourceManagementModeResponse>();
}

/**
 * @summary Queries the resource management mode of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeDBResourceManagementModeRequest
 * @return DescribeDBResourceManagementModeResponse
 */
DescribeDBResourceManagementModeResponse Client::describeDBResourceManagementMode(const DescribeDBResourceManagementModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBResourceManagementModeWithOptions(request, runtime);
}

/**
 * @summary Queries the information about minor versions of AnalyticDB for PostgreSQL instances.
 *
 * @param request DescribeDBVersionInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBVersionInfosResponse
 */
DescribeDBVersionInfosResponse Client::describeDBVersionInfosWithOptions(const DescribeDBVersionInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceMode()) {
    query["DBInstanceMode"] = request.DBInstanceMode();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBVersionInfos"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBVersionInfosResponse>();
}

/**
 * @summary Queries the information about minor versions of AnalyticDB for PostgreSQL instances.
 *
 * @param request DescribeDBVersionInfosRequest
 * @return DescribeDBVersionInfosResponse
 */
DescribeDBVersionInfosResponse Client::describeDBVersionInfos(const DescribeDBVersionInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBVersionInfosWithOptions(request, runtime);
}

/**
 * @summary Queries a list of backup sets of full backup or point-in-time backup for an AnalyticDB for PostgreSQL instance.
 *
 * @description You can call this operation to query a list of backup sets and backup details only for instances in elastic storage mode.
 *
 * @param request DescribeDataBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataBackupsResponse
 */
DescribeDataBackupsResponse Client::describeDataBackupsWithOptions(const DescribeDataBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.backupMode();
  }

  if (!!request.hasBackupStatus()) {
    query["BackupStatus"] = request.backupStatus();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataBackups"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataBackupsResponse>();
}

/**
 * @summary Queries a list of backup sets of full backup or point-in-time backup for an AnalyticDB for PostgreSQL instance.
 *
 * @description You can call this operation to query a list of backup sets and backup details only for instances in elastic storage mode.
 *
 * @param request DescribeDataBackupsRequest
 * @return DescribeDataBackupsResponse
 */
DescribeDataBackupsResponse Client::describeDataBackups(const DescribeDataBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the data redistribution information about an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode.
 *
 * @param request DescribeDataReDistributeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataReDistributeInfoResponse
 */
DescribeDataReDistributeInfoResponse Client::describeDataReDistributeInfoWithOptions(const DescribeDataReDistributeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataReDistributeInfo"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataReDistributeInfoResponse>();
}

/**
 * @summary Queries the data redistribution information about an AnalyticDB for PostgreSQL V6.0 instance in elastic storage mode.
 *
 * @param request DescribeDataReDistributeInfoRequest
 * @return DescribeDataReDistributeInfoResponse
 */
DescribeDataReDistributeInfoResponse Client::describeDataReDistributeInfo(const DescribeDataReDistributeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataReDistributeInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the state of data sharing for AnalyticDB for PostgreSQL instances.
 *
 * @description Data sharing is supported only for instances in Serverless mode.
 *
 * @param request DescribeDataShareInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataShareInstancesResponse
 */
DescribeDataShareInstancesResponse Client::describeDataShareInstancesWithOptions(const DescribeDataShareInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSearchValue()) {
    query["SearchValue"] = request.searchValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataShareInstances"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataShareInstancesResponse>();
}

/**
 * @summary Queries the state of data sharing for AnalyticDB for PostgreSQL instances.
 *
 * @description Data sharing is supported only for instances in Serverless mode.
 *
 * @param request DescribeDataShareInstancesRequest
 * @return DescribeDataShareInstancesResponse
 */
DescribeDataShareInstancesResponse Client::describeDataShareInstances(const DescribeDataShareInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataShareInstancesWithOptions(request, runtime);
}

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
DescribeDataSharePerformanceResponse Client::describeDataSharePerformanceWithOptions(const DescribeDataSharePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataSharePerformance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataSharePerformanceResponse>();
}

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
DescribeDataSharePerformanceResponse Client::describeDataSharePerformance(const DescribeDataSharePerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataSharePerformanceWithOptions(request, runtime);
}

/**
 * @summary 描述数据库
 *
 * @param request DescribeDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDatabaseResponse
 */
DescribeDatabaseResponse Client::describeDatabaseWithOptions(const DescribeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDatabase"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDatabaseResponse>();
}

/**
 * @summary 描述数据库
 *
 * @param request DescribeDatabaseRequest
 * @return DescribeDatabaseResponse
 */
DescribeDatabaseResponse Client::describeDatabase(const DescribeDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDatabaseWithOptions(request, runtime);
}

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
DescribeDiagnosisDimensionsResponse Client::describeDiagnosisDimensionsWithOptions(const DescribeDiagnosisDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisDimensions"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisDimensionsResponse>();
}

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
DescribeDiagnosisDimensionsResponse Client::describeDiagnosisDimensions(const DescribeDiagnosisDimensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisDimensionsWithOptions(request, runtime);
}

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
DescribeDiagnosisMonitorPerformanceResponse Client::describeDiagnosisMonitorPerformanceWithOptions(const DescribeDiagnosisMonitorPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisMonitorPerformance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisMonitorPerformanceResponse>();
}

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
DescribeDiagnosisMonitorPerformanceResponse Client::describeDiagnosisMonitorPerformance(const DescribeDiagnosisMonitorPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisMonitorPerformanceWithOptions(request, runtime);
}

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
DescribeDiagnosisRecordsResponse Client::describeDiagnosisRecordsWithOptions(const DescribeDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisRecords"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisRecordsResponse>();
}

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
DescribeDiagnosisRecordsResponse Client::describeDiagnosisRecords(const DescribeDiagnosisRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisRecordsWithOptions(request, runtime);
}

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
DescribeDiagnosisSQLInfoResponse Client::describeDiagnosisSQLInfoWithOptions(const DescribeDiagnosisSQLInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasQueryID()) {
    query["QueryID"] = request.queryID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisSQLInfo"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisSQLInfoResponse>();
}

/**
 * @summary Queries the information about a query for an AnalyticDB for PostgreSQL instance.
 *
 * @description You can call this operation to query the information about a query for an AnalyticDB for PostgreSQL instance, including the SQL statement, execution plan text, and execution plan tree.
 * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
 *
 * @param request DescribeDiagnosisSQLInfoRequest
 * @return DescribeDiagnosisSQLInfoResponse
 */
DescribeDiagnosisSQLInfoResponse Client::describeDiagnosisSQLInfo(const DescribeDiagnosisSQLInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisSQLInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a document.
 *
 * @param request DescribeDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocumentResponse
 */
DescribeDocumentResponse Client::describeDocumentWithOptions(const DescribeDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDocument"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDocumentResponse>();
}

/**
 * @summary Queries the information about a document.
 *
 * @param request DescribeDocumentRequest
 * @return DescribeDocumentResponse
 */
DescribeDocumentResponse Client::describeDocument(const DescribeDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocumentWithOptions(request, runtime);
}

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
DescribeDownloadRecordsResponse Client::describeDownloadRecordsWithOptions(const DescribeDownloadRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDownloadTaskType()) {
    query["DownloadTaskType"] = request.downloadTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadRecords"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadRecordsResponse>();
}

/**
 * @summary Queries the download records of query diagnostic information for an AnalyticDB for PostgreSQL instance.
 *
 * @description You must call the [DownloadDiagnosisRecords](https://help.aliyun.com/document_detail/447700.html) operation to download the query diagnostic information before you can call this operation to query the download records and download URLs.
 * This operation is available only for instances of V6.3.10.1 or later in elastic storage mode. For information about how to view and update the minor version of an instance, see [View the minor engine version](https://help.aliyun.com/document_detail/277424.html) and [Update the minor engine version](https://help.aliyun.com/document_detail/139271.html).
 *
 * @param request DescribeDownloadRecordsRequest
 * @return DescribeDownloadRecordsResponse
 */
DescribeDownloadRecordsResponse Client::describeDownloadRecords(const DescribeDownloadRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadRecordsWithOptions(request, runtime);
}

/**
 * @summary Get download records
 *
 * @param request DescribeDownloadSQLLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadSQLLogsResponse
 */
DescribeDownloadSQLLogsResponse Client::describeDownloadSQLLogsWithOptions(const DescribeDownloadSQLLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadSQLLogs"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadSQLLogsResponse>();
}

/**
 * @summary Get download records
 *
 * @param request DescribeDownloadSQLLogsRequest
 * @return DescribeDownloadSQLLogsResponse
 */
DescribeDownloadSQLLogsResponse Client::describeDownloadSQLLogs(const DescribeDownloadSQLLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadSQLLogsWithOptions(request, runtime);
}

/**
 * @summary 获取安装在某个数据库上的插件信息
 *
 * @param request DescribeExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExtensionResponse
 */
DescribeExtensionResponse Client::describeExtensionWithOptions(const DescribeExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasExtensionName()) {
    query["ExtensionName"] = request.extensionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExtension"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExtensionResponse>();
}

/**
 * @summary 获取安装在某个数据库上的插件信息
 *
 * @param request DescribeExtensionRequest
 * @return DescribeExtensionResponse
 */
DescribeExtensionResponse Client::describeExtension(const DescribeExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExtensionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an external data service.
 *
 * @param request DescribeExternalDataServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExternalDataServiceResponse
 */
DescribeExternalDataServiceResponse Client::describeExternalDataServiceWithOptions(const DescribeExternalDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExternalDataService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExternalDataServiceResponse>();
}

/**
 * @summary Queries the information about an external data service.
 *
 * @param request DescribeExternalDataServiceRequest
 * @return DescribeExternalDataServiceResponse
 */
DescribeExternalDataServiceResponse Client::describeExternalDataService(const DescribeExternalDataServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExternalDataServiceWithOptions(request, runtime);
}

/**
 * @summary Queries E-MapReduce (EMR) Hadoop clusters in a specific virtual private cloud (VPC).
 *
 * @param request DescribeHadoopClustersInSameNetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHadoopClustersInSameNetResponse
 */
DescribeHadoopClustersInSameNetResponse Client::describeHadoopClustersInSameNetWithOptions(const DescribeHadoopClustersInSameNetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHadoopClustersInSameNet"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHadoopClustersInSameNetResponse>();
}

/**
 * @summary Queries E-MapReduce (EMR) Hadoop clusters in a specific virtual private cloud (VPC).
 *
 * @param request DescribeHadoopClustersInSameNetRequest
 * @return DescribeHadoopClustersInSameNetResponse
 */
DescribeHadoopClustersInSameNetResponse Client::describeHadoopClustersInSameNet(const DescribeHadoopClustersInSameNetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHadoopClustersInSameNetWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration information about a Hadoop cluster.
 *
 * @param request DescribeHadoopConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHadoopConfigsResponse
 */
DescribeHadoopConfigsResponse Client::describeHadoopConfigsWithOptions(const DescribeHadoopConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.configName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEmrInstanceId()) {
    query["EmrInstanceId"] = request.emrInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHadoopConfigs"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHadoopConfigsResponse>();
}

/**
 * @summary Queries the configuration information about a Hadoop cluster.
 *
 * @param request DescribeHadoopConfigsRequest
 * @return DescribeHadoopConfigsResponse
 */
DescribeHadoopConfigsResponse Client::describeHadoopConfigs(const DescribeHadoopConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHadoopConfigsWithOptions(request, runtime);
}

/**
 * @summary Obtains the configurations of a Hadoop data source.
 *
 * @param request DescribeHadoopDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHadoopDataSourceResponse
 */
DescribeHadoopDataSourceResponse Client::describeHadoopDataSourceWithOptions(const DescribeHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHadoopDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHadoopDataSourceResponse>();
}

/**
 * @summary Obtains the configurations of a Hadoop data source.
 *
 * @param request DescribeHadoopDataSourceRequest
 * @return DescribeHadoopDataSourceResponse
 */
DescribeHadoopDataSourceResponse Client::describeHadoopDataSource(const DescribeHadoopDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHadoopDataSourceWithOptions(request, runtime);
}

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
DescribeHealthStatusResponse Client::describeHealthStatusWithOptions(const DescribeHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHealthStatus"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHealthStatusResponse>();
}

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
DescribeHealthStatusResponse Client::describeHealthStatus(const DescribeHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about real-time materialized views of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeIMVInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIMVInfosResponse
 */
DescribeIMVInfosResponse Client::describeIMVInfosWithOptions(const DescribeIMVInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasMVName()) {
    query["MVName"] = request.MVName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIMVInfos"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIMVInfosResponse>();
}

/**
 * @summary Queries the information about real-time materialized views of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeIMVInfosRequest
 * @return DescribeIMVInfosResponse
 */
DescribeIMVInfosResponse Client::describeIMVInfos(const DescribeIMVInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIMVInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves the information about an index.
 *
 * @param request DescribeIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIndexResponse
 */
DescribeIndexResponse Client::describeIndexWithOptions(const DescribeIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasIndexName()) {
    query["IndexName"] = request.indexName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIndex"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIndexResponse>();
}

/**
 * @summary Retrieves the information about an index.
 *
 * @param request DescribeIndexRequest
 * @return DescribeIndexResponse
 */
DescribeIndexResponse Client::describeIndex(const DescribeIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIndexWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a Java Database Connectivity (JDBC) data source.
 *
 * @param request DescribeJDBCDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJDBCDataSourceResponse
 */
DescribeJDBCDataSourceResponse Client::describeJDBCDataSourceWithOptions(const DescribeJDBCDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJDBCDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJDBCDataSourceResponse>();
}

/**
 * @summary Queries the configurations of a Java Database Connectivity (JDBC) data source.
 *
 * @param request DescribeJDBCDataSourceRequest
 * @return DescribeJDBCDataSourceResponse
 */
DescribeJDBCDataSourceResponse Client::describeJDBCDataSource(const DescribeJDBCDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJDBCDataSourceWithOptions(request, runtime);
}

/**
 * @summary Queries a list of log backups.
 *
 * @param request DescribeLogBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogBackupsResponse
 */
DescribeLogBackupsResponse Client::describeLogBackupsWithOptions(const DescribeLogBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogBackups"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogBackupsResponse>();
}

/**
 * @summary Queries a list of log backups.
 *
 * @param request DescribeLogBackupsRequest
 * @return DescribeLogBackupsResponse
 */
DescribeLogBackupsResponse Client::describeLogBackups(const DescribeLogBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a model service.
 *
 * @description ## [](#)Usage notes
 * This interface is used to view the details of a model service.
 * ## [](#qps-)QPS limit
 * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions.We recommend that you take note of this limit when you call this operation.
 *
 * @param request DescribeModelServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelServiceResponse
 */
DescribeModelServiceResponse Client::describeModelServiceWithOptions(const DescribeModelServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasModelServiceId()) {
    query["ModelServiceId"] = request.modelServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelServiceResponse>();
}

/**
 * @summary Queries the information about a model service.
 *
 * @description ## [](#)Usage notes
 * This interface is used to view the details of a model service.
 * ## [](#qps-)QPS limit
 * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions.We recommend that you take note of this limit when you call this operation.
 *
 * @param request DescribeModelServiceRequest
 * @return DescribeModelServiceResponse
 */
DescribeModelServiceResponse Client::describeModelService(const DescribeModelServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the parameter modification logs of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeModifyParameterLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModifyParameterLogResponse
 */
DescribeModifyParameterLogResponse Client::describeModifyParameterLogWithOptions(const DescribeModifyParameterLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModifyParameterLog"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModifyParameterLogResponse>();
}

/**
 * @summary Queries the parameter modification logs of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeModifyParameterLogRequest
 * @return DescribeModifyParameterLogResponse
 */
DescribeModifyParameterLogResponse Client::describeModifyParameterLog(const DescribeModifyParameterLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModifyParameterLogWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a namespace.
 *
 * @param request DescribeNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNamespaceResponse
 */
DescribeNamespaceResponse Client::describeNamespaceWithOptions(const DescribeNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNamespace"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNamespaceResponse>();
}

/**
 * @summary Queries the information about a namespace.
 *
 * @param request DescribeNamespaceRequest
 * @return DescribeNamespaceResponse
 */
DescribeNamespaceResponse Client::describeNamespace(const DescribeNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNamespaceWithOptions(request, runtime);
}

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
DescribeParametersResponse Client::describeParametersWithOptions(const DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParameters"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParametersResponse>();
}

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
DescribeParametersResponse Client::describeParameters(const DescribeParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParametersWithOptions(request, runtime);
}

/**
 * @summary 获取私有RAG服务详情
 *
 * @param request DescribePrivateRAGServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrivateRAGServiceResponse
 */
DescribePrivateRAGServiceResponse Client::describePrivateRAGServiceWithOptions(const DescribePrivateRAGServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrivateRAGService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrivateRAGServiceResponse>();
}

/**
 * @summary 获取私有RAG服务详情
 *
 * @param request DescribePrivateRAGServiceRequest
 * @return DescribePrivateRAGServiceResponse
 */
DescribePrivateRAGServiceResponse Client::describePrivateRAGService(const DescribePrivateRAGServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateRAGServiceWithOptions(request, runtime);
}

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
DescribeRdsVSwitchsResponse Client::describeRdsVSwitchsWithOptions(const DescribeRdsVSwitchsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsVSwitchs"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsVSwitchsResponse>();
}

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
DescribeRdsVSwitchsResponse Client::describeRdsVSwitchs(const DescribeRdsVSwitchsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVSwitchsWithOptions(request, runtime);
}

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
DescribeRdsVpcsResponse Client::describeRdsVpcsWithOptions(const DescribeRdsVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdsVpcs"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdsVpcsResponse>();
}

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
DescribeRdsVpcsResponse Client::describeRdsVpcs(const DescribeRdsVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdsVpcsWithOptions(request, runtime);
}

/**
 * @summary 描述一个实例是否处于平衡状态
 *
 * @param request DescribeRebalanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRebalanceStatusResponse
 */
DescribeRebalanceStatusResponse Client::describeRebalanceStatusWithOptions(const DescribeRebalanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRebalanceStatus"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRebalanceStatusResponse>();
}

/**
 * @summary 描述一个实例是否处于平衡状态
 *
 * @param request DescribeRebalanceStatusRequest
 * @return DescribeRebalanceStatusResponse
 */
DescribeRebalanceStatusResponse Client::describeRebalanceStatus(const DescribeRebalanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRebalanceStatusWithOptions(request, runtime);
}

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
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

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
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of roles.
 *
 * @param request DescribeRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRolesResponse
 */
DescribeRolesResponse Client::describeRolesWithOptions(const DescribeRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRoles"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRolesResponse>();
}

/**
 * @summary Queries a list of roles.
 *
 * @param request DescribeRolesRequest
 * @return DescribeRolesResponse
 */
DescribeRolesResponse Client::describeRoles(const DescribeRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRolesWithOptions(request, runtime);
}

/**
 * @summary Queries the number of audit logs for an AnalyticDB for PostgreSQL instance.
 *
 * @description This operation is not available for instances in reserved storage mode.
 *
 * @param request DescribeSQLLogCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLLogCountResponse
 */
DescribeSQLLogCountResponse Client::describeSQLLogCountWithOptions(const DescribeSQLLogCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExecuteCost()) {
    query["ExecuteCost"] = request.executeCost();
  }

  if (!!request.hasExecuteState()) {
    query["ExecuteState"] = request.executeState();
  }

  if (!!request.hasMaxExecuteCost()) {
    query["MaxExecuteCost"] = request.maxExecuteCost();
  }

  if (!!request.hasMinExecuteCost()) {
    query["MinExecuteCost"] = request.minExecuteCost();
  }

  if (!!request.hasOperationClass()) {
    query["OperationClass"] = request.operationClass();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
  }

  if (!!request.hasQueryKeywords()) {
    query["QueryKeywords"] = request.queryKeywords();
  }

  if (!!request.hasSourceIP()) {
    query["SourceIP"] = request.sourceIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLLogCount"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLLogCountResponse>();
}

/**
 * @summary Queries the number of audit logs for an AnalyticDB for PostgreSQL instance.
 *
 * @description This operation is not available for instances in reserved storage mode.
 *
 * @param request DescribeSQLLogCountRequest
 * @return DescribeSQLLogCountResponse
 */
DescribeSQLLogCountResponse Client::describeSQLLogCount(const DescribeSQLLogCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLLogCountWithOptions(request, runtime);
}

/**
 * @summary Queries the SQL execution logs of an AnalyticDB for PostgreSQL instance.
 *
 * @description > This operation is no longer used. To query SQL execution logs, call the [DescribeSQLLogsV2](https://help.aliyun.com/document_detail/453722.html) operation.
 *
 * @param request DescribeSQLLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLLogsResponse
 */
DescribeSQLLogsResponse Client::describeSQLLogsWithOptions(const DescribeSQLLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExecuteCost()) {
    query["ExecuteCost"] = request.executeCost();
  }

  if (!!request.hasExecuteState()) {
    query["ExecuteState"] = request.executeState();
  }

  if (!!request.hasMaxExecuteCost()) {
    query["MaxExecuteCost"] = request.maxExecuteCost();
  }

  if (!!request.hasMinExecuteCost()) {
    query["MinExecuteCost"] = request.minExecuteCost();
  }

  if (!!request.hasOperationClass()) {
    query["OperationClass"] = request.operationClass();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryKeywords()) {
    query["QueryKeywords"] = request.queryKeywords();
  }

  if (!!request.hasSourceIP()) {
    query["SourceIP"] = request.sourceIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLLogs"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLLogsResponse>();
}

/**
 * @summary Queries the SQL execution logs of an AnalyticDB for PostgreSQL instance.
 *
 * @description > This operation is no longer used. To query SQL execution logs, call the [DescribeSQLLogsV2](https://help.aliyun.com/document_detail/453722.html) operation.
 *
 * @param request DescribeSQLLogsRequest
 * @return DescribeSQLLogsResponse
 */
DescribeSQLLogsResponse Client::describeSQLLogs(const DescribeSQLLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLLogsWithOptions(request, runtime);
}

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
DescribeSQLLogsV2Response Client::describeSQLLogsV2WithOptions(const DescribeSQLLogsV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExecuteCost()) {
    query["ExecuteCost"] = request.executeCost();
  }

  if (!!request.hasExecuteState()) {
    query["ExecuteState"] = request.executeState();
  }

  if (!!request.hasMaxExecuteCost()) {
    query["MaxExecuteCost"] = request.maxExecuteCost();
  }

  if (!!request.hasMinExecuteCost()) {
    query["MinExecuteCost"] = request.minExecuteCost();
  }

  if (!!request.hasOperationClass()) {
    query["OperationClass"] = request.operationClass();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryKeywords()) {
    query["QueryKeywords"] = request.queryKeywords();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceIP()) {
    query["SourceIP"] = request.sourceIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLLogsV2"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLLogsV2Response>();
}

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
DescribeSQLLogsV2Response Client::describeSQLLogsV2(const DescribeSQLLogsV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLLogsV2WithOptions(request, runtime);
}

/**
 * @summary Queries whether a sample dataset is loaded to an AnalyticDB for PostgreSQL instance.
 *
 * @description You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeSampleDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDataResponse
 */
DescribeSampleDataResponse Client::describeSampleDataWithOptions(const DescribeSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleData"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDataResponse>();
}

/**
 * @summary Queries whether a sample dataset is loaded to an AnalyticDB for PostgreSQL instance.
 *
 * @description You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeSampleDataRequest
 * @return DescribeSampleDataResponse
 */
DescribeSampleDataResponse Client::describeSampleData(const DescribeSampleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDataWithOptions(request, runtime);
}

/**
 * @summary Queries a real-time data service.
 *
 * @param request DescribeStreamingDataServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamingDataServiceResponse
 */
DescribeStreamingDataServiceResponse Client::describeStreamingDataServiceWithOptions(const DescribeStreamingDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStreamingDataService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStreamingDataServiceResponse>();
}

/**
 * @summary Queries a real-time data service.
 *
 * @param request DescribeStreamingDataServiceRequest
 * @return DescribeStreamingDataServiceResponse
 */
DescribeStreamingDataServiceResponse Client::describeStreamingDataService(const DescribeStreamingDataServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamingDataServiceWithOptions(request, runtime);
}

/**
 * @summary Get external data source configuration information
 *
 * @param request DescribeStreamingDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamingDataSourceResponse
 */
DescribeStreamingDataSourceResponse Client::describeStreamingDataSourceWithOptions(const DescribeStreamingDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStreamingDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStreamingDataSourceResponse>();
}

/**
 * @summary Get external data source configuration information
 *
 * @param request DescribeStreamingDataSourceRequest
 * @return DescribeStreamingDataSourceResponse
 */
DescribeStreamingDataSourceResponse Client::describeStreamingDataSource(const DescribeStreamingDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamingDataSourceWithOptions(request, runtime);
}

/**
 * @summary Delete External Data Source Configuration
 *
 * @param request DescribeStreamingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamingJobResponse
 */
DescribeStreamingJobResponse Client::describeStreamingJobWithOptions(const DescribeStreamingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStreamingJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStreamingJobResponse>();
}

/**
 * @summary Delete External Data Source Configuration
 *
 * @param request DescribeStreamingJobRequest
 * @return DescribeStreamingJobResponse
 */
DescribeStreamingJobResponse Client::describeStreamingJob(const DescribeStreamingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamingJobWithOptions(request, runtime);
}

/**
 * @summary Queries the features that are supported by an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeSupportFeaturesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupportFeaturesResponse
 */
DescribeSupportFeaturesResponse Client::describeSupportFeaturesWithOptions(const DescribeSupportFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupportFeatures"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupportFeaturesResponse>();
}

/**
 * @summary Queries the features that are supported by an AnalyticDB for PostgreSQL instance.
 *
 * @param request DescribeSupportFeaturesRequest
 * @return DescribeSupportFeaturesResponse
 */
DescribeSupportFeaturesResponse Client::describeSupportFeatures(const DescribeSupportFeaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportFeaturesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a table.
 *
 * @param request DescribeTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTableResponse
 */
DescribeTableResponse Client::describeTableWithOptions(const DescribeTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  if (!!request.hasSecretArn()) {
    query["SecretArn"] = request.secretArn();
  }

  if (!!request.hasTable()) {
    query["Table"] = request.table();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTable"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTableResponse>();
}

/**
 * @summary Queries the information about a table.
 *
 * @param request DescribeTableRequest
 * @return DescribeTableResponse
 */
DescribeTableResponse Client::describeTable(const DescribeTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTableWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags for AnalyticDB for PostgreSQL instances.
 *
 * @param request DescribeTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTagsWithOptions(const DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTags"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsResponse>();
}

/**
 * @summary Queries a list of tags for AnalyticDB for PostgreSQL instances.
 *
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Key Management Service (KMS) keys.
 *
 * @param request DescribeUserEncryptionKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyListWithOptions(const DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserEncryptionKeyList"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserEncryptionKeyListResponse>();
}

/**
 * @summary Queries a list of Key Management Service (KMS) keys.
 *
 * @param request DescribeUserEncryptionKeyListRequest
 * @return DescribeUserEncryptionKeyListResponse
 */
DescribeUserEncryptionKeyListResponse Client::describeUserEncryptionKeyList(const DescribeUserEncryptionKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserEncryptionKeyListWithOptions(request, runtime);
}

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
DescribeWaitingSQLInfoResponse Client::describeWaitingSQLInfoWithOptions(const DescribeWaitingSQLInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasPID()) {
    query["PID"] = request.PID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWaitingSQLInfo"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWaitingSQLInfoResponse>();
}

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
DescribeWaitingSQLInfoResponse Client::describeWaitingSQLInfo(const DescribeWaitingSQLInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWaitingSQLInfoWithOptions(request, runtime);
}

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
DescribeWaitingSQLRecordsResponse Client::describeWaitingSQLRecordsWithOptions(const DescribeWaitingSQLRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWaitingSQLRecords"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWaitingSQLRecordsResponse>();
}

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
DescribeWaitingSQLRecordsResponse Client::describeWaitingSQLRecords(const DescribeWaitingSQLRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWaitingSQLRecordsWithOptions(request, runtime);
}

/**
 * @summary 获取私有RAG服务可部署可用区
 *
 * @param request DescribeZonesPrivateRAGServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesPrivateRAGServiceResponse
 */
DescribeZonesPrivateRAGServiceResponse Client::describeZonesPrivateRAGServiceWithOptions(const DescribeZonesPrivateRAGServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZonesPrivateRAGService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZonesPrivateRAGServiceResponse>();
}

/**
 * @summary 获取私有RAG服务可部署可用区
 *
 * @param request DescribeZonesPrivateRAGServiceRequest
 * @return DescribeZonesPrivateRAGServiceResponse
 */
DescribeZonesPrivateRAGServiceResponse Client::describeZonesPrivateRAGService(const DescribeZonesPrivateRAGServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesPrivateRAGServiceWithOptions(request, runtime);
}

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
DisableDBResourceGroupResponse Client::disableDBResourceGroupWithOptions(const DisableDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDBResourceGroup"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDBResourceGroupResponse>();
}

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
DisableDBResourceGroupResponse Client::disableDBResourceGroup(const DisableDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDBResourceGroupWithOptions(request, runtime);
}

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
DownloadDiagnosisRecordsResponse Client::downloadDiagnosisRecordsWithOptions(const DownloadDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadDiagnosisRecords"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadDiagnosisRecordsResponse>();
}

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
DownloadDiagnosisRecordsResponse Client::downloadDiagnosisRecords(const DownloadDiagnosisRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadDiagnosisRecordsWithOptions(request, runtime);
}

/**
 * @summary Download the slow query logs of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DownloadSQLLogsRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadSQLLogsRecordsResponse
 */
DownloadSQLLogsRecordsResponse Client::downloadSQLLogsRecordsWithOptions(const DownloadSQLLogsRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExecuteCost()) {
    query["ExecuteCost"] = request.executeCost();
  }

  if (!!request.hasExecuteState()) {
    query["ExecuteState"] = request.executeState();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMaxExecuteCost()) {
    query["MaxExecuteCost"] = request.maxExecuteCost();
  }

  if (!!request.hasMinExecuteCost()) {
    query["MinExecuteCost"] = request.minExecuteCost();
  }

  if (!!request.hasOperationClass()) {
    query["OperationClass"] = request.operationClass();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryKeywords()) {
    query["QueryKeywords"] = request.queryKeywords();
  }

  if (!!request.hasSourceIP()) {
    query["SourceIP"] = request.sourceIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadSQLLogsRecords"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadSQLLogsRecordsResponse>();
}

/**
 * @summary Download the slow query logs of an AnalyticDB for PostgreSQL instance.
 *
 * @param request DownloadSQLLogsRecordsRequest
 * @return DownloadSQLLogsRecordsResponse
 */
DownloadSQLLogsRecordsResponse Client::downloadSQLLogsRecords(const DownloadSQLLogsRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadSQLLogsRecordsWithOptions(request, runtime);
}

/**
 * @summary Downloads slow SQL records.
 *
 * @param request DownloadSlowSQLRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadSlowSQLRecordsResponse
 */
DownloadSlowSQLRecordsResponse Client::downloadSlowSQLRecordsWithOptions(const DownloadSlowSQLRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxDuration()) {
    query["MaxDuration"] = request.maxDuration();
  }

  if (!!request.hasMinDuration()) {
    query["MinDuration"] = request.minDuration();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadSlowSQLRecords"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadSlowSQLRecordsResponse>();
}

/**
 * @summary Downloads slow SQL records.
 *
 * @param request DownloadSlowSQLRecordsRequest
 * @return DownloadSlowSQLRecordsResponse
 */
DownloadSlowSQLRecordsResponse Client::downloadSlowSQLRecords(const DownloadSlowSQLRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadSlowSQLRecordsWithOptions(request, runtime);
}

/**
 * @summary Enables knowledge graph construction for the knowledge base.
 *
 * @param tmpReq EnableCollectionGraphRAGRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCollectionGraphRAGResponse
 */
EnableCollectionGraphRAGResponse Client::enableCollectionGraphRAGWithOptions(const EnableCollectionGraphRAGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EnableCollectionGraphRAGShrinkRequest request = EnableCollectionGraphRAGShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntityTypes()) {
    request.setEntityTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entityTypes(), "EntityTypes", "json"));
  }

  if (!!tmpReq.hasRelationshipTypes()) {
    request.setRelationshipTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.relationshipTypes(), "RelationshipTypes", "json"));
  }

  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEntityTypesShrink()) {
    query["EntityTypes"] = request.entityTypesShrink();
  }

  if (!!request.hasLLMModel()) {
    query["LLMModel"] = request.LLMModel();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRelationshipTypesShrink()) {
    query["RelationshipTypes"] = request.relationshipTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableCollectionGraphRAG"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCollectionGraphRAGResponse>();
}

/**
 * @summary Enables knowledge graph construction for the knowledge base.
 *
 * @param request EnableCollectionGraphRAGRequest
 * @return EnableCollectionGraphRAGResponse
 */
EnableCollectionGraphRAGResponse Client::enableCollectionGraphRAG(const EnableCollectionGraphRAGRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCollectionGraphRAGWithOptions(request, runtime);
}

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
EnableDBResourceGroupResponse Client::enableDBResourceGroupWithOptions(const EnableDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDBResourceGroup"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDBResourceGroupResponse>();
}

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
EnableDBResourceGroupResponse Client::enableDBResourceGroup(const EnableDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Executes SQL statements.
 *
 * @param tmpReq ExecuteStatementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteStatementResponse
 */
ExecuteStatementResponse Client::executeStatementWithOptions(const ExecuteStatementRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecuteStatementShrinkRequest request = ExecuteStatementShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  if (!!tmpReq.hasRagWorkspaceCollection()) {
    request.setRagWorkspaceCollectionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ragWorkspaceCollection(), "RagWorkspaceCollection", "json"));
  }

  if (!!tmpReq.hasSqls()) {
    request.setSqlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sqls(), "Sqls", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRagWorkspaceCollectionShrink()) {
    query["RagWorkspaceCollection"] = request.ragWorkspaceCollectionShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRunType()) {
    query["RunType"] = request.runType();
  }

  if (!!request.hasSecretArn()) {
    query["SecretArn"] = request.secretArn();
  }

  if (!!request.hasStatementName()) {
    query["StatementName"] = request.statementName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasSql()) {
    body["Sql"] = request.sql();
  }

  if (!!request.hasSqlsShrink()) {
    body["Sqls"] = request.sqlsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteStatement"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteStatementResponse>();
}

/**
 * @summary Executes SQL statements.
 *
 * @param request ExecuteStatementRequest
 * @return ExecuteStatementResponse
 */
ExecuteStatementResponse Client::executeStatement(const ExecuteStatementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeStatementWithOptions(request, runtime);
}

/**
 * @summary 获取特定的账号信息
 *
 * @param request GetAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountResponse
 */
GetAccountResponse Client::getAccountWithOptions(const GetAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccount"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountResponse>();
}

/**
 * @summary 获取特定的账号信息
 *
 * @param request GetAccountRequest
 * @return GetAccountResponse
 */
GetAccountResponse Client::getAccount(const GetAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountWithOptions(request, runtime);
}

/**
 * @summary Retrieves a task to build a knowledge graph.
 *
 * @param request GetGraphRAGJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGraphRAGJobResponse
 */
GetGraphRAGJobResponse Client::getGraphRAGJobWithOptions(const GetGraphRAGJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGraphRAGJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGraphRAGJobResponse>();
}

/**
 * @summary Retrieves a task to build a knowledge graph.
 *
 * @param request GetGraphRAGJobRequest
 * @return GetGraphRAGJobResponse
 */
GetGraphRAGJobResponse Client::getGraphRAGJob(const GetGraphRAGJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGraphRAGJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an access credential.
 *
 * @param request GetSecretValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecretValueResponse
 */
GetSecretValueResponse Client::getSecretValueWithOptions(const GetSecretValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecretArn()) {
    query["SecretArn"] = request.secretArn();
  }

  if (!!request.hasSecretName()) {
    query["SecretName"] = request.secretName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecretValue"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecretValueResponse>();
}

/**
 * @summary Queries the information about an access credential.
 *
 * @param request GetSecretValueRequest
 * @return GetSecretValueResponse
 */
GetSecretValueResponse Client::getSecretValue(const GetSecretValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecretValueWithOptions(request, runtime);
}

/**
 * @summary Get Asynchronous SQL Execution Result
 *
 * @param request GetStatementResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStatementResultResponse
 */
GetStatementResultResponse Client::getStatementResultWithOptions(const GetStatementResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecretArn()) {
    query["SecretArn"] = request.secretArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStatementResult"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStatementResultResponse>();
}

/**
 * @summary Get Asynchronous SQL Execution Result
 *
 * @param request GetStatementResultRequest
 * @return GetStatementResultResponse
 */
GetStatementResultResponse Client::getStatementResult(const GetStatementResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStatementResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the detailed configuration and status information for a specific Supabase instance.
 *
 * @description This interface is used to query the details of a Supabase instance.
 *
 * @param request GetSupabaseProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSupabaseProjectResponse
 */
GetSupabaseProjectResponse Client::getSupabaseProjectWithOptions(const GetSupabaseProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSupabaseProject"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSupabaseProjectResponse>();
}

/**
 * @summary Retrieves the detailed configuration and status information for a specific Supabase instance.
 *
 * @description This interface is used to query the details of a Supabase instance.
 *
 * @param request GetSupabaseProjectRequest
 * @return GetSupabaseProjectResponse
 */
GetSupabaseProjectResponse Client::getSupabaseProject(const GetSupabaseProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupabaseProjectWithOptions(request, runtime);
}

/**
 * @summary Queries a list of API keys for a Supabase project.
 *
 * @description You can call this operation to query a list of API keys for a Supabase project.
 *
 * @param request GetSupabaseProjectApiKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSupabaseProjectApiKeysResponse
 */
GetSupabaseProjectApiKeysResponse Client::getSupabaseProjectApiKeysWithOptions(const GetSupabaseProjectApiKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSupabaseProjectApiKeys"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSupabaseProjectApiKeysResponse>();
}

/**
 * @summary Queries a list of API keys for a Supabase project.
 *
 * @description You can call this operation to query a list of API keys for a Supabase project.
 *
 * @param request GetSupabaseProjectApiKeysRequest
 * @return GetSupabaseProjectApiKeysResponse
 */
GetSupabaseProjectApiKeysResponse Client::getSupabaseProjectApiKeys(const GetSupabaseProjectApiKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupabaseProjectApiKeysWithOptions(request, runtime);
}

/**
 * @summary Retrieves the username and password for the dashboard of a specific Supabase project.
 *
 * @description Query Supabase Project Dashboard Account Information
 *
 * @param request GetSupabaseProjectDashboardAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSupabaseProjectDashboardAccountResponse
 */
GetSupabaseProjectDashboardAccountResponse Client::getSupabaseProjectDashboardAccountWithOptions(const GetSupabaseProjectDashboardAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSupabaseProjectDashboardAccount"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSupabaseProjectDashboardAccountResponse>();
}

/**
 * @summary Retrieves the username and password for the dashboard of a specific Supabase project.
 *
 * @description Query Supabase Project Dashboard Account Information
 *
 * @param request GetSupabaseProjectDashboardAccountRequest
 * @return GetSupabaseProjectDashboardAccountResponse
 */
GetSupabaseProjectDashboardAccountResponse Client::getSupabaseProjectDashboardAccount(const GetSupabaseProjectDashboardAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupabaseProjectDashboardAccountWithOptions(request, runtime);
}

/**
 * @summary Queries the progress and result of an asynchronous document upload job based on the job ID.
 *
 * @description This operation is related to the UploadDocumentAsync operation. You can call the UploadDocumentAsync operation to create an upload job and get the job ID, and then call the GetUploadDocumentJob operation to query the execution information of the job.
 * > Suggestions
 * *   Based on document complexity and the number of resulting vector chunks, the timeout is estimated and typically does not exceed 2 hours.
 *
 * @param request GetUploadDocumentJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadDocumentJobResponse
 */
GetUploadDocumentJobResponse Client::getUploadDocumentJobWithOptions(const GetUploadDocumentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasCollection()) {
    body["Collection"] = request.collection();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    body["NamespacePassword"] = request.namespacePassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUploadDocumentJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUploadDocumentJobResponse>();
}

/**
 * @summary Queries the progress and result of an asynchronous document upload job based on the job ID.
 *
 * @description This operation is related to the UploadDocumentAsync operation. You can call the UploadDocumentAsync operation to create an upload job and get the job ID, and then call the GetUploadDocumentJob operation to query the execution information of the job.
 * > Suggestions
 * *   Based on document complexity and the number of resulting vector chunks, the timeout is estimated and typically does not exceed 2 hours.
 *
 * @param request GetUploadDocumentJobRequest
 * @return GetUploadDocumentJobResponse
 */
GetUploadDocumentJobResponse Client::getUploadDocumentJob(const GetUploadDocumentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadDocumentJobWithOptions(request, runtime);
}

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
GetUpsertCollectionDataJobResponse Client::getUpsertCollectionDataJobWithOptions(const GetUpsertCollectionDataJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasCollection()) {
    body["Collection"] = request.collection();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    body["NamespacePassword"] = request.namespacePassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUpsertCollectionDataJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUpsertCollectionDataJobResponse>();
}

/**
 * @summary Queries the progress and result of an asynchronous vector data upload job by using a job ID.
 *
 * @description This operation is related to the `UpsertCollectionDataAsync` operation. You can call the `UpsertCollectionDataAsync` operation to create an upload job and obtain a job ID, and then call the GetUpsertCollectionDataJob operation to query the execution information of the job.
 * >  We recommend that you evaluate the amount of time required for the upload job based on 1,000 data entries every second, and then query the job progress every 5 seconds. The timeout period can be set to 30 minutes after the evaluated amount of time.
 *
 * @param request GetUpsertCollectionDataJobRequest
 * @return GetUpsertCollectionDataJobResponse
 */
GetUpsertCollectionDataJobResponse Client::getUpsertCollectionDataJob(const GetUpsertCollectionDataJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUpsertCollectionDataJobWithOptions(request, runtime);
}

/**
 * @summary Grants vector collection permissions to a namespace.
 *
 * @param request GrantCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantCollectionResponse
 */
GrantCollectionResponse Client::grantCollectionWithOptions(const GrantCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasGrantToNamespace()) {
    query["GrantToNamespace"] = request.grantToNamespace();
  }

  if (!!request.hasGrantType()) {
    query["GrantType"] = request.grantType();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantCollection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantCollectionResponse>();
}

/**
 * @summary Grants vector collection permissions to a namespace.
 *
 * @param request GrantCollectionRequest
 * @return GrantCollectionResponse
 */
GrantCollectionResponse Client::grantCollection(const GrantCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantCollectionWithOptions(request, runtime);
}

/**
 * @summary Processes active queries.
 *
 * @param request HandleActiveSQLRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HandleActiveSQLRecordResponse
 */
HandleActiveSQLRecordResponse Client::handleActiveSQLRecordWithOptions(const HandleActiveSQLRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  if (!!request.hasPids()) {
    query["Pids"] = request.pids();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HandleActiveSQLRecord"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HandleActiveSQLRecordResponse>();
}

/**
 * @summary Processes active queries.
 *
 * @param request HandleActiveSQLRecordRequest
 * @return HandleActiveSQLRecordResponse
 */
HandleActiveSQLRecordResponse Client::handleActiveSQLRecord(const HandleActiveSQLRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return handleActiveSQLRecordWithOptions(request, runtime);
}

/**
 * @summary Initializes vector databases.
 *
 * @param request InitVectorDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitVectorDatabaseResponse
 */
InitVectorDatabaseResponse Client::initVectorDatabaseWithOptions(const InitVectorDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InitVectorDatabase"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitVectorDatabaseResponse>();
}

/**
 * @summary Initializes vector databases.
 *
 * @param request InitVectorDatabaseRequest
 * @return InitVectorDatabaseResponse
 */
InitVectorDatabaseResponse Client::initVectorDatabase(const InitVectorDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initVectorDatabaseWithOptions(request, runtime);
}

/**
 * @summary Queries a list of AI nodes.
 *
 * @description *   This operation queries a list of AI nodes.
 *
 * @param request ListAINodePoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAINodePoolsResponse
 */
ListAINodePoolsResponse Client::listAINodePoolsWithOptions(const ListAINodePoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAINodePools"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAINodePoolsResponse>();
}

/**
 * @summary Queries a list of AI nodes.
 *
 * @description *   This operation queries a list of AI nodes.
 *
 * @param request ListAINodePoolsRequest
 * @return ListAINodePoolsResponse
 */
ListAINodePoolsResponse Client::listAINodePools(const ListAINodePoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAINodePoolsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of backup jobs.
 *
 * @param request ListBackupJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBackupJobsResponse
 */
ListBackupJobsResponse Client::listBackupJobsWithOptions(const ListBackupJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupMode()) {
    query["BackupMode"] = request.backupMode();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBackupJobs"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBackupJobsResponse>();
}

/**
 * @summary Queries a list of backup jobs.
 *
 * @param request ListBackupJobsRequest
 * @return ListBackupJobsResponse
 */
ListBackupJobsResponse Client::listBackupJobs(const ListBackupJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBackupJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of vector collections.
 *
 * @param request ListCollectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCollectionsResponse
 */
ListCollectionsResponse Client::listCollectionsWithOptions(const ListCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCollections"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCollectionsResponse>();
}

/**
 * @summary Queries a list of vector collections.
 *
 * @param request ListCollectionsRequest
 * @return ListCollectionsResponse
 */
ListCollectionsResponse Client::listCollections(const ListCollectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCollectionsWithOptions(request, runtime);
}

/**
 * @summary 获取安装在某个数据库上的所有插件信息
 *
 * @param request ListDatabaseExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabaseExtensionsResponse
 */
ListDatabaseExtensionsResponse Client::listDatabaseExtensionsWithOptions(const ListDatabaseExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabaseExtensions"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabaseExtensionsResponse>();
}

/**
 * @summary 获取安装在某个数据库上的所有插件信息
 *
 * @param request ListDatabaseExtensionsRequest
 * @return ListDatabaseExtensionsResponse
 */
ListDatabaseExtensionsResponse Client::listDatabaseExtensions(const ListDatabaseExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabaseExtensionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases.
 *
 * @param request ListDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabasesWithOptions(const ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecretArn()) {
    query["SecretArn"] = request.secretArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabases"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesResponse>();
}

/**
 * @summary Queries a list of databases.
 *
 * @param request ListDatabasesRequest
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabases(const ListDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of document collections.
 *
 * @param request ListDocumentCollectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDocumentCollectionsResponse
 */
ListDocumentCollectionsResponse Client::listDocumentCollectionsWithOptions(const ListDocumentCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDocumentCollections"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDocumentCollectionsResponse>();
}

/**
 * @summary Queries a list of document collections.
 *
 * @param request ListDocumentCollectionsRequest
 * @return ListDocumentCollectionsResponse
 */
ListDocumentCollectionsResponse Client::listDocumentCollections(const ListDocumentCollectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDocumentCollectionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of documents in a collection.
 *
 * @param request ListDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDocumentsResponse
 */
ListDocumentsResponse Client::listDocumentsWithOptions(const ListDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDocuments"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDocumentsResponse>();
}

/**
 * @summary Queries a list of documents in a collection.
 *
 * @param request ListDocumentsRequest
 * @return ListDocumentsResponse
 */
ListDocumentsResponse Client::listDocuments(const ListDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDocumentsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of external data services.
 *
 * @param request ListExternalDataServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExternalDataServicesResponse
 */
ListExternalDataServicesResponse Client::listExternalDataServicesWithOptions(const ListExternalDataServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExternalDataServices"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExternalDataServicesResponse>();
}

/**
 * @summary Queries a list of external data services.
 *
 * @param request ListExternalDataServicesRequest
 * @return ListExternalDataServicesResponse
 */
ListExternalDataServicesResponse Client::listExternalDataServices(const ListExternalDataServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExternalDataServicesWithOptions(request, runtime);
}

/**
 * @summary 获取实例外表配置列表
 *
 * @param request ListExternalDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExternalDataSourcesResponse
 */
ListExternalDataSourcesResponse Client::listExternalDataSourcesWithOptions(const ListExternalDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExternalDataSources"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExternalDataSourcesResponse>();
}

/**
 * @summary 获取实例外表配置列表
 *
 * @param request ListExternalDataSourcesRequest
 * @return ListExternalDataSourcesResponse
 */
ListExternalDataSourcesResponse Client::listExternalDataSources(const ListExternalDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExternalDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of indexes.
 *
 * @param request ListIndicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIndicesResponse
 */
ListIndicesResponse Client::listIndicesWithOptions(const ListIndicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndices"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndicesResponse>();
}

/**
 * @summary Queries a list of indexes.
 *
 * @param request ListIndicesRequest
 * @return ListIndicesResponse
 */
ListIndicesResponse Client::listIndices(const ListIndicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIndicesWithOptions(request, runtime);
}

/**
 * @summary 列举数据库
 *
 * @param request ListInstanceDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceDatabasesResponse
 */
ListInstanceDatabasesResponse Client::listInstanceDatabasesWithOptions(const ListInstanceDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceDatabases"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceDatabasesResponse>();
}

/**
 * @summary 列举数据库
 *
 * @param request ListInstanceDatabasesRequest
 * @return ListInstanceDatabasesResponse
 */
ListInstanceDatabasesResponse Client::listInstanceDatabases(const ListInstanceDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceDatabasesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of extensions.
 *
 * @param request ListInstanceExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceExtensionsResponse
 */
ListInstanceExtensionsResponse Client::listInstanceExtensionsWithOptions(const ListInstanceExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasExtension()) {
    query["Extension"] = request.extension();
  }

  if (!!request.hasInstallStatus()) {
    query["InstallStatus"] = request.installStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceExtensions"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceExtensionsResponse>();
}

/**
 * @summary Queries a list of extensions.
 *
 * @param request ListInstanceExtensionsRequest
 * @return ListInstanceExtensionsResponse
 */
ListInstanceExtensionsResponse Client::listInstanceExtensions(const ListInstanceExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceExtensionsWithOptions(request, runtime);
}

/**
 * @summary Queries all model services.
 *
 * @description ## [](#)Usage notes
 * This interface is used to view all model service information.
 * ## [](#qps-)QPS limit
 * You can call this operation up to 1,000 times per second per account. Exceeding the limit will trigger API rate limiting, which may impact your business. Please call the API responsibly.
 *
 * @param request ListModelServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelServicesResponse
 */
ListModelServicesResponse Client::listModelServicesWithOptions(const ListModelServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelServices"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelServicesResponse>();
}

/**
 * @summary Queries all model services.
 *
 * @description ## [](#)Usage notes
 * This interface is used to view all model service information.
 * ## [](#qps-)QPS limit
 * You can call this operation up to 1,000 times per second per account. Exceeding the limit will trigger API rate limiting, which may impact your business. Please call the API responsibly.
 *
 * @param request ListModelServicesRequest
 * @return ListModelServicesResponse
 */
ListModelServicesResponse Client::listModelServices(const ListModelServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelServicesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of namespaces.
 *
 * @param request ListNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNamespacesResponse
 */
ListNamespacesResponse Client::listNamespacesWithOptions(const ListNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasManagerAccount()) {
    query["ManagerAccount"] = request.managerAccount();
  }

  if (!!request.hasManagerAccountPassword()) {
    query["ManagerAccountPassword"] = request.managerAccountPassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNamespaces"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNamespacesResponse>();
}

/**
 * @summary Queries a list of namespaces.
 *
 * @param request ListNamespacesRequest
 * @return ListNamespacesResponse
 */
ListNamespacesResponse Client::listNamespaces(const ListNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNamespacesWithOptions(request, runtime);
}

/**
 * @summary Get Homogeneous Data Source
 *
 * @param request ListRemoteADBDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRemoteADBDataSourcesResponse
 */
ListRemoteADBDataSourcesResponse Client::listRemoteADBDataSourcesWithOptions(const ListRemoteADBDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRemoteADBDataSources"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRemoteADBDataSourcesResponse>();
}

/**
 * @summary Get Homogeneous Data Source
 *
 * @param request ListRemoteADBDataSourcesRequest
 * @return ListRemoteADBDataSourcesResponse
 */
ListRemoteADBDataSourcesResponse Client::listRemoteADBDataSources(const ListRemoteADBDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRemoteADBDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of schemas.
 *
 * @param request ListSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemasWithOptions(const ListSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchemaPattern()) {
    query["SchemaPattern"] = request.schemaPattern();
  }

  if (!!request.hasSecretArn()) {
    query["SecretArn"] = request.secretArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSchemas"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSchemasResponse>();
}

/**
 * @summary Queries a list of schemas.
 *
 * @param request ListSchemasRequest
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemas(const ListSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSchemasWithOptions(request, runtime);
}

/**
 * @summary Queries a list of access credentials.
 *
 * @param request ListSecretsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecretsResponse
 */
ListSecretsResponse Client::listSecretsWithOptions(const ListSecretsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecrets"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecretsResponse>();
}

/**
 * @summary Queries a list of access credentials.
 *
 * @param request ListSecretsRequest
 * @return ListSecretsResponse
 */
ListSecretsResponse Client::listSecrets(const ListSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecretsWithOptions(request, runtime);
}

/**
 * @summary Queries slow SQL queries.
 *
 * @param request ListSlowSQLRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSlowSQLRecordsResponse
 */
ListSlowSQLRecordsResponse Client::listSlowSQLRecordsWithOptions(const ListSlowSQLRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxDuration()) {
    query["MaxDuration"] = request.maxDuration();
  }

  if (!!request.hasMinDuration()) {
    query["MinDuration"] = request.minDuration();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSlowSQLRecords"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSlowSQLRecordsResponse>();
}

/**
 * @summary Queries slow SQL queries.
 *
 * @param request ListSlowSQLRecordsRequest
 * @return ListSlowSQLRecordsResponse
 */
ListSlowSQLRecordsResponse Client::listSlowSQLRecords(const ListSlowSQLRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSlowSQLRecordsWithOptions(request, runtime);
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param request ListStreamingDataServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStreamingDataServicesResponse
 */
ListStreamingDataServicesResponse Client::listStreamingDataServicesWithOptions(const ListStreamingDataServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStreamingDataServices"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStreamingDataServicesResponse>();
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param request ListStreamingDataServicesRequest
 * @return ListStreamingDataServicesResponse
 */
ListStreamingDataServicesResponse Client::listStreamingDataServices(const ListStreamingDataServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStreamingDataServicesWithOptions(request, runtime);
}

/**
 * @summary Queries real-time service data sources.
 *
 * @param request ListStreamingDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStreamingDataSourcesResponse
 */
ListStreamingDataSourcesResponse Client::listStreamingDataSourcesWithOptions(const ListStreamingDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStreamingDataSources"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStreamingDataSourcesResponse>();
}

/**
 * @summary Queries real-time service data sources.
 *
 * @param request ListStreamingDataSourcesRequest
 * @return ListStreamingDataSourcesResponse
 */
ListStreamingDataSourcesResponse Client::listStreamingDataSources(const ListStreamingDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStreamingDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries real-time data synchronization jobs.
 *
 * @param request ListStreamingJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStreamingJobsResponse
 */
ListStreamingJobsResponse Client::listStreamingJobsWithOptions(const ListStreamingJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStreamingJobs"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStreamingJobsResponse>();
}

/**
 * @summary Queries real-time data synchronization jobs.
 *
 * @param request ListStreamingJobsRequest
 * @return ListStreamingJobsResponse
 */
ListStreamingJobsResponse Client::listStreamingJobs(const ListStreamingJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStreamingJobsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of Supabase instances in your account. You can filter the list by region.
 *
 * @description *   You can call this operation to query Supabase instances.
 *
 * @param request ListSupabaseProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSupabaseProjectsResponse
 */
ListSupabaseProjectsResponse Client::listSupabaseProjectsWithOptions(const ListSupabaseProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSupabaseProjects"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSupabaseProjectsResponse>();
}

/**
 * @summary Retrieves a paginated list of Supabase instances in your account. You can filter the list by region.
 *
 * @description *   You can call this operation to query Supabase instances.
 *
 * @param request ListSupabaseProjectsRequest
 * @return ListSupabaseProjectsResponse
 */
ListSupabaseProjectsResponse Client::listSupabaseProjects(const ListSupabaseProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSupabaseProjectsWithOptions(request, runtime);
}

/**
 * @summary Get the list of supported models
 *
 * @description *   This API is used to query the list of supported models.
 *
 * @param request ListSupportModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSupportModelsResponse
 */
ListSupportModelsResponse Client::listSupportModelsWithOptions(const ListSupportModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSupportModels"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSupportModelsResponse>();
}

/**
 * @summary Get the list of supported models
 *
 * @description *   This API is used to query the list of supported models.
 *
 * @param request ListSupportModelsRequest
 * @return ListSupportModelsResponse
 */
ListSupportModelsResponse Client::listSupportModels(const ListSupportModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSupportModelsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tables in a database.
 *
 * @param request ListTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const ListTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  if (!!request.hasSecretArn()) {
    query["SecretArn"] = request.secretArn();
  }

  if (!!request.hasTablePattern()) {
    query["TablePattern"] = request.tablePattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary Queries a list of tables in a database.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTablesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags that are added to AnalyticDB for PostgreSQL instances.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries a list of tags that are added to AnalyticDB for PostgreSQL instances.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a database account for an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyAccountDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescriptionWithOptions(const ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountDescriptionResponse>();
}

/**
 * @summary Modifies the description of a database account for an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Configures the backup policy of an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.backupRetentionPeriod();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEnableRecoveryPoint()) {
    query["EnableRecoveryPoint"] = request.enableRecoveryPoint();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.preferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.preferredBackupTime();
  }

  if (!!request.hasRecoveryPointPeriod()) {
    query["RecoveryPointPeriod"] = request.recoveryPointPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupPolicyResponse>();
}

/**
 * @summary Configures the backup policy of an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Updates a collection.
 *
 * @param request ModifyCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCollectionResponse
 */
ModifyCollectionResponse Client::modifyCollectionWithOptions(const ModifyCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasMetadata()) {
    query["Metadata"] = request.metadata();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCollection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCollectionResponse>();
}

/**
 * @summary Updates a collection.
 *
 * @param request ModifyCollectionRequest
 * @return ModifyCollectionResponse
 */
ModifyCollectionResponse Client::modifyCollection(const ModifyCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCollectionWithOptions(request, runtime);
}

/**
 * @summary Changes the threshold of computing resources and the wait period of idle resources for an AnalyticDB for PostgreSQL instance in Serverless automatic scheduling mode.
 *
 * @param request ModifyDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfigWithOptions(const ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.DBInstanceDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasIdleTime()) {
    query["IdleTime"] = request.idleTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServerlessResource()) {
    query["ServerlessResource"] = request.serverlessResource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConfig"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceConfigResponse>();
}

/**
 * @summary Changes the threshold of computing resources and the wait period of idle resources for an AnalyticDB for PostgreSQL instance in Serverless automatic scheduling mode.
 *
 * @param request ModifyDBInstanceConfigRequest
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Changes the endpoint of an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionStringWithOptions(const ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.currentConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConnectionString"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceConnectionStringResponse>();
}

/**
 * @summary Changes the endpoint of an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Changes the development mode of an instance.
 *
 * @param request ModifyDBInstanceDeploymentModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceDeploymentModeResponse
 */
ModifyDBInstanceDeploymentModeResponse Client::modifyDBInstanceDeploymentModeWithOptions(const ModifyDBInstanceDeploymentModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDeployMode()) {
    query["DeployMode"] = request.deployMode();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.standbyVSwitchId();
  }

  if (!!request.hasStandbyZoneId()) {
    query["StandbyZoneId"] = request.standbyZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceDeploymentMode"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceDeploymentModeResponse>();
}

/**
 * @summary Changes the development mode of an instance.
 *
 * @param request ModifyDBInstanceDeploymentModeRequest
 * @return ModifyDBInstanceDeploymentModeResponse
 */
ModifyDBInstanceDeploymentModeResponse Client::modifyDBInstanceDeploymentMode(const ModifyDBInstanceDeploymentModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceDeploymentModeWithOptions(request, runtime);
}

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
ModifyDBInstanceDescriptionResponse Client::modifyDBInstanceDescriptionWithOptions(const ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.DBInstanceDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceDescription"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceDescriptionResponse>();
}

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
ModifyDBInstanceDescriptionResponse Client::modifyDBInstanceDescription(const ModifyDBInstanceDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceDescriptionWithOptions(request, runtime);
}

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
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTimeWithOptions(const ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceMaintainTime"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceMaintainTimeResponse>();
}

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
ModifyDBInstanceMaintainTimeResponse Client::modifyDBInstanceMaintainTime(const ModifyDBInstanceMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceMaintainTimeWithOptions(request, runtime);
}

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
ModifyDBInstanceNetworkTypeResponse Client::modifyDBInstanceNetworkTypeWithOptions(const ModifyDBInstanceNetworkTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasInstanceNetworkType()) {
    query["InstanceNetworkType"] = request.instanceNetworkType();
  }

  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.privateIpAddress();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.VPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceNetworkType"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceNetworkTypeResponse>();
}

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
ModifyDBInstanceNetworkTypeResponse Client::modifyDBInstanceNetworkType(const ModifyDBInstanceNetworkTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceNetworkTypeWithOptions(request, runtime);
}

/**
 * @summary 包年包月/按量付费转换改造
 *
 * @param request ModifyDBInstancePayTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstancePayTypeResponse
 */
ModifyDBInstancePayTypeResponse Client::modifyDBInstancePayTypeWithOptions(const ModifyDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstancePayType"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstancePayTypeResponse>();
}

/**
 * @summary 包年包月/按量付费转换改造
 *
 * @param request ModifyDBInstancePayTypeRequest
 * @return ModifyDBInstancePayTypeResponse
 */
ModifyDBInstancePayTypeResponse Client::modifyDBInstancePayType(const ModifyDBInstancePayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstancePayTypeWithOptions(request, runtime);
}

/**
 * @summary Moves an AnalyticDB for PostgreSQL instance to a resource group.
 *
 * @description Resource Management allows you to build an organizational structure for resources based on your business requirements. You can use resource directories, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
 *
 * @param request ModifyDBInstanceResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceResourceGroupResponse
 */
ModifyDBInstanceResourceGroupResponse Client::modifyDBInstanceResourceGroupWithOptions(const ModifyDBInstanceResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceResourceGroup"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceResourceGroupResponse>();
}

/**
 * @summary Moves an AnalyticDB for PostgreSQL instance to a resource group.
 *
 * @description Resource Management allows you to build an organizational structure for resources based on your business requirements. You can use resource directories, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
 *
 * @param request ModifyDBInstanceResourceGroupRequest
 * @return ModifyDBInstanceResourceGroupResponse
 */
ModifyDBInstanceResourceGroupResponse Client::modifyDBInstanceResourceGroup(const ModifyDBInstanceResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Enables, disables, or updates SSL encryption for an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyDBInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceSSLResponse
 */
ModifyDBInstanceSSLResponse Client::modifyDBInstanceSSLWithOptions(const ModifyDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.connectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasSSLEnabled()) {
    query["SSLEnabled"] = request.SSLEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceSSL"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceSSLResponse>();
}

/**
 * @summary Enables, disables, or updates SSL encryption for an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyDBInstanceSSLRequest
 * @return ModifyDBInstanceSSLResponse
 */
ModifyDBInstanceSSLResponse Client::modifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a resource group.
 *
 * @param tmpReq ModifyDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBResourceGroupResponse
 */
ModifyDBResourceGroupResponse Client::modifyDBResourceGroupWithOptions(const ModifyDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDBResourceGroupShrinkRequest request = ModifyDBResourceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceGroupItems()) {
    request.setResourceGroupItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceGroupItems(), "ResourceGroupItems", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupItemsShrink()) {
    query["ResourceGroupItems"] = request.resourceGroupItemsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBResourceGroup"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBResourceGroupResponse>();
}

/**
 * @summary Modifies the configurations of a resource group.
 *
 * @param request ModifyDBResourceGroupRequest
 * @return ModifyDBResourceGroupResponse
 */
ModifyDBResourceGroupResponse Client::modifyDBResourceGroup(const ModifyDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Modify External Data Service
 *
 * @param request ModifyExternalDataServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExternalDataServiceResponse
 */
ModifyExternalDataServiceResponse Client::modifyExternalDataServiceWithOptions(const ModifyExternalDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceDescription()) {
    query["ServiceDescription"] = request.serviceDescription();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceSpec()) {
    query["ServiceSpec"] = request.serviceSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyExternalDataService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyExternalDataServiceResponse>();
}

/**
 * @summary Modify External Data Service
 *
 * @param request ModifyExternalDataServiceRequest
 * @return ModifyExternalDataServiceResponse
 */
ModifyExternalDataServiceResponse Client::modifyExternalDataService(const ModifyExternalDataServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExternalDataServiceWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a Hadoop data source.
 *
 * @param request ModifyHadoopDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHadoopDataSourceResponse
 */
ModifyHadoopDataSourceResponse Client::modifyHadoopDataSourceWithOptions(const ModifyHadoopDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceDescription()) {
    query["DataSourceDescription"] = request.dataSourceDescription();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasEmrInstanceId()) {
    query["EmrInstanceId"] = request.emrInstanceId();
  }

  if (!!request.hasHDFSConf()) {
    query["HDFSConf"] = request.HDFSConf();
  }

  if (!!request.hasHadoopCoreConf()) {
    query["HadoopCoreConf"] = request.hadoopCoreConf();
  }

  if (!!request.hasHadoopCreateType()) {
    query["HadoopCreateType"] = request.hadoopCreateType();
  }

  if (!!request.hasHadoopHostsAddress()) {
    query["HadoopHostsAddress"] = request.hadoopHostsAddress();
  }

  if (!!request.hasHiveConf()) {
    query["HiveConf"] = request.hiveConf();
  }

  if (!!request.hasMapReduceConf()) {
    query["MapReduceConf"] = request.mapReduceConf();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasYarnConf()) {
    query["YarnConf"] = request.yarnConf();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHadoopDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHadoopDataSourceResponse>();
}

/**
 * @summary Modifies the configurations of a Hadoop data source.
 *
 * @param request ModifyHadoopDataSourceRequest
 * @return ModifyHadoopDataSourceResponse
 */
ModifyHadoopDataSourceResponse Client::modifyHadoopDataSource(const ModifyHadoopDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHadoopDataSourceWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a Java Database Connectivity (JDBC) data source.
 *
 * @param request ModifyJDBCDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyJDBCDataSourceResponse
 */
ModifyJDBCDataSourceResponse Client::modifyJDBCDataSourceWithOptions(const ModifyJDBCDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceDescription()) {
    query["DataSourceDescription"] = request.dataSourceDescription();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasJDBCConnectionString()) {
    query["JDBCConnectionString"] = request.JDBCConnectionString();
  }

  if (!!request.hasJDBCPassword()) {
    query["JDBCPassword"] = request.JDBCPassword();
  }

  if (!!request.hasJDBCUserName()) {
    query["JDBCUserName"] = request.JDBCUserName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyJDBCDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyJDBCDataSourceResponse>();
}

/**
 * @summary Modifies the configurations of a Java Database Connectivity (JDBC) data source.
 *
 * @param request ModifyJDBCDataSourceRequest
 * @return ModifyJDBCDataSourceResponse
 */
ModifyJDBCDataSourceResponse Client::modifyJDBCDataSource(const ModifyJDBCDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyJDBCDataSourceWithOptions(request, runtime);
}

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
ModifyMasterSpecResponse Client::modifyMasterSpecWithOptions(const ModifyMasterSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.DBInstanceDescription();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasMasterAISpec()) {
    query["MasterAISpec"] = request.masterAISpec();
  }

  if (!!request.hasMasterCU()) {
    query["MasterCU"] = request.masterCU();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMasterSpec"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMasterSpecResponse>();
}

/**
 * @summary Changes the specifications of coordinator node resources for an AnalyticDB for PostgreSQL instance.
 *
 * @description This operation is not available for instances in reserved storage mode.
 * Before you call this operation, make sure that you are familiar with the billing of AnalyticDB for PostgreSQL. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
 *
 * @param request ModifyMasterSpecRequest
 * @return ModifyMasterSpecResponse
 */
ModifyMasterSpecResponse Client::modifyMasterSpec(const ModifyMasterSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMasterSpecWithOptions(request, runtime);
}

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
ModifyParametersResponse Client::modifyParametersWithOptions(const ModifyParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasForceRestartInstance()) {
    query["ForceRestartInstance"] = request.forceRestartInstance();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyParameters"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyParametersResponse>();
}

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
ModifyParametersResponse Client::modifyParameters(const ModifyParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyParametersWithOptions(request, runtime);
}

/**
 * @summary Modify Homogeneous Data Source
 *
 * @param request ModifyRemoteADBDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRemoteADBDataSourceResponse
 */
ModifyRemoteADBDataSourceResponse Client::modifyRemoteADBDataSourceWithOptions(const ModifyRemoteADBDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasDataSourceName()) {
    query["DataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasLocalDBInstanceId()) {
    query["LocalDBInstanceId"] = request.localDBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasUserPassword()) {
    query["UserPassword"] = request.userPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRemoteADBDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRemoteADBDataSourceResponse>();
}

/**
 * @summary Modify Homogeneous Data Source
 *
 * @param request ModifyRemoteADBDataSourceRequest
 * @return ModifyRemoteADBDataSourceResponse
 */
ModifyRemoteADBDataSourceResponse Client::modifyRemoteADBDataSource(const ModifyRemoteADBDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRemoteADBDataSourceWithOptions(request, runtime);
}

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
ModifySQLCollectorPolicyResponse Client::modifySQLCollectorPolicyWithOptions(const ModifySQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasSQLCollectorStatus()) {
    query["SQLCollectorStatus"] = request.SQLCollectorStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySQLCollectorPolicy"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySQLCollectorPolicyResponse>();
}

/**
 * @summary Enables or disables the SQL Explorer feature for an AnalyticDB for PostgreSQL instance.
 *
 * @description *   You can call this operation only for AnalyticDB for PostgreSQL instances in reserved storage mode.
 * *   You can call this operation only for AnalyticDB for PostgreSQL instances in Serverless automatic scheduling mode.
 *
 * @param request ModifySQLCollectorPolicyRequest
 * @return ModifySQLCollectorPolicyResponse
 */
ModifySQLCollectorPolicyResponse Client::modifySQLCollectorPolicy(const ModifySQLCollectorPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySQLCollectorPolicyWithOptions(request, runtime);
}

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
ModifySecurityIpsResponse Client::modifySecurityIpsWithOptions(const ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceIPArrayAttribute()) {
    query["DBInstanceIPArrayAttribute"] = request.DBInstanceIPArrayAttribute();
  }

  if (!!request.hasDBInstanceIPArrayName()) {
    query["DBInstanceIPArrayName"] = request.DBInstanceIPArrayName();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.modifyMode();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.securityIPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityIps"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityIpsResponse>();
}

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
ModifySecurityIpsResponse Client::modifySecurityIps(const ModifySecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIpsWithOptions(request, runtime);
}

/**
 * @summary Modifies a real-time data service.
 *
 * @param request ModifyStreamingDataServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyStreamingDataServiceResponse
 */
ModifyStreamingDataServiceResponse Client::modifyStreamingDataServiceWithOptions(const ModifyStreamingDataServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceDescription()) {
    query["ServiceDescription"] = request.serviceDescription();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasServiceSpec()) {
    query["ServiceSpec"] = request.serviceSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyStreamingDataService"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyStreamingDataServiceResponse>();
}

/**
 * @summary Modifies a real-time data service.
 *
 * @param request ModifyStreamingDataServiceRequest
 * @return ModifyStreamingDataServiceResponse
 */
ModifyStreamingDataServiceResponse Client::modifyStreamingDataService(const ModifyStreamingDataServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyStreamingDataServiceWithOptions(request, runtime);
}

/**
 * @summary Modifies a real-time service data source.
 *
 * @param request ModifyStreamingDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyStreamingDataSourceResponse
 */
ModifyStreamingDataSourceResponse Client::modifyStreamingDataSourceWithOptions(const ModifyStreamingDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDataSourceConfig()) {
    query["DataSourceConfig"] = request.dataSourceConfig();
  }

  if (!!request.hasDataSourceDescription()) {
    query["DataSourceDescription"] = request.dataSourceDescription();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyStreamingDataSource"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyStreamingDataSourceResponse>();
}

/**
 * @summary Modifies a real-time service data source.
 *
 * @param request ModifyStreamingDataSourceRequest
 * @return ModifyStreamingDataSourceResponse
 */
ModifyStreamingDataSourceResponse Client::modifyStreamingDataSource(const ModifyStreamingDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyStreamingDataSourceWithOptions(request, runtime);
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param tmpReq ModifyStreamingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyStreamingJobResponse
 */
ModifyStreamingJobResponse Client::modifyStreamingJobWithOptions(const ModifyStreamingJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyStreamingJobShrinkRequest request = ModifyStreamingJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestColumns()) {
    request.setDestColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.destColumns(), "DestColumns", "json"));
  }

  if (!!tmpReq.hasMatchColumns()) {
    request.setMatchColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.matchColumns(), "MatchColumns", "json"));
  }

  if (!!tmpReq.hasSrcColumns()) {
    request.setSrcColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.srcColumns(), "SrcColumns", "json"));
  }

  if (!!tmpReq.hasUpdateColumns()) {
    request.setUpdateColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.updateColumns(), "UpdateColumns", "json"));
  }

  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasConsistency()) {
    query["Consistency"] = request.consistency();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDestColumnsShrink()) {
    query["DestColumns"] = request.destColumnsShrink();
  }

  if (!!request.hasDestDatabase()) {
    query["DestDatabase"] = request.destDatabase();
  }

  if (!!request.hasDestSchema()) {
    query["DestSchema"] = request.destSchema();
  }

  if (!!request.hasDestTable()) {
    query["DestTable"] = request.destTable();
  }

  if (!!request.hasErrorLimitCount()) {
    query["ErrorLimitCount"] = request.errorLimitCount();
  }

  if (!!request.hasFallbackOffset()) {
    query["FallbackOffset"] = request.fallbackOffset();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasJobConfig()) {
    query["JobConfig"] = request.jobConfig();
  }

  if (!!request.hasJobDescription()) {
    query["JobDescription"] = request.jobDescription();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasMatchColumnsShrink()) {
    query["MatchColumns"] = request.matchColumnsShrink();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSrcColumnsShrink()) {
    query["SrcColumns"] = request.srcColumnsShrink();
  }

  if (!!request.hasTryRun()) {
    query["TryRun"] = request.tryRun();
  }

  if (!!request.hasUpdateColumnsShrink()) {
    query["UpdateColumns"] = request.updateColumnsShrink();
  }

  if (!!request.hasWriteMode()) {
    query["WriteMode"] = request.writeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyStreamingJob"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyStreamingJobResponse>();
}

/**
 * @summary Create External Data Source Configuration
 *
 * @param request ModifyStreamingJobRequest
 * @return ModifyStreamingJobResponse
 */
ModifyStreamingJobResponse Client::modifyStreamingJob(const ModifyStreamingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyStreamingJobWithOptions(request, runtime);
}

/**
 * @summary Sets or replaces the IP address whitelist for a specified Supabase project.
 *
 * @description Before you can connect to a Supabase project, you must add your client\\"s IP address or CIDR block to the project\\"s whitelist.
 *
 * @param request ModifySupabaseProjectSecurityIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySupabaseProjectSecurityIpsResponse
 */
ModifySupabaseProjectSecurityIpsResponse Client::modifySupabaseProjectSecurityIpsWithOptions(const ModifySupabaseProjectSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.securityIPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySupabaseProjectSecurityIps"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySupabaseProjectSecurityIpsResponse>();
}

/**
 * @summary Sets or replaces the IP address whitelist for a specified Supabase project.
 *
 * @description Before you can connect to a Supabase project, you must add your client\\"s IP address or CIDR block to the project\\"s whitelist.
 *
 * @param request ModifySupabaseProjectSecurityIpsRequest
 * @return ModifySupabaseProjectSecurityIpsResponse
 */
ModifySupabaseProjectSecurityIpsResponse Client::modifySupabaseProjectSecurityIps(const ModifySupabaseProjectSecurityIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySupabaseProjectSecurityIpsWithOptions(request, runtime);
}

/**
 * @summary Modifies the vector engine optimization configuration of an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyVectorConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVectorConfigurationResponse
 */
ModifyVectorConfigurationResponse Client::modifyVectorConfigurationWithOptions(const ModifyVectorConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasVectorConfigurationStatus()) {
    query["VectorConfigurationStatus"] = request.vectorConfigurationStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVectorConfiguration"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVectorConfigurationResponse>();
}

/**
 * @summary Modifies the vector engine optimization configuration of an AnalyticDB for PostgreSQL instance.
 *
 * @param request ModifyVectorConfigurationRequest
 * @return ModifyVectorConfigurationResponse
 */
ModifyVectorConfigurationResponse Client::modifyVectorConfiguration(const ModifyVectorConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVectorConfigurationWithOptions(request, runtime);
}

/**
 * @summary Pauses data redistribution.
 *
 * @param request PauseDataRedistributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseDataRedistributeResponse
 */
PauseDataRedistributeResponse Client::pauseDataRedistributeWithOptions(const PauseDataRedistributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseDataRedistribute"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseDataRedistributeResponse>();
}

/**
 * @summary Pauses data redistribution.
 *
 * @param request PauseDataRedistributeRequest
 * @return PauseDataRedistributeResponse
 */
PauseDataRedistributeResponse Client::pauseDataRedistribute(const PauseDataRedistributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseDataRedistributeWithOptions(request, runtime);
}

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
PauseInstanceResponse Client::pauseInstanceWithOptions(const PauseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseInstance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseInstanceResponse>();
}

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
PauseInstanceResponse Client::pauseInstance(const PauseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseInstanceWithOptions(request, runtime);
}

/**
 * @summary Query Vector Data
 *
 * @param tmpReq QueryCollectionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCollectionDataResponse
 */
QueryCollectionDataResponse Client::queryCollectionDataWithOptions(const QueryCollectionDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryCollectionDataShrinkRequest request = QueryCollectionDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHybridSearchArgs()) {
    request.setHybridSearchArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hybridSearchArgs(), "HybridSearchArgs", "json"));
  }

  if (!!tmpReq.hasRelationalTableFilter()) {
    request.setRelationalTableFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.relationalTableFilter(), "RelationalTableFilter", "json"));
  }

  if (!!tmpReq.hasSparseVector()) {
    request.setSparseVectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sparseVector(), "SparseVector", "json"));
  }

  if (!!tmpReq.hasVector()) {
    request.setVectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq._vector(), "Vector", "json"));
  }

  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasHybridSearch()) {
    query["HybridSearch"] = request.hybridSearch();
  }

  if (!!request.hasHybridSearchArgsShrink()) {
    query["HybridSearchArgs"] = request.hybridSearchArgsShrink();
  }

  if (!!request.hasIncludeMetadataFields()) {
    query["IncludeMetadataFields"] = request.includeMetadataFields();
  }

  if (!!request.hasIncludeSparseValues()) {
    query["IncludeSparseValues"] = request.includeSparseValues();
  }

  if (!!request.hasIncludeValues()) {
    query["IncludeValues"] = request.includeValues();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRelationalTableFilterShrink()) {
    query["RelationalTableFilter"] = request.relationalTableFilterShrink();
  }

  if (!!request.hasSparseVectorShrink()) {
    query["SparseVector"] = request.sparseVectorShrink();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.topK();
  }

  if (!!request.hasVectorShrink()) {
    query["Vector"] = request.vectorShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasFilter()) {
    body["Filter"] = request.filter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryCollectionData"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCollectionDataResponse>();
}

/**
 * @summary Query Vector Data
 *
 * @param request QueryCollectionDataRequest
 * @return QueryCollectionDataResponse
 */
QueryCollectionDataResponse Client::queryCollectionData(const QueryCollectionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCollectionDataWithOptions(request, runtime);
}

/**
 * @summary Query
 *
 * @param tmpReq QueryContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryContentResponse
 */
QueryContentResponse Client::queryContentWithOptions(const QueryContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryContentShrinkRequest request = QueryContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGraphSearchArgs()) {
    request.setGraphSearchArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.graphSearchArgs(), "GraphSearchArgs", "json"));
  }

  if (!!tmpReq.hasHybridSearchArgs()) {
    request.setHybridSearchArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hybridSearchArgs(), "HybridSearchArgs", "json"));
  }

  if (!!tmpReq.hasRecallWindow()) {
    request.setRecallWindowShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recallWindow(), "RecallWindow", "json"));
  }

  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasGraphEnhance()) {
    query["GraphEnhance"] = request.graphEnhance();
  }

  if (!!request.hasGraphSearchArgsShrink()) {
    query["GraphSearchArgs"] = request.graphSearchArgsShrink();
  }

  if (!!request.hasHybridSearch()) {
    query["HybridSearch"] = request.hybridSearch();
  }

  if (!!request.hasHybridSearchArgsShrink()) {
    query["HybridSearchArgs"] = request.hybridSearchArgsShrink();
  }

  if (!!request.hasIncludeFileUrl()) {
    query["IncludeFileUrl"] = request.includeFileUrl();
  }

  if (!!request.hasIncludeMetadataFields()) {
    query["IncludeMetadataFields"] = request.includeMetadataFields();
  }

  if (!!request.hasIncludeVector()) {
    query["IncludeVector"] = request.includeVector();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRecallWindowShrink()) {
    query["RecallWindow"] = request.recallWindowShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRerankFactor()) {
    query["RerankFactor"] = request.rerankFactor();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.topK();
  }

  if (!!request.hasUrlExpiration()) {
    query["UrlExpiration"] = request.urlExpiration();
  }

  if (!!request.hasUseFullTextRetrieval()) {
    query["UseFullTextRetrieval"] = request.useFullTextRetrieval();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryContent"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryContentResponse>();
}

/**
 * @summary Query
 *
 * @param request QueryContentRequest
 * @return QueryContentResponse
 */
QueryContentResponse Client::queryContent(const QueryContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryContentWithOptions(request, runtime);
}

QueryContentResponse Client::queryContentAdvance(const QueryContentAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "gpdb"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  QueryContentRequest queryContentReq = QueryContentRequest();
  Utils::Utils::convert(request, queryContentReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    queryContentReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  QueryContentResponse queryContentResp = queryContentWithOptions(queryContentReq, runtime);
  return queryContentResp;
}

/**
 * @summary Retrieves vectors and metadata from multiple specified document collections using natural language queries, then merge and return the results from all retrieval paths.
 *
 * @param tmpReq QueryKnowledgeBasesContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryKnowledgeBasesContentResponse
 */
QueryKnowledgeBasesContentResponse Client::queryKnowledgeBasesContentWithOptions(const QueryKnowledgeBasesContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryKnowledgeBasesContentShrinkRequest request = QueryKnowledgeBasesContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMergeMethodArgs()) {
    request.setMergeMethodArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.mergeMethodArgs(), "MergeMethodArgs", "json"));
  }

  if (!!tmpReq.hasSourceCollection()) {
    request.setSourceCollectionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceCollection(), "SourceCollection", "json"));
  }

  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasMergeMethod()) {
    query["MergeMethod"] = request.mergeMethod();
  }

  if (!!request.hasMergeMethodArgsShrink()) {
    query["MergeMethodArgs"] = request.mergeMethodArgsShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRerankFactor()) {
    query["RerankFactor"] = request.rerankFactor();
  }

  if (!!request.hasSourceCollectionShrink()) {
    query["SourceCollection"] = request.sourceCollectionShrink();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.topK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryKnowledgeBasesContent"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryKnowledgeBasesContentResponse>();
}

/**
 * @summary Retrieves vectors and metadata from multiple specified document collections using natural language queries, then merge and return the results from all retrieval paths.
 *
 * @param request QueryKnowledgeBasesContentRequest
 * @return QueryKnowledgeBasesContentResponse
 */
QueryKnowledgeBasesContentResponse Client::queryKnowledgeBasesContent(const QueryKnowledgeBasesContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryKnowledgeBasesContentWithOptions(request, runtime);
}

/**
 * @summary Rebalances an AnalyticDB for PostgreSQL instance.
 *
 * @param request RebalanceDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebalanceDBInstanceResponse
 */
RebalanceDBInstanceResponse Client::rebalanceDBInstanceWithOptions(const RebalanceDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebalanceDBInstance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebalanceDBInstanceResponse>();
}

/**
 * @summary Rebalances an AnalyticDB for PostgreSQL instance.
 *
 * @param request RebalanceDBInstanceRequest
 * @return RebalanceDBInstanceResponse
 */
RebalanceDBInstanceResponse Client::rebalanceDBInstance(const RebalanceDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebalanceDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of an AnalyticDB for PostgreSQL instance.
 *
 * @param request ReleaseInstancePublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnectionWithOptions(const ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.currentConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstancePublicConnection"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstancePublicConnectionResponse>();
}

/**
 * @summary Releases the public endpoint of an AnalyticDB for PostgreSQL instance.
 *
 * @param request ReleaseInstancePublicConnectionRequest
 * @return ReleaseInstancePublicConnectionResponse
 */
ReleaseInstancePublicConnectionResponse Client::releaseInstancePublicConnection(const ReleaseInstancePublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstancePublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Score and re-order documents using a model
 *
 * @param tmpReq RerankRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RerankResponse
 */
RerankResponse Client::rerankWithOptions(const RerankRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RerankShrinkRequest request = RerankShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocuments()) {
    request.setDocumentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.documents(), "Documents", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasDocumentsShrink()) {
    body["Documents"] = request.documentsShrink();
  }

  if (!!request.hasMaxChunksPerDoc()) {
    body["MaxChunksPerDoc"] = request.maxChunksPerDoc();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.model();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.query();
  }

  if (!!request.hasReturnDocuments()) {
    body["ReturnDocuments"] = request.returnDocuments();
  }

  if (!!request.hasTopK()) {
    body["TopK"] = request.topK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Rerank"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RerankResponse>();
}

/**
 * @summary Score and re-order documents using a model
 *
 * @param request RerankRequest
 * @return RerankResponse
 */
RerankResponse Client::rerank(const RerankRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rerankWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a database account for an AnalyticDB for PostgreSQL instance.
 *
 * @param request ResetAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPasswordWithOptions(const ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAccountPasswordResponse>();
}

/**
 * @summary Resets the password of a database account for an AnalyticDB for PostgreSQL instance.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Resets the IMV statistics.
 *
 * @param request ResetIMVMonitorDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetIMVMonitorDataResponse
 */
ResetIMVMonitorDataResponse Client::resetIMVMonitorDataWithOptions(const ResetIMVMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetIMVMonitorData"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetIMVMonitorDataResponse>();
}

/**
 * @summary Resets the IMV statistics.
 *
 * @param request ResetIMVMonitorDataRequest
 * @return ResetIMVMonitorDataResponse
 */
ResetIMVMonitorDataResponse Client::resetIMVMonitorData(const ResetIMVMonitorDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetIMVMonitorDataWithOptions(request, runtime);
}

/**
 * @summary Reset the password of a Supabase database
 *
 * @description Call this API to reset the password of the Supabase database.
 *
 * @param request ResetSupabaseProjectPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetSupabaseProjectPasswordResponse
 */
ResetSupabaseProjectPasswordResponse Client::resetSupabaseProjectPasswordWithOptions(const ResetSupabaseProjectPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetSupabaseProjectPassword"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetSupabaseProjectPasswordResponse>();
}

/**
 * @summary Reset the password of a Supabase database
 *
 * @description Call this API to reset the password of the Supabase database.
 *
 * @param request ResetSupabaseProjectPasswordRequest
 * @return ResetSupabaseProjectPasswordResponse
 */
ResetSupabaseProjectPasswordResponse Client::resetSupabaseProjectPassword(const ResetSupabaseProjectPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetSupabaseProjectPasswordWithOptions(request, runtime);
}

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
RestartDBInstanceResponse Client::restartDBInstanceWithOptions(const RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDBInstance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDBInstanceResponse>();
}

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
RestartDBInstanceResponse Client::restartDBInstance(const RestartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Resumes data redistribution.
 *
 * @param request ResumeDataRedistributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeDataRedistributeResponse
 */
ResumeDataRedistributeResponse Client::resumeDataRedistributeWithOptions(const ResumeDataRedistributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeDataRedistribute"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeDataRedistributeResponse>();
}

/**
 * @summary Resumes data redistribution.
 *
 * @param request ResumeDataRedistributeRequest
 * @return ResumeDataRedistributeResponse
 */
ResumeDataRedistributeResponse Client::resumeDataRedistribute(const ResumeDataRedistributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeDataRedistributeWithOptions(request, runtime);
}

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
ResumeInstanceResponse Client::resumeInstanceWithOptions(const ResumeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeInstance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeInstanceResponse>();
}

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
ResumeInstanceResponse Client::resumeInstance(const ResumeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeInstanceWithOptions(request, runtime);
}

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
SetDBInstancePlanStatusResponse Client::setDBInstancePlanStatusWithOptions(const SetDBInstancePlanStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasPlanStatus()) {
    query["PlanStatus"] = request.planStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDBInstancePlanStatus"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDBInstancePlanStatusResponse>();
}

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
SetDBInstancePlanStatusResponse Client::setDBInstancePlanStatus(const SetDBInstancePlanStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDBInstancePlanStatusWithOptions(request, runtime);
}

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
SetDataShareInstanceResponse Client::setDataShareInstanceWithOptions(const SetDataShareInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetDataShareInstanceShrinkRequest request = SetDataShareInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceList()) {
    request.setInstanceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceList(), "InstanceList", "json"));
  }

  json query = {};
  if (!!request.hasInstanceListShrink()) {
    query["InstanceList"] = request.instanceListShrink();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDataShareInstance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDataShareInstanceResponse>();
}

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
SetDataShareInstanceResponse Client::setDataShareInstance(const SetDataShareInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDataShareInstanceWithOptions(request, runtime);
}

/**
 * @summary Switches between the internal and public endpoints of an AnalyticDB for PostgreSQL instance.
 *
 * @description This operation is not supported for AnalyticDB for PostgreSQL instances in elastic storage mode or Serverless mode.
 *
 * @param request SwitchDBInstanceNetTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchDBInstanceNetTypeResponse
 */
SwitchDBInstanceNetTypeResponse Client::switchDBInstanceNetTypeWithOptions(const SwitchDBInstanceNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchDBInstanceNetType"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchDBInstanceNetTypeResponse>();
}

/**
 * @summary Switches between the internal and public endpoints of an AnalyticDB for PostgreSQL instance.
 *
 * @description This operation is not supported for AnalyticDB for PostgreSQL instances in elastic storage mode or Serverless mode.
 *
 * @param request SwitchDBInstanceNetTypeRequest
 * @return SwitchDBInstanceNetTypeResponse
 */
SwitchDBInstanceNetTypeResponse Client::switchDBInstanceNetType(const SwitchDBInstanceNetTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchDBInstanceNetTypeWithOptions(request, runtime);
}

/**
 * @summary Creates and adds tags to AnalyticDB for PostgreSQL instances.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Creates and adds tags to AnalyticDB for PostgreSQL instances.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Generates text embeddings using an embedding model.
 *
 * @param tmpReq TextEmbeddingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TextEmbeddingResponse
 */
TextEmbeddingResponse Client::textEmbeddingWithOptions(const TextEmbeddingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TextEmbeddingShrinkRequest request = TextEmbeddingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.dimension();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasInputShrink()) {
    body["Input"] = request.inputShrink();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.model();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TextEmbedding"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TextEmbeddingResponse>();
}

/**
 * @summary Generates text embeddings using an embedding model.
 *
 * @param request TextEmbeddingRequest
 * @return TextEmbeddingResponse
 */
TextEmbeddingResponse Client::textEmbedding(const TextEmbeddingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return textEmbeddingWithOptions(request, runtime);
}

/**
 * @summary Unbinds database roles from a resource group.
 *
 * @param tmpReq UnbindDBResourceGroupWithRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindDBResourceGroupWithRoleResponse
 */
UnbindDBResourceGroupWithRoleResponse Client::unbindDBResourceGroupWithRoleWithOptions(const UnbindDBResourceGroupWithRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnbindDBResourceGroupWithRoleShrinkRequest request = UnbindDBResourceGroupWithRoleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleList()) {
    request.setRoleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roleList(), "RoleList", "simple"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasRoleListShrink()) {
    query["RoleList"] = request.roleListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindDBResourceGroupWithRole"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindDBResourceGroupWithRoleResponse>();
}

/**
 * @summary Unbinds database roles from a resource group.
 *
 * @param request UnbindDBResourceGroupWithRoleRequest
 * @return UnbindDBResourceGroupWithRoleResponse
 */
UnbindDBResourceGroupWithRoleResponse Client::unbindDBResourceGroupWithRole(const UnbindDBResourceGroupWithRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindDBResourceGroupWithRoleWithOptions(request, runtime);
}

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
UnloadSampleDataResponse Client::unloadSampleDataWithOptions(const UnloadSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnloadSampleData"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnloadSampleDataResponse>();
}

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
UnloadSampleDataResponse Client::unloadSampleData(const UnloadSampleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unloadSampleDataWithOptions(request, runtime);
}

/**
 * @summary Remove resource tags
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Remove resource tags
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Update Metadata of Collection Data
 *
 * @param tmpReq UpdateCollectionDataMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCollectionDataMetadataResponse
 */
UpdateCollectionDataMetadataResponse Client::updateCollectionDataMetadataWithOptions(const UpdateCollectionDataMetadataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCollectionDataMetadataShrinkRequest request = UpdateCollectionDataMetadataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  if (!!tmpReq.hasMetadata()) {
    request.setMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.metadata(), "Metadata", "json"));
  }

  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.idsShrink();
  }

  if (!!request.hasMetadataShrink()) {
    query["Metadata"] = request.metadataShrink();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCollectionDataMetadata"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCollectionDataMetadataResponse>();
}

/**
 * @summary Update Metadata of Collection Data
 *
 * @param request UpdateCollectionDataMetadataRequest
 * @return UpdateCollectionDataMetadataResponse
 */
UpdateCollectionDataMetadataResponse Client::updateCollectionDataMetadata(const UpdateCollectionDataMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCollectionDataMetadataWithOptions(request, runtime);
}

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
UpdateDBInstancePlanResponse Client::updateDBInstancePlanWithOptions(const UpdateDBInstancePlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlanConfig()) {
    query["PlanConfig"] = request.planConfig();
  }

  if (!!request.hasPlanDesc()) {
    query["PlanDesc"] = request.planDesc();
  }

  if (!!request.hasPlanEndDate()) {
    query["PlanEndDate"] = request.planEndDate();
  }

  if (!!request.hasPlanId()) {
    query["PlanId"] = request.planId();
  }

  if (!!request.hasPlanName()) {
    query["PlanName"] = request.planName();
  }

  if (!!request.hasPlanStartDate()) {
    query["PlanStartDate"] = request.planStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDBInstancePlan"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDBInstancePlanResponse>();
}

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
UpdateDBInstancePlanResponse Client::updateDBInstancePlan(const UpdateDBInstancePlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDBInstancePlanWithOptions(request, runtime);
}

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
UpgradeDBInstanceResponse Client::upgradeDBInstanceWithOptions(const UpgradeDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheStorageSize()) {
    query["CacheStorageSize"] = request.cacheStorageSize();
  }

  if (!!request.hasDBInstanceClass()) {
    query["DBInstanceClass"] = request.DBInstanceClass();
  }

  if (!!request.hasDBInstanceGroupCount()) {
    query["DBInstanceGroupCount"] = request.DBInstanceGroupCount();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.instanceSpec();
  }

  if (!!request.hasMasterNodeNum()) {
    query["MasterNodeNum"] = request.masterNodeNum();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSegDiskPerformanceLevel()) {
    query["SegDiskPerformanceLevel"] = request.segDiskPerformanceLevel();
  }

  if (!!request.hasSegNodeNum()) {
    query["SegNodeNum"] = request.segNodeNum();
  }

  if (!!request.hasSegStorageType()) {
    query["SegStorageType"] = request.segStorageType();
  }

  if (!!request.hasServerlessResource()) {
    query["ServerlessResource"] = request.serverlessResource();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.storageSize();
  }

  if (!!request.hasUpgradeType()) {
    query["UpgradeType"] = request.upgradeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBInstance"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBInstanceResponse>();
}

/**
 * @summary Changes the configurations of an AnalyticDB for PostgreSQL instance.
 *
 * @description This operation is not available for instances in reserved storage mode.
 * Before you call this operation, make sure that you are familiar with the billing of AnalyticDB for PostgreSQL. For more information, see [Billing methods](https://help.aliyun.com/document_detail/35406.html) and [AnalyticDB for PostgreSQL pricing](https://www.alibabacloud.com/zh/product/hybriddb-postgresql/pricing).
 *
 * @param request UpgradeDBInstanceRequest
 * @return UpgradeDBInstanceResponse
 */
UpgradeDBInstanceResponse Client::upgradeDBInstance(const UpgradeDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Upgrades the minor version of an AnalyticDB for PostgreSQL instance.
 *
 * @param request UpgradeDBVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeDBVersionResponse
 */
UpgradeDBVersionResponse Client::upgradeDBVersionWithOptions(const UpgradeDBVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasMajorVersion()) {
    query["MajorVersion"] = request.majorVersion();
  }

  if (!!request.hasMinorVersion()) {
    query["MinorVersion"] = request.minorVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.switchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.switchTimeMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeDBVersion"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeDBVersionResponse>();
}

/**
 * @summary Upgrades the minor version of an AnalyticDB for PostgreSQL instance.
 *
 * @param request UpgradeDBVersionRequest
 * @return UpgradeDBVersionResponse
 */
UpgradeDBVersionResponse Client::upgradeDBVersion(const UpgradeDBVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeDBVersionWithOptions(request, runtime);
}

/**
 * @summary Updates extensions.
 *
 * @param request UpgradeExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeExtensionsResponse
 */
UpgradeExtensionsResponse Client::upgradeExtensionsWithOptions(const UpgradeExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasExtensions()) {
    query["Extensions"] = request.extensions();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeExtensions"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeExtensionsResponse>();
}

/**
 * @summary Updates extensions.
 *
 * @param request UpgradeExtensionsRequest
 * @return UpgradeExtensionsResponse
 */
UpgradeExtensionsResponse Client::upgradeExtensions(const UpgradeExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeExtensionsWithOptions(request, runtime);
}

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
UploadDocumentAsyncResponse Client::uploadDocumentAsyncWithOptions(const UploadDocumentAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UploadDocumentAsyncShrinkRequest request = UploadDocumentAsyncShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMetadata()) {
    request.setMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.metadata(), "Metadata", "json"));
  }

  if (!!tmpReq.hasSeparators()) {
    request.setSeparatorsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.separators(), "Separators", "json"));
  }

  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasChunkOverlap()) {
    body["ChunkOverlap"] = request.chunkOverlap();
  }

  if (!!request.hasChunkSize()) {
    body["ChunkSize"] = request.chunkSize();
  }

  if (!!request.hasCollection()) {
    body["Collection"] = request.collection();
  }

  if (!!request.hasDocumentLoaderName()) {
    body["DocumentLoaderName"] = request.documentLoaderName();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasMetadataShrink()) {
    body["Metadata"] = request.metadataShrink();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    body["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasSeparatorsShrink()) {
    body["Separators"] = request.separatorsShrink();
  }

  if (!!request.hasSplitterModel()) {
    body["SplitterModel"] = request.splitterModel();
  }

  if (!!request.hasTextSplitterName()) {
    body["TextSplitterName"] = request.textSplitterName();
  }

  if (!!request.hasVlEnhance()) {
    body["VlEnhance"] = request.vlEnhance();
  }

  if (!!request.hasZhTitleEnhance()) {
    body["ZhTitleEnhance"] = request.zhTitleEnhance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadDocumentAsync"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDocumentAsyncResponse>();
}

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
UploadDocumentAsyncResponse Client::uploadDocumentAsync(const UploadDocumentAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDocumentAsyncWithOptions(request, runtime);
}

UploadDocumentAsyncResponse Client::uploadDocumentAsyncAdvance(const UploadDocumentAsyncAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "gpdb"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  UploadDocumentAsyncRequest uploadDocumentAsyncReq = UploadDocumentAsyncRequest();
  Utils::Utils::convert(request, uploadDocumentAsyncReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    uploadDocumentAsyncReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UploadDocumentAsyncResponse uploadDocumentAsyncResp = uploadDocumentAsyncWithOptions(uploadDocumentAsyncReq, runtime);
  return uploadDocumentAsyncResp;
}

/**
 * @summary Splits a document into chunks and uploads the vectorized chunks to a document collection.
 *
 * @description The vector algorithm that is used for the document is specified when you call the CreateDocumentCollection operation.
 *
 * @param tmpReq UpsertChunksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertChunksResponse
 */
UpsertChunksResponse Client::upsertChunksWithOptions(const UpsertChunksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpsertChunksShrinkRequest request = UpsertChunksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTextChunks()) {
    request.setTextChunksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.textChunks(), "TextChunks", "json"));
  }

  json query = {};
  if (!!request.hasAllowInsertWithFilter()) {
    query["AllowInsertWithFilter"] = request.allowInsertWithFilter();
  }

  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShouldReplaceFile()) {
    query["ShouldReplaceFile"] = request.shouldReplaceFile();
  }

  json body = {};
  if (!!request.hasTextChunksShrink()) {
    body["TextChunks"] = request.textChunksShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertChunks"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertChunksResponse>();
}

/**
 * @summary Splits a document into chunks and uploads the vectorized chunks to a document collection.
 *
 * @description The vector algorithm that is used for the document is specified when you call the CreateDocumentCollection operation.
 *
 * @param request UpsertChunksRequest
 * @return UpsertChunksResponse
 */
UpsertChunksResponse Client::upsertChunks(const UpsertChunksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertChunksWithOptions(request, runtime);
}

/**
 * @summary Uploads vector data to a vector collection.
 *
 * @param tmpReq UpsertCollectionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertCollectionDataResponse
 */
UpsertCollectionDataResponse Client::upsertCollectionDataWithOptions(const UpsertCollectionDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpsertCollectionDataShrinkRequest request = UpsertCollectionDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRows()) {
    request.setRowsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rows(), "Rows", "json"));
  }

  json query = {};
  if (!!request.hasCollection()) {
    query["Collection"] = request.collection();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    query["NamespacePassword"] = request.namespacePassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasRowsShrink()) {
    body["Rows"] = request.rowsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertCollectionData"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertCollectionDataResponse>();
}

/**
 * @summary Uploads vector data to a vector collection.
 *
 * @param request UpsertCollectionDataRequest
 * @return UpsertCollectionDataResponse
 */
UpsertCollectionDataResponse Client::upsertCollectionData(const UpsertCollectionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertCollectionDataWithOptions(request, runtime);
}

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
UpsertCollectionDataAsyncResponse Client::upsertCollectionDataAsyncWithOptions(const UpsertCollectionDataAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasCollection()) {
    body["Collection"] = request.collection();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespacePassword()) {
    body["NamespacePassword"] = request.namespacePassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertCollectionDataAsync"},
    {"version" , "2016-05-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertCollectionDataAsyncResponse>();
}

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
UpsertCollectionDataAsyncResponse Client::upsertCollectionDataAsync(const UpsertCollectionDataAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertCollectionDataAsyncWithOptions(request, runtime);
}

UpsertCollectionDataAsyncResponse Client::upsertCollectionDataAsyncAdvance(const UpsertCollectionDataAsyncAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "gpdb"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  UpsertCollectionDataAsyncRequest upsertCollectionDataAsyncReq = UpsertCollectionDataAsyncRequest();
  Utils::Utils::convert(request, upsertCollectionDataAsyncReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    upsertCollectionDataAsyncReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UpsertCollectionDataAsyncResponse upsertCollectionDataAsyncResp = upsertCollectionDataAsyncWithOptions(upsertCollectionDataAsyncReq, runtime);
  return upsertCollectionDataAsyncResp;
}
} // namespace AlibabaCloud
} // namespace Gpdb20160503