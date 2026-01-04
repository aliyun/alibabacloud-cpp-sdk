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
 * @summary 查询Connector信息
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
 * @summary 查询Connector信息
 *
 * @param request GetConnectorRequest
 * @return GetConnectorResponse
 */
GetConnectorResponse Client::getConnector(const GetConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectorWithOptions(request, runtime);
}

/**
 * @summary 查询Group信息
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
 * @summary 查询Group信息
 *
 * @param request GetGroupRequest
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const GetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupWithOptions(request, runtime);
}

/**
 * @summary 查询Project资源详细信息
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
 * @summary 查询Project资源详细信息
 *
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWithOptions(request, runtime);
}

/**
 * @summary 查询Schema信息
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
 * @summary 查询Schema信息
 *
 * @param request GetSchemaRequest
 * @return GetSchemaResponse
 */
GetSchemaResponse Client::getSchema(const GetSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSchemaWithOptions(request, runtime);
}

/**
 * @summary 查询Subscription信息
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
 * @summary 查询Subscription信息
 *
 * @param request GetSubscriptionRequest
 * @return GetSubscriptionResponse
 */
GetSubscriptionResponse Client::getSubscription(const GetSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubscriptionWithOptions(request, runtime);
}

/**
 * @summary 查询Topic信息
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
 * @summary 查询Topic信息
 *
 * @param request GetTopicRequest
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopic(const GetTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicWithOptions(request, runtime);
}

/**
 * @summary 查询Connector列表信息
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
 * @summary 查询Connector列表信息
 *
 * @param request ListConnectorsRequest
 * @return ListConnectorsResponse
 */
ListConnectorsResponse Client::listConnectors(const ListConnectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConnectorsWithOptions(request, runtime);
}

/**
 * @summary 查询Group列表信息
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
 * @summary 查询Group列表信息
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsWithOptions(request, runtime);
}

/**
 * @summary 查询Project列表信息
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
 * @summary 查询Project列表信息
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsWithOptions(request, runtime);
}

/**
 * @summary 查询Schema列表信息
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
 * @summary 查询Schema列表信息
 *
 * @param request ListSchemasRequest
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemas(const ListSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSchemasWithOptions(request, runtime);
}

/**
 * @summary 查询Subscription列表信息
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
 * @summary 查询Subscription列表信息
 *
 * @param request ListSubscriptionsRequest
 * @return ListSubscriptionsResponse
 */
ListSubscriptionsResponse Client::listSubscriptions(const ListSubscriptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubscriptionsWithOptions(request, runtime);
}

/**
 * @summary 查询Topic列表信息
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
 * @summary 查询Topic列表信息
 *
 * @param request ListTopicsRequest
 * @return ListTopicsResponse
 */
ListTopicsResponse Client::listTopics(const ListTopicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Datahub20240620