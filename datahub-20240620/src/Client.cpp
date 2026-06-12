#include <darabonba/Core.hpp>
#include <alibabacloud/Datahub20240620.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Datahub20240620::Models;
namespace AlibabaCloud
{
namespace Datahub20240620
{

AlibabaCloud::Datahub20240620::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("datahub", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a project.
 *
 * @description Creates a project.
 *
 * @param request CreateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary Creates a project.
 *
 * @description Creates a project.
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectWithOptions(request, runtime);
}

/**
 * @summary 创建Subscription资源
 *
 * @description 创建订阅信息
 *
 * @param request CreateSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubscriptionResponse
 */
CreateSubscriptionResponse Client::createSubscriptionWithOptions(const CreateSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplication()) {
    query["Application"] = request.getApplication();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSubscriptionId()) {
    query["SubscriptionId"] = request.getSubscriptionId();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSubscription"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubscriptionResponse>();
}

/**
 * @summary 创建Subscription资源
 *
 * @description 创建订阅信息
 *
 * @param request CreateSubscriptionRequest
 * @return CreateSubscriptionResponse
 */
CreateSubscriptionResponse Client::createSubscription(const CreateSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSubscriptionWithOptions(request, runtime);
}

/**
 * @summary A topic is the smallest unit for DataHub subscription and publishing. You can use a topic to represent a type or category of streaming data.
 *
 * @description Creates a topic resource.
 *
 * @param request CreateTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopicWithOptions(const CreateTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEnableSchemaRegistry()) {
    query["EnableSchemaRegistry"] = request.getEnableSchemaRegistry();
  }

  if (!!request.hasExpandMode()) {
    query["ExpandMode"] = request.getExpandMode();
  }

  if (!!request.hasLifecycle()) {
    query["Lifecycle"] = request.getLifecycle();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRecordSchema()) {
    query["RecordSchema"] = request.getRecordSchema();
  }

  if (!!request.hasRecordType()) {
    query["RecordType"] = request.getRecordType();
  }

  if (!!request.hasShardCount()) {
    query["ShardCount"] = request.getShardCount();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTopic"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTopicResponse>();
}

/**
 * @summary A topic is the smallest unit for DataHub subscription and publishing. You can use a topic to represent a type or category of streaming data.
 *
 * @description Creates a topic resource.
 *
 * @param request CreateTopicRequest
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopic(const CreateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTopicWithOptions(request, runtime);
}

/**
 * @summary Deletes a project. Before deleting a project, delete all resources under the project, including topics, synchronization tasks, and subscription tasks.
 *
 * @description Deletes a project.
 *
 * @param request DeleteProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary Deletes a project. Before deleting a project, delete all resources under the project, including topics, synchronization tasks, and subscription tasks.
 *
 * @description Deletes a project.
 *
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectWithOptions(request, runtime);
}

/**
 * @summary 删除Subscription资源
 *
 * @description 删除订阅任务
 *
 * @param request DeleteSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubscriptionResponse
 */
DeleteSubscriptionResponse Client::deleteSubscriptionWithOptions(const DeleteSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSubscriptionId()) {
    query["SubscriptionId"] = request.getSubscriptionId();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSubscription"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubscriptionResponse>();
}

/**
 * @summary 删除Subscription资源
 *
 * @description 删除订阅任务
 *
 * @param request DeleteSubscriptionRequest
 * @return DeleteSubscriptionResponse
 */
DeleteSubscriptionResponse Client::deleteSubscription(const DeleteSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Deletes a topic resource. Before deleting a topic resource, delete all subscriptions and sync tasks under the topic.
 *
 * @description Deletes a topic resource.
 *
 * @param request DeleteTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopicWithOptions(const DeleteTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTopic"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTopicResponse>();
}

/**
 * @summary Deletes a topic resource. Before deleting a topic resource, delete all subscriptions and sync tasks under the topic.
 *
 * @description Deletes a topic resource.
 *
 * @param request DeleteTopicRequest
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopic(const DeleteTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTopicWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a synchronization task.
 *
 * @description Queries the information about a synchronization task.
 *
 * @param request GetConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConnectorResponse
 */
GetConnectorResponse Client::getConnectorWithOptions(const GetConnectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConnector"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConnectorResponse>();
}

/**
 * @summary Queries the information about a synchronization task.
 *
 * @description Queries the information about a synchronization task.
 *
 * @param request GetConnectorRequest
 * @return GetConnectorResponse
 */
GetConnectorResponse Client::getConnector(const GetConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectorWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a consumer group.
 *
 * @description Queries the information about a consumer group.
 *
 * @param request GetGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroup"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupResponse>();
}

/**
 * @summary Queries the information about a consumer group.
 *
 * @description Queries the information about a consumer group.
 *
 * @param request GetGroupRequest
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const GetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupWithOptions(request, runtime);
}

/**
 * @summary Queries project information.
 *
 * @description Queries project information.
 *
 * @param request GetProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectResponse>();
}

/**
 * @summary Queries project information.
 *
 * @description Queries project information.
 *
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWithOptions(request, runtime);
}

/**
 * @summary Reads data from a specified topic. This operation is primarily used for debugging. For high-volume data reading, refer to the SDK documentation.
 *
 * @description This operation is intended for debugging purposes. Do not use this operation to read large amounts of data.
 *
 * @param request GetRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecordsResponse
 */
GetRecordsResponse Client::getRecordsWithOptions(const GetRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasShardId()) {
    query["ShardId"] = request.getShardId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecords"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecordsResponse>();
}

/**
 * @summary Reads data from a specified topic. This operation is primarily used for debugging. For high-volume data reading, refer to the SDK documentation.
 *
 * @description This operation is intended for debugging purposes. Do not use this operation to read large amounts of data.
 *
 * @param request GetRecordsRequest
 * @return GetRecordsResponse
 */
GetRecordsResponse Client::getRecords(const GetRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries schema information.
 *
 * @description Queries schema information.
 *
 * @param request GetSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSchemaResponse
 */
GetSchemaResponse Client::getSchemaWithOptions(const GetSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSchema"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSchemaResponse>();
}

/**
 * @summary Queries schema information.
 *
 * @description Queries schema information.
 *
 * @param request GetSchemaRequest
 * @return GetSchemaResponse
 */
GetSchemaResponse Client::getSchema(const GetSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSchemaWithOptions(request, runtime);
}

/**
 * @summary Queries subscription information.
 *
 * @description Queries subscription information.
 *
 * @param request GetSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionResponse
 */
GetSubscriptionResponse Client::getSubscriptionWithOptions(const GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSubscriptionId()) {
    query["SubscriptionId"] = request.getSubscriptionId();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubscription"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubscriptionResponse>();
}

/**
 * @summary Queries subscription information.
 *
 * @description Queries subscription information.
 *
 * @param request GetSubscriptionRequest
 * @return GetSubscriptionResponse
 */
GetSubscriptionResponse Client::getSubscription(const GetSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Queries topic information.
 *
 * @description Queries topic information.
 *
 * @param request GetTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopicWithOptions(const GetTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopic"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicResponse>();
}

/**
 * @summary Queries topic information.
 *
 * @description Queries topic information.
 *
 * @param request GetTopicRequest
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopic(const GetTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of synchronization tasks.
 *
 * @description Queries the list of synchronization tasks.
 *
 * @param request ListConnectorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnectorsResponse
 */
ListConnectorsResponse Client::listConnectorsWithOptions(const ListConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasPure()) {
    query["Pure"] = request.getPure();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConnectors"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConnectorsResponse>();
}

/**
 * @summary Retrieves a list of synchronization tasks.
 *
 * @description Queries the list of synchronization tasks.
 *
 * @param request ListConnectorsRequest
 * @return ListConnectorsResponse
 */
ListConnectorsResponse Client::listConnectors(const ListConnectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConnectorsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of consumer groups.
 *
 * @description Queries the list of consumer groups.
 *
 * @param request ListGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroupsWithOptions(const ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasPure()) {
    query["Pure"] = request.getPure();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroups"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsResponse>();
}

/**
 * @summary Retrieves a list of consumer groups.
 *
 * @description Queries the list of consumer groups.
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of projects.
 *
 * @description Queries the list of projects.
 *
 * @param request ListProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPure()) {
    query["Pure"] = request.getPure();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary Retrieves a list of projects.
 *
 * @description Queries the list of projects.
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsWithOptions(request, runtime);
}

/**
 * @summary Lists schemas.
 *
 * @description Queries schema list information.
 *
 * @param request ListSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemasWithOptions(const ListSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSchemas"},
    {"version" , "2024-06-20"},
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
 * @summary Lists schemas.
 *
 * @description Queries schema list information.
 *
 * @param request ListSchemasRequest
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemas(const ListSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSchemasWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of subscriptions.
 *
 * @description Queries subscription list information.
 *
 * @param request ListSubscriptionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubscriptionsResponse
 */
ListSubscriptionsResponse Client::listSubscriptionsWithOptions(const ListSubscriptionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubscriptions"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubscriptionsResponse>();
}

/**
 * @summary Retrieves a list of subscriptions.
 *
 * @description Queries subscription list information.
 *
 * @param request ListSubscriptionsRequest
 * @return ListSubscriptionsResponse
 */
ListSubscriptionsResponse Client::listSubscriptions(const ListSubscriptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubscriptionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of topics.
 *
 * @description Queries the list of topics.
 *
 * @param request ListTopicsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTopicsResponse
 */
ListTopicsResponse Client::listTopicsWithOptions(const ListTopicsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasPure()) {
    query["Pure"] = request.getPure();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTopics"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTopicsResponse>();
}

/**
 * @summary Retrieves a list of topics.
 *
 * @description Queries the list of topics.
 *
 * @param request ListTopicsRequest
 * @return ListTopicsResponse
 */
ListTopicsResponse Client::listTopics(const ListTopicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicsWithOptions(request, runtime);
}

/**
 * @summary Writes data to a specified topic. This operation is primarily intended for debugging. For high-volume data writes, refer to the SDK documentation.
 *
 * @description This operation is primarily intended for debugging. Do not use this operation to write large amounts of data.
 *
 * @param tmpReq PutRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutRecordsResponse
 */
PutRecordsResponse Client::putRecordsWithOptions(const PutRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PutRecordsShrinkRequest request = PutRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecords()) {
    request.setRecordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecords(), "Records", "json"));
  }

  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRecordsShrink()) {
    query["Records"] = request.getRecordsShrink();
  }

  if (!!request.hasShardId()) {
    query["ShardId"] = request.getShardId();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutRecords"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutRecordsResponse>();
}

/**
 * @summary Writes data to a specified topic. This operation is primarily intended for debugging. For high-volume data writes, refer to the SDK documentation.
 *
 * @description This operation is primarily intended for debugging. Do not use this operation to write large amounts of data.
 *
 * @param request PutRecordsRequest
 * @return PutRecordsResponse
 */
PutRecordsResponse Client::putRecords(const PutRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putRecordsWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a project.
 *
 * @description Updates the description of a project.
 *
 * @param request UpdateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectResponse>();
}

/**
 * @summary Updates the description of a project.
 *
 * @description Updates the description of a project.
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectWithOptions(request, runtime);
}

/**
 * @summary Updates the description of a topic.
 *
 * @description Updates the description of a topic.
 *
 * @param request UpdateTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTopicResponse
 */
UpdateTopicResponse Client::updateTopicWithOptions(const UpdateTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTopic"},
    {"version" , "2024-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTopicResponse>();
}

/**
 * @summary Updates the description of a topic.
 *
 * @description Updates the description of a topic.
 *
 * @param request UpdateTopicRequest
 * @return UpdateTopicResponse
 */
UpdateTopicResponse Client::updateTopic(const UpdateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTopicWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Datahub20240620