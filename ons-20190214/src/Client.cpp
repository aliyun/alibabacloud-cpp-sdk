#include <darabonba/Core.hpp>
#include <alibabacloud/Ons20190214.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ons20190214::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ons20190214
{

AlibabaCloud::Ons20190214::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "ons.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1" , "ons.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "ons.aliyuncs.com"},
    {"cn-beijing-gov-1" , "ons.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "ons.aliyuncs.com"},
    {"cn-edge-1" , "ons.aliyuncs.com"},
    {"cn-fujian" , "ons.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "ons.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "ons.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "ons.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "ons.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "ons.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "ons.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "ons.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "ons.aliyuncs.com"},
    {"cn-qingdao-nebula" , "ons.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "ons.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "ons.aliyuncs.com"},
    {"cn-shanghai-inner" , "ons.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "ons.aliyuncs.com"},
    {"cn-shenzhen-inner" , "ons.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "ons.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "ons.aliyuncs.com"},
    {"cn-wuhan" , "ons.aliyuncs.com"},
    {"cn-yushanfang" , "ons.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "ons.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "ons.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "ons.aliyuncs.com"},
    {"eu-west-1-oxs" , "ons.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop" , "ons.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("ons", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Queries the tags that are attached to a specified resource.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When you call the **ListTagResources** operation, specify at least one of the following parameters in the request: **Key** and **ResourceId**. You can specify a resource ID to query all tags that are attached to the specified resource. You can also specify a tag key to query the tag value and resource to which the tag is attached.
 * *   If you include the **Key** parameter in a request, you can obtain the tag value and the ID of the resource to which the tag is attached.
 * *   If you include the **ResourceId** parameter in a request, you can obtain the keys and values of all tags that are attached to the specified resource.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-02-14"},
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
 * @summary Queries the tags that are attached to a specified resource.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When you call the **ListTagResources** operation, specify at least one of the following parameters in the request: **Key** and **ResourceId**. You can specify a resource ID to query all tags that are attached to the specified resource. You can also specify a tag key to query the tag value and resource to which the tag is attached.
 * *   If you include the **Key** parameter in a request, you can obtain the tag value and the ID of the resource to which the tag is attached.
 * *   If you include the **ResourceId** parameter in a request, you can obtain the keys and values of all tags that are attached to the specified resource.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about message accumulation in topics to which a specified consumer group subscribes. The returned information includes the number of accumulated messages and the consumption latency.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation in scenarios in which you want to know the message consumption progress of a specified consumer group in production environments. You can obtain the information about message consumption and consumption latency based on the returned information. This operation returns the total number of accumulated messages in all topics to which the specified consumer group subscribes and the number of accumulated messages in each topic.
 *
 * @param request OnsConsumerAccumulateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsConsumerAccumulateResponse
 */
OnsConsumerAccumulateResponse Client::onsConsumerAccumulateWithOptions(const OnsConsumerAccumulateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetail()) {
    query["Detail"] = request.getDetail();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsConsumerAccumulate"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsConsumerAccumulateResponse>();
}

/**
 * @summary Queries the information about message accumulation in topics to which a specified consumer group subscribes. The returned information includes the number of accumulated messages and the consumption latency.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation in scenarios in which you want to know the message consumption progress of a specified consumer group in production environments. You can obtain the information about message consumption and consumption latency based on the returned information. This operation returns the total number of accumulated messages in all topics to which the specified consumer group subscribes and the number of accumulated messages in each topic.
 *
 * @param request OnsConsumerAccumulateRequest
 * @return OnsConsumerAccumulateResponse
 */
OnsConsumerAccumulateResponse Client::onsConsumerAccumulate(const OnsConsumerAccumulateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsConsumerAccumulateWithOptions(request, runtime);
}

/**
 * @summary Queries the client connection status of a specified consumer group.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When messages are accumulated in a topic, you can call this operation to check whether a consumer is online.
 *
 * @param request OnsConsumerGetConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsConsumerGetConnectionResponse
 */
OnsConsumerGetConnectionResponse Client::onsConsumerGetConnectionWithOptions(const OnsConsumerGetConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsConsumerGetConnection"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsConsumerGetConnectionResponse>();
}

/**
 * @summary Queries the client connection status of a specified consumer group.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When messages are accumulated in a topic, you can call this operation to check whether a consumer is online.
 *
 * @param request OnsConsumerGetConnectionRequest
 * @return OnsConsumerGetConnectionResponse
 */
OnsConsumerGetConnectionResponse Client::onsConsumerGetConnection(const OnsConsumerGetConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsConsumerGetConnectionWithOptions(request, runtime);
}

/**
 * @summary Resets a consumer offset to a specified timestamp for a consumer group.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to clear accumulated messages or reset a consumer offset to a specified timestamp. You can use one of the following methods to clear accumulated messages:
 * *   Clear all accumulated messages in a specified topic.
 * *   Clear the messages that were published to the specified topic before a specified point in time.
 *
 * @param request OnsConsumerResetOffsetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsConsumerResetOffsetResponse
 */
OnsConsumerResetOffsetResponse Client::onsConsumerResetOffsetWithOptions(const OnsConsumerResetOffsetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResetTimestamp()) {
    query["ResetTimestamp"] = request.getResetTimestamp();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsConsumerResetOffset"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsConsumerResetOffsetResponse>();
}

/**
 * @summary Resets a consumer offset to a specified timestamp for a consumer group.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to clear accumulated messages or reset a consumer offset to a specified timestamp. You can use one of the following methods to clear accumulated messages:
 * *   Clear all accumulated messages in a specified topic.
 * *   Clear the messages that were published to the specified topic before a specified point in time.
 *
 * @param request OnsConsumerResetOffsetRequest
 * @return OnsConsumerResetOffsetResponse
 */
OnsConsumerResetOffsetResponse Client::onsConsumerResetOffset(const OnsConsumerResetOffsetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsConsumerResetOffsetWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about the status of a specified consumer group. This operation returns the transactions per second (TPS) for message consumption, load balancing status, consumer connection status, and whether all consumers in the consumer group subscribe to the same topics and tags.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   You can call this operation in scenarios in which consumers are online and messages are accumulated. You can troubleshoot errors based on the information that is returned by this operation. You can check whether all consumers in the consumer group subscribe to the same topics and tags, and whether load balancing is performed as expected. You can also obtain the information about thread stack traces of online consumers.
 * *   This operation uses multiple backend operations to query and aggregate data. The system requires a long period of time to process a request. We recommend that you do not frequently call this operation.
 *
 * @param request OnsConsumerStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsConsumerStatusResponse
 */
OnsConsumerStatusResponse Client::onsConsumerStatusWithOptions(const OnsConsumerStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetail()) {
    query["Detail"] = request.getDetail();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNeedJstack()) {
    query["NeedJstack"] = request.getNeedJstack();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsConsumerStatus"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsConsumerStatusResponse>();
}

/**
 * @summary Queries the detailed information about the status of a specified consumer group. This operation returns the transactions per second (TPS) for message consumption, load balancing status, consumer connection status, and whether all consumers in the consumer group subscribe to the same topics and tags.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   You can call this operation in scenarios in which consumers are online and messages are accumulated. You can troubleshoot errors based on the information that is returned by this operation. You can check whether all consumers in the consumer group subscribe to the same topics and tags, and whether load balancing is performed as expected. You can also obtain the information about thread stack traces of online consumers.
 * *   This operation uses multiple backend operations to query and aggregate data. The system requires a long period of time to process a request. We recommend that you do not frequently call this operation.
 *
 * @param request OnsConsumerStatusRequest
 * @return OnsConsumerStatusResponse
 */
OnsConsumerStatusResponse Client::onsConsumerStatus(const OnsConsumerStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsConsumerStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the time range within which you can specify a point in time to reset the consumer offset for a specified topic. The time range is from the point in time when the earliest stored message was published to the topic to the point in time when the most recently stored message was published to the topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to query the point in time when the earliest stored message was published to a specified topic and the point in time when the most recently stored message was published to the specified topic. You can also call this operation to query the most recent point in time when a message in the topic was consumed. This operation is usually used with the \\*\\*OnsConsumerAccumulate\\*\\* operation to display the overview of the consumption progress.
 *
 * @param request OnsConsumerTimeSpanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsConsumerTimeSpanResponse
 */
OnsConsumerTimeSpanResponse Client::onsConsumerTimeSpanWithOptions(const OnsConsumerTimeSpanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsConsumerTimeSpan"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsConsumerTimeSpanResponse>();
}

/**
 * @summary Queries the time range within which you can specify a point in time to reset the consumer offset for a specified topic. The time range is from the point in time when the earliest stored message was published to the topic to the point in time when the most recently stored message was published to the topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to query the point in time when the earliest stored message was published to a specified topic and the point in time when the most recently stored message was published to the specified topic. You can also call this operation to query the most recent point in time when a message in the topic was consumed. This operation is usually used with the \\*\\*OnsConsumerAccumulate\\*\\* operation to display the overview of the consumption progress.
 *
 * @param request OnsConsumerTimeSpanRequest
 * @return OnsConsumerTimeSpanResponse
 */
OnsConsumerTimeSpanResponse Client::onsConsumerTimeSpan(const OnsConsumerTimeSpanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsConsumerTimeSpanWithOptions(request, runtime);
}

/**
 * @summary Queries a dead-letter message based on the message ID. The queried information about the dead-letter message includes the point in time when the message is stored, the message body, and attributes such as the message tag and the message key.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * This operation uses the exact match method to query a dead-letter message based on the message ID. You can obtain the message ID that is required to query the information about a dead-letter message from the SendResult parameter that is returned after the message is sent. You can also obtain the message ID by calling the OnsDLQMessagePageQueryByGroupId operation to query multiple messages at a time. The queried information about the dead-letter message includes the point in time when the message is stored, the message body, and attributes such as the message tag and the message key.
 *
 * @param request OnsDLQMessageGetByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsDLQMessageGetByIdResponse
 */
OnsDLQMessageGetByIdResponse Client::onsDLQMessageGetByIdWithOptions(const OnsDLQMessageGetByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.getMsgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsDLQMessageGetById"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsDLQMessageGetByIdResponse>();
}

/**
 * @summary Queries a dead-letter message based on the message ID. The queried information about the dead-letter message includes the point in time when the message is stored, the message body, and attributes such as the message tag and the message key.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * This operation uses the exact match method to query a dead-letter message based on the message ID. You can obtain the message ID that is required to query the information about a dead-letter message from the SendResult parameter that is returned after the message is sent. You can also obtain the message ID by calling the OnsDLQMessagePageQueryByGroupId operation to query multiple messages at a time. The queried information about the dead-letter message includes the point in time when the message is stored, the message body, and attributes such as the message tag and the message key.
 *
 * @param request OnsDLQMessageGetByIdRequest
 * @return OnsDLQMessageGetByIdResponse
 */
OnsDLQMessageGetByIdResponse Client::onsDLQMessageGetById(const OnsDLQMessageGetByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsDLQMessageGetByIdWithOptions(request, runtime);
}

/**
 * @summary Queries all dead-letter messages in a group within a period of time by page.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   If you do not know the ID of the dead-letter message that you want to query, you can call this operation to query all dead-letter messages that are sent to a specified consumer group within a specified time range. The results are returned by page.
 * *   We recommend that you specify a short time range to query dead-letter messages in this method. If you specify a long time range, a large number of dead-letter messages are returned. In this case, you cannot find the dead-letter message that you want to query in an efficient manner. You can perform the following steps to query dead-letter messages:
 *     1.  Perform a paged query by specifying the group ID, start time, end time, and number of entries to return on each page. If matched messages are found, the information about the dead-letter messages on the first page, total number of pages, and task ID are returned by default.
 *     2.  Specify the task ID and a page number to call this operation again to query the dead-letter messages on the specified page. In this query, the BeginTime, EndTime, and PageSize parameters do not take effect. By default, the system uses the values of these parameters that you specified in the request when you created the specified query task.
 *
 * @param request OnsDLQMessagePageQueryByGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsDLQMessagePageQueryByGroupIdResponse
 */
OnsDLQMessagePageQueryByGroupIdResponse Client::onsDLQMessagePageQueryByGroupIdWithOptions(const OnsDLQMessagePageQueryByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsDLQMessagePageQueryByGroupId"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsDLQMessagePageQueryByGroupIdResponse>();
}

/**
 * @summary Queries all dead-letter messages in a group within a period of time by page.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   If you do not know the ID of the dead-letter message that you want to query, you can call this operation to query all dead-letter messages that are sent to a specified consumer group within a specified time range. The results are returned by page.
 * *   We recommend that you specify a short time range to query dead-letter messages in this method. If you specify a long time range, a large number of dead-letter messages are returned. In this case, you cannot find the dead-letter message that you want to query in an efficient manner. You can perform the following steps to query dead-letter messages:
 *     1.  Perform a paged query by specifying the group ID, start time, end time, and number of entries to return on each page. If matched messages are found, the information about the dead-letter messages on the first page, total number of pages, and task ID are returned by default.
 *     2.  Specify the task ID and a page number to call this operation again to query the dead-letter messages on the specified page. In this query, the BeginTime, EndTime, and PageSize parameters do not take effect. By default, the system uses the values of these parameters that you specified in the request when you created the specified query task.
 *
 * @param request OnsDLQMessagePageQueryByGroupIdRequest
 * @return OnsDLQMessagePageQueryByGroupIdResponse
 */
OnsDLQMessagePageQueryByGroupIdResponse Client::onsDLQMessagePageQueryByGroupId(const OnsDLQMessagePageQueryByGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsDLQMessagePageQueryByGroupIdWithOptions(request, runtime);
}

/**
 * @summary Resends a dead-letter message based on a specified message ID so that the dead-letter message can be consumed by consumers.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   A dead-letter message is a message that still fails to be consumed after the number of consumption retries reaches the upper limit. If the message still cannot be consumed after you re-send it, a message with the same message ID is added to the corresponding dead-letter queue. You can query the message ID on the Dead-letter Queues page in the ApsaraMQ for RocketMQ console or by calling API operations. You can obtain the number of consumption failures for a message based on the number of dead-letter messages with the same message ID in the dead-letter queue.
 * *   A dead-letter message is a message that fails to be consumed after the number of consumption retries reaches the upper limit. Generally, dead-letter messages are produced because of incorrect consumption logic. We recommend that you troubleshoot the consumption failures and then call this operation to send the message to the consumer group for consumption again.
 * *   ApsaraMQ for RocketMQ does not manage the status of dead-letter messages based on the consumption status of the dead-letter messages. After you call this operation to send a dead-letter message to a consumer group and the message is consumed, ApsaraMQ for RocketMQ does not remove the dead-letter message from the dead-letter queue. You must manage dead-letter messages and determine whether to send a dead-letter message to a consumer group for consumption. This way, you do not resend or reconsume the messages that are consumed.
 *
 * @param request OnsDLQMessageResendByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsDLQMessageResendByIdResponse
 */
OnsDLQMessageResendByIdResponse Client::onsDLQMessageResendByIdWithOptions(const OnsDLQMessageResendByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.getMsgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsDLQMessageResendById"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsDLQMessageResendByIdResponse>();
}

/**
 * @summary Resends a dead-letter message based on a specified message ID so that the dead-letter message can be consumed by consumers.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   A dead-letter message is a message that still fails to be consumed after the number of consumption retries reaches the upper limit. If the message still cannot be consumed after you re-send it, a message with the same message ID is added to the corresponding dead-letter queue. You can query the message ID on the Dead-letter Queues page in the ApsaraMQ for RocketMQ console or by calling API operations. You can obtain the number of consumption failures for a message based on the number of dead-letter messages with the same message ID in the dead-letter queue.
 * *   A dead-letter message is a message that fails to be consumed after the number of consumption retries reaches the upper limit. Generally, dead-letter messages are produced because of incorrect consumption logic. We recommend that you troubleshoot the consumption failures and then call this operation to send the message to the consumer group for consumption again.
 * *   ApsaraMQ for RocketMQ does not manage the status of dead-letter messages based on the consumption status of the dead-letter messages. After you call this operation to send a dead-letter message to a consumer group and the message is consumed, ApsaraMQ for RocketMQ does not remove the dead-letter message from the dead-letter queue. You must manage dead-letter messages and determine whether to send a dead-letter message to a consumer group for consumption. This way, you do not resend or reconsume the messages that are consumed.
 *
 * @param request OnsDLQMessageResendByIdRequest
 * @return OnsDLQMessageResendByIdResponse
 */
OnsDLQMessageResendByIdResponse Client::onsDLQMessageResendById(const OnsDLQMessageResendByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsDLQMessageResendByIdWithOptions(request, runtime);
}

/**
 * @summary Configures read permissions on messages for a consumer group that is identified by a group ID.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to configure the permissions for a consumer group to read messages based on a specified region of ApsaraMQ for RocketMQ and a specified group ID. You can call this operation in scenarios in which you want to forbid consumers in a specific group from reading messages.
 *
 * @param request OnsGroupConsumerUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsGroupConsumerUpdateResponse
 */
OnsGroupConsumerUpdateResponse Client::onsGroupConsumerUpdateWithOptions(const OnsGroupConsumerUpdateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasReadEnable()) {
    query["ReadEnable"] = request.getReadEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsGroupConsumerUpdate"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsGroupConsumerUpdateResponse>();
}

/**
 * @summary Configures read permissions on messages for a consumer group that is identified by a group ID.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to configure the permissions for a consumer group to read messages based on a specified region of ApsaraMQ for RocketMQ and a specified group ID. You can call this operation in scenarios in which you want to forbid consumers in a specific group from reading messages.
 *
 * @param request OnsGroupConsumerUpdateRequest
 * @return OnsGroupConsumerUpdateResponse
 */
OnsGroupConsumerUpdateResponse Client::onsGroupConsumerUpdate(const OnsGroupConsumerUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsGroupConsumerUpdateWithOptions(request, runtime);
}

/**
 * @summary Creates a consumer group.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When you release a new application or implement new business logic, you need new consumer groups. You can call this operation to create a consumer group.
 *
 * @param request OnsGroupCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsGroupCreateResponse
 */
OnsGroupCreateResponse Client::onsGroupCreateWithOptions(const OnsGroupCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsGroupCreate"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsGroupCreateResponse>();
}

/**
 * @summary Creates a consumer group.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When you release a new application or implement new business logic, you need new consumer groups. You can call this operation to create a consumer group.
 *
 * @param request OnsGroupCreateRequest
 * @return OnsGroupCreateResponse
 */
OnsGroupCreateResponse Client::onsGroupCreate(const OnsGroupCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsGroupCreateWithOptions(request, runtime);
}

/**
 * @summary Deletes a consumer group.
 *
 * @description > 
 * *   API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   After you delete a group, the consumers in the group immediately stop receiving messages. Exercise caution when you call this operation.
 * You can call this operation to delete a group when you need to reclaim the resources of the group. For example, after an application is brought offline, you can delete the groups that are used for the application. After you delete a group, the backend of ApsaraMQ for RocketMQ reclaims the resources of the group. The system requires a long period of time to reclaim the resources. We recommend that you do not create a group that uses the same name as a deleted group immediately after you delete the group. If the system fails to delete the specified group, troubleshoot the issue based on the error code.
 *
 * @param request OnsGroupDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsGroupDeleteResponse
 */
OnsGroupDeleteResponse Client::onsGroupDeleteWithOptions(const OnsGroupDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsGroupDelete"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsGroupDeleteResponse>();
}

/**
 * @summary Deletes a consumer group.
 *
 * @description > 
 * *   API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   After you delete a group, the consumers in the group immediately stop receiving messages. Exercise caution when you call this operation.
 * You can call this operation to delete a group when you need to reclaim the resources of the group. For example, after an application is brought offline, you can delete the groups that are used for the application. After you delete a group, the backend of ApsaraMQ for RocketMQ reclaims the resources of the group. The system requires a long period of time to reclaim the resources. We recommend that you do not create a group that uses the same name as a deleted group immediately after you delete the group. If the system fails to delete the specified group, troubleshoot the issue based on the error code.
 *
 * @param request OnsGroupDeleteRequest
 * @return OnsGroupDeleteResponse
 */
OnsGroupDeleteResponse Client::onsGroupDelete(const OnsGroupDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsGroupDeleteWithOptions(request, runtime);
}

/**
 * @summary Queries one or more group IDs.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request OnsGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsGroupListResponse
 */
OnsGroupListResponse Client::onsGroupListWithOptions(const OnsGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsGroupList"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsGroupListResponse>();
}

/**
 * @summary Queries one or more group IDs.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request OnsGroupListRequest
 * @return OnsGroupListResponse
 */
OnsGroupListResponse Client::onsGroupList(const OnsGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsGroupListWithOptions(request, runtime);
}

/**
 * @summary Queries all topics to which a specified consumer group subscribes. If no consumer instance in the consumer group is online, no data is returned.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request OnsGroupSubDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsGroupSubDetailResponse
 */
OnsGroupSubDetailResponse Client::onsGroupSubDetailWithOptions(const OnsGroupSubDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsGroupSubDetail"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsGroupSubDetailResponse>();
}

/**
 * @summary Queries all topics to which a specified consumer group subscribes. If no consumer instance in the consumer group is online, no data is returned.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request OnsGroupSubDetailRequest
 * @return OnsGroupSubDetailResponse
 */
OnsGroupSubDetailResponse Client::onsGroupSubDetail(const OnsGroupSubDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsGroupSubDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information of a Message Queue for Apache RocketMQ instance and the endpoint that a client uses to connect to the Message Queue for Apache RocketMQ instance to send and receive messages.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * To send and receive messages, a client must be connected to a ApsaraMQ for RocketMQ instance by using an endpoint. You can call this operation to query the endpoints of the instance.
 *
 * @param request OnsInstanceBaseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsInstanceBaseInfoResponse
 */
OnsInstanceBaseInfoResponse Client::onsInstanceBaseInfoWithOptions(const OnsInstanceBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsInstanceBaseInfo"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsInstanceBaseInfoResponse>();
}

/**
 * @summary Queries the basic information of a Message Queue for Apache RocketMQ instance and the endpoint that a client uses to connect to the Message Queue for Apache RocketMQ instance to send and receive messages.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * To send and receive messages, a client must be connected to a ApsaraMQ for RocketMQ instance by using an endpoint. You can call this operation to query the endpoints of the instance.
 *
 * @param request OnsInstanceBaseInfoRequest
 * @return OnsInstanceBaseInfoResponse
 */
OnsInstanceBaseInfoResponse Client::onsInstanceBaseInfo(const OnsInstanceBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsInstanceBaseInfoWithOptions(request, runtime);
}

/**
 * @summary Creates a Message Queue for Apache RocketMQ instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * An instance is a virtual machine (VM) that can be used to store information about the topics and groups of ApsaraMQ for RocketMQ. You can call this operation when you need to create service resources for the business that you want to launch. Before you call this operation, take note of the following limits:
 * *   A maximum of eight ApsaraMQ for RocketMQ instances can be deployed in each region.
 * *   This operation can be called to create only a Standard Edition instance. You can use the ApsaraMQ for RocketMQ console to create Standard Edition instances and Enterprise Platinum Edition instances. For information about how to create ApsaraMQ for RocketMQ instances, see [Manage instances](https://help.aliyun.com/document_detail/200153.html).
 *
 * @param request OnsInstanceCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsInstanceCreateResponse
 */
OnsInstanceCreateResponse Client::onsInstanceCreateWithOptions(const OnsInstanceCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsInstanceCreate"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsInstanceCreateResponse>();
}

/**
 * @summary Creates a Message Queue for Apache RocketMQ instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * An instance is a virtual machine (VM) that can be used to store information about the topics and groups of ApsaraMQ for RocketMQ. You can call this operation when you need to create service resources for the business that you want to launch. Before you call this operation, take note of the following limits:
 * *   A maximum of eight ApsaraMQ for RocketMQ instances can be deployed in each region.
 * *   This operation can be called to create only a Standard Edition instance. You can use the ApsaraMQ for RocketMQ console to create Standard Edition instances and Enterprise Platinum Edition instances. For information about how to create ApsaraMQ for RocketMQ instances, see [Manage instances](https://help.aliyun.com/document_detail/200153.html).
 *
 * @param request OnsInstanceCreateRequest
 * @return OnsInstanceCreateResponse
 */
OnsInstanceCreateResponse Client::onsInstanceCreate(const OnsInstanceCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsInstanceCreateWithOptions(request, runtime);
}

/**
 * @summary Deletes a Message Queue for Apache RocketMQ instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   You can call this operation when you need to reclaim resources. For example, after you unpublish an application, you can reclaim the resources that were used for the application. An instance can be deleted only when the instance does not contain topics and groups.
 * *   After an instance is deleted, the instance cannot be restored. Exercise caution when you call this operation.
 *
 * @param request OnsInstanceDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsInstanceDeleteResponse
 */
OnsInstanceDeleteResponse Client::onsInstanceDeleteWithOptions(const OnsInstanceDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsInstanceDelete"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsInstanceDeleteResponse>();
}

/**
 * @summary Deletes a Message Queue for Apache RocketMQ instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   You can call this operation when you need to reclaim resources. For example, after you unpublish an application, you can reclaim the resources that were used for the application. An instance can be deleted only when the instance does not contain topics and groups.
 * *   After an instance is deleted, the instance cannot be restored. Exercise caution when you call this operation.
 *
 * @param request OnsInstanceDeleteRequest
 * @return OnsInstanceDeleteResponse
 */
OnsInstanceDeleteResponse Client::onsInstanceDelete(const OnsInstanceDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsInstanceDeleteWithOptions(request, runtime);
}

/**
 * @summary Queries all Message Queue for Apache RocketMQ instances in a specified region within the current account.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request OnsInstanceInServiceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsInstanceInServiceListResponse
 */
OnsInstanceInServiceListResponse Client::onsInstanceInServiceListWithOptions(const OnsInstanceInServiceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNeedResourceInfo()) {
    query["NeedResourceInfo"] = request.getNeedResourceInfo();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsInstanceInServiceList"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsInstanceInServiceListResponse>();
}

/**
 * @summary Queries all Message Queue for Apache RocketMQ instances in a specified region within the current account.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request OnsInstanceInServiceListRequest
 * @return OnsInstanceInServiceListResponse
 */
OnsInstanceInServiceListResponse Client::onsInstanceInServiceList(const OnsInstanceInServiceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsInstanceInServiceListWithOptions(request, runtime);
}

/**
 * @summary Updates the name and description of a Message Queue for Apache RocketMQ instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * A maximum of eight ApsaraMQ for RocketMQ instances can be deployed in each region.
 *
 * @param request OnsInstanceUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsInstanceUpdateResponse
 */
OnsInstanceUpdateResponse Client::onsInstanceUpdateWithOptions(const OnsInstanceUpdateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsInstanceUpdate"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsInstanceUpdateResponse>();
}

/**
 * @summary Updates the name and description of a Message Queue for Apache RocketMQ instance.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * A maximum of eight ApsaraMQ for RocketMQ instances can be deployed in each region.
 *
 * @param request OnsInstanceUpdateRequest
 * @return OnsInstanceUpdateResponse
 */
OnsInstanceUpdateResponse Client::onsInstanceUpdate(const OnsInstanceUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsInstanceUpdateWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a message.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request OnsMessageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsMessageDetailResponse
 */
OnsMessageDetailResponse Client::onsMessageDetailWithOptions(const OnsMessageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsMessageDetail"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsMessageDetailResponse>();
}

/**
 * @summary Queries the details of a message.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request OnsMessageDetailRequest
 * @return OnsMessageDetailResponse
 */
OnsMessageDetailResponse Client::onsMessageDetail(const OnsMessageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsMessageDetailWithOptions(request, runtime);
}

/**
 * @summary Queries messages by using a specified topic and message key.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   This operation uses the fuzzy match method to query messages based on a specified message key. The same message key may be used by multiple messages. Therefore, the returned result may contain information about multiple messages.
 * *   This operation can be used in scenarios in which you cannot obtain the IDs of the messages that you want to query. You can perform the following steps to query the information about messages:
 *     1.  Call this operation to query message IDs.
 *     2.  Call the **OnsMessageGetByMsgId** operation that uses the exact match method to query the details of a specified message. For more information about the **OnsMessageGetByMsgId** operation, see [OnsMessageGetByMsgId](https://help.aliyun.com/document_detail/29607.html).
 *
 * @param request OnsMessageGetByKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsMessageGetByKeyResponse
 */
OnsMessageGetByKeyResponse Client::onsMessageGetByKeyWithOptions(const OnsMessageGetByKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsMessageGetByKey"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsMessageGetByKeyResponse>();
}

/**
 * @summary Queries messages by using a specified topic and message key.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   This operation uses the fuzzy match method to query messages based on a specified message key. The same message key may be used by multiple messages. Therefore, the returned result may contain information about multiple messages.
 * *   This operation can be used in scenarios in which you cannot obtain the IDs of the messages that you want to query. You can perform the following steps to query the information about messages:
 *     1.  Call this operation to query message IDs.
 *     2.  Call the **OnsMessageGetByMsgId** operation that uses the exact match method to query the details of a specified message. For more information about the **OnsMessageGetByMsgId** operation, see [OnsMessageGetByMsgId](https://help.aliyun.com/document_detail/29607.html).
 *
 * @param request OnsMessageGetByKeyRequest
 * @return OnsMessageGetByKeyResponse
 */
OnsMessageGetByKeyResponse Client::onsMessageGetByKey(const OnsMessageGetByKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsMessageGetByKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a message by specifying the message ID and determines whether the message has been consumed.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   If a message is not consumed as expected, you can call this operation to query the information about the message for troubleshooting.
 * *   This operation uses the exact match method to query a message based on the message ID. You can obtain the message ID from the SendResult parameter that is returned after the message is sent. You must store the returned information after each message is sent. The queried information about a message includes the point in time when the message was sent, the broker on which the message is stored, and the attributes of the message such as the message key and tag.
 *
 * @param request OnsMessageGetByMsgIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsMessageGetByMsgIdResponse
 */
OnsMessageGetByMsgIdResponse Client::onsMessageGetByMsgIdWithOptions(const OnsMessageGetByMsgIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.getMsgId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsMessageGetByMsgId"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsMessageGetByMsgIdResponse>();
}

/**
 * @summary Queries the information about a message by specifying the message ID and determines whether the message has been consumed.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   If a message is not consumed as expected, you can call this operation to query the information about the message for troubleshooting.
 * *   This operation uses the exact match method to query a message based on the message ID. You can obtain the message ID from the SendResult parameter that is returned after the message is sent. You must store the returned information after each message is sent. The queried information about a message includes the point in time when the message was sent, the broker on which the message is stored, and the attributes of the message such as the message key and tag.
 *
 * @param request OnsMessageGetByMsgIdRequest
 * @return OnsMessageGetByMsgIdResponse
 */
OnsMessageGetByMsgIdResponse Client::onsMessageGetByMsgId(const OnsMessageGetByMsgIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsMessageGetByMsgIdWithOptions(request, runtime);
}

/**
 * @summary Queries all messages that are stored in a specified topic within a specified time range by page.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   If you do not know the ID or key of a message that you want to query, you can call this operation to query all messages that are stored in the topic within a specified time range. The results are displayed by page.
 * *   We recommend that you specify a short time range to query messages. If you specify a long time range, a large number of messages are returned. In this case, you cannot find the message that you want to query in an efficient manner. You can perform the following steps to query messages:
 *     1.  Perform a paged query by specifying the topic, start time, end time, and number of entries to return on each page. If the topic contains messages, the information about the messages on the first page, total number of pages, and task ID are returned by default.
 *     2.  Specify the task ID and a page number to call this operation again to query the messages on the specified page. The BeginTime, EndTime, and PageSize parameters do not take effect. By default, the system uses the values of these parameters that you specified in the request when you created the specified query task.
 *
 * @param request OnsMessagePageQueryByTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsMessagePageQueryByTopicResponse
 */
OnsMessagePageQueryByTopicResponse Client::onsMessagePageQueryByTopicWithOptions(const OnsMessagePageQueryByTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsMessagePageQueryByTopic"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsMessagePageQueryByTopicResponse>();
}

/**
 * @summary Queries all messages that are stored in a specified topic within a specified time range by page.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   If you do not know the ID or key of a message that you want to query, you can call this operation to query all messages that are stored in the topic within a specified time range. The results are displayed by page.
 * *   We recommend that you specify a short time range to query messages. If you specify a long time range, a large number of messages are returned. In this case, you cannot find the message that you want to query in an efficient manner. You can perform the following steps to query messages:
 *     1.  Perform a paged query by specifying the topic, start time, end time, and number of entries to return on each page. If the topic contains messages, the information about the messages on the first page, total number of pages, and task ID are returned by default.
 *     2.  Specify the task ID and a page number to call this operation again to query the messages on the specified page. The BeginTime, EndTime, and PageSize parameters do not take effect. By default, the system uses the values of these parameters that you specified in the request when you created the specified query task.
 *
 * @param request OnsMessagePageQueryByTopicRequest
 * @return OnsMessagePageQueryByTopicResponse
 */
OnsMessagePageQueryByTopicResponse Client::onsMessagePageQueryByTopic(const OnsMessagePageQueryByTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsMessagePageQueryByTopicWithOptions(request, runtime);
}

/**
 * @summary Pushes a message to a specified consumer.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * This operation can be used to check whether messages in a specified topic can be consumed by consumers in a specified consumer group. This operation obtains the body of the message that is specified by the MsgId parameter, re-encapsulates the message body to produce a new message, and then pushes the new message to a specified consumer. The content of the message that is sent to the consumer is the same as the content of the original message. They are not the same message because they use different message IDs.
 *
 * @param request OnsMessagePushRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsMessagePushResponse
 */
OnsMessagePushResponse Client::onsMessagePushWithOptions(const OnsMessagePushRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.getMsgId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsMessagePush"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsMessagePushResponse>();
}

/**
 * @summary Pushes a message to a specified consumer.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * This operation can be used to check whether messages in a specified topic can be consumed by consumers in a specified consumer group. This operation obtains the body of the message that is specified by the MsgId parameter, re-encapsulates the message body to produce a new message, and then pushes the new message to a specified consumer. The content of the message that is sent to the consumer is the same as the content of the original message. They are not the same message because they use different message IDs.
 *
 * @param request OnsMessagePushRequest
 * @return OnsMessagePushResponse
 */
OnsMessagePushResponse Client::onsMessagePush(const OnsMessagePushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsMessagePushWithOptions(request, runtime);
}

/**
 * @summary Queries the consumption status of a message by using the message ID.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   You can call this operation to check whether a specified message is consumed. If the message is not consumed, you can troubleshoot the issue based on the returned information.
 * *   This operation queries information based on the built-in offset mechanism of ApsaraMQ for RocketMQ. In most cases, the results are correct. If you have reset the consumer offset or cleared accumulated messages, the results may not be correct.
 *
 * @param request OnsMessageTraceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsMessageTraceResponse
 */
OnsMessageTraceResponse Client::onsMessageTraceWithOptions(const OnsMessageTraceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.getMsgId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsMessageTrace"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsMessageTraceResponse>();
}

/**
 * @summary Queries the consumption status of a message by using the message ID.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   You can call this operation to check whether a specified message is consumed. If the message is not consumed, you can troubleshoot the issue based on the returned information.
 * *   This operation queries information based on the built-in offset mechanism of ApsaraMQ for RocketMQ. In most cases, the results are correct. If you have reset the consumer offset or cleared accumulated messages, the results may not be correct.
 *
 * @param request OnsMessageTraceRequest
 * @return OnsMessageTraceResponse
 */
OnsMessageTraceResponse Client::onsMessageTrace(const OnsMessageTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsMessageTraceWithOptions(request, runtime);
}

/**
 * @summary Queries regions where Message Queue for Apache RocketMQ is available.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When you use an SDK to access and manage a ApsaraMQ for RocketMQ instance, you must sequentially specify the information about two regions. You can query the information about the second region by calling the OnsRegionList operation. You must apply for a public endpoint in the following scenarios:
 * *   Connect your application to ApsaraMQ for RocketMQ: Select the nearest API gateway endpoint based on the region where your application is deployed, and enter the corresponding **region ID**. The **regionId** is used to access Alibaba Cloud API Gateway because ApsaraMQ for RocketMQ instances provide API services by using the OpenAPI Explorer platform, which is also called POP.
 * *   Access a region to manage its resources: Specify a region where you want to manage ApsaraMQ for RocketMQ resources and enter the region ID. You can call the **OnsRegionList** operation to query a region ID.
 *
 * @param request OnsRegionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsRegionListResponse
 */
OnsRegionListResponse Client::onsRegionListWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "OnsRegionList"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsRegionListResponse>();
}

/**
 * @summary Queries regions where Message Queue for Apache RocketMQ is available.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When you use an SDK to access and manage a ApsaraMQ for RocketMQ instance, you must sequentially specify the information about two regions. You can query the information about the second region by calling the OnsRegionList operation. You must apply for a public endpoint in the following scenarios:
 * *   Connect your application to ApsaraMQ for RocketMQ: Select the nearest API gateway endpoint based on the region where your application is deployed, and enter the corresponding **region ID**. The **regionId** is used to access Alibaba Cloud API Gateway because ApsaraMQ for RocketMQ instances provide API services by using the OpenAPI Explorer platform, which is also called POP.
 * *   Access a region to manage its resources: Specify a region where you want to manage ApsaraMQ for RocketMQ resources and enter the region ID. You can call the **OnsRegionList** operation to query a region ID.
 *
 * @return OnsRegionListResponse
 */
OnsRegionListResponse Client::onsRegionList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsRegionListWithOptions(runtime);
}

/**
 * @summary Creates a topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When you want to release a new application or expand your business, you can call this operation to create a topic based on your business requirements.
 *
 * @param request OnsTopicCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTopicCreateResponse
 */
OnsTopicCreateResponse Client::onsTopicCreateWithOptions(const OnsTopicCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMessageType()) {
    query["MessageType"] = request.getMessageType();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTopicCreate"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTopicCreateResponse>();
}

/**
 * @summary Creates a topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * When you want to release a new application or expand your business, you can call this operation to create a topic based on your business requirements.
 *
 * @param request OnsTopicCreateRequest
 * @return OnsTopicCreateResponse
 */
OnsTopicCreateResponse Client::onsTopicCreate(const OnsTopicCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTopicCreateWithOptions(request, runtime);
}

/**
 * @summary Deletes a topic.
 *
 * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur. - After you delete the topic, the publishing and subscription relationships that are constructed based on the topic are cleared. Exercise caution when you call this operation.
 * You can call this operation to delete a topic when you need to reclaim the resources from the topic. For example, after an application is brought offline, you can delete the topics that are used for the application. After you delete a topic, the backend of ApsaraMQ for RocketMQ reclaims the resources from the topic. The system requires a long period of time to reclaim the resources. After you delete a topic, we recommend that you do not create a topic that uses the same name as the deleted topic within a short period of time. If the system fails to delete the specified topic, troubleshoot the issue based on the error code.
 *
 * @param request OnsTopicDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTopicDeleteResponse
 */
OnsTopicDeleteResponse Client::onsTopicDeleteWithOptions(const OnsTopicDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTopicDelete"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTopicDeleteResponse>();
}

/**
 * @summary Deletes a topic.
 *
 * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur. - After you delete the topic, the publishing and subscription relationships that are constructed based on the topic are cleared. Exercise caution when you call this operation.
 * You can call this operation to delete a topic when you need to reclaim the resources from the topic. For example, after an application is brought offline, you can delete the topics that are used for the application. After you delete a topic, the backend of ApsaraMQ for RocketMQ reclaims the resources from the topic. The system requires a long period of time to reclaim the resources. After you delete a topic, we recommend that you do not create a topic that uses the same name as the deleted topic within a short period of time. If the system fails to delete the specified topic, troubleshoot the issue based on the error code.
 *
 * @param request OnsTopicDeleteRequest
 * @return OnsTopicDeleteResponse
 */
OnsTopicDeleteResponse Client::onsTopicDelete(const OnsTopicDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTopicDeleteWithOptions(request, runtime);
}

/**
 * @summary Queries the information about topics that belong to the current account.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * This operation returns the basic information about topics and does not return the details of topics.
 *
 * @param request OnsTopicListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTopicListResponse
 */
OnsTopicListResponse Client::onsTopicListWithOptions(const OnsTopicListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTopicList"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTopicListResponse>();
}

/**
 * @summary Queries the information about topics that belong to the current account.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * This operation returns the basic information about topics and does not return the details of topics.
 *
 * @param request OnsTopicListRequest
 * @return OnsTopicListResponse
 */
OnsTopicListResponse Client::onsTopicList(const OnsTopicListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTopicListWithOptions(request, runtime);
}

/**
 * @summary Queries the total number of messages in a topic and the status of the topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can determine the resource usage of a topic based on the information that is returned by this operation. The returned information includes the total number of messages in the topic and the most recent point in time when a message was published to the topic.
 *
 * @param request OnsTopicStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTopicStatusResponse
 */
OnsTopicStatusResponse Client::onsTopicStatusWithOptions(const OnsTopicStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTopicStatus"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTopicStatusResponse>();
}

/**
 * @summary Queries the total number of messages in a topic and the status of the topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can determine the resource usage of a topic based on the information that is returned by this operation. The returned information includes the total number of messages in the topic and the most recent point in time when a message was published to the topic.
 *
 * @param request OnsTopicStatusRequest
 * @return OnsTopicStatusResponse
 */
OnsTopicStatusResponse Client::onsTopicStatus(const OnsTopicStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTopicStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the online consumer groups that subscribe to a specified topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to query the online consumer groups that subscribe to a specified topic. If all consumers in a group are offline, the information about the group is not returned.
 *
 * @param request OnsTopicSubDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTopicSubDetailResponse
 */
OnsTopicSubDetailResponse Client::onsTopicSubDetailWithOptions(const OnsTopicSubDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTopicSubDetail"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTopicSubDetailResponse>();
}

/**
 * @summary Queries the online consumer groups that subscribe to a specified topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to query the online consumer groups that subscribe to a specified topic. If all consumers in a group are offline, the information about the group is not returned.
 *
 * @param request OnsTopicSubDetailRequest
 * @return OnsTopicSubDetailResponse
 */
OnsTopicSubDetailResponse Client::onsTopicSubDetail(const OnsTopicSubDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTopicSubDetailWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI OnsTopicUpdate is deprecated
 *
 * @summary Configures the read/write mode for a specified topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to forbid read or write operations on a specific topic.
 *
 * @param request OnsTopicUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTopicUpdateResponse
 */
OnsTopicUpdateResponse Client::onsTopicUpdateWithOptions(const OnsTopicUpdateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPerm()) {
    query["Perm"] = request.getPerm();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTopicUpdate"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTopicUpdateResponse>();
}

/**
 * @deprecated OpenAPI OnsTopicUpdate is deprecated
 *
 * @summary Configures the read/write mode for a specified topic.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to forbid read or write operations on a specific topic.
 *
 * @param request OnsTopicUpdateRequest
 * @return OnsTopicUpdateResponse
 */
OnsTopicUpdateResponse Client::onsTopicUpdate(const OnsTopicUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTopicUpdateWithOptions(request, runtime);
}

/**
 * @summary The tracing results are queried by specifying the ID of a trace query task.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   Before you call this operation to query the details of the trace of a message, you must create a task to query the trace of the message based on the message ID or message key and obtain the task ID. Then, you can call this operation to query the details of the message trace based on the task ID. You can call the [OnsTraceQueryByMsgId](https://help.aliyun.com/document_detail/445322.html) operation or the [OnsTraceQueryByMsgKey](https://help.aliyun.com/document_detail/445324.html) operation to create a task to query the trace of the message and obtain the task ID from the **QueryId** response parameter.
 * *   A trace query task is time-consuming. If you call this operation to query the details immediately after you create a trace query task, the results may be empty. In this case, we recommend that you try again later.
 *
 * @param request OnsTraceGetResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTraceGetResultResponse
 */
OnsTraceGetResultResponse Client::onsTraceGetResultWithOptions(const OnsTraceGetResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQueryId()) {
    query["QueryId"] = request.getQueryId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTraceGetResult"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTraceGetResultResponse>();
}

/**
 * @summary The tracing results are queried by specifying the ID of a trace query task.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * *   Before you call this operation to query the details of the trace of a message, you must create a task to query the trace of the message based on the message ID or message key and obtain the task ID. Then, you can call this operation to query the details of the message trace based on the task ID. You can call the [OnsTraceQueryByMsgId](https://help.aliyun.com/document_detail/445322.html) operation or the [OnsTraceQueryByMsgKey](https://help.aliyun.com/document_detail/445324.html) operation to create a task to query the trace of the message and obtain the task ID from the **QueryId** response parameter.
 * *   A trace query task is time-consuming. If you call this operation to query the details immediately after you create a trace query task, the results may be empty. In this case, we recommend that you try again later.
 *
 * @param request OnsTraceGetResultRequest
 * @return OnsTraceGetResultResponse
 */
OnsTraceGetResultResponse Client::onsTraceGetResult(const OnsTraceGetResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTraceGetResultWithOptions(request, runtime);
}

/**
 * @summary Creates a task to query the trace of a message based on the message ID and the name of the topic in which the message is stored. The task ID is returned.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * If you want to query the trace of a message based on the message ID, you can call this operation to create a query task. After you obtain the task ID, you can call the [OnsTraceGetResult](https://help.aliyun.com/document_detail/59832.html) operation to query the details of the message trace based on the task ID.
 *
 * @param request OnsTraceQueryByMsgIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTraceQueryByMsgIdResponse
 */
OnsTraceQueryByMsgIdResponse Client::onsTraceQueryByMsgIdWithOptions(const OnsTraceQueryByMsgIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.getMsgId();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTraceQueryByMsgId"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTraceQueryByMsgIdResponse>();
}

/**
 * @summary Creates a task to query the trace of a message based on the message ID and the name of the topic in which the message is stored. The task ID is returned.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * If you want to query the trace of a message based on the message ID, you can call this operation to create a query task. After you obtain the task ID, you can call the [OnsTraceGetResult](https://help.aliyun.com/document_detail/59832.html) operation to query the details of the message trace based on the task ID.
 *
 * @param request OnsTraceQueryByMsgIdRequest
 * @return OnsTraceQueryByMsgIdResponse
 */
OnsTraceQueryByMsgIdResponse Client::onsTraceQueryByMsgId(const OnsTraceQueryByMsgIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTraceQueryByMsgIdWithOptions(request, runtime);
}

/**
 * @summary Creates a trace query task based on the topic name and message key and obtains the ID of the query task.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * If you want to query the trace of a message based on the message key that you obtained, you can call this operation to create a query task. After you obtain the task ID, you can call the OnsTraceGetResult operation to query the details of the message trace based on the task ID.
 *
 * @param request OnsTraceQueryByMsgKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTraceQueryByMsgKeyResponse
 */
OnsTraceQueryByMsgKeyResponse Client::onsTraceQueryByMsgKeyWithOptions(const OnsTraceQueryByMsgKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMsgKey()) {
    query["MsgKey"] = request.getMsgKey();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTraceQueryByMsgKey"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTraceQueryByMsgKeyResponse>();
}

/**
 * @summary Creates a trace query task based on the topic name and message key and obtains the ID of the query task.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * If you want to query the trace of a message based on the message key that you obtained, you can call this operation to create a query task. After you obtain the task ID, you can call the OnsTraceGetResult operation to query the details of the message trace based on the task ID.
 *
 * @param request OnsTraceQueryByMsgKeyRequest
 * @return OnsTraceQueryByMsgKeyResponse
 */
OnsTraceQueryByMsgKeyResponse Client::onsTraceQueryByMsgKey(const OnsTraceQueryByMsgKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTraceQueryByMsgKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics about messages that are consumed by a consumer group within a specific period of time.
 *
 * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to query the following statistics that are collected in a production environment:
 * *   The number of messages that are consumed during each sampling period
 * *   The transactions per second (TPS) for message consumption during each sampling period
 * If your application consumes a small number of messages and does not consume messages at specific intervals, we recommend that you query the number of messages that are consumed during each sampling period because the statistics of TPS may not show a clear change trend.
 *
 * @param request OnsTrendGroupOutputTpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTrendGroupOutputTpsResponse
 */
OnsTrendGroupOutputTpsResponse Client::onsTrendGroupOutputTpsWithOptions(const OnsTrendGroupOutputTpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTrendGroupOutputTps"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTrendGroupOutputTpsResponse>();
}

/**
 * @summary Queries the statistics about messages that are consumed by a consumer group within a specific period of time.
 *
 * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to query the following statistics that are collected in a production environment:
 * *   The number of messages that are consumed during each sampling period
 * *   The transactions per second (TPS) for message consumption during each sampling period
 * If your application consumes a small number of messages and does not consume messages at specific intervals, we recommend that you query the number of messages that are consumed during each sampling period because the statistics of TPS may not show a clear change trend.
 *
 * @param request OnsTrendGroupOutputTpsRequest
 * @return OnsTrendGroupOutputTpsResponse
 */
OnsTrendGroupOutputTpsResponse Client::onsTrendGroupOutputTps(const OnsTrendGroupOutputTpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTrendGroupOutputTpsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics about messages that are published to a topic within a period of time.
 *
 * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to query the statistics of messages that are published to a specific topic in a production environment. You can query the number of messages that are published to the topic or the transactions per second (TPS) for message publishing within a specified time range based on your business requirements.
 * If your application publishes a small number of messages and does not publish messages at specific intervals, we recommend that you query the number of messages that are published to the topic during each sampling period because the statistics of TPS may not show a clear change trend.
 *
 * @param request OnsTrendTopicInputTpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnsTrendTopicInputTpsResponse
 */
OnsTrendTopicInputTpsResponse Client::onsTrendTopicInputTpsWithOptions(const OnsTrendTopicInputTpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasTopic()) {
    query["Topic"] = request.getTopic();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnsTrendTopicInputTps"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnsTrendTopicInputTpsResponse>();
}

/**
 * @summary Queries the statistics about messages that are published to a topic within a period of time.
 *
 * @description >  API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to query the statistics of messages that are published to a specific topic in a production environment. You can query the number of messages that are published to the topic or the transactions per second (TPS) for message publishing within a specified time range based on your business requirements.
 * If your application publishes a small number of messages and does not publish messages at specific intervals, we recommend that you query the number of messages that are published to the topic during each sampling period because the statistics of TPS may not show a clear change trend.
 *
 * @param request OnsTrendTopicInputTpsRequest
 * @return OnsTrendTopicInputTpsResponse
 */
OnsTrendTopicInputTpsResponse Client::onsTrendTopicInputTps(const OnsTrendTopicInputTpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onsTrendTopicInputTpsWithOptions(request, runtime);
}

/**
 * @summary Activates Message Queue for Apache RocketMQ.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation the first time you use ApsaraMQ for RocketMQ. You can use ApsaraMQ for RocketMQ only after the service is activated.
 * The ApsaraMQ for RocketMQ service can be activated only in the China (Hangzhou) region. Service activation is not billed.
 *
 * @param request OpenOnsServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenOnsServiceResponse
 */
OpenOnsServiceResponse Client::openOnsServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "OpenOnsService"},
    {"version" , "2019-02-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenOnsServiceResponse>();
}

/**
 * @summary Activates Message Queue for Apache RocketMQ.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation the first time you use ApsaraMQ for RocketMQ. You can use ApsaraMQ for RocketMQ only after the service is activated.
 * The ApsaraMQ for RocketMQ service can be activated only in the China (Hangzhou) region. Service activation is not billed.
 *
 * @return OpenOnsServiceResponse
 */
OpenOnsServiceResponse Client::openOnsService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openOnsServiceWithOptions(runtime);
}

/**
 * @summary Adds tags to a resource.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to attach tags to a source. You can use tags to classify resources in ApsaraMQ for RocketMQ. This can help you aggregate and search resources in an efficient manner.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-02-14"},
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
 * @summary Adds tags to a resource.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 * You can call this operation to attach tags to a source. You can use tags to classify resources in ApsaraMQ for RocketMQ. This can help you aggregate and search resources in an efficient manner.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Detaches tags from a specified resource and deletes the tags.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-02-14"},
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
 * @summary Detaches tags from a specified resource and deletes the tags.
 *
 * @description > API operations provided by Alibaba Cloud are used to manage and query resources of Alibaba Cloud services. We recommend that you integrate these API operations only in management systems. Do not use these API operations in the core system of messaging services. Otherwise, system risks may occur.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ons20190214