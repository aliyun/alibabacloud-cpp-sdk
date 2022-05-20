// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mns_open_20220119.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Mns-open20220119;

Alibabacloud_Mns-open20220119::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mns-open"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Mns-open20220119::Client::getEndpoint(shared_ptr<string> productId,
                                                          shared_ptr<string> regionId,
                                                          shared_ptr<string> endpointRule,
                                                          shared_ptr<string> network,
                                                          shared_ptr<string> suffix,
                                                          shared_ptr<map<string, string>> endpointMap,
                                                          shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateQueueResponse Alibabacloud_Mns-open20220119::Client::createQueueWithOptions(shared_ptr<CreateQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->delaySeconds)) {
    query->insert(pair<string, long>("DelaySeconds", *request->delaySeconds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLogging)) {
    query->insert(pair<string, bool>("EnableLogging", *request->enableLogging));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumMessageSize)) {
    query->insert(pair<string, long>("MaximumMessageSize", *request->maximumMessageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->messageRetentionPeriod)) {
    query->insert(pair<string, long>("MessageRetentionPeriod", *request->messageRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pollingWaitSeconds)) {
    query->insert(pair<string, long>("PollingWaitSeconds", *request->pollingWaitSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityTimeout)) {
    query->insert(pair<string, long>("VisibilityTimeout", *request->visibilityTimeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQueue"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQueueResponse(callApi(params, req, runtime));
}

CreateQueueResponse Alibabacloud_Mns-open20220119::Client::createQueue(shared_ptr<CreateQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQueueWithOptions(request, runtime);
}

CreateTopicResponse Alibabacloud_Mns-open20220119::Client::createTopicWithOptions(shared_ptr<CreateTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLogging)) {
    body->insert(pair<string, bool>("EnableLogging", *request->enableLogging));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxMessageSize)) {
    body->insert(pair<string, long>("MaxMessageSize", *request->maxMessageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    body->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTopic"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTopicResponse(callApi(params, req, runtime));
}

CreateTopicResponse Alibabacloud_Mns-open20220119::Client::createTopic(shared_ptr<CreateTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTopicWithOptions(request, runtime);
}

DeleteQueueResponse Alibabacloud_Mns-open20220119::Client::deleteQueueWithOptions(shared_ptr<DeleteQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQueue"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQueueResponse(callApi(params, req, runtime));
}

DeleteQueueResponse Alibabacloud_Mns-open20220119::Client::deleteQueue(shared_ptr<DeleteQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQueueWithOptions(request, runtime);
}

DeleteTopicResponse Alibabacloud_Mns-open20220119::Client::deleteTopicWithOptions(shared_ptr<DeleteTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTopic"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTopicResponse(callApi(params, req, runtime));
}

DeleteTopicResponse Alibabacloud_Mns-open20220119::Client::deleteTopic(shared_ptr<DeleteTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTopicWithOptions(request, runtime);
}

GetQueueAttributesResponse Alibabacloud_Mns-open20220119::Client::getQueueAttributesWithOptions(shared_ptr<GetQueueAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueueAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueueAttributesResponse(callApi(params, req, runtime));
}

GetQueueAttributesResponse Alibabacloud_Mns-open20220119::Client::getQueueAttributes(shared_ptr<GetQueueAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueueAttributesWithOptions(request, runtime);
}

GetSubscriptionAttributesResponse Alibabacloud_Mns-open20220119::Client::getSubscriptionAttributesWithOptions(shared_ptr<GetSubscriptionAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubscriptionAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubscriptionAttributesResponse(callApi(params, req, runtime));
}

GetSubscriptionAttributesResponse Alibabacloud_Mns-open20220119::Client::getSubscriptionAttributes(shared_ptr<GetSubscriptionAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubscriptionAttributesWithOptions(request, runtime);
}

GetTopicAttributesResponse Alibabacloud_Mns-open20220119::Client::getTopicAttributesWithOptions(shared_ptr<GetTopicAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTopicAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTopicAttributesResponse(callApi(params, req, runtime));
}

GetTopicAttributesResponse Alibabacloud_Mns-open20220119::Client::getTopicAttributes(shared_ptr<GetTopicAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicAttributesWithOptions(request, runtime);
}

ListQueueResponse Alibabacloud_Mns-open20220119::Client::listQueueWithOptions(shared_ptr<ListQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQueue"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQueueResponse(callApi(params, req, runtime));
}

ListQueueResponse Alibabacloud_Mns-open20220119::Client::listQueue(shared_ptr<ListQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQueueWithOptions(request, runtime);
}

ListSubscriptionByTopicResponse Alibabacloud_Mns-open20220119::Client::listSubscriptionByTopicWithOptions(shared_ptr<ListSubscriptionByTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubscriptionByTopic"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubscriptionByTopicResponse(callApi(params, req, runtime));
}

ListSubscriptionByTopicResponse Alibabacloud_Mns-open20220119::Client::listSubscriptionByTopic(shared_ptr<ListSubscriptionByTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSubscriptionByTopicWithOptions(request, runtime);
}

ListTopicResponse Alibabacloud_Mns-open20220119::Client::listTopicWithOptions(shared_ptr<ListTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTopic"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTopicResponse(callApi(params, req, runtime));
}

ListTopicResponse Alibabacloud_Mns-open20220119::Client::listTopic(shared_ptr<ListTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTopicWithOptions(request, runtime);
}

SetQueueAttributesResponse Alibabacloud_Mns-open20220119::Client::setQueueAttributesWithOptions(shared_ptr<SetQueueAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->delaySeconds)) {
    query->insert(pair<string, long>("DelaySeconds", *request->delaySeconds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLogging)) {
    query->insert(pair<string, bool>("EnableLogging", *request->enableLogging));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumMessageSize)) {
    query->insert(pair<string, long>("MaximumMessageSize", *request->maximumMessageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->messageRetentionPeriod)) {
    query->insert(pair<string, long>("MessageRetentionPeriod", *request->messageRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pollingWaitSeconds)) {
    query->insert(pair<string, long>("PollingWaitSeconds", *request->pollingWaitSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityTimeout)) {
    query->insert(pair<string, long>("VisibilityTimeout", *request->visibilityTimeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetQueueAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetQueueAttributesResponse(callApi(params, req, runtime));
}

SetQueueAttributesResponse Alibabacloud_Mns-open20220119::Client::setQueueAttributes(shared_ptr<SetQueueAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setQueueAttributesWithOptions(request, runtime);
}

SetSubscriptionAttributesResponse Alibabacloud_Mns-open20220119::Client::setSubscriptionAttributesWithOptions(shared_ptr<SetSubscriptionAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyStrategy)) {
    query->insert(pair<string, string>("NotifyStrategy", *request->notifyStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSubscriptionAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSubscriptionAttributesResponse(callApi(params, req, runtime));
}

SetSubscriptionAttributesResponse Alibabacloud_Mns-open20220119::Client::setSubscriptionAttributes(shared_ptr<SetSubscriptionAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSubscriptionAttributesWithOptions(request, runtime);
}

SetTopicAttributesResponse Alibabacloud_Mns-open20220119::Client::setTopicAttributesWithOptions(shared_ptr<SetTopicAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLogging)) {
    query->insert(pair<string, bool>("EnableLogging", *request->enableLogging));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxMessageSize)) {
    query->insert(pair<string, long>("MaxMessageSize", *request->maxMessageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetTopicAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetTopicAttributesResponse(callApi(params, req, runtime));
}

SetTopicAttributesResponse Alibabacloud_Mns-open20220119::Client::setTopicAttributes(shared_ptr<SetTopicAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setTopicAttributesWithOptions(request, runtime);
}

SubscribeResponse Alibabacloud_Mns-open20220119::Client::subscribeWithOptions(shared_ptr<SubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    query->insert(pair<string, string>("Endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageTag)) {
    query->insert(pair<string, string>("MessageTag", *request->messageTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyContentFormat)) {
    query->insert(pair<string, string>("NotifyContentFormat", *request->notifyContentFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyStrategy)) {
    query->insert(pair<string, string>("NotifyStrategy", *request->notifyStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushType)) {
    query->insert(pair<string, string>("PushType", *request->pushType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Subscribe"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubscribeResponse(callApi(params, req, runtime));
}

SubscribeResponse Alibabacloud_Mns-open20220119::Client::subscribe(shared_ptr<SubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return subscribeWithOptions(request, runtime);
}

UnsubscribeResponse Alibabacloud_Mns-open20220119::Client::unsubscribeWithOptions(shared_ptr<UnsubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Unsubscribe"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnsubscribeResponse(callApi(params, req, runtime));
}

UnsubscribeResponse Alibabacloud_Mns-open20220119::Client::unsubscribe(shared_ptr<UnsubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unsubscribeWithOptions(request, runtime);
}

